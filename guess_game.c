#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess, i, p[20] ,n;
    printf("Welcome to the Guessing Game!!\n\n");

    printf("How many players want to play the game: ");
    scanf("%d" , &n);

    for (i = 1; i <= n; i++)
    {

        srand(time(0));
        number = rand() % 100 + 1;

        //printf("The number is %d\n",number);
        
        printf("\n%d Player Start\n", i);
        nguess=0;
        
        while (guess != number)
        {

            printf("\nGuess the Number Between 1 to 100\n");
            scanf("%d", &guess);
            nguess+=1;

            if (guess < number)
            {
                printf("\nHigher number please !!\n");
            }
            else if (guess > number)
            {
                printf("\nLower number please!!\n");
            }
            else
            {
                printf("\nHurray! You Guess it.\n");
                printf("\n%d palyer guess it in %d attempts\n", i,nguess);
            }
        }
        p[i] = nguess;
    }

    int min=p[0];
    for (int i = 1; i < n; i++)
    {
        if(p[i]<min){
            min=p[i];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if(min==p[i]){
            printf("%d player wins",i);
        }
    }

    return 0;
}
