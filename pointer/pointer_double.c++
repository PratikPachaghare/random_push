#include<iostream>
using namespace std;

int main(){
    int i = 10;
    int *p = &i;
    int **q = &p;
    int *r = &*p;

    cout<<&i<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<"*****"<<endl;
    cout <<**q<<endl;
    cout<<&q<<endl;
    cout<<r<<endl;
    cout<<*r<<endl;
    cout<<&r<<endl;


    return 0;
}