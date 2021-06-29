#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakeWaterGun(char you,char comp){
    if(you!='s' && you!='w' && you!='g')
    return 2;

    if(you==comp)
    return 0;

    if(you=='s' && comp=='w')
    return 1;
    else if(you=='w' && comp=='s')
    return -1;

    if(you=='s' && comp=='g')
    return -1;
    else if(you=='g' && comp=='s')
    return 1;

    if(you=='g' && comp=='w')
    return -1;
    else if(you=='w' && comp=='g')
    return 1;
}
void main(){
    char you,comp;
    srand(time(0));
    int num=rand()%100+1;

    if(num<33)
    comp='s';
    else if(num>33 && num<66)
    comp='g';
    else    
    comp='w';

    printf("WELCOME TO THE SNAKE , WATER , GUN GAME!!!!!!\n");
    printf("\nEnter s for snake , w for water and g for gun...\n");
    scanf("%c",&you);



    int result=snakeWaterGun(you,comp);

    printf("You enter %c and computer enter %c.\n",you,comp);

    if(result == 0)
    printf("Match Draw.\n");
    else if(result == 1)
    printf("You Won.\n");
   else if (result==-1)
    printf("You Lose.\n");
   else if (result==2)
    printf("Invalid Alphabet!!! Please try again.\n");
    
}