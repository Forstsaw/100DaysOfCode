#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r-l)/2;
        if (arr[m] == x){
            return m;
        }

        if (arr[m] < x){
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }


    return -1;
}

int main()
{
    printf("Binary Search\n");
    printf("Number of Array: ");
    int a;
    scanf("%d",&a);
    int arr[a];
    int i,x;


    printf("Insert Number to List: ");
    for(i = 0; i < a;i++){
        scanf("%d",&arr[i]);
    }

    printf("Check Number: ");
    scanf("%d",&x);

    int n = sizeof(arr)/ sizeof(arr[0]);



    int result = binarySearch(arr, 0, n-1, x);
    printf("Your array in index %d",result);
    return 0;
}
