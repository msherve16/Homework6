/////////////////////////////////
//Morgan Sherve
//June 13, 2014
//Exercise 13.1
/////////////////////////////////

#include <iostream> 
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	fstream textFile;

	//create file
	textFile.open ("Exercise13_1.txt",  ios::app);

		if (textFile. fail())
		{
			cout << "File cannot open." << endl;
				return 0;
		}
			for(int i=0; i<100; i++)
			{
				srand(time(0));
				textFile <<  rand () % 100 << " ";
			}
	textFile.close();

}
