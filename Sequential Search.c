#include <stdio.h>
#define MAX 10

void sequentialSearch(int numbers[], int key)
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        if (key == numbers[i])
            return i;
    }
    return -1;
}

void binarySearch(int numbers[], int key)
{
    int l = 0, u = MAX - 1;
    int c, mid;
     while (l <= u){
         mid = (l + u) / 2;
         if (key == numbers[mid]){
             return mid;
         }
         else if (key < numbers[mid]){
             u = mid - 1;
         }
         else
             l = mid + 1;
    }
    return -1;
}

int main()
{
    int n, a[n],t, num;
    printf("Enter Array Size: ");
    scanf("%d", n);
    printf("Array Values: ");
    for(int i=0; i<n; i++)
    {
        scanf("&d", a[n]);
    }
    printf("Searching Data: ");
    scanf("%d", t);
    do
    {
        printf("Press 1: Sequential Search\n");
        printf("Press 2: Binary Search\n");
        printf("Press 3: Comparison Report\n");
        printf("Press 4: Exit\n\n");
        printf("Choose your option :");
        scanf("%d", &num);
        switch(num)
        {
            case 1:
                sequentialSearch(a,n);
                break;
            case 2:
                insertionSort(a,n);
                printf("According to the insertion sort, sorted data: ");
            case 3:
                if(binarySearch<sequentialSearch)
            {
                printf("Binary Search has taken less steps than sequential search to find the result");
            }
            else
            {
                printf("Sequential Search has taken less steps than Binary search to find the result\n");
            }
            break;
        case 4:
            printf("Program Terminated\n");
            break;
        }
    }
    while(num!=4);
    return 0;
}



