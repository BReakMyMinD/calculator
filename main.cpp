#include "stdafx.h"
#include "calc.h"

using namespace std;

void loop() {
	calculator a;
	string input;
	cin >> input;
	cout << "Reverse polish notation: " << a.getRPN(input) << endl;
	cout << "result: " << a.count(input).value << endl;
	cout << "continue? y/n" << endl;
	cin >> input;
	if (input == "y") {
		loop();
	}
	else {
		return;
	}
}

int main()
{
	loop();
	return 0;
}

