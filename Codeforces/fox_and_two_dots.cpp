Problem Statement : https://codeforces.com/contest/510/problem/B

Solution : 

#include<bits/stdc++.h>
 
using namespace std;
 
static char mat[51][51];
static bool visited[51][51],ans=false;
static int val[51][51];
 
int n,m;
 
void dfs(int r,int c,int pr,int pc,int counter){
	if(visited[r][c]){
		if(abs(val[pr][pc]-val[r][c])>=3){
			ans=true;
		}
		return;
	}
	visited[r][c] = true;
	val[r][c] = counter;
	int a[]= {1,0,-1,0};
	int b[]= {0,1,0,-1};
	for(int i=0;i<4;i++){
		int r1 = r+a[i];
		int c1 = c+b[i];
		if(r1 >= 0 && r1 < n && c1 >= 0 && c1 < m){
			if(mat[r1][c1] == mat[r][c])
				dfs(r1,c1,r,c,++counter);
		}
	}
}
int main(){
	cin>>n>>m;
	memset(visited,false,sizeof(visited));
	for(int i=0;i<n;i++){
		scanf("%s",mat[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(!visited[i][j]){
				dfs(i,j,-1,-1,1);
			}
		}
	}
		
    puts(ans ? "Yes" : "No");
	
	return 0;
}
