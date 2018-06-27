#include <bits/stdc++.h>

using namespace std;

void fun(map<string,char> &code);
string palabra(string v,int* inicio);

int main(){
	map<string,char> code;
	fun(code);
	int n,z=1;
	string v,aux;
	cin>>n;
	cin.ignore();
	while(n--){
		printf("Message #%d\n",z++);
		int inicio=0;
		getline(cin,v);
		while(inicio<v.size()){
			aux=palabra(v,&inicio);
			cout<<code[aux];
			inicio+=aux.size()+1;
		}
		cout<<endl;
		if(n) cout<<endl;
	}

	return 0;
}

string palabra(string v,int* inicio){
	int con=0;
	for(int i= *inicio; i<=v.size() ;i++,con++){
		if(v[i]==' ' && i==(*inicio)){
			cout<<" ";
			(*inicio)++;
			con--;
		}
		else if(v[i]==' ') return v.substr(*inicio,con);
		else if(i==v.size()) return v.substr(*inicio,con);
	}
}

void fun(map<string,char> &code){
	code[".-"] = 'A';
	code["-..."] = 'B';
	code["-.-."] = 'C';
    code["-.."] = 'D';
    code["."] = 'E';
    code["..-."] = 'F';
    code["--."] = 'G';
    code["...."] = 'H';
    code[".."] = 'I';
    code[".---"] = 'J';
    code["-.-"] = 'K';
    code[".-.."] = 'L';
    code["--"] = 'M';
    code["-."] = 'N';
    code["---"] = 'O';
    code[".--."] = 'P';
    code["--.-"] = 'Q';
    code[".-."] = 'R';
    code["..."] = 'S';
    code["-"] = 'T';
    code["..-"] = 'U';
    code["...-"] = 'V';
    code[".--"] = 'W';
    code["-..-"] = 'X';
    code["-.--"] = 'Y';
    code["--.."] = 'Z';
    code["-----"] = '0';
    code[".----"] = '1';
    code["..---"] = '2';
    code["...--"] = '3';
    code["....-"] = '4';
    code["....."] = '5';
    code["-...."] = '6';
    code["--..."] = '7';
    code["---.."] = '8';
    code["----."] = '9';
    code[".-.-.-"] = '.';
    code["--..--"] = ',';
    code["..--.."] = '?';
    code[".----."] = '\'';
    code["-.-.--"] = '!';
    code["-..-."] = '/';
    code["-.--."] = '(';
    code["-.--.-"] = ')';
    code[".-..."] = '&';
    code["---..."] = ':';
    code["-.-.-."] = ';';
    code["-...-"] = '=';
    code[".-.-."] = '+';
    code["-....-"] = '-';
    code["..--.-"] = '_';
	code[".-..-."] = '\"';
	code[".--.-."] = '@';
}