#pragma once
#include <QSettings>

class SetINI
{
public:
	SetINI();
	~SetINI();

	//ini�ļ���д
	QMap<QString, QString> readINI();
	void writeINI(QMap<QString, QString> m_map);

};

