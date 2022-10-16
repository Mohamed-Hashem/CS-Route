/*
	2. What is the difference between do - while and for, with example ?

	   Do While: the statement is at least excuted one time if the condition is false
	   because the condition is checked after entering the loop and excuting the statement (at the end)

	   For :   if the condition is false , the statement will not be excuted
	   as the condition is checked first before excuting the statement in the loop (at first)
*/


#include<iostream>
using namespace std;

//Do-While Example
int main()
{
	do {
		cout << " hi ";

	} while (false);	//excuted one time

	return 0;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++// 

// For Example
int main()
{
	for (int i = 0; i < 0; i++)
	{
		cout << " hi ";
	}						//is not excuted at all

	return 0;
}