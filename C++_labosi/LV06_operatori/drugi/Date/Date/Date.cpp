#pragma once
#include"Date.h"
#include<iostream>

Date::Date(){}

Date::Date(int day, int month, int year) :
	day(day), month(month), year(year) {}

Date::Date(const Date& date) {
	day = date.day;
	month = date.month;
	year = date.year;
}

Date Date::operator+(Date newDate) { //samo jedna vrijednost u zagrade!!!!!!!! 
	Date date;                       //Date sadrži i day i month i year
	date.day = day + newDate.day;
	date.month = month + newDate.month;
	date.year = year + newDate.year;
	
	if (date.day > 31) {
		date.day = 1;
		date.month = 1;
	}
	
	if (date.day > 31 && date.month > 12) {
		date.year += 1;
	}
	
	return date;
}

void Date::setDay(int day) {
	if (day > 0 && day < 32) {
		this->day = day;
	}
}

int Date::getDay() {
	return day;
}

void Date::setMonth(int month) {
	if (month > 0 && month < 13) {
		this->month = month;
	}
}

int Date::getMonth() {
	return month;
}

void Date::setYear(int year) {
	if (year > 0) {
		this->year = year;
	}
}

int Date::getYear() {
	return year;
}

void Date::info() {
	std::cout << day << "." << month << "." << year << "." << std::endl;
}


