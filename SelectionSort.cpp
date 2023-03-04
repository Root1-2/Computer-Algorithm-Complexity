#include <bits/stdc++.h> //header file that include every standard library

// Selection Sort
using namespace std; //namespace is a collection of identifiers of the C++ standard library, which
                    // is defined in std

int main() //main function
{
    int n;  //declaring integer variable n, denoting the size of array
    cin>>n; // taking n as input from user
    int num[n];     // declaring n size array named num

    for (int i=0; i<n; i++) //loop for taking array as an input from user
    {
        cin>>num[i];    //saving the value taken from user into num array
    }

    for (int i = 0; i < n; i++) //outer loop for n passes of selection sort, where i is the picked
    {                           // value to compare with
        for (int j = i+1; j < n; j++)   //inner loop for n passes of selection sort, where j is the
        {                               // value to compare with picked value
            if(num[i] > num[j])         //if the picked value is greater than the compared value
            {
                swap(num[i], num[j]);   //then swap those value
            }
        }
    }

    for(int i = 0; i < n; i++)  //loop for printing the array
    {
        cout<<num[i]<<" ";      //showing the output of num array and adding a space after printing each value
    }
    cout<<endl;                 //printing end line

    return 0;               //program executed successfully
}


// Input case:
// 5
// 5 6 8 1 2
// 1 2 5 6 8
