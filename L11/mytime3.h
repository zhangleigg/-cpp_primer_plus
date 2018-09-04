#ifndef MYTIME3_H_
#define MYTIME3_H_
#include<iostream>
class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int, int);
	~Time();
	void AddMin(int m);
	void addHr(int h);
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time &) const;
	Time operator-(const Time &) const;
	Time operator*(double) const;
	friend Time operator*(double m, const Time & t) {
		return t * m;
	};
	friend std::ostream & operator<<(std::ostream & os, const Time & t);
};

#endif