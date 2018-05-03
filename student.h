#include <iostream>
#include <string>
#include <vector>

#ifndef _STUDENT_H_
#define _STUDENT_H_

class student
{
private:
	std::string firstNam;
	std::string lastNam;
	std::vector<double> gradeBook;
public:
	student();
	~student();
	void setName(std::string first, std::string last);
	std::string fullName();
	void addGrade(double add);
	double getScore();
};

#endif