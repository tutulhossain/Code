#include<iostream>
using namespace std;
#include<queue>
int n;
bool check(int pos)
{
    if(pos>=0&&pos<n)
        return true;
    else
        return false;
}
struct tool
{
    int a;
    int b;
};
void bfs(int si,int sj,int ei,int ej)
{
    tool ob;
    ob.a=si;
    ob.b=sj;
    vector < int > v[1000];
    int distant[400][400]={0};
    int visited[400][400]={0};
    queue < tool > q;
    q.push(ob);
    visited[ob.a][ob.b]=1;
    distant[ob.a][ob.b]=0;
    int go1[8]={-1,-2,-2,-1,1,2,2,1};
    int go2[8]={2,1,-1,-2,-2,-1,1,2};
    while(!q.empty())
    {
        tool font=q.front();
        if(font.a==ei&&font.b==ej)
        {
            break;
        }
        q.pop();
        for(int i=0;i<8;i++)
       {
          int current_position_i=font.a+go1[i];
          int current_position_j=font.b+go2[i];
          bool position1=check(current_position_i);
          bool position2=check(current_position_j);
          if(position1==true&&position2==true&&visited[current_position_i][current_position_j]!=1)
          {
             visited[current_position_i][current_position_j]=1;
             ob.a=current_position_i;
             ob.b=current_position_j;
             distant[ob.a][ob.b]=distant[font.a][font.b]+1;
             q.push(ob);
          }
        }
    }
    cout<<distant[ei][ej]<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int si,sj,ei,ej;
        cin>>n;
        int board[400][400];
        for(int j=0;j<=n;j++)
        {
          for(int k=0;k<=n;k++)
          {
            board[j][k]=0;
          }
        }
        cin>>si>>sj;
        cin>>ei>>ej;
        bfs(si,sj,ei,ej);
    }
    return 0;
}
