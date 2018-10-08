#include <stdio.h>


int Add(int a);
int multiplication(int a);
int subtraction(int a);
int division(int a);
int main(){
    printf("Factorial Calculator\n");
    printf("Made By ForstSaw\n");

    int a,b,c;
    printf("Input First Factorial Number : ");
    scanf("%d",&a);
    printf("Input Second Factorial Number : ");
    scanf("%d",&b);

    printf("\nChoose number within 1-4\n");
    printf("1.Add\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf(">> ");
    scanf("%d",&c);
    int tambah,kurang,kali,bagi;
    if(c == 1){
       tambah = Add(a)+Add(b);
       printf("Result %d",tambah);
    }
    else if(c == 2){
        kurang = subtraction(a)-subtraction(b);
        printf("Result %d",kurang);
    }
    else if(c == 3){
        kali = multiplication(a)*multiplication(b);
        printf("Result %d",kali);
    }
    else if(c == 4){
        bagi = division(a)/division(b);
        printf("Result %d",bagi);
    }

    else{
        printf("\nInvalid Number\n");
        return main();
    }


    return 0;
}


int Add(int a){


    if(a == 1){
        return 1;
    }
    else{
       return a * Add(a-1);
    }

}


int multiplication(int a){

    if(a == 1){
        return 1;
    }
    else{
       return a * Add(a-1);
    }

}

int subtraction(int a){

    if(a == 1){
        return 1;
    }
    else{
       return a * Add(a-1);
    }

}

int division(int a){

    if(a == 1){
        return 1;
    }
   else{
       return a * Add(a-1);
    }
}



