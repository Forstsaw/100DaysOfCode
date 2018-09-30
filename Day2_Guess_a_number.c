#include <stdio.h>
#include <time.h>


void intro(char name[100],int random){
    printf("\tWelcome to Mini Game\n");
    printf("\t Guessing a number\n");
    printf("\t made By ForstSaw\n\n\n\n");
    printf("Hello,Can u tell your name before we started : ");
    gets(name);
    printf("Ok %s,before we started,please input the range of number: ",name);
    scanf("%d",&random);
    printf("so i am thinking of a number between 1 - %d\n",random);
    Takeguess(random);

}
void Takeguess(int random){
    srand(time(NULL));
    int randoms = (rand()%random)+1;
    int i;
    int guess;
    int len = 0;
    printf("\nI will give you 3 times chance to guess it\ngoodluck \n\n");
    for(i =0;i < 3;i++){
        printf("Take a guess: ");
        scanf("%d",&guess);


        if(guess == randoms){
            printf("Nice Guess\n");

            break;
        }
        else if(guess > randoms){
            printf("your guess is too high\n");
        }
        else if(guess < randoms){
            printf("your guess is too low\n");
        }
        len++;


}

        if(guess == randoms){
            printf("\nyou guessed my number well\n");
        }
        else{

            printf("\nSorry,My number is %d\n",randoms);
        }

        printf("Game Over\n");

}



int main(){
    char name[100];
    int random;
    intro(name,random);

    return 0;
}
