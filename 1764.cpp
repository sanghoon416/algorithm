#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

unordered_map<string,bool> mp;
vector<string> ans;
int n,m;
string name;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL); 

    cin >> n >> m;

    for(int i=0;i<n;i++){
        cin >> name;
        mp[name] = true;
    }

    for(int i=0;i<m;i++){
        cin >> name;
        
        if(mp[name]){
            ans.push_back(name);
        }
    }

    sort(ans.begin(), ans.end());

    cout << ans.size() << "\n";
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << "\n";
    }
    
}