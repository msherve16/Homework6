///////////////////////////////
//Morgan Sherve
//June 13, 2014
//Exercise 13.2
//////////////////////////////

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	char s;
	int count = 0;
	ifstream file;
	string fileName;
		cout << " Please enter a file name: " << endl;
		cin >> fileName;

		file.open(fileName);

		if (!file)
		{
			cout << "File cannot open." << endl;
			return 0;
		}

		else
		{
			while (!file.eof())
			{
				char get();
				ifstream* get(char& s); //is this right?
				count++;
			}
		}

	cout << count << " " << endl;

	file.close();
}
