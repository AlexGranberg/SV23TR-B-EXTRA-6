
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void main (){

system("cls");


int low = 1;
int high = 100;
int choice;
int number;
int guesses = 0;
int guess;

printf("Think of a number between 1-100\n");
printf("Press any key to continue\n");
scanf(" %d", &number);
guess = (high + low) / 2;
printf("The computer is guessing %d\n" , guess);
printf("Is the number:\n1. Too High\n2. Too Low\n3. Correct\n");
scanf(" %d", &choice);

while(choice != 3){
    
    if(choice == 1){
        high = guess - 1;
        guess = (high + low) / 2;
        printf("The computer is guessing %d\n" , guess);
        printf("Is the number:\n1. Too High\n2. Too Low\n3. Correct\n");
        scanf(" %d", &choice);
        guesses++;
        
    }
    else if(choice == 2)
    {
        low = guess + 1;
        guess = (high + low) / 2;
        printf("The computer is guessing %d\n" , guess);
        printf("Is the number:\n1. Too High\n2. Too Low\n3. Correct\n");
        scanf(" %d", &choice);
        guesses++;
    }
    


}
printf("Hey You guessed right!!\nIt only took you %d amount of guesses!\n", guesses);


}


//**********  Ej lika effektiv



/*void main (){

system("cls");




srand(time(NULL));



int randNum;
int low = 1;
int high = 100;
int choice;
int number;
int guesses = 0;
int number2;
int guess;

printf("Think of a number between 1-100\n");
printf("Press any key to continue\n");
scanf(" %d", &number);
guess = (high + low) / 2;
printf("The computer is guessing %d\n" , guess);
printf("Is the number:\n1. Too High\n2. Too Low\n3. Correct\n");
scanf(" %d", &choice);

while(choice != 3){
    
    if(choice == 1){
        high = randNum - 1;
        randNum = rand() % (high - low + 1) + low;
        printf("The computer is guessing %d\n" , randNum);
        printf("Is the number:\n1. Too High\n2. Too Low\n3. Correct\n");
        scanf(" %d", &choice);
        guesses++;
        
    }
    else if(choice == 2)
    {
        low = randNum + 1;
        randNum = rand() % (high - low + 1) + low;
        printf("The computer is guessing %d\n" , randNum);
        printf("Is the number:\n1. Too High\n2. Too Low\n3. Correct\n");
        scanf(" %d", &choice);
        guesses++;
    }
    


}
printf("Hey You guessed right!!\nIt only took you %d amount of guesses!\n", guesses);*/