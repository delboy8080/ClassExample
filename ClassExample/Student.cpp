#include "Student.h"


Student::Student()
{
	(*this).id = "D00002000";
	this->name = "John Doe";
	this->email = "JD@dkit.ie";
}
Student::Student(string id, string name, string email)
{
	this->id = id;
	this->name = name;
	this->email = email;
}

string Student::getID()
{
	return id;
}
string Student::getName()
{
	return name;
}
string Student::getEmail()
{
	return email;
}

string Student::to_string()
{
	return this->id + " - " + this->name + " - " + this->email;
}