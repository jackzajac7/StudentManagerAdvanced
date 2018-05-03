#include <iostream>
#include <string>
#include <vector>
#include "student.h"

student::student()
{
	firstNam = "";
	lastNam = "";	
}

void student::setName(std::string first, std::string last)
{
	firstNam = first;
	lastNam = last;
}

std::string student::fullName()
{
	std::string name, space;
	space = " ";
	name.append(firstNam);
	name.append(space);
	name.append(lastNam);
	return name;
}

void student::addGrade(double add)
{
	gradeBook.push_back(add);
}

double student::getScore()
{
	if(gradeBook.empty())
	{
		int total = 0;
		return total;
	}
	else
	{
		double sum = 0;
		for(int i=0; i<gradeBook.size(); i++)
		{
			sum += gradeBook[i];
		}
		sum = sum/gradeBook.size();
		return sum;
	}
}

student::~student()
{
}