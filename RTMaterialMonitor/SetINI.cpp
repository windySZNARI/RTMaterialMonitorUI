#include "SetINI.h"



SetINI::SetINI()
{
}


SetINI::~SetINI()
{
}

QMap<QString, QString> SetINI::readINI()
{
	QMap<QString, QString> m_map;
	QSettings *configIniRead = new QSettings("config.ini", QSettings::IniFormat);

	//����ȡ����ini�ļ�������QString�У���ȡֵ��Ȼ��ͨ��toString()����ת����QString����  
	m_map["rl34ratio"]  = configIniRead->value("/rl3.4/ratio").toString();
	m_map["rl34volume"] = configIniRead->value("/rl3.4/volume").toString();
	m_map["rl25ratio"]  = configIniRead->value("/rl2.5/ratio").toString();
	m_map["rl25volume"] = configIniRead->value("/rl2.5/volume").toString();
	m_map["jzlvolume"]  = configIniRead->value("/jzl/volume").toString();
	m_map["jzlorder"]   = configIniRead->value("/jzl/order").toString();

	//��������ɺ�ɾ��ָ��  
	delete configIniRead;
	return m_map;
}

void SetINI::writeINI(QMap<QString, QString> m_map)
{
	//Qt��ʹ��QSettings���дini�ļ�  
	//QSettings���캯���ĵ�һ��������ini�ļ���·��,�ڶ���������ʾ���ini�ļ�,��������������ȱʡ  
	QSettings *configIniWrite = new QSettings("config.ini", QSettings::IniFormat);

	//��ini�ļ���д������,setValue���������������Ǽ�ֵ��  
	configIniWrite->setValue("/rl3.4/ratio", m_map["rl34ratio"]);
	configIniWrite->setValue("/rl3.4/volume", m_map["rl34volume"]);
	configIniWrite->setValue("/rl2.5/ratio", m_map["rl25ratio"]);
	configIniWrite->setValue("rl2.5/volume", m_map["rl25volume"]);
	configIniWrite->setValue("/jzl/volume", m_map["jzlvolume"]);
	configIniWrite->setValue("/jzl/order", m_map["jzlorder"]);

	//д����ɺ�ɾ��ָ��  
	delete configIniWrite;
}

