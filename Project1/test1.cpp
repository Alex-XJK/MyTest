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
	cout << "new Collision testing for vs code";
	return 1;
}