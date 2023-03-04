//B. Easy LCS

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1, str2;
    getline(cin,str1);
    getline(cin,str2);

    int m = str1.size();
    int n = str2.size();

    int LCS[m+1][n+1];

    for(int i = 0; i < m+1; i++)
    {
        for(int j = 0;j < n+1;j++)
        {
            if(i==0 || j== 0)
            {
                LCS[i][j] = 0;
            }
            else if(str1[i-1] == str2[j-1])
            {
                LCS[i][j] = 1 + LCS[i-1][j-1];
            }
            else
            {
                LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);
            }
        }
    }

    for(int i = 0; i < m+1; i++)
    {
        for(int j = 0; j < n+1; j++)
        {
            cout<<LCS[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<""<<LCS[m][n]<<endl;


    return 0;
}
