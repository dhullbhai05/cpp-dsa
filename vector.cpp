#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector <int>v;
    //capacity 
    cout << "capacity of vector is ::"<<v.capacity()<<endl;
     cout << "size of vector is ::"<<v.size()<<endl;
    v.push_back(1);
    cout <<"capacitiy of vector is ::"<<v.capacity()<<endl;
    cout << "size of vector is ::"<<v.size()<<endl;
    v.push_back(2);
    cout <<"capacity of vector is ::"<<v.capacity()<<endl;
    cout << "size of vector is ::"<<v.size()<<endl;
    cout <<"position at 1st index is "<<v[1]<<endl;
    //first and last elementn is 
    int first =v.front();
    int last = v.back();
    //pop
    cout <<"beforre pop"<<endl;
    for (int i:v){
        cout <<i<<" ";
        cout <<endl;
    }
    cout <<"after pop"<<endl;
    v.pop_back();
    for (int i:v){
        cout <<i<<" ";
    }
    //agar muujhe pata hai ki size kitna hai
    vector<int>a(5,1);
    //5 is size 
    //1 is initallization
    return 0;
}
