/*DFS BFS of graph */
#include <bits/stdc++.h>
using namespace std;

#define MAX 7
struct Vertex
{
	int label;
	bool isVisited;
};

int adjMat[MAX][MAX];
stack<int> stk;
queue<int> q;
int vCount=0;
vector<Vertex *> v;

void addVertex(int data){
	Vertex* ver = new Vertex();
	ver->label = data;
	ver->isVisited = false;
	v.push_back(ver);
	vCount++;
}

void addEdge(int l, int r){
	adjMat[l][r] = 1;
	adjMat[r][l] = 1;
}

int getAdjacent(int idx){
	for(int i=0;i<vCount;++i){
		if(adjMat[idx][i]==1 && v[i]->isVisited==false)
			return i;
	}
	return -1;
}

void displayDFS(){
	stk.push(0);
	cout<<v[0]->label<<" ";
	v[0]->isVisited = true;
	while(!stk.empty()){
		int adj = getAdjacent(stk.top());
		if(adj==-1){
			stk.pop();
		}
		else{
			cout<<v[adj]->label<<" ";
			v[adj]->isVisited = true;
			stk.push(adj);
		}
	}
	for(int i=0;i<vCount;i++)
		v[i]->isVisited = false;
	return;
}

void displayBFS(){
	q.push(0);
	cout<<v[0]->label<<" ";
	v[0]->isVisited = true;
	int adj;
	while(!q.empty()){
		while((adj=getAdjacent(q.front())) != -1){
			cout<<v[adj]->label<<" ";
			q.push(adj);
			v[adj]->isVisited = true;
		}
		q.pop();
	}
	for(int i=0;i<vCount;++i)
		v[i]->isVisited = false;
	return;
}
int main()
{
    addVertex(0);
    addVertex(1);
    addVertex(2);
    addVertex(3);
    addVertex(4);
    addVertex(5);
    addVertex(6);

    addEdge(0,1);
    addEdge(1,2);
    addEdge(2,3);
    addEdge(3,4);
    addEdge(4,5);
    addEdge(0,4);
    addEdge(4,6);

    cout<<"DFS: ";
    displayDFS();
    cout<<endl;
    cout<<"BFS: ";
    displayBFS();
    cout<<endl;
    return 0;
}