//F. Easy Knapsack

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int o,w;        //o = number of object, w = object's weight
    cin>>o;
    cin>>w;

    int profit[o], weight[o];

    for (int i = 0; i < o; i++)
    {
        cin >> profit[i];
    }

    for (int i = 0; i < o; i++)
    {
        cin >> weight[i];
    }

    int v[o+1][w+1];

    for(int i = 0; i < o+1; i++)
    {
        for(int j = 0; j< w+1; j++)
        {
            if(i==0 || j==0)
            {
                v[i][j] = 0;
            }
            else if(j>=weight[i-1])
            {
                v[i][j] = max(v[i-1][j], v[i-1][j-weight[i-1]] + profit[i-1]);    //formula for filling cell
            }
            else
            {
                v[i][j] = v[i-1][j];
            }
        }
    }

    for(int i = 0; i < o+1; i++)
    {
        for (int j = 0; j < w+1; j++)
        {
            cout << v[i][j]<<" ";
        }
        cout << endl;
    }

    cout<<"Maximum Profit: "<<v[o][w]<<endl;

    return 0;

    //I have tried to match it with the sample input from the problem, but
    //I could not understand the input section, how to implement with what I have learned from your class,
    //Sir. I did this problem with taking input of object and it's weight.

}
