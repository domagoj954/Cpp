#pragma once
class Date {
public:
	Date();

	Date(int day, int month, int year);

	Date(const Date& date);

	Date operator+(Date newDate);

	void setDay(int day);

	int getDay();

	void setMonth(int month);

	int getMonth();

	void setYear(int year);

	int getYear();

	void info();

private:
	int day;
	int month;
	int year;
};
