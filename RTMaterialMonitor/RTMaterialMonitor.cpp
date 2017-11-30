#include "RTMaterialMonitor.h"
#include <QHeaderView>
#include <QFont>
#include <QScrollBar>
#include <QPixmap>
#include <QMetaObject>

RTMaterialMonitor::RTMaterialMonitor(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	m_pPageMgr = nullptr;
	m_pBtnSetting = nullptr;
	m_pSettingUI = nullptr;

	initUI();
	startClient();
}

RTMaterialMonitor::~RTMaterialMonitor()
{
	if (m_pPageMgr)
	{
		delete m_pPageMgr;
		m_pPageMgr = nullptr;
	}

	if (m_pBtnSetting)
	{
		delete m_pBtnSetting;
		m_pBtnSetting = nullptr;
	}

	if (m_pSettingUI)
	{
		delete m_pSettingUI;
		m_pSettingUI = nullptr;
	}
}

void RTMaterialMonitor::startClient()
{
	if (!m_pPageMgr)
	{
		m_pPageMgr = new rtPageManager();
	}

	qRegisterMetaType<string>("string");
	connect(m_pPageMgr, SIGNAL(signalSendData(string, string)), this, SLOT(slotRecvDataAndUpdateUI(string, string)));
	m_pPageMgr->initOpcuaClient();
}

void RTMaterialMonitor::on_btnTrans_clicked(bool)
{

}

void RTMaterialMonitor::on_btnFinish_clicked(bool)
{
	this->accept();
}

void RTMaterialMonitor::slotTransButtonClicked()
{
	QPushButton* pButton = (QPushButton*)sender();
	if (pButton)
	{
		if (pButton->objectName() == tr("btnFirstStove"))
		{
		}
		else if (pButton->objectName() == tr("btnSecondStove"))
		{
		}
	}
}

void RTMaterialMonitor::slotRecvDataAndUpdateUI(string strLabel, string strText)
{
	string strRatio = "1.2";
	string strLargeStoveWeight = "500";
	string strSmallStoveWeight = "300";
	QString strContent = QString::fromStdString(strText);

	if (strLabel == LARGE_STOVE_AL_TEMP)
	{
		ui.ldtCurrentTempLarge->setText(strContent);
	}
	else if (strLabel == LARGE_STOVE_WASTED_WEIGHT)
	{
		ui.ldtBFLWeight->setText(strContent);
		updateLargeStoveUI();
	}
	else if (strLabel == LARGE_STOVE_JMK_WEIGHT)
	{
		ui.ldtJMKWeight->setText(strContent);
		updateLargeStoveUI();
	}
	else if (strLabel == LARGE_STOVE_ALREADY_INPUT_AL_WEIGHT)
	{
		ui.ldtInputNewWeightLarge->setText(strContent);
		updateLargeStoveUI();
	}
	else if (strLabel == SMALL_STOVE_AL_TEMP)
	{
		ui.ldtCurrentTempSmall->setText(strContent);
	}
	else if (strLabel == SMALL_STOVE_AL_SCRAP_WEIGHT)
	{
		ui.ldtAlScrapWeight->setText(strContent);
		updateSmallStoveUI();
	}
	else if (strLabel == SMALL_STOVE_ALREADY_INPUT_AL_WEIGHT)
	{
		ui.ldtCurrentTempSmall->setText(strContent);
		updateSmallStoveUI();
	}
	else if (strLabel == HOLDING_STOVE_AL_TEMP)
	{
		ui.ldtCurrentTempMix->setText(strContent);
	}
	else if (strLabel == HOLDING_STOVE_AL_WEIGHT)
	{
		ui.ldtCurrentWeight->setText(strContent);
		updateHoldingStoveUI();
	}
}

void RTMaterialMonitor::updateLargeStoveUI()
{
	double dJMKWeight = ui.ldtJMKWeight->text().toDouble();
	double dWastedWeight = ui.ldtBFLWeight->text().toDouble();
	double dRatio = 1.2;
	double dLargeStoveWeight = 500;
	double dSmallStoveWeight = 300;	

	double dShouldInputNew = (dJMKWeight + dWastedWeight) * dRatio;
	ui.ldtShouldInputWeightLarge->setText(QString::number(dShouldInputNew));
	double dAlreadyInputWeight = ui.ldtInputNewWeightLarge->text().toDouble();
	double dLeftWeight = dShouldInputNew - dAlreadyInputWeight;
	QPalette palette;
	if (dLeftWeight <= 0)
	{
		dLeftWeight = 0;
		palette.setColor(QPalette::Background, Qt::green);
		ui.lblLargeStove->setPalette(palette);
	}
	else
	{
		palette.setColor(QPalette::Background, Qt::yellow);
		ui.lblLargeStove->setPalette(palette);
	}

	ui.ldtLeftWeightLarge->setText(QString::number(dLeftWeight));
	//double dAlreadyInputWeight = ui.ld
}

void RTMaterialMonitor::updateSmallStoveUI()
{
	double dWastedWeight = ui.ldtAlScrapWeight->text().toDouble();
	double dRatio = 1.2;
	double dLargeStoveWeight = 500;
	double dSmallStoveWeight = 300;

	double dShouldInputNew = dWastedWeight * dRatio;
	ui.ldtShouldInputWeightSmall->setText(QString::number(dShouldInputNew));
	double dAlreadyInputWeight = ui.ldtInputNewWeightSmall->text().toDouble();
	double dLeftWeight = dShouldInputNew - dAlreadyInputWeight;
	QPalette palette;
	if (dLeftWeight <= 0)
	{
		dLeftWeight = 0;
		palette.setColor(QPalette::Background, Qt::green);
		ui.lblSmallStove->setPalette(palette);
	}
	else
	{
		palette.setColor(QPalette::Background, Qt::yellow);
		ui.lblSmallStove->setPalette(palette);
	}

	ui.ldtLeftWeightSmall->setText(QString::number(dLeftWeight));
}

void RTMaterialMonitor::updateHoldingStoveUI()
{
	double dCurrentWeight = ui.ldtCurrentWeight->text().toDouble();
	double dHoldingStoveTotalWeight = 500;
	double dLeftWeight = dHoldingStoveTotalWeight - dCurrentWeight;

	QPalette palette;
	if (dLeftWeight <= 0)
	{
		dLeftWeight = 0;
		palette.setColor(QPalette::Background, Qt::green);
		ui.lblLargeStove->setPalette(palette);
	}
	else
	{
		palette.setColor(QPalette::Background, Qt::yellow);
		ui.lblLargeStove->setPalette(palette);
	}
	ui.ldtShouldInputWeightMix->setText(QString::number(dLeftWeight));
}

void RTMaterialMonitor::initUI()
{
	if (!m_pBtnSetting)
	{
		m_pBtnSetting = new QPushButton(this);
		m_pBtnSetting->setFixedHeight(50);
		m_pBtnSetting->setFixedWidth(25);
		m_pBtnSetting->setGeometry(width() - m_pBtnSetting->width(), 0, width(), height());
		m_pBtnSetting->setText(tr("<<<"));
	}

	disconnect(m_pBtnSetting, SIGNAL(clicked()), this, SLOT(slotSetting()));
	connect(m_pBtnSetting, SIGNAL(clicked()), this, SLOT(slotSetting()));

	ui.tableWidget->setRowCount(INT_ROW_COUNT);
	ui.tableWidget->setColumnCount(INT_COLUMN_COUNT);
	QStringList header;
	header << tr("熔炼炉名称") << tr("应投重量（KG）") << tr("已投重量（KG）") << tr("操作");
	ui.tableWidget->setHorizontalHeaderLabels(header);
	ui.tableWidget->horizontalHeader()->setSectionsClickable(false);
	QFont font = ui.tableWidget->horizontalHeader()->font();
	font.setBold(true);
	ui.tableWidget->horizontalHeader()->setFont(font);

	ui.tableWidget->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
	ui.tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
	//ui.tableWidget->verticalHeader()->setDefaultSectionSize(10); //设置行高
	//ui.tableWidget->setFrameShape(QFrame::NoFrame); //设置无边框
	//ui.tableWidget->setShowGrid(false); //设置不显示格子线
	ui.tableWidget->verticalHeader()->setVisible(false); //设置垂直头不可见
	ui.tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);  //可多选（Ctrl、Shift、  Ctrl+A都可以）
	//ui.tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置选择行为时每次选择一行
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
	ui.tableWidget->horizontalHeader()->resizeSection(0, 150); //设置表头第一列的宽度为150
	ui.tableWidget->horizontalHeader()->setFixedHeight(25); //设置表头的高度
	ui.tableWidget->setStyleSheet("selection-background-color:lightblue;"); //设置选中背景色
	ui.tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background:skyblue;}"); //设置表头背景色
																								  //设置水平、垂直滚动条样式
	ui.tableWidget->horizontalScrollBar()->setStyleSheet("QScrollBar{background:transparent; height:10px;}"
		"QScrollBar::handle{background:lightgray; border:2px solid transparent; border-radius:5px;}"
		"QScrollBar::handle:hover{background:gray;}"
		"QScrollBar::sub-line{background:transparent;}"
		"QScrollBar::add-line{background:transparent;}");

	ui.tableWidget->verticalScrollBar()->setStyleSheet("QScrollBar{background:transparent; width: 10px;}"
		"QScrollBar::handle{background:lightgray; border:2px solid transparent; border-radius:5px;}"
		"QScrollBar::handle:hover{background:gray;}"
		"QScrollBar::sub-line{background:transparent;}"
		"QScrollBar::add-line{background:transparent;}");

	QTableWidgetItem* pItem = new QTableWidgetItem();
	QPushButton* pButton = new QPushButton;
	pButton->setObjectName("btnFirstStove");
	pButton->setText(tr("传输"));
	ui.tableWidget->setCellWidget(0, INT_COLUMN_COUNT - 1, pButton);
	connect(pButton, SIGNAL(clicked()), this, SLOT(slotTransButtonClicked()));

	pButton = new QPushButton;
	pButton->setObjectName("btnSecondStove");
	pButton->setText(tr("传输"));
	ui.tableWidget->setCellWidget(1, INT_COLUMN_COUNT - 1, pButton);
	connect(pButton, SIGNAL(clicked()), this, SLOT(slotTransButtonClicked()));

	QPalette palette;
	palette.setColor(QPalette::Background, Qt::green);
	ui.lblLargeStove->setAutoFillBackground(true);  //一定要这句，否则不行
	ui.lblLargeStove->setPalette(palette);

	palette.setColor(QPalette::Background, Qt::green);
	ui.lblSmallStove->setAutoFillBackground(true);
	ui.lblSmallStove->setPalette(palette);

	palette.setColor(QPalette::Background, Qt::green);
	ui.lblMixStove->setAutoFillBackground(true);
	ui.lblMixStove->setPalette(palette);

	QPixmap pixmap = QPixmap::fromImage(QImage("./Resources/stove.jpg"));
	ui.lblLargeStoveImg->setPixmap(pixmap);
	ui.lblSmallStoveImg->setPixmap(pixmap);
	ui.lblMixStoveImg->setPixmap(pixmap);

	palette.setColor(QPalette::Background, Qt::yellow);
	ui.lblHoldingFurnance->setAutoFillBackground(true);
	ui.lblHoldingFurnance->setPalette(palette);

	//ui.tableWidget->show();
	ui.ldtJMKWeight->setReadOnly(true);
	ui.ldtBFLWeight->setReadOnly(true);
	ui.ldtInputNewWeightLarge->setReadOnly(true);
	ui.ldtCurrentTempLarge->setReadOnly(true);
	ui.ldtAlScrapWeight->setReadOnly(true);
	ui.ldtInputNewWeightSmall->setReadOnly(true);
	ui.ldtCurrentTempSmall->setReadOnly(true);
	ui.ldtCurrentWeight->setReadOnly(true);
	ui.ldtShouldInputWeightMix->setReadOnly(true);
	ui.ldtShouldInputWeightLarge->setReadOnly(true);
	ui.ldtShouldInputWeightSmall->setReadOnly(true);
	ui.ldtCurrentTempMix->setReadOnly(true);
}

void RTMaterialMonitor::slotSetting()
{
	if(m_pSettingUI == NULL)
	{
		m_pSettingUI = new RTSettingsUI(this);
	}
	m_pSettingUI->init();

	if (m_pBtnSetting->text() == tr(">>>"))
	{
		m_pSettingUI->reject();
		ui.gbxAll->setEnabled(true);
		m_pBtnSetting->setGeometry(width() - m_pBtnSetting->width(), 0, width(), height());
		m_pBtnSetting->setText(tr("<<<"));
	}
	else if (m_pBtnSetting->text() == tr("<<<"))
	{
		//m_pSettingUI->setWindowModality(Qt::ApplicationModal);
		m_pBtnSetting->setGeometry(width() - m_pBtnSetting->width() - m_pSettingUI->width(), 0, width(), height());
		m_pBtnSetting->setText(tr(">>>"));

		m_pSettingUI->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);
		m_pSettingUI->setGeometry(width() - m_pSettingUI->width(), 0, width(), height());
		ui.gbxAll->setEnabled(false);
		m_pSettingUI->exec();

		m_pBtnSetting->setGeometry(width() - m_pBtnSetting->width(), 0, width(), height());
		m_pBtnSetting->setText(tr("<<<"));
		ui.gbxAll->setEnabled(true);
	}
}
