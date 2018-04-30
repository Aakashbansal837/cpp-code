#include<iostream>

using namespace std;

int main()
{
	int n,q,nn;
	long long int arr[300010][300010];
	cin>>n>>q;
	for (int i=0;i<n;i++){
		cin>>nn;
		for(int j=0;j<n;j++){
			cin<<arr[i][j];
		}
	}
	int q1,q2;
	for (int i=0;i<q;i++){
		cin>>q1>>q2;
		cout<<arr[q1][q2];
	}
	
	
	
	return 0;
}
