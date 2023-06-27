/*
 * main.cpp
 *
 *  Created on: Jun 26, 2023
 *      Author: logan
 */
#include <iostream>
using namespace std;

int main(int argc, char **argv){
	char quit;
	// This is just starter code
	// We will not use infinite loop
	while(true) {
		cout << "Pressing q, quits..." << endl;
		cout << "Enter A character: " << endl;
		cin >> quit;
		if(quit == 'q') {
			break;
		}
	}
	return 0;
}
