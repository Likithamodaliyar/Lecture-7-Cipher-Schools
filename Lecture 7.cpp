#include<iostream>
using namespace std;
int main(){
    // int a,b,c,d,e;
    // cout<<"Enter five integers a,b,c,d and e: ";
    // cin>>a>>b>>c>>d>>e;
    // cout<<"Five integers are: "<<a<<b<<c<<d<<e;
    
    
    int a[100];
    for(int i=0;i<100;i++){
        cin>>a[i];
    }
    for(int i = 99; i >= 0; i--) {
        cout << a[i] << " ";
    }
    return 0;

}
