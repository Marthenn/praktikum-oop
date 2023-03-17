#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<string> v1;
	string s;
	cout << "Input v1\n";
	cin>>s;
	while(s!="-1"){
		v1.push_back(s);
	}
	vector<string> v2;
	cout << "Input v2\n";
	cin>>s;
	while(s!="-1"){
		v2.push_back(s);
	}

	for(int i=0;i<v1.size();i++){
		if(v1[i]!=v2[i]){
			cout<<"TIDAK PERSISSSSSSS\n";
			cout<<v1[i]<<endl;
			cout<<v2[i]<<endl;
		}
	}
}