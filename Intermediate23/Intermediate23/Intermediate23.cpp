//Intermediate23.cpp - displays the contents of two parallel arrays
//Created/revised by Noah the Giles on today

#include <iostream>
using namespace std;

int main()
{
	int points[5] = { 62, 75, 100, 83, 85 };
	char grades[5] = { 'D', 'C', 'A', 'B', 'B' };
	int arraySizes = sizeof(points) / sizeof(points[0]);
	for (int x = 0; x < arraySizes; x+=1)
	{
	cout << points[x] << "->" << grades[x] << endl;
	}

	//system("pause");
	return 0;
}	//end of main function