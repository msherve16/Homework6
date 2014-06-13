////////////////////////////
// Morgan Sherve
// June 13, 2014
// Exercise 13.5
////////////////////////////

//www.socialsecurity.gov/OACT/babynames/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	//create objects
	fstream ten;
	fstream one;
	fstream two;

	string search();

	int year;
	char gender;
	string name;
	string EnteredName;
	int line;
	bool M;

	ten.open("Babynameranking2010.txt");
		if (ten.fail())
				{
					cout << "File could not open." << endl;
				}
		else
			{
				ten >> year >> name >> gender >> line;
			}	
		ten.close();

	one.open("Babynameranking2001.txt");
		if (one.fail())
				{
					cout << "File could not open." << endl;
				}
		else
			{
				one >> year >> name >> gender >> line;
			}	
		one.close();

	two.open("Babynameranking2010.txt");
		if (two.fail())
				{
					cout << "File could not open." << endl;
				}
		else
			{
				two >> year >> name >> gender >> line;
			}	
		two.close();

		

	cout << "Enter the year: 2001, 2002, or 2010 ";
	cin >> year;
	cout << "Enter the gender (M/F): ";
	cin >> gender;
	 if (gender = 'M' )
		{M = true;}
	 else if (gender = 'F')
		{M = false;}

		
	cout << "Enter the name: ";
	cin >> name;
	
	if (year == 2010)
		{
			ten.open("Babynameranking2010.txt",  ios::out);

					 while (!ten.eof() && EnteredName == name && M == gender)
					 {
						cout << "In the year 2010 the name " << name << "was ranked " << line << endl;
					 }
			}
	else if (year == 2001)
		{
			one.open("Babynameranking2001.txt", ios :: out);
			
			 while(!ten.eof() && EnteredName == name && M == gender)
				 {
					cout << "In the year 2001 the name " << name << "was ranked " << line << endl;
				 }
			 }

	else if (year == 2002)
		{	
			two.open("Babynameranking2002.txt", ios:: out);

			 while (!ten.eof() && EnteredName == name && M == gender)
				 {
					cout << "In the year 2002 the name " << name << "was ranked " << line << endl;
				 }
		}
}
