#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	cin.ignore();
	string v;	
	while(n--){
		int con;
		con=0;
		stack<char> st;
		getline(cin,v);
		for(int i=0; i<v.size() ;i++){
			if(v[i]=='(' || v[i]=='['){
				st.push(v[i]);
			}else if(v[i]==')' && !st.empty() && st.top()=='('){
				st.pop();
			}else if(v[i]==']' && !st.empty() && st.top()=='['){
				st.pop();
			}else{
				con=1;
				break;
			}
		}
		if(con==0 && st.empty()){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}