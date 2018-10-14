#include <stdio.h>

int finder(int arr[],int n,int x){
    int i;

    for(i = 0;i < n;i++){
        if(arr[i] == x){
            return i;
        }
    }

    return -1;
}

int main() {
    printf("Searching Number With Linear Search Algorithm\n\n");

    int totalofcase;
    int totalNumberOfElement;
    int findNumber;
    printf("Input number of test case : ");
    scanf("%d",&totalofcase);
    int i,j;

    for(i = 0;i <totalofcase;i++){
        printf("Input total number of array: ");
        scanf("%d",&totalNumberOfElement);
        printf("Search Number: ");
        scanf("%d",&findNumber);
    	int array[totalNumberOfElement];
        printf("Input the number of array: ");
    	for(j = 0;j <totalNumberOfElement;j++){
    	    scanf("%d",&array[j]);
    	}
    	int res = finder(array,totalNumberOfElement,findNumber);
    	printf("Here your number in index %d",res);

    }

	return 0;
}
