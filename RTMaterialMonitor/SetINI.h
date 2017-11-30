#pragma once
#include <QSettings>

class SetINI
{
public:
	SetINI();
	~SetINI();

	//iniÎÄ¼þ¶ÁÐ´
	QMap<QString, QString> readINI();
	void writeINI(QMap<QString, QString> m_map);

};

