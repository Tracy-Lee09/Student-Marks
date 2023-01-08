// This program will input the marks of 10 learners.
// As well as determine the highest mark and the average mark.

#include <iostream>
using namespace std;

void learnMark(int mark[10]);

int main()
{
	int mark[10];  // An array should be created to get the right amount of marks.
	int highMark = 0; //This is to help find the highest mark.
	double aveMark = 0; //This is to find the average mark.
	double sum = 0; //This is to help workout the average.

	cout << "Enter the marks of 10 students." << endl;

	learnMark(mark);

	//The program now has to find the highest mark.
	for (int i = 0; i < 10; i++)
	{
		if (mark[0] < mark[i])
			mark[0] = mark[i];
	}
	cout << "The highest mark is " << mark[0] << "%" << endl;

	//The program now has to work out the average.
	for (int i = 0; i < 10; i++)
		sum += mark[i];
	aveMark = sum / 10;

		cout << "The average mark is " << aveMark << "%" << endl;

	return 0;
}

void learnMark(int mark[10])
{
	bool next = false;

	for (int i = 0; i < 10; i++)
	{
		next = false;
		while (!next) //This creates a loop if the number is invalid.
		{
			// The program must ask the person to add the marks for each student.
			cout << "Enter the mark for learner " << i + 1 << ":" << endl;
			cin >> mark[i];

			if (mark[i] > 100 || mark[i] <= 0) //This is to prevent the person from exceeding 100 or going under 0.
			{
				cout << "Mark must be between 0 and 100." << endl;
			}
			else
			{
				next = true;
			}
		}
	}
}