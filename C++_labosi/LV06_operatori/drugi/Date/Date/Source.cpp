#include"Date.h"
#include<iostream>

int main() {

	Date d1 ( 31, 12 , 2020 );
	Date d2 = d1;
	Date d3 (1, 0, 0);
	Date d4 = d1 + d3; 
	d1.info();
	d2.info();
	d4.info();
}