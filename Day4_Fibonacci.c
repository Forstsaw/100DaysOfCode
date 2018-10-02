#include <stdio.h>

int main(){

    int input;
    printf("Input the number of fibonacci: ");
    scanf("%d",&input);

    int result = fibo(input);
    printf("Result of %d is %d",input,result);
    return 0;
}


int fibo(int a){
    if(a==1 || a == 2){
        return 1;
    }
    else{
        return fibo(a-1)+fibo(a-2);
    }

}
