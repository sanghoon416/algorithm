#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool graph[1005][1005];
int n,m;
vector<int> lan;
vector<bool> visit;
int ans = 0;

void input(){
	int x,y;
	int tmp;
	
	cin >> n >> m;
	
	lan.push_back(0);
	visit.push_back(false);
	for(int i=0;i<n;i++){
		cin >> tmp;
		lan.push_back(tmp);
		visit.push_back(false);
	}
	
	for(int i=0;i<m;i++){
		cin >> x >> y;
		
		graph[x][y] = true;
		graph[y][x] = true;
	}
}

queue<int> q;
int bfs(int start, int target){
	visit[start] = true;
	q.push(start);
	
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		
		for(int i=1;i<=n;i++){
			if(graph[cur][i] == true){
				if(lan[i] == lan[start] || lan[i] == target){
					if(visit[i] == false){
						visit[i] = true;
						
						q.push(i);
					}
				}
			}
		}
	}
	
	int ret = 0;
	for(int i=0;i<visit.size();i++){
		if(visit[i]){
			ret += 1;
		}
	}
	
	return ret;
}

void reset(){
	for(int i=0;i<visit.size();i++){
		visit[i] = false;
	}
}

void solve(){
	for(int i=1;i<=10;i++){
		reset();
		int res = bfs(1,i);
		if(ans < res){
			ans = res;
		}
	}
}

int main() {
	input();
	solve();
	
	cout << ans;
	return 0;
}