//H. Easy LIS

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int list1[n], LIS[n];

        for(int i = 0; i < n; i++)
        {
            cin>>list1[i];
            LIS[i] = 1;
        }

        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(list1[j] < list1[i])
                {
                    LIS[i] = max(LIS[i], 1 + LIS[j]);
                }
            }
        }

        int mx = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            if(mx<LIS[i])
            {
                mx = LIS[i];
            }
        }
        cout<<""<<mx<<endl;

        cout<<"LIS is {";

        for(int i = 0; i < n; i++)
        {
            cout<<LIS[i]<<" ";          //could not match LIS with the given test case from the problem
        }
        cout<<"}";

        cout<<endl;
    }

}
