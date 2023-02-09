#include "BunchOfKeys.hpp"

int main(){
	BunchOfKeys k1;
	for(int i=0;i<5;i++){
		cout<<"i = "<<i<<endl;
		k1.shake();k1.add();
	}
	k1.shake();
	return 0;
}