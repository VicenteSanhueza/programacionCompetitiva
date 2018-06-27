// multimap::insert (C++98)
#include <iostream>
#include <map>

using namespace std;

int main (){

  multimap<char,int> mymultimap;
  multimap<char,int>::iterator it;

  // first insert function version (single parameter):
  mymultimap.insert ( pair<char,int>('a',100) );
  mymultimap.insert ( pair<char,int>('z',150) );
  it=mymultimap.insert ( pair<char,int>('b',75) );

  // second insert function version (with hint position):
  mymultimap.insert (it, pair<char,int>('c',300));  // max efficiency inserting
  mymultimap.insert (it, pair<char,int>('z',400));  // no max efficiency inserting

  // third insert function version (range insertion):
  multimap<char,int> anothermultimap;
  anothermultimap.insert(mymultimap.begin(),mymultimap.find('c'));

  // showing contents:
  cout << "mymultimap contains:\n";
  for (it=mymultimap.begin(); it!=mymultimap.end(); ++it)
    cout << (*it).first << " => " << (*it).second << '\n';

  cout << "anothermultimap contains:\n";
  for (it=anothermultimap.begin(); it!=anothermultimap.end(); ++it)
    cout << (*it).first << " => " << (*it).second << '\n';

  return 0;
}