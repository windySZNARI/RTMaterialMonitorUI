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

	//将读取到的ini文件保存在QString中，先取值，然后通过toString()函数转换成QString类型  
	m_map["rl34ratio"]  = configIniRead->value("/rl3.4/ratio").toString();
	m_map["rl34volume"] = configIniRead->value("/rl3.4/volume").toString();
	m_map["rl25ratio"]  = configIniRead->value("/rl2.5/ratio").toString();
	m_map["rl25volume"] = configIniRead->value("/rl2.5/volume").toString();
	m_map["jzlvolume"]  = configIniRead->value("/jzl/volume").toString();
	m_map["jzlorder"]   = configIniRead->value("/jzl/order").toString();

	//读入入完成后删除指针  
	delete configIniRead;
	return m_map;
}

void SetINI::writeINI(QMap<QString, QString> m_map)
{
	//Qt中使用QSettings类读写ini文件  
	//QSettings构造函数的第一个参数是ini文件的路径,第二个参数表示针对ini文件,第三个参数可以缺省  
	QSettings *configIniWrite = new QSettings("config.ini", QSettings::IniFormat);

	//向ini文件中写入内容,setValue函数的两个参数是键值对  
	configIniWrite->setValue("/rl3.4/ratio", m_map["rl34ratio"]);
	configIniWrite->setValue("/rl3.4/volume", m_map["rl34volume"]);
	configIniWrite->setValue("/rl2.5/ratio", m_map["rl25ratio"]);
	configIniWrite->setValue("rl2.5/volume", m_map["rl25volume"]);
	configIniWrite->setValue("/jzl/volume", m_map["jzlvolume"]);
	configIniWrite->setValue("/jzl/order", m_map["jzlorder"]);

	//写入完成后删除指针  
	delete configIniWrite;
}

