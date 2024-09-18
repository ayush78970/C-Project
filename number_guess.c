#include <stdio.h>
#include<stdlib.h>
#include <time.h>
//number gauessing prg

int main ()
{
	srand(time(NULL));							//	srand() is a function that sets the seed for the rand() function, which generates pseudo-random numbers
	
	int random,guess;
	int no_of_guess=0;
	
	printf("welcome to the world of guessing numbers\n");
//	random=rand()		0 say <1 random  decimal large generate karata hai     multiplay 100 it become 1 to 99
random=rand() % 100+1;  //generating 1 to 100
//	printf("numbr gnr %d",random);
	
	
	do
	{
	printf("please enter your guess between 1 to 100): ");	
	scanf("%d",&guess);
	no_of_guess;
	 if(guess<random)
	{
		printf("Guess larger number \n");
	}else if(guess>random)
	{
		printf("guess a smaller number \n");
	}
	else{
		printf("Congrats! You have successfully guessed the number in %d attempts", no_of_guess);

		
	}
	
	}while(guess!=random);
	
	
	printf("\n bye bye,Thanks for playing\n");
	printf("Developed by Ayush yadav\n");
	
}







