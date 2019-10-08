//Directed Acyclic Graph Topological Sort 
#include<bits/stdc++.h> 
using namespace std; 
  
// Adjacency list representation of graph 
class Graph 
{ 
    int V; 
    list<int> *adj; 
    public : 
        Graph(int V) 
        { 
            this->V = V ; 
            adj = new list<int>[V]; 
        } 
        void addEdge(int u, int v); 
        int getAdjacentVertex(int idx, bool visited[]);
        void topologicalSort();
        void topologicalSortUtil(int idx,stack<int>& stk,bool visited[]);
}; 
  
// add edge to graph 
void Graph :: addEdge ( int u, int v ) 
{ 
    adj[u].push_back(v); 
} 
  

//Get adjacent vertex of a Vertex
int Graph :: getAdjacentVertex(int idx, bool visited[]){
	for(auto i: adj[idx]){
		if(visited[i-1]==false)
			return i;
	}
 	return (-1); 
}

//utility function for topological sort
void Graph :: topologicalSortUtil(int idx,stack<int>& stk,bool visited[]){
	int adj;
	while((adj=getAdjacentVertex(idx,visited))!=-1){
		visited[adj-1]=true;
		topologicalSortUtil(adj,stk, visited);
	}
	stk.push(idx);
}

//Displays Graph element in Topological order
void Graph::topologicalSort(){
	stack<int> stk;
	bool visited[V];
	memset(visited,false,sizeof(visited));
	for(int i=1;i<V;i++){
		if(!visited[i-1]){
			visited[i-1]=true;
			topologicalSortUtil(i,stk,visited);		
		}
	}
	while(!stk.empty()){
		cout<<stk.top()<<" ";
		stk.pop();
	}
}
int main() 
{ 
	/*BOOLEAN VISITED[] HAS 0 based indexing*/
	/*ADJACENCY has 1 BASED INDEXING*/ 
    int V = 9; 
    Graph g(V); 
    g.addEdge(1,3); 
    g.addEdge(2,3); 
    g.addEdge(2,4); 
    g.addEdge(3,5); 
    g.addEdge(5,6);
    g.addEdge(5,8); 
    g.addEdge(4,6);
    g.addEdge(6,7); 
	cout<<"\nTopological Sort: ";
  	g.topologicalSort();
  	cout<<endl;
    return 0; 
} 