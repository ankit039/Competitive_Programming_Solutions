#include <iostream>
#include <queue>

using namespace std;

int find(int N, int m)
{
	queue<int> city;
	for(int i=1; i<=N; i++){
		city.push(i);
	}
	
	while(city.size() != 1){
		city.pop();
		for(int i=1; i<m; i++){
			city.push(city.front());
			city.pop();
		}
	}
	
	if(city.front() == 13)
		return true;
		
	return false;
}

int main()
{
	int N;
	bool found;
	
	while(cin >> N && N){
		
		for(int m=1; ; m++){
			found = find(N, m);
			if(found){
				cout << m << endl;
				break;
			}
		}
		
	}

	return 0;
}
