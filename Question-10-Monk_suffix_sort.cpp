#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main() {    
	string s;
	cin>>s;
	int k;
	cin>>k;
	int len=s.size();
	vector<string> store;
	for (int i = 0; i < len; i++) {
        store.push_back(s.substr(i));
    }
	
	for(int fl=0;fl<len;fl++){
		int swaps=0;
		for(int sl=0;sl<len-1-fl;sl++){
			if(store[sl+1]<store[sl]){
				string temp=store[sl+1];
				store[sl+1]=store[sl];
				store[sl]=temp;
				swaps++;
			}
		}
		if(swaps==0) break;
	}
	cout<<store[k-1];

}