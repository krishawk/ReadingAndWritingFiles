


#include <iostream>
#include <fstream>
#include <string>
using namespace std;



int main(){
	ifstream inFS;
	ofstream outFS;
	string cityName;


	int tempFahrenheit;
	double tempCelsius;

	cout << "Opening file FahrenheitTemperature.txt" << endl;

	inFS.open("FahrenheitTemperature.txt");
	
	if (!inFS.is_open()) {
		cout << "Could not open file." << endl;
		return 1;
	}
	cout << "Opening file CelsiusTemperature.txt\n";

	outFS.open("CelsiusTempature.txt");
	
	if (!outFS.is_open()) {
		cout << "Could not open Celsius file." << endl;
		return 1;
	}
	
	while (inFS >> cityName >> tempFahrenheit) {
		tempCelsius = (tempFahrenheit - 32) * ((double)5 / (double)9);
		outFS << cityName << " " << tempCelsius << endl;
	}


	inFS.close();
	outFS.close();

	cout << "Done\n";
	return 0;
}
