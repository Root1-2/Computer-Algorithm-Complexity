//Edit Distance
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str1, str2;

    getline(cin,str1);
    getline(cin,str2);

    int m = str1.size(), n = str2.size();

    str1 = '\0' + str1;
    str2 = '\0' + str2;

    int ED[n+1][m+1];

    for(int i = 0; i < n+1; i++)
    {
        for(int j = 0; j < m+1; j++)
        {
            if(j == 0)
            {
                ED[i][j] = i;
            }
            else if(i == 0)
            {
                ED[i][j] = j;
            }
            else if(str1[j] == str2[i])
            {
                ED[i][j] = ED[i-1][j-1];
            }
            else
            {
                int mn = min(ED[i-1][j], ED[i][j-1]);
                ED[i][j] = 1 + min(mn, ED[i-1][j-1]);
            }
        }
    }

    for(int i = 0; i < n+1; i++)
    {
        for(int j = 0; j < m+1; j++)
        {
            cout<<ED[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Minimum Edit Distance: "<<ED[n][m]<<endl;
}
