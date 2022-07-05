#include"Date.h"
#include<iostream>

Date::Date() {}

Date::Date(int day, int month, int year):
	day(day), month(month), year(year) {}

Date::Date(const Date& date) {
	day = date.day;
	month = date.month;
	year = date.year;
}

void Date::setDay(int day) {
	this->day = day;
}

int Date::getDay() {
	return day;
}

void Date::setMonth(int month) {
	this->month = month;
}

int Date::getMonth() {
	return month;
}

void Date::setYear(int year) {
	this->year = year;
}

int Date::getYear() {
	return year;
}

void Date::info() {
	std::cout << day << "." << month << "." << year << "." << std::endl;
}


