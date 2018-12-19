#pragma once
#include<iostream>
using namespace std;

class DataManager
{
	int hp, mp;
	string name;
public:
	DataManager();
	~DataManager();
	int getHp() { return hp; }
	int getMp() { return mp; }
	string getName() { return name; }
	static DataManager *instance();
};