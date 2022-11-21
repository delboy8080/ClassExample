#include <iostream>
#include "Student.h"

using namespace std;

void display(Student& stud)
{
	cout << stud.to_string() << endl;
}

int main()
{
	Student john; 
//	display(john);
	Student mary("D00123456", "Mary Smith", "msmith@dkit.ie");
//	display(mary);

	cout << mary.to_string() << endl;

}