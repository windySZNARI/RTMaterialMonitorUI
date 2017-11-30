#pragma once

#include <QtWidgets/QDialog>
#include "ui_RTMaterialMonitor.h"
#include "rtPageManager.h"
#include "RTSettingsUI.h"

#pragma execution_character_set("utf-8")
#define INT_ROW_COUNT 2
#define INT_COLUMN_COUNT 4

#define LARGE_STOVE_AL_TEMP "A_RH01.db87.70"
#define LARGE_STOVE_WASTED_WEIGHT "A_RH01.db87.168"
#define LARGE_STOVE_JMK_WEIGHT "A_RH01.db87.176"
#define LARGE_STOVE_ALREADY_INPUT_AL_WEIGHT "A_TL01.db87.24"

#define SMALL_STOVE_AL_TEMP "A_RH02.db25.10"
#define SMALL_STOVE_AL_SCRAP_WEIGHT "A_LX01.db87.14"
#define SMALL_STOVE_ALREADY_INPUT_AL_WEIGHT "A_TL01.db87.8"

#define HOLDING_STOVE_AL_TEMP "A_JZ01.db25.0"
#define HOLDING_STOVE_AL_WEIGHT "A_JZ01.db59.12"


class RTMaterialMonitor : public QDialog
{
	Q_OBJECT

public:
	RTMaterialMonitor(QWidget *parent = Q_NULLPTR);
	~RTMaterialMonitor();

	void startClient();
	void initUI();

public slots:
	void on_btnTrans_clicked(bool);
	void on_btnFinish_clicked(bool);
	void slotTransButtonClicked();
	void slotRecvDataAndUpdateUI(string strLabel, string strText);
	void slotSetting();

private:
	void updateLargeStoveUI();
	void updateSmallStoveUI();
	void updateHoldingStoveUI();

private:
	Ui::RTMaterialMonitorClass ui;
	rtPageManager* m_pPageMgr;
	QPushButton* m_pBtnSetting;
	RTSettingsUI* m_pSettingUI;
};
