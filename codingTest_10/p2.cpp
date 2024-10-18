#include <iostream>
using namespace std;

int n,m,k;
int f[100005];
int cost[100005];

void uni(int x, int y){
	if(f[x] == f[y]){
		return;
	}	
	
	
}

void input(){
	int x,y;
	
	cin >> n >> m;
	
	for(int i=1;i<=n;i++){
		f[i] = i;
	}
	
	for(int i=0;i<m;i++){
		cin >> x >> y;
	}
	
}

int main() {
	cout << -1;
}