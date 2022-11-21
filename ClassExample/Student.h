#pragma once
#include <string>

using namespace std;

class Student
{
 
	string id;
	string name;
	string email;
public:
	Student();
	Student(string id, string name, string email);

	string getID();
	string getName();
	string getEmail();

	string to_string();

};

