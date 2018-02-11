#pragma once
#include <string> 
using namespace std; 
class circle
{
private:
	double PI;
	double radius;
	string color;

public:
	circle(double x, double y, string t)
	{
		PI = x;
		radius = y;
	    color = t;
	}

	circle()
	{
		PI = 3.14159;
		radius = 1;
		color = "WHITE";
	}

	void setPI(double PI)
	{
		PI = 3.14159;

	}

	void setradius(double r)
	{
		radius = r;
	}

	void setcolor(string c)
	{
		color = c;
	}

	double getPI()
	{
		return PI;
	}

	double getradius()
	{
		return radius;
	}

	string getcolor()
	{
		return color;
	}

	void print();
	void circumference();
	void area();
};