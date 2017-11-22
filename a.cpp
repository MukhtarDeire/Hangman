// Assignment
// Mukhtar Derie
// Array
// Purpuse: Create a hangman game
// Novermber 21th 2017
// C++ 5.11
// Day 1
#include<algorithm>
#include<iostream>
#include <stdlib.h>
#include <ctype.h>
#include<cstdio>
#include<fstream>
#include<string>
#include <stdio.h>
#include<ctime>

using namespace std;
/* Data dictionary 

*	Letter: Getting 1 letter at a time frmo the user
*	Lives: The user has a certain number of lives which is 9
*	randomWord:
*	Guess:	
*	length:																		

*/
//Starting the program

int msleep(unsigned long milisec){   
   struct timespec req={0};   
   time_t sec=(int)(milisec/1000);   
   milisec=milisec-(sec*1000);  
   req.tv_sec=sec;   
   req.tv_nsec=milisec*1000000L;   
   while(nanosleep(&req,&req)==-1)   
   continue;   
   return 1;   
}
main()
{
	// Declaring int varibles
	int lives=9,randomWord,i,pos, len;
	// Declaring string varibles
	string userQuit="me",userQuit1="me",letter,word,dword, guess[10] =
	{"canada",
	"chad",
	"china",
	"cuba",
	"chile",
	"algeria",
	"america",
	"australia",
	"austria",
	"azerbaijan"};

cout<<"\t _ _ _       _                           _                        	\n";
cout<<"\t| | | | ___ | | ___  ___  _____  ___   _| |_  ___    _____  _ _  	\n";
cout<<"\t| | | || -_|| ||  _|| . ||     || -_| |_   _|| . |  |     || | |  	\n";
cout<<"\t|_____||___||_||___||___||_|_|_||___|   |_|  |___|  |_|_|_||_  |  	\n";
cout<<"\t                                                           |___|  	\n";
cout<<"\t _____                                    _____                  	\n";
cout<<"\t|  |  | ___  ___  ___  _____  ___  ___   |   __| ___  _____  ___ 	\n";
cout<<"\t|     || .'||   || . ||     || .'||   |  |  |  || .'||     || -_|	\n";
cout<<"\t|__|__||__,||_|_||_  ||_|_|_||__,||_|_|  |_____||__,||_|_|_||___|	\n";
cout<<"\t                 |___|                                           	\n";
//msleep(3000);
	srand (time(NULL));
	//CreatiNG a while loop
	cout<<"Rules";
	cout << "\n\n 1. Each letter is represented by an a $.";
	cout << "\n\n 2. You have to type only one letter at a time.";
	cout << "\n\n 2. You have 9 lives to begin.";
	cout << "\n\n 4. You lose a live if you guess an incorrect letter.";
//	msleep(10000);
	system("cls");	
	while (userQuit!="quit")
{
	// Random number generater
	randomWord = rand() % 10+1 ;
	// randomly generating the word from the array
	word = guess[randomWord];
	// Getting the length of the word
	len = word.length();
	cout << word;
	// assigning $ to the every letter the user guess
	dword.assign(len,'$');
	// Outputting the word to the screen
	cout <<"\n"<< dword;
	// Outputting to the user
	for(i=1;i<9;i++)
	{
	cout << "\nGuess a letter: ";
	// Getting  input from the user
	cin >>letter;
	pos = word.find(letter);
	//Creating if statement checking 
	if (letter.find(word))
	{
		// Outputting  a postive message to the screen	
		cout<<"\nGood job now guess again";
		dword.assign(len,'$');
    }
	else
	{
		//taking lives away
		lives--;
		//Outputting to the screen that 
		cout<<"Incorect you have this number of "<<lives<<" lives left";
	}
	}
	}
}
// Completed by Mukhtar Dere
// Submission Date: Novermber 22rd 2017
