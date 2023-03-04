#include <stdio.h>


void LinSearch();
void BinSearch();
void InsertionSort();

int main()
{
    int arraysize, key, i;
    int Array[100];
    scanf("%d", &arraysize);
    for(i = 0; i < arraysize; i++)
    {
        scanf("%d", &Array[i]);
        //printf("%d ", Array[i]);
    }


InsertionSort(Array, arraysize);

BinSearch(Array, arraysize, key);


    //printf("\nEnter the key you want to search\n");
    scanf("%d", &key);

    for (i = 0; i < arraysize ; i++)
        printf("%d ", Array[i]);

    printf("\n2 3");



    return 0;

}


void InsertionSort(int Array[], int arraysize)

{
    //printf("Testing");
    int i;
    int position;
    int temp;

    for(i=1;  i<arraysize; i++)
    {
        temp = Array[i];
        position = i;

        while(position>0 && Array[position-1]<temp)
        {
            Array[position] = Array[position-1];
            position--;
        }
        Array[position] = temp;
    }


    //for (i = 0; i < arraysize ; i++)
       // printf("%d ", Array[i]);
}

void BinSearch(int Array[], int arraysize, int key)
{
    //printf("testing");
    int count = 1;
    int low = 0;
    int high = arraysize-1;
    int flag = 0;
    int position = 1;

    while(low<=high)
    {

        int mid = (low+high)/2;


        if(Array[mid]== key)
        {
            position = position+ mid;
            flag = 1;
            break;
        }

        if(Array[mid]<key)
        {
            high=mid;
        }

        if(Array[mid]>key)
        {
            low++;
        }
        count++;
    }
}







