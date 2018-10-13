#include <stdio.h>

int main(){

    int a,b = 20000;
    printf("This Item Cost %d",b);
    printf("\nPayment: ");
    scanf("%d",&a);


    if(a < b){
        printf("\nSorry your money is not enough");
    }

    else{
        printf("Here your change %d",a-b);
        printf("\nThank you");
    }

}
