#include <iostream>
#include <fstream>
#include "Student.h"
#include <vector>
using namespace std;

void display(Student& stud)
{
	cout << stud.to_string() << endl;
}
struct myStudent
{
	string name;
	int id;
	string qual;
	string area;
};
void readFile()
{
	string line;
	ifstream fin("testCSV.txt");
	if (fin)
	{
		while (!fin.eof())
		{
			getline(fin, line);
			//cout << line << endl;
			myStudent stud;
			vector<string> items;
			string field = "";
			bool quoteOpen = false;
			for (int i = 0; i < line.length(); i++)
			{
				if (line[i] == '"')
				{
					quoteOpen = !quoteOpen;
				}
				else if (!quoteOpen && line[i]
					== ',')
				{
					items.push_back(field);
					field = "";
				}
				else
				{
					field += line[i];
				}
			}
			if (field != "")
			{
				items.push_back(field);
			}

			stud.name = items[0];
			stud.id = stoi(items[1]);
			stud.qual = items[2];
			stud.area = items[3];
			cout << "=====================================" << endl;
		}
	}
}

int main()
{
	readFile();
	/*
	Student john; 
//	display(john);
	Student mary("D00123456", "Mary Smith", "msmith@dkit.ie");
//	display(mary);

	cout << mary.to_string() << endl;
	*/
}