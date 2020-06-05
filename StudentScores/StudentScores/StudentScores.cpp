// StudentScores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int testScores[10], arraySizes = (sizeof(testScores) / sizeof(testScores[0]));
    int lowScore = 100, highScore = 0;
    string students[10];
    double scoreAvg = 0;
    cout << "Let's enter some test scores!";
    for (int i = 0; i < arraySizes; i++)
    {
        cout << "\nEnter a student name : ";
        cin >> students[i];
        cout << "\nEnter student " << students[i] << "'s test score : ";
        cin >> testScores[i];
        scoreAvg += testScores[i];
        if (testScores[i] < lowScore)
        {
            lowScore = testScores[i];
        }
        if (testScores[i] > highScore)
        {
            highScore = testScores[i];
        }
    }
    scoreAvg /= arraySizes;
    cout << "Test scores front to back : \n\n"; 
    for (int j = 0; j < arraySizes; j++)
    {
        cout << "Student name : " << students[j] << ", Score : " << testScores[j] << "\n";
    }
    cout << "Test scores back to front : \n\n";
    for (int k = arraySizes - 1; k >= 0; k--)
    {
        cout << "Student name : " << students[k] << ", Score : " << testScores[k] << "\n"; 
    }
    cout << "\nHighest score : " << highScore << ", lowest score : " << lowScore << ", average : " << scoreAvg;
}
