#include <iostream>
using namespace std;

int main() {
	cout << "Hello World!" << endl;
	int command = 0;
	cout << "Your command here:"<< endl;
	cin >> command;
	if(command == 0){
		cout << "No command received!"<< endl;
	}
	else {
		cout << "Please!!! At least input something!" << endl;
	}
	return 0;
}