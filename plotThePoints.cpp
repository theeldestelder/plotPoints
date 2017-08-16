#include <iostream>
#include <fstream>

using namespace std;

int main() // reads in a list of coordinates from a .csv file and uses Google Maps to draw those points on a map
{
	ifstream input;

	input.open("Combined Data Set.csv"); 

	string text = "";

	input >> text >> text >> text >> text; // first line 


	double latitude = 0;
	double longitude = 0;
	string description = "";
	string place = "";


	while(input >> longitude >> latitude >> place >> description) // assigns variables based on columns in csv file
	{
		//plot the points with the given data
		cout << "longitude: " << longitude << endl;
		cout << "latitude: " << latitude << endl;
		cout << "place: " << place << endl;
		cout << "description" << description << endl;
	}
}