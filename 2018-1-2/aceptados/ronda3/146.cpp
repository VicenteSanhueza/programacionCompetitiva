#include <bits/stdc++.h>

using namespace std;

int main(){
	string v;
	string z ("#");
	while(cin>>v){
		if(!v.compare(z)) break;
		if(next_permutation(v.begin(),v.end())){
			cout<<v<<endl;
		}else{
			puts("No Successor");
		}
	}
	return 0;
}