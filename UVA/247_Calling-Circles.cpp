#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cstring>

using namespace std;

void dfs2(vector<int> *revAdjList, bool *visited, vector<vector<int> > &circles, int num, int u)
{
	visited[u] = true;
	circles[num].push_back(u);
	for(int i=0; i<revAdjList[u].size(); i++){
		int v = revAdjList[u][i];
		if(!visited[v]){
			dfs2(revAdjList, visited, circles, num, v);
		}
	}
}

void dfs1(vector<int> *adjList, bool *visited, vector<int> &topoSort, int u)
{
	visited[u] = true;
	for(int i=0; i<adjList[u].size(); i++){
		int v = adjList[u][i];
		if(!visited[v])
			dfs1(adjList, visited, topoSort, v);
	}
	topoSort.push_back(u);
}

int main()
{
	int n, m;
	string name1, name2;
	int testCase = 1;

	while(cin >> n >> m && n && m)
	{
		map<string, int> nameToNum;
		map<int, string> numToName;

		vector<int> adjList[n+1], revAdjList[n+1];
		bool visited[n+1];
		memset(visited, false, n+1);

		for(int i=0, index=1; i<m; i++)
		{
			cin >> name1 >> name2;

			if(!nameToNum[name1]){
				nameToNum[name1] = index;
				numToName[index] = name1;
				index++;
			}
			if(!nameToNum[name2]){
				nameToNum[name2] = index;
				numToName[index] = name2;
				index++;
			}

			adjList[nameToNum[name1]].push_back(nameToNum[name2]);
			revAdjList[nameToNum[name2]].push_back(nameToNum[name1]);
		}

		vector<int> topoSort;
		for(int u=1; u<=n; u++){
			if(!visited[u]) dfs1(adjList, visited, topoSort, u);
		}
		reverse(topoSort.begin(), topoSort.end());

		vector<vector<int> > circles;
		vector<int> row;
		memset(visited, false, n+1);
		int num = -1;

		for(int i=0; i<topoSort.size(); i++){
			int u = topoSort[i];
			if(!visited[u]){
				num++;
				circles.push_back(row);
				dfs2(revAdjList, visited, circles, num, u);
			}
		}

		if(testCase != 1) cout << endl;

		cout << "Calling circles for data set " << testCase++ << ":" << endl;
		for(int i=0; i<circles.size(); i++){
			for(int j=0; j<circles[i].size()-1; j++)
				cout << numToName[circles[i][j]] << ", ";
			cout << numToName[circles[i].back()] << endl;
		}
	}

	return 0;
}
