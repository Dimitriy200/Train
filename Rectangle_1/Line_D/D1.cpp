#include<bits/stdc++.h>

using namespace std;

int n,x,y,a[100],b[100];

int main(){
	cin>>n;
	for(int i=1;i<=n*n;i++){
		cin>>x>>y;
		if(!a[x]&&!b[y]){
			a[x]=1;
			b[y]=1;
			cout<<i<<' ';
		}
	}
	return 0;
}
