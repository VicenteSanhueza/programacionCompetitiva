#include <bits/stdc++.h>

using namespace std;

int main(){
    union{
        struct{
            int byte1 : 8;
            int byte2 : 8;
            int byte3 : 8;
            int byte4 : 8;
        };
        int num;
    }A,B;
    while(cin>>A.num){
        B.byte1=A.byte4;
        B.byte2=A.byte3;
        B.byte3=A.byte2;
        B.byte4=A.byte1;
        cout<<A.num<<" converts to "<<B.num<<endl;
    }
    return 0;
}