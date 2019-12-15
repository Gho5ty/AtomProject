//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

bool f(int x,int y){
    return x<y;
}

int main(){
    //Vector

    vector<int> v1={16,8,16,89,165,49};
    cout<<v1[0]<<endl;
    sort(v1.begin(), v1.end());
    cout<<v1[0]<<endl;

    v1.push_back(100); 
    v1.push_back(56);
    v1.push_back(100);
    v1.push_back(100);
    v1.push_back(100);  

    // bool p1 = binary_search(v1.begin(),v1.end(),100);
    // cout<<"Binary Search: "<<p1<<endl;
    // NOT WORKED BCOZ BINARY SEARCH WORKS ONLY ON SORTED LIST

    sort(v1.begin(), v1.end(),f);  // f is comprator function also greater<int>()  

    bool p2 = binary_search(v1.begin(),v1.end(),100);
    cout<<"Binary Search: "<<p2<<endl;
    
    // Also without iterator
    // for(int x: v1)
    // {
    //     cout<<x<<" ";
    // }

    // Also want to change vale iterate by refrence

    for(int &x: v1){//refrence
          x++;
    }

    for(int x: v1){//refrence
          x++;
    }
    vector<int>::iterator it3;
    for(it3=v1.begin();it3!=v1.end();it3++)
    {
        cout<<*it3<<" ";
    }
    cout<<endl;
    
    //Lower Bound Upper Bound work on sorted list 
    //auto it=lower_bound(v1.begin(),v1.end(), 100);
    vector<int>::iterator it=lower_bound(v1.begin(),v1.end(), 100);
    vector<int>::iterator it2=upper_bound(v1.begin(),v1.end(), 100);

    cout<<*it<<" "<<*it2<<" ok"<<endl;
    //ITERATOR IN VECTORS ARE RANDOM,
    //WHICH MEANS WE CAN PERFORM ARITHMATIC OPERTATION ON ITERATTOR
 
    cout<<it2-it<<endl; 



    
}
