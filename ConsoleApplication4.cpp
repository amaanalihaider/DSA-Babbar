#include<iostream>
using namespace std;
int main() {


	string routine = " 1. Eat  2.Sleep 3.";
	cout << routine;
	cout << "Do You want to ADD something to routine" << endl;

	int decision_variable;
	cout << " Make your decision either to add ot remove " << endl;

	cin >> decision_variable;

	if (decision_variable == '1') {


	

		
	string add_to_routine = "  ";
	cin >> add_to_routine;
	cout << routine + add_to_routine;
	cout << endl;
}
	
	else if (decision_variable == '2') {
		cout << "Do you want to erase something" << endl;


		routine.erase(0, 5);
		cout << routine;

	}










	return 0;
}