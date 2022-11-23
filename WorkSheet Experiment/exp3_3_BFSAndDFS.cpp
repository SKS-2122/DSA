#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void addEdge(vector<int> a[], int u, int v)
{
    a[u].push_back(v);
    a[v].push_back(u);
}
void DFS(vector<int> a[], int u, bool visited[])
{
    visited[u] = true;
    cout << u << " ";
    for (int i = 0; i < a[u].size(); i++)
    {
        if (visited[a[u][i]] == false)
        {
            DFS(a, a[u][i], visited);
        }
    }
}
void DFSUtil(vector<int> a[], int v)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            DFS(a, i, visited);
        }
    }
}
void BFS(vector<int> a[], int u, bool visited[])
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int temp = q.front();
        cout << temp << " ";
        for (int i = 0; i < a[temp].size(); i++)
        {
            if (visited[a[temp][i]] == false)
            {
                q.push(a[temp][i]);
                visited[a[temp][i]] = true;
            }
        }
    }
}
void BFSUtil(vector<int> a[], int v)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            BFS(a, i, visited);
        }
    }
}
int main()
{
    int length;
    cout << "Enter the number of vertices: ";
    cin >> length;
    vector<int> adj[length];
    for (int iterator = 0; iterator < length; iterator++)
    {
        int u, v;
        cout << "Enter the vertices: ";
        cin >> u >> v;
        addEdge(adj, u, v);
    }
    DFSUtil(adj, length);
    BFSUtil(adj, 0);
}
/*a. BFS
Algorithm: 
The algorithm works as follows: 
1. Start by putting any one of the graph's vertices at the back of a queue. 
2. Take the front item of the queue and add it to the visited list. 
3. Create a list of that vertex's adjacent nodes. Add the ones which aren't in the visited 
list to the back of the queue. 
4. Keep repeating steps 2 and 3 until the queue is empty. 
The graph might have two different disconnected parts so to make sure that we cover every 
vertex, we can also run the BFS algorithm on every node 

b) Depth-first search: Algorithm: 
The DFS algorithm works as follows: 
1. Start by putting any one of the graph's vertices on top of a stack. 
2. Take the top item of the stack and add it to the visited list. 
3. Create a list of that vertex's adjacent nodes. Add the ones which aren't in the visited 
list 
to the top of the stack.
4. Keep repeating steps 2 and 3 until the stack is empty.*/