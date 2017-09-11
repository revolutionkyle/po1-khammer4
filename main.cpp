// Author: Kyle Hammer
#include<string>
#include<cstdlib>
#include<ctime>
#include<iostream>

using namespace std;

int main()
{   srand( time(NULL) );
int randomNumber;

int chosenNumber;

int difference;

randomNumber = rand() % 2 + 1;

difference = abs(randomNumber-chosenNumber);

cout<< "Please insert a number between 1 and 10" << endl;

cin>> chosenNumber;

if(difference==0)
{
cout << "Wow you did it!" << endl;
}
else
{
cout<< "You were off by " << difference << endl;
}






return 0;

}
