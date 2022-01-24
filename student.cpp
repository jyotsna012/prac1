#include <iostream>
#include "Student.h"
#include <cstring>

using namespace std;

Student :: Student(){

}

void Student :: setStudentDetails(char* nName,int nAge,float nGpa){
  strcpy(name, nName);
  *age = nAge;
  *gpa = nGpa;  
}

int* Student :: getAge(){
  return age;
}

char* Student :: getName(){
  return name;

}

float* Student :: getGpa(){
  return gpa;

}
