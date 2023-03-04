//D. Easy Edit Distance

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        string str1, str2;

        cin>>str1;
        cin>>str2;

        int m = str1.size();
        int n = str2.size();

        str1 = '\0' + str1;
        str2 = '\0' + str2;

        int editdistance[n+1][m+1];

        for(int i = 0; i < n+1; i++)
        {
            for(int j = 0; j < m+1; j++)
            {
                if(j==0)
                {
                    editdistance[i][j] = i;
                }
                else if(i==0)
                {
                    editdistance[i][j] = j;
                }
                else if(str1[j] == str2[i])
                {
                    editdistance[i][j] = editdistance[i-1][j-1];
                }
                else
                {
                    int mn = min(editdistance[i-1][j], editdistance[i][j-1]);
                    editdistance[i][j] = 1 + min(mn, editdistance[i-1][j-1]);
                }
            }
        }


        cout<<""<<editdistance[n][m]<<endl;
        }

}
