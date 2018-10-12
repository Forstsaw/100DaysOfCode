#include <stdio.h>

int main(){
    printf("Prime Number\n");
    printf("Made By ForstSaw\n");
    printf("     Day 10\n\n");
    int n,j,i,k = 3;

    printf("Insert a range of number: ");
    scanf("%d",&n);
    printf("Here your Prime number\n");
    printf("2 ");

    for(i = 2;i < n;i++){
        for(j = 2;j <= k-1;j++){

            if(k % j ==0){
                break;
            }
        }
            if(j == k){
                printf("%d ",k);

            }


        k++;

    }




    return 0;
}




