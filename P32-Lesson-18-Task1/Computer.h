#pragma once
#include <iostream>
#include <cstring>
using namespace std;

struct Computer {
	char name[100] = "";		//•	Назва
	float frequency = 0;		//•	Частота
	int RAM = 0;				//•	Обсяг оперативної пам'яті
	bool DVDROM = 0;			//•	Наявність DVD ROM
	float price = 0;			//•	Вартість

	void showComputer() {
		cout << "Name: " << name << endl;
		cout << "Frequency: " << frequency << " GHz" << endl;
		cout << "RAM: " << RAM << " Gb" << endl;
		cout << "DVDROM: " << (DVDROM ? "yes" : "no") << endl;
		cout << "Price: " << price << " UAH" << endl << endl;
	}
};