#include <iostream>
#include <cstdbool>
#include <ctime>
#include <string>

/*
EX01_01

a)	CPU
b)	RAM
c)	iii
d)	v
e)	address
f)	8
g)	iv
h)	ii


*/

using namespace std;
void ex02();
void ex03();
void ex04();
void ex05();
int doubleTheInt(int input);
int add(int input1, int input2);
int parameterPlus(int parameter);
int incrementByOne(int& number);
void arrayValues(int inputs[], int arraySize);
void arrayContains(int inputs[], int arraysize);

int main()
{
	//ex02();
	ex03();
	//ex04();
	ex05();
	return 0;
}
	
	

void ex02()
{
	srand(time(NULL));
	bool hasPassedTest = true;
	int x = rand();
	int y = rand();

	if (x > y)
	{
		cout << "x ("<< x <<") is greater than y (" << y << ").";
	}
	else if (y > x)
	{
		cout << "y (" << y << ") is greater than x (" << x << ").";
	}
	else if (y = x)
	{
		cout << "x (" << x << ") is equal to y (" << y << ").";
	}
	cout << endl;
	int numberOfShares;
	cout << "Please enter the number of shares owned:";
	cin >> numberOfShares;
	cout << endl;
	if (numberOfShares < 100)
	{
		cout << "The number of shares is less than 100.";
	}
	else if (numberOfShares >= 100)
	{
		cout << "The number of shares is greater than or equal to 100.";
	}
	cout << endl;

	int boxWidth;
	int bookWidth;
	cout << "Please enter the box width:";
	cin >> boxWidth;
	cout << endl;
	cout << "Please enter the book width:";
	cin >> bookWidth;
	cout << endl;
	if (boxWidth % bookWidth == 0)
	{
		cout << "The box width is evenly divisible by the book width.";
	}
	else
	{
		cout << "The box width is not evenly divisible by the book width.";
	}

	cout << endl;
	int shelfLife;
	cout << "Please enter the shelf life of the box of chocolates:";
	cin >> shelfLife;
	cout << endl;
	int temperature;
	cout << "Please enter the outside temperature:";
	cin >> temperature;
	cout << endl;

	if (temperature > 90)
	{
		shelfLife = shelfLife - 4;
	}
	cout << "The shelf life at this temperature will be" << shelfLife << "."<<endl;
}

void ex03()
{
	int areaOfSquare;
	cout << "Please enter the area of the square:";
	cin >> areaOfSquare;
	cout << endl;

	int diagonalOfSquare;
	diagonalOfSquare = sqrt(2 * areaOfSquare);
	cout << "The diagonal of the square is " << diagonalOfSquare << ".";
	cout << endl;

	char yesNo;
	cout << "Please enter y or n.";
	
	char garbage;
	cin.get(yesNo);
	cin.ignore(1);
	//The next cin.get is just a jury-rigged solution. Without it I couldn't find any way of ignoring the endline command
	// from cin.get(yesNo) without also ignoring the entry of the mailingAddress string. It's not elegant, but it's what
	// I've got.
	cin.get(garbage);
	if (yesNo == 89 || yesNo == 121)
	{
		cout << "Yes.";
	}
	else if (yesNo == 78 || yesNo == 110)
	{
		cout << "No.";
	}
	cout << endl;
	char tab = 9;

	string mailingAddress = "a";
	cout << "Please enter your mailing address.";
	getline(cin, mailingAddress);
	cout << endl;

	string empty = "";

}

void ex04()
{
	int number;
	cout << "Please enter a number between 1 and 10:";
	cin >> number;
	cout << endl;
	while (number > 10 || number <1)
	{
		cout << "The number you entered is not between 1 and 10. Please enter a new number:";
		cin >> number;
	}
	cout << endl;

	int n = 0;
	int sum = 0;
	for (n = 0; n < number; n++)
	{
		sum = sum + n*n*n;
	}
	
	int g = 0;
	do
	{
		cout << "*";
		g++;
	} while (g <= number);
	cout << endl;

	for (int q = 0; q <= 40; q++)
	{
		if (q % 2 == 0)
		{
			cout << q;
			cout << endl;
		}
	}
	cout << endl;


	int doubledInt;
	doubledInt = doubleTheInt(number);
	cout << "Double the previously entered value is " << doubledInt << "."<<endl;

	int input1=rand();
	int input2=rand();
	int inputSum;
	inputSum = add(input1, input2);
	cout << "The first random number is " << input1 << ", and the second random number is " << input2 << ".";
	cout << endl << "Their sum is " << inputSum << "."<<endl;

	int numPlusOne = number;
	cout << "The parameter is " << numPlusOne << "." << endl;
	incrementByOne(numPlusOne);
	cout << "The parameter is now " << numPlusOne << "." << endl;

}

int doubleTheInt(int input)
{
	int doubled;
	doubled = input * 2;
	return doubled;
}

int add(int input1, int input2)
{
	int inputSum;
	inputSum = input1 + input2;
	return inputSum;
}

int incrementByOne(int& number)
{
	number = number + 1;
	return number;
}


void ex05()
{
	int inputs[5];
	cout << "Please enter five integers, pressing enter between each entry:" << endl;
	for (int n = 0; n < 5; n++)
	{
		cin >> inputs[n];
	}
	int sumOfEntries=0;
	int productOfEntries=0;
	
	for (int n = 0; n < 5; n++)
	{
		sumOfEntries += inputs[n];
	}

	cout << "The sum of the entries is " << sumOfEntries << "." << endl;

	for (int n = 0; n < 5; n++)
	{
		productOfEntries = productOfEntries * inputs[n];
	}
	
	cout << "The product of all entries is " << productOfEntries << "." << endl;

	int arraySize;
	arraySize = 5;

	arrayValues(inputs, arraySize);

	arrayContains(inputs, arraySize);

}

void arrayValues(int inputs[], int arraySize)
{
	cout << "The values in the array are ";
	for (int n = 0; n < arraySize-1; n++)
	{
		cout << inputs[n] << ", ";
	}
	cout << "and " << inputs[arraySize - 1] << "." << endl;

}

void arrayContains(int inputs[], int arraySize)
{
	int query;
	cout << "Please enter a value to search the array for that value: ";
	cin >> query;
	cout << endl;

	int contains = 0;

	for (int n = 0; n < arraySize; n++)
	{
		if (query == inputs[n])
		{
			contains = 1;
		}
	}

	if (contains == 1)
	{
		cout << "The array contains the value " << query << ".";
	}

	else
	{
		cout << "The array does not contain the value " << query << ".";
	}

}