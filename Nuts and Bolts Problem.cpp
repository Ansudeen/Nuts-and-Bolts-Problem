#include <iostream>
#include <map>
#include <set>
using namespace std;

char symbols[9]={'!', '#', '$', '%', '&', '*', '@', '^', '~'};

int main() {
	int T,N;
	char c;
	map<char,int> m;
	set<char> s;
	set<char>::iterator sitr;
	map<char,int>::iterator it;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	       cin>>c;
	       m.insert(make_pair(c,0));
	    }
	    for(int i=0;i<N;i++)
	    {
	        cin>>c;
	        it=m.find(c);
	        if(it!=m.end())
	        {
	            ++it->second;
	        }
	    }
	    
	    for (int j=0;j<9;j++)
	    {
	        it=m.find(symbols[j]);
	        if(it!=m.end() && it->second >0 )
	        {
	            s.insert(it->first);
	        }
	    }
	    
	    for(sitr=s.begin();sitr!=s.end();sitr++)
	    {
	        cout<<*sitr<<" ";
	    }
	    cout<<endl;
	    
	    for(sitr=s.begin();sitr!=s.end();sitr++)
	    {
	        cout<<*sitr<<" ";
	    }

        cout<<endl;
	    m.clear();
	    s.clear();
	}
	return 0;
}
