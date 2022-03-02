#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number,guess,nguess=1;
    srand(time(0));
    number=rand()%100+1 ;
  printf("The number is %d\n",number);
    do {
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess<number)
        {   printf("go high number\n");
        }
        else if(guess>number)
        {
            printf("go low \n");
        }
        else{
        printf("You guessed in %d attempts\n",nguess);
        }
        nguess++;
    } while(guess!=number);
    return 0;
}

    