#include <bits/stdc++.h>

#define I(c) ((c == '(' || c == ')')?1:(c == '+' || c == '-')?2:(c == '*' || c == '/')?3:0)

using namespace std;

int main() {
	int n; cin >> n;
	
	cin.ignore();
	cin.ignore();
	int z=0;

	while (n--){

		if(z>0) puts("");
		z++;
		stack<char> ope;
		char formula[51];
		string v;
		int tam = 0;

		while (true){
			getline(cin, v);

			if(v.size() == 0 || !cin) break;

			if(v[0]>='0' && v[0]<='9') {
				formula[tam++] = v[0];
				continue;
			}if(v[0] == ')') {
				while (ope.top() != '(') {
					formula[tam++] = ope.top();
					ope.pop();
				}
				ope.pop();
				continue;
			}if(v[0] == '(') {
				ope.push('(');
				continue;
			}
			if (ope.empty() || I(ope.top()) < I(v[0])) {
				ope.push(v[0]);
				continue;
			}
			while(!ope.empty() && (I(ope.top()) >= I(v[0]))) {
				formula[tam++] = ope.top();
				ope.pop();
			}
			ope.push(v[0]);
		}

		while(!ope.empty()) {
			formula[tam++] = ope.top();
			ope.pop();
		}
		formula[tam] = '\0';

		cout<<formula<<endl;
	}
	return 0;
}