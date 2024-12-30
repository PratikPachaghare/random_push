#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    char ch[5] = {'a','b','c','d','e'};

    int *p = arr;
    char *q = ch;

    cout<<&ch[0]<<endl;
    cout<<*q<<endl;
    cout<<q<<endl;
    cout<<&q<<endl;
    for(int i = 0; i < 5; i++) {
        cout << "Address of ch[" << i << "] = " << static_cast<void*>(&ch[i]) << endl;
    }

    cout<<&ch[1]<<endl;
    return 0;
}