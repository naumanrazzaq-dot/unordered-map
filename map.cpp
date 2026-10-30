#include<iostream>
#include<list>
#include <vector>
#include<queue>
#include<stack>
#include<map>
#include<unordered_map>
using namespace std;
int main(){

    // unordered map values cant be same and it print values randomly not follow 
    // alphabet rule 
    unordered_map<string,int> m;
    m.insert({"Tv",200});
    m.insert({"Usb",300});
    m.insert({"laptop",400});
    m.insert({"LED",200});

    for(auto val:m){
        cout<<val.first<<" "<<val.second<<endl;
    }
   
};