// Q.13 Graph traversing BFS //

#include<iostream>
#include<list>
#include<queue>
using namespace std;
class BFS
{
    int V;
    list<int>*adj;
   public: BFS(int v)
    {
        V=v;
        adj=new list<int>[V];
    }
    void addEdge(int s,int d);
    void bfs(int s);
};
void BFS::addEdge(int s,int d)
{
    adj[s].push_back(d);
}
void BFS::bfs(int start)
{
    bool *visited=new bool[V];
    for(int i=0;i<V;i++)
        visited[i]=false;
    queue<int>q;
    q.push(start);
    visited[start]=true;
      list<int>::iterator it;
    while(!q.empty())
    {
        start=q.front();
        cout<<start<<" ";
        q.pop();


        for(it=adj[start].begin();it!=adj[start].end();it++)
        {
            if(!visited[*it])
            {
                visited[*it]=true;
                q.push(*it);
            }

        }
    }
}
int main()
{
    cout<<"Enter no. of  vertices"<<endl;
    int v ;
    cin>>v;
    BFS b(v);
    cout<<"Enter number of edges"<<endl;
    int e;
    cin>>e;
    for(int i=0;i<e;i++)
    {
        cout<<"Enter (Edge) source to destination "<<endl;
        int x,y;
        cin>>x>>y;
        b.addEdge(x,y);
    }
    cout<<"Enter start vertex"<<endl;
    int start;
    cin>>start;
    b.bfs(start);

}
