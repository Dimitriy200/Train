#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,ans=2,temp=2;
	cin>>n;
	int a[n];
	cin>>a[0]>>a[1];
	for(int i=2;i<n;i++)
	{	cin>>a[i];
		if((a[i-1]+a[i-2])==a[i])
			{ans++;
			if(ans>temp)
				temp=ans;
			}
		else
			{ans=2;
			}
	}
	if(n>=2)
		cout<<temp;
	else
		cout<<n;
	return 0;
}