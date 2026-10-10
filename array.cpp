#include<iostream>
#include<array>
using namespace std;
int main (){
    array<int,5>arr = {1,2,3,4,5};
    cout <<arr[0]<<endl;
    //element on first and last index of array
    cout << arr.at(2)<<endl;
    cout <<arr.front()<<endl;
    cout<<arr.back()<<endl;
    return 0;
}
