//Advanced28.cpp - displays the number of students
//earning a specific score
//Created/revised by the one guy, you know Nolan or something on time definitely on time definitely not late no sir not Nolan

#include <iostream>
using namespace std;

int main()
{
	//declare array
	int scores[20] = {82, 45, 63, 78, 90, 98, 100, 67, 54, 92, 94, 80, 73, 45, 54, 89, 23, 10, 90, 39};

	//declare variables
	int searchScore = 0;
	int total = 0;

	cout << "Enter a score from 0 through 100 (-1 to end): ";
	cin >> searchScore;
	while (searchScore >= 0)
	{
		total = 0;
		//search for score
		for (int x = 0; x < 20; x += 1)
			if (scores[x] == searchScore)
				total += 1;
		//end if    
	//end for

	//display total
		cout << "Number of students earning a score of "
			<< searchScore << ": "
			<< total << endl << endl;

		cout << "Enter a score from 0 through 100 (-1 to end): ";
		cin >> searchScore;
	}  //end while

	//system("pause");
	return 0;
}	//end of main functions