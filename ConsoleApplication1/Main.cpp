#include<iostream>
#include<cstdlib>
#include "DiceRoll.h"

using namespace std;

int main()
{
	DiceRoll Dice1, Dice2;

	int NumRoll;
	cout << "Enter number of rolls" << endl;
	cin >> NumRoll;

	int *Rolls = new int[NumRoll];

	
	cout << " Test one " << endl;
	cout << Dice1.average(Dice2, NumRoll) << endl;

	cout << " Test two " << endl;
	cout << Dice1.average(Rolls, NumRoll) << endl;

	delete Rolls;

}