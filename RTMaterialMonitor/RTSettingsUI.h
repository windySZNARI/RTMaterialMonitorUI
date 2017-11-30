#pragma once

#include <QDialog>
#include "ui_RTSettingsUI.h"
#include "SetINI.h"

class RTSettingsUI : public QDialog
{
	Q_OBJECT

public:
	RTSettingsUI(QWidget *parent = Q_NULLPTR);
	~RTSettingsUI();
	void init();

public slots :
	void on_btnOK_clicked(bool);
	void on_btnCancel_clicked(bool);

private:
	Ui::RTSettingsUI ui;
	SetINI* m_pSetINI;
};
