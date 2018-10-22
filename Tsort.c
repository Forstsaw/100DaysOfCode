
#include <stdio.h>
#include <stdlib.h>
int comp (const void * elem1, const void * elem2)
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}
int main(int argc, char* argv[])
{
    int n;
    scanf("%d",&n);
    int x[n];
    int i;
    for(i = 0;i < n;i++){
        scanf("%d",&x[i]);
    }
    qsort (x, sizeof(x)/sizeof(*x), sizeof(*x), comp);

    for (i = 0 ; i < n ; i++)
        printf ("%d ", x[i]);

    return 0;
}
