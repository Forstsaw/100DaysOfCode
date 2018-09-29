#include <stdio.h>
#include <time.h>

void maxValue(int temps[],int b[],int total);
void Original(int temps[],int total);

void opening(){
    printf("Search The Index Of Largest Random Number\n");
    printf("Starting point from 1\n");
}

void random(int b[],int total){ //make a random number

    srand(time(NULL));
    int i;

    int random;
    printf("Insert the range for random number : ");
    scanf("%d",&random);

    for(i =0;i < total;i++){
        b[i] = (rand()%random)+1;
    }

}


int main() {

    opening(); //call the opening function

    int totalOfIndex;
    printf("Total Of Index: ");
    scanf("%d",&totalOfIndex); //total of the array


    int b[totalOfIndex];
    random(b,totalOfIndex); //call the random function
    Original(b,totalOfIndex); //call the original function


    int i;
    int temps[totalOfIndex];

    for(i = 0;i < totalOfIndex;i++){ //i put the original list into a temp
            temps[i] = b[i];
    }

    while(1){       //sorting time
        int stop = 0;
        int temp;
        for(i = 0;i < totalOfIndex-1;i++){
            if(b[i] < b[i+1]){
                temp = b[i+1];
                b[i+1] = b[i];
                b[i] = temp;
                stop =1;
            }
            }
         if(stop ==0){
             break;  }

        }
    maxValue(temps,b,totalOfIndex); //calling the maxvalue function
	return 0;
}


void maxValue(int temps[],int b[],int total){
    int i;
    int tot =0;
    int large = b[0];


    for(i = 0;i < total;i++){
        tot +=1; //to calculate the index step by step
        if(temps[i] == b[0]){ //this is for find the largest number
            break;
        }
    }
    printf("\nThe Largest Number in index: %d\n",tot); //finally you got the result
}


void Original(int temps[],int total){
    int i;
    printf("\nOriginal List\n");
    for(i =0;i<total;i++){
        printf("%d ",temps[i]);
    }
}








/*

Made by VinsonP
Instagram : instagram.com/vinsonpersie
*/
