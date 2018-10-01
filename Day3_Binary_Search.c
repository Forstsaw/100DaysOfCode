#include <stdio.h>

int main(){

    int find;
    printf("Input the number that you wanted: ");
    scanf("%d",&find);
    int x[10] = {1,5,27,10,2,5,6,1,3,4};


    int i;
    int len =1;
    int j;

    for(i = 0;i < 10;i++){
        if(x[i] == find){

            printf("Found it,its in index %d\n",len);
            }



          len++;

    }


    return 0;
}
