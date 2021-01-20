#include <iostream>
using namespace std;

int main() {
	cout << "Hello World!" << endl;
	int command = 0;
	cout << "Your command here:"<< endl;
	cin >> command;
	if(command == 0){
		cout << "delete! command received!"<< endl;
	}
	else {
		cout << "Please!!! At least input something!" << endl;
	}
	cout << "Ending!" << endl;
	if(command == 5) {
		cout << "It is 5!" << endl;
	}
	return 10;
}