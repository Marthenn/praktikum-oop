#include "AppreciatingAsset.hpp"
#include "DepreciatingAsset.hpp"
#include "BaseAsset.hpp"
#include "iostream"
using namespace std;

int main(){
    BaseAsset ba(100);
    Asset *pa = &ba;
    AppreciatingAsset aa(pa,0.15);
    DepreciatingAsset da(pa,0.15);
    cout<<aa.getValue(1)<<" asu "<<da.getValue(1)<<endl;
    return 0;
}