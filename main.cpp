// Author: Kyle Hammer

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{ srand( time(NULL) ) ;
int chosenNumber;
int randomNumber;
int diffn;
int attempts;
char difficulty;
char again;
int difference;
again = 'Y';
while(again == 'Y')
{cout << "Please select a difficutly: E-Easy, M-Medium, H-Hard, C-Custom" << endl;
cin >> difficulty;
if(difficulty == 'E')
{ attempts = 1;
 diffn = 2;
}
if(difficulty == 'M')
{ attempts = 2;
  diffn = 10;
}
if(difficulty == 'H')
{ attempts = 3;
  diffn = 100;
}
if(difficulty == 'C')
{cout << "Please select a range and then select a number of attempts." << endl;
cin >> diffn;
cin >> attempts;
}
randomNumber = rand() % diffn + 1;
while(attempts > 0)
{ cout<< "Please select a number between 1 and " << diffn << endl;
cin >> chosenNumber;
difference = abs(randomNumber-chosenNumber);
if(chosenNumber-randomNumber == 0)
{cout << "Wow! You did it" << endl;
attempts=0;
}
if(randomNumber-chosenNumber<0)
{ cout << "You guessed too high by " << difference << endl;
}
if(randomNumber-chosenNumber>0)
{ cout << "You guessed too low by " << difference<< endl;
}
attempts--;
}
cout<< "Do you want to play again? Y/N" << endl;
cin>> again;
;}
return 0;
;}

