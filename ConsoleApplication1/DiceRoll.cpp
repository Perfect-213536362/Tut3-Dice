
#include<iostream>
#include<cstdlib>

class DiceRoll
{
public:
	  DiceRoll();
	 ~DiceRoll();
	  int Roll();
	  float average(DiceRoll, int);
	  float average(int[], int);
private:

};

int DiceRoll::Roll()
{
	int random;
	random = rand() % 6 + 1;
	return random;

}

float DiceRoll::average(DiceRoll Die, int Numbr)
{
	int rnd = 0;
	for (int i = 0; i < Numbr; i++)
	{
		rnd += Die.Roll();
	}
	return rnd / Numbr;
}
float DiceRoll::average(int NRolls[], int Numbr)
{
	int rnd = 0;
	for (int i = 0; i < Numbr; i++)
	{
		NRolls[i] = Roll();
		rnd += NRolls[i];

	}
	return rnd / Numbr;

}