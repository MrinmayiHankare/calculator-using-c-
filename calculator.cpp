#include <iostream>
using namespace std;
int main() 
{
	char operation;
    	double num1, num2, result;
	cout << "Enter an operator (+, -, *, /): ";
    	cin >> operation;
    	cout << "Enter two numbers: ";
    	cin >> num1 >> num2;
	
    	switch (operation) 
    	{
		case '+':
		    	result = num1 + num2;
		    	break;
		case '-':
		    	result = num1 - num2;
		    	break;
		case '*':
		    	result = num1 * num2;
		    	break;
		case '/':
		    	if (num2 == 0) 
		    	{
		        	std::cout << "Error! Division by zero not possible." << std::endl;
		        	return 1; 
		    	}
		    	result = num1 / num2;
		    	break;
		default:
		    	cout << "Invalid operator entered." << std::endl;
		    	return 1; 
    	}
   	cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << std::endl;
	return 0;
}

