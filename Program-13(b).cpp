
// Q: Graph traversal DFS
#include<iostream>
#include<stack>
#include<list>
using namespace std;
class DFS
{
   private:
     int v;
   list<int>*adj;
   public:
    DFS(int v)
    {
        this->v=v;
        adj=new list<int>[v];
    }
    void addEdge(int s,int d);
    void dfsUtils(int v,bool visited[]);
    void dfs(int start);
};
void DFS::addEdge(int s,int d)
{
    adj[s].push_back(d);
}
void DFS::dfs(int start)
{
    bool *visited=new bool[v];
    for(int i=0;i<v;i++)
        visited[i]=false;
    dfsUtils(start,visited);
}
void DFS::dfsUtils(int v,bool visited[])
{
    visited[v]=true;
    cout<<v<<" ";
    list<int>::iterator it;
    for(it=adj[v].begin();it!=adj[v].end();it++)
    {
        if(!visited[*it])
            dfsUtils(*it,visited);
    }
}
int main()
{
    int vertex,edges;
    cout<<"Enter no. of verteces"<<endl;
    cin>>vertex;
    DFS d(vertex);
    cout<<"Enter no of edges"<<endl;
    cin>>edges;
    int x,y;
    for(int i=0;i<edges;i++)
    {
        cout<<"Enter (edge) source to destination"<<endl;
        cin>>x>>y;
        d.addEdge(x,y);
    }
    int s;
    cout<<"Enter start resource"<<endl;
    cin>>s;
    cout<<"DFS traversal: ";
    d.dfs(s);
}
