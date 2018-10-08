#include <stdio.h>

int main(){

    float score;
    int lec,i;
    float totalLec =0;
    float lecture;

    printf("Input the total of lecture: ");
    scanf("%d",&lec);
    for(i = 0;i < lec;i++){
        printf("input [%d] Lecture: ",i);
        scanf("%f",&lecture);
        totalLec =totalLec + lecture;
    }
    score = totalLec /lec;

    if(score >= 90 && score <= 100){
        printf("You Got A");
    }
    else if(score >= 80 && score <= 90){
        printf("You Got B");
    }

    else if(score >= 70 && score <= 80){
        printf("You Got C");
    }

    else if(score >= 60 && score <= 70){
        printf("You Got D");
    }
    else if(score < 60 && score >=0){
        printf("Please Study more harder");
    }
    else{
        printf("Invalid Input\n");
        printf("Try Again\n");
        main();


    }
     printf("\nFinal Score: %.2f",score);


    return 0;
}
