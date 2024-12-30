#include <iostream>
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int *p = arr;

    cout<<*p<<endl;
    cout<<arr<<endl;
    cout<<p<<endl;
    cout<<&arr[0]    <<endl;
    p++;

    cout<<p<<endl;
    cout<<*p<<endl;
    p--;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<arr[0]    <<endl;
    cout<<&arr[0]    <<endl;

    cout<<arr<<endl;

    return 0;
}