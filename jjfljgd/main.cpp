#include <bits/stdc++.h>
using namespace std;
int path=0;
int visited[50][50];

void dfs(vector<string> v,int visited[50][50],int rows,int cols,int x,int y,int para,int cur)
{
    //cur++;
    //path=max(path,cur);
    int arr1[]={-1,-1,-1,0,0,1,1,1};
    int arr2[]={1,-1,0,1,-1,0,-1,1};
    if(x<0 || x>=rows || y<0 || y>=cols || v[x][y]!=para || visited[x][y])
    {

    }
    else
    {
        cur++;
        path=max(path,cur);
        visited[x][y]=1;
        for(int i=0;i<8;i++)
        {
            dfs(v,visited,rows,cols,x+arr1[i],y+arr2[i],para+1,cur);
        }

    }
}



int main()
{
    int h,k;
    cin>>h>>k;
    while(h!=0 && k!=0)
    {
        vector<string> v;
        memset(visited,0,sizeof(visited));
        string s;
        for(int i=0;i<h;i++)
        {
            cin>>s;
            v.push_back(s);
        }
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<k;j++)
            {
                if(v[i][j]==65 && !visited[i][j])
                {
                    dfs(v,visited,h,k,i,j,65,0);
                }
            }
        }
        cout<<path<<'\n';
        cin>>h>>k;
    }


    return 0;
}
