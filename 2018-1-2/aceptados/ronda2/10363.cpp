#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

bool fun(char** v);

int main(){
	int n;
	cin>>n;
	char** m=(char**)malloc(sizeof(char*)*3);
	for(int i=0; i<3 ;i++) m[i]=(char*)malloc(sizeof(char)*3);
	while(n--){
		scanf("%s %s %s",m[0],m[1],m[2]);
		/*for(int i=0; i<3 ;i++){		imprimo las matrices
			printf("%s\n",m[i]);
		}*/
		if(fun(m))cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	for(int i=0; i<3 ;i++) free(m[i]);
	free(m);
	return 0;
}

bool fun(char** v){
	int num_x=0;
	int num_o=0;
	for(int i=0; i<3 ;i++){
		for(int j=0; j<3 ;j++){
			if(v[i][j]=='X') num_x++;
			else if(v[i][j]=='O') num_o++;
		}
	}
	if(!(num_x==num_o || num_x==num_o+1)) return false;
	bool win_x=false;
	bool win_o=false;
	for(int i=0; i<3 ;i++){
        if(v[i][0] == 'X' && v[i][0] == v[i][1] && v[i][1] == v[i][2]) win_x = true;
        if(v[0][i] == 'X' && v[0][i] == v[1][i] && v[1][i] == v[2][i]) win_x = true;
		if(v[i][0] == 'O' && v[i][0] == v[i][1] && v[i][1] == v[i][2]) win_o = true;
        if(v[0][i] == 'O' && v[0][i] == v[1][i] && v[1][i] == v[2][i]) win_o = true;
	}
    if(v[0][0] == 'X' && v[0][0] == v[1][1] && v[1][1] == v[2][2]) win_x = true;
    if(v[2][0] == 'X' && v[2][0] == v[1][1] && v[1][1] == v[0][2]) win_x = true;
	if(v[0][0] == 'O' && v[0][0] == v[1][1] && v[1][1] == v[2][2]) win_o = true;
    if(v[2][0] == 'O' && v[2][0] == v[1][1] && v[1][1] == v[0][2]) win_o = true;

    if(win_x && win_o) return false;
    if(!win_x && !win_o) return true;
    if(win_x && num_x==num_o+1) return true;
    if(win_o && num_x==num_o) return true;
    return false;
}