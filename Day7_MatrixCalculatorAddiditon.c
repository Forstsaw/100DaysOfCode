#include <stdio.h>


int main(){
    printf("\t\t\t\tMatrix Addition Calculator\n");
    printf("\t\t\t\t      Made By Forstsaw\n");
    printf("\t\t\t\t  version 1.0\n\n\n\n");

    int numRow,numCol,i,j;
    printf("Number of Rows: ");
    scanf("%d",&numRow);
    printf("Number of Columns: ");
    scanf("%d",&numCol);
    int a[numRow][numCol],b[numRow][numCol];


    int total[numRow][numCol];
    int times = numRow*numCol;
    printf("Input %d numbers of your first matrix **started from first row**:\n",times);
    for(i = 0;i < numCol;i++){
        for(j =0;j < numRow;j++){
            printf(">> ");
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nYour first Matrix\n");
    for(i =0;i < numCol;i++){
        for(j =0;j < numRow;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nInput %d numbers of your second matrix **started from first row**:\n",times);
    for(i = 0;i < numCol;i++){
        for(j =0;j < numRow;j++){
            printf(">> ");
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nYour second Matrix\n");
    for(i =0;i < numCol;i++){
        for(j =0;j < numRow;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    for(i =0;i < numCol;i++){
        for(j =0;j < numRow;j++){
            total[i][j] = a[i][j]+b[i][j];
        }
    }

    printf("\nResult: \n");
    for(i =0;i < numCol;i++){
        for(j =0;j < numRow;j++){
            printf("%d ",total[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    char res;
    printf("Restart?y/n\n>> ");
    scanf("%s",&res);


    if(res == 'y'){
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        main();

    }
    else{
        printf("\nGoodbye");
    }



    return 0;
}

