#include<iostream>

using namespace std;

	int pA, pB; 
	double g_RATEa, g_RATEb, finalA, finalB, gA, gB;



int main()

{
	cout<< "Enter the population of town A: ";
	cin>> pA;
	cout<< "Enter the population of town B: ";
	cin>> pB;
	if (pA < pB)
	{
	cout<< "Enter a the growth rate of each town A. ";
	cin>> g_RATEa;
	cout<< "Growth rate of town B: ";
	cin>> g_RATEb;
	if (g_RATEa <= g_RATEb)
	{
	cout<< "input was invalid. ";
	return 1;
	}
	else if (g_RATEa > g_RATEb)
	{
	while (finalA > finalB)
	finalA = ((g_RATEa / 100) * (pA)) + pA;
	finalB = ((g_RATEb / 100) * (pB)) + pB;
	cout<< "Town A: "<< finalA <<endl;
	cout<< "Town B: "<< finalB <<endl;
	}
	}
    else if (pA >= pB)
	cout<< " input was invalid. ";
	return 0;
	}
