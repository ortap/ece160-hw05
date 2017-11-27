#include "Student.h"
#include <sstream>
#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

Student::Student(std::string fn, std::string ln, int y, Major m) {
  _first_name = fn;
  _last_name = ln;
  _major = m;
  _grad_year = y;
}

Student::~Student() {}


float Student::getGpa() {
  float sum = 0;
  for(unsigned int i=0; i< _grades.size(); i++)
    {
      sum += _grades.at(i);
    }
  float gpa = sum/_grades.size();
  return gpa;
}

void Student::addGrade(float grade) {
  _grades.push_back(grade);
}

std::string Student::majorString(Major m) {
  std::string major;
  switch(m){
  case Major::EE:
    major = "EE";
    break;
  case Major::ME:
    major = "ME";
    break;
  case Major::CE:
    major = "CE";
    break;
  case Major::CHE:
    major = "CHE";
    break;
  case Major::BSE:
    major = "BSE";
    break;
  case Major::ART:
    major = "ART";
    break;
  case Major::ARCH:
    major = "ARCH";
    break;
  default:
    cout << "Invalid Major entered!\n";
  }
  return major; 
}

void Student::printInfo() {
  std::cout << _last_name << ", " << _first_name << std::endl;
  std::cout << majorString(_major) << " " << std::to_string(_grad_year) << std::endl;
  std::cout << std::fixed;
  std::cout << std::setprecision(2);
  std::cout<<"GPA: "<< getGpa() << std::endl;
}
