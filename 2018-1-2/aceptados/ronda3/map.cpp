#include <iostream>
#include <map>

using namespace std;

int main (){
  map<char,int> mymap;

  // first insert function version (single parameter):
  mymap.insert (pair<char,int>('a',100));
  mymap.insert (pair<char,int>('z',200));

  pair<char,int>('t',548);
  map<char,int>::iterator ite;
  ite=mymap.find(pair.first);
  if(ite != mymap.end()){
    cout<<"se inserto"<<endl;
  }else{
    cout<< "no se ha insertado"<<endl;
    mymap[yeah.first]=yeah.second;
  }
  map<char,int>::iterator it;
  cout << "mymap contains:\n";
  for (it=mymap.begin(); it!=mymap.end(); it++){
    cout << it->first << " => " << it->second << '\n';
  }
  return 0;
}