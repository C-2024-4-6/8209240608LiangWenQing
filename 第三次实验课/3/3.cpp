#include <iostream>
using namespace std;
#include "mytemperature.h"

int main_03() {

	cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius" << endl;

	for(int i = 0 ; i <10 ; i++){
	cout << 40 - i << "\t" << celsius_to_fah(40 - i) << "\t\t|\t"
		 << 120 - i * 10 << "\t\t" << fahrenheit_to_cels(120 - i * 10) << endl;
	}

	system("pause");
	return 0;
}