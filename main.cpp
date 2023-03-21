#include <iostream>
using namespace std;
int main(){
    long long n; cin>>n;
    if (n%4!=0) cout<<"Kabisa yili emas"<<endl;
    else if (n%100==0 and n%400!=0 ) cout<<"Kabisa yili emas"<<endl;
    else cout<<"Kabisa yili ";
    return 0;
}