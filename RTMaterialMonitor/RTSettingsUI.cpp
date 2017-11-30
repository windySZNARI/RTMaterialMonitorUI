#include "RTSettingsUI.h"

RTSettingsUI::RTSettingsUI(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	m_pSetINI = NULL;
}

RTSettingsUI::~RTSettingsUI()
{
	if (m_pSetINI)
	{
		delete m_pSetINI;
		m_pSetINI = nullptr;
	}
}

void RTSettingsUI::init()
{
	QMap<QString, QString> m_map;

	if (m_pSetINI == NULL)
	{
		m_pSetINI = new SetINI();
	}
	m_map = m_pSetINI->readINI();

	return;
	//UI³õÊ¼»¯
	QString strText = m_map["rl34ratio"];
	ui.edtRatio34->setText(strText);

	strText = m_map["rl34volume"];
	ui.edtVolume34->setText(strText);
	//ui.edtVolume34->setText(m_map["rl34volume"]);
	ui.edtRatio25->setText(m_map["rl25ratio"]);
	ui.edtVolume25->setText(m_map["rl25volume"]);
	ui.edtVolume->setText(m_map["jzlvolume"]);
	ui.edtOrder->setText(m_map["jzlorder"]);
}

void RTSettingsUI::on_btnOK_clicked(bool)
{
	QMap<QString, QString> m_map;

	m_map["rl34ratio"] = ui.edtRatio34->text();
	m_map["rl34volume"] = ui.edtVolume34->text();
	m_map["rl25ratio"] = ui.edtRatio25->text();
	m_map["rl25volume"] = ui.edtVolume25->text();
	m_map["jzlvolume"] = ui.edtVolume->text();
	m_map["jzlorder"] = ui.edtOrder->text();

	if (m_pSetINI == NULL)
	{
		m_pSetINI = new SetINI();
	}
	m_pSetINI->writeINI(m_map);
	close();
}

void RTSettingsUI::on_btnCancel_clicked(bool)
{
	close();
}
