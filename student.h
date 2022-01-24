#include <cstring>
#include <string.h>
#pragma once
using namespace std;
class Student{
  public:
  Student();
  int *age = new int;
  char *name() = new char[80];
  float *gpa = new float;
  
  int* getAge();
  float* getGpa();
  char* getName();
  void setStudentDetails(char*,int,float);
}
