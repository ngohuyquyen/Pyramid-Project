// Date: April 25th 2020
// Author: HUY QUYEN (Jason) NGO
// Project: Pyramid Project
// Content: Turning any string into a pyramid starting with increasing layer (see illustration)

#include <iostream>
#include <string>
using namespace std;

int main() {
	string theline{};
	cout << "Enter the string you want to create the Pyramid: ";
	getline(cin, theline);
	for (int i = 0; i < theline.length(); i++) {
		for (int j = 1; j < theline.length() - i; j++) {
			cout << " ";
		}

		cout << theline.substr(0, i + 1);
		for (int j = i-1; j >= 0; j--) {
			cout << theline[j];
		}

		for (int j = 1; j < theline.length() - i; j++) {
			cout << " ";
		}
		cout << "\n";
	}
	return 0;
}