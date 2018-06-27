#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v;
	int n;
	while(true){
		cin>>n;
		if(n==0) break;
		for(int i=0; i<n ;i++){
			int a; cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		vector<int>::iterator it;
		for(it=v.begin(); it!= v.end() ;it++){
			cout<<*it;
			if(it!= v.end() -1) cout<<" ";
		}
		v.clear();
		cout<<endl;
	}
	return 0;
}