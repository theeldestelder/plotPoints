#include <iostream>
#include <fstream>

using namespace std;



int main() // reads in a list of coordinates from a .csv file and uses Google Maps to draw those points on a map
{
	ifstream input;

	input.open("Combined Data Set.csv"); 

	if(input.fail()) // fails to open file
	{
		cout << "Error opening file" << endl;
	}
	else // successfully opens file
	{
		string text = "";

		getline(input, text);

		cout << text << endl;

		/*double*/ 
		string latitude = "";//0;
		/*double*/ 
		string longitude = "";//0;
		string description = "";
		string place = "";

		while(getline(input, text)) // assigns variables based on columns in csv file
		{
			cout << text << endl;
			int length = text.length(); // length of line
			int commaCount = 0;

			string latitude = "";
			string longitude = "";
			string description = "";
			string place = "";

			for(int i = 0; i < length; i++) // breaks line into each column
			{
				//cout << text.at(i) << " + " << i << endl;
				if(text.at(i) == ',')
				{
					commaCount++;
				}
				else
				{
					if(commaCount == 0)
					{
						longitude += text.at(i);
					}
					else if(commaCount == 1)
					{
						latitude += text.at(i);
					}
					else if(commaCount == 2)
					{
						place += text.at(i);
					}
					else if(commaCount == 3)
					{
						description += text.at(i);
					}
				}
			}

			//plot the points with the given data
			cout << "longitude: " << longitude << endl;
			cout << "latitude: " << latitude << endl;
			cout << "place: " << place << endl;
			cout << "description: " << description << endl << endl;
		}


		input.close();
	}
}