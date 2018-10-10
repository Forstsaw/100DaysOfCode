#include <stdio.h>
#include <string.h>



int main(){
    printf("Password Security\n");
    printf("   Version 1.0\n");


    char first[10000];
    char second[10000];
    printf("\n\Please Insert a password\n");
    printf("Input password: " );
    gets(first);
    printf("retype the password: ");
    gets(second);

    int i;

    int checker = 0;

    for(i = 0;i < strlen(first);i++){
            if(first[i] == second[i]){
                checker += 1;
            }

    }

    if (checker == strlen(second)){
        printf("Access Success\n");
    }
    else{
        printf("Access Denied\n\n\n");
        main();
    }









    return 0;
}
