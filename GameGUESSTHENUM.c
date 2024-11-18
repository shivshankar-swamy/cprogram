//interesting game using c !!!  
// guess the number between 1 to 100.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number,guess,nguess=1;
    srand(time(0));
    number=rand()%100+1;

    do{
        printf("guess the number\n");
        scanf("%d",&guess);
        if(number==guess)
        {
            printf("\nyehh!  you got it in %d guess \n",nguess);
        }
        else if(number<guess){
            printf("\nlesser number plzz!\n");
        }
        else if(number>guess){
            printf("\ngreater number plzz!\n");
        }
        else{
            printf("\nthe number is invalide\n");
        }
        nguess++;
    }while(guess!=number);

    
    return 0;
}