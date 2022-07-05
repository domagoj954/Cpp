#include"Date.h"
#include<iostream>

int main() {

	Date d1 = { 01, 02 , 2020 };
	Date d2 = d1;
	d1.info();
	d2.info();
}