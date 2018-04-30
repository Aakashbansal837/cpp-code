#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	for (int i=1;i<=t;i++){
		int n,m;
		cin>>n>>m;
		int a[m][m];
		int x,y,w;
		for(int j;j<=m;j++){
			cin>>x>>y>>w;
			a[x][y] = w;
		}
		int start;
		cin>>start;
		for(int i=1;i<=m;i++){
			int path=-1;
			if (i != start){
				path=findpath(start,i);
			}
			cout<<path<<" ";
		}
	}
	
	return 0;
}
