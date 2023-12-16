#include<iostream>
using namespace std;
int main()
{
	int result, user_input;
	cout << "Enter a number :";
	cin >> user_input;
	if (user_input < 0) {
		result = -1;
		cout << result;
	}
	else if (user_input >= 0 && user_input <= 5) {
		result = 0;
		cout << result;
	}
	else if (user_input >= 6 && user_input <= 12) {
		result = 1;
		cout << result;
	}
	else if (user_input >= 13 && user_input <= 19) {
		result = 2;
		cout << result;
	}
	else if (user_input >= 20 && user_input <= 50)
	{
		result = 3;
		cout << result;
	}
	else if (user_input >= 51 && user_input <= 60)
	{
		result = 4;
		cout << result;
	}
	else if (user_input >= 61 && user_input <= 101)
	{
		result = 5;
		cout << result;
	}
	else if (user_input > 101)
	{
        result = -1;
		cout << result;
	}
	
	return 0;
}