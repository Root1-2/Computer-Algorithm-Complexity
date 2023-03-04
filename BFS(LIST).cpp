//BFS (LIST)
#include<bits/stdc++.h>

using namespace std;

vector<int>graph[100];
int n, e;
int visit[1000];
int adj[1000][1000];

void BFS(int s)
{
    queue<int>Q;
    visit[s] = 1;
    cout<<s<<" ";
    Q.push(s);

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();

        for(int i = 1; i <= n; i++)
        {
            if(visit[i] == 0 && adj[u][i] == 1)
            {
                visit[i] = 1;
                cout<<i<<" ";
                Q.push(i);
            }
        }
    }
}

int main()
{
    cin>>n>>e;
    int u,v;

    for(int i = 1; i <=e; i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    BFS(1);

    return 0;
}

//Input Case
//  7
//3 4 -1 0 6 2 3
