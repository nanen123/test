#include "DataManager.h"

DataManager::~DataManager()
{
}

DataManager::DataManager()
{
	hp = 10;
	mp = 1;
	name = "Á¦·Î";
}
DataManager * DataManager::instance()
{
	static DataManager inst();
	return &inst;
}
