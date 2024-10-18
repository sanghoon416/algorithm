#include <iostream>
#include <queue>
#define pii pair<int,int>
#define ppp pair<pii,pii>
using namespace std;

int n,m,t;
int graph[35][35];
//int visit[35][35];
deque<ppp> dq;

void input(){
	cin >> n >> m >> t;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> graph[i][j];
		}
	}
}

int bfs(){
	int dx[4] = {-1,0,1,0};
	int dy[4] = {0,-1,0,1};
	
	dq.push_back({{0,t},{0,0}});
	
	while(!dq.empty()){
		int cost = dq.front().first.first;
		int time = dq.front().first.second;
		int x = dq.front().second.first;
		int y = dq.front().second.second;
		dq.pop_front();
		//cout << "현위치 x : " << x << " y : " << y << " cost : " << cost << " time : " << time << "\n";
		
		if(x == n-1 && y == m-1){
			return cost;
		}
		if(time == 0){
			continue;
		}
		//if(visit[x][y]){
		//	continue;
		//}
		//visit[x][y] = true;
		
		for(int i=0;i<4;i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(nx < 0 || ny < 0 || nx >= n || ny >= m){
				continue;
			}
			
			if(graph[nx][ny] == 0){
				continue;
			}
			else if(graph[x][y] == 2){
				if(graph[nx][ny] == 1){
					dq.push_back({{cost+1,time-1},{nx,ny}});
				}
				else{
					dq.push_front({{cost,time-1},{nx,ny}});
				}
			}
			else{
				dq.push_back({{cost+1,time-1},{nx,ny}});
			}
		}
		
	}
	return -1;
}

int main() {
	input();
	cout << bfs();
}