#include <stdio.h>
#include <string.h>
int main(){
    printf("hey I'm gabriella from indonesia and my status is single and student.\n");
    printf("im single for too long so\n");
    char a[3];
    char b[3];

    printf("Do you love me? ");
    scanf("%s",a);

   if(strcmp(a,"yes") ==0){
    printf("i love u too <3\n");
    printf("[STATUS] : in relationship");
   }
   else{
    printf("do you have a reason for it?\n");
    scanf("%s",b);
    printf("Okay forget it\n");
    printf("[STATUS] : SINGLE!!!");
   }


    return 0;
}
