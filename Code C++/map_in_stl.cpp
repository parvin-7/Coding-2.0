#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string, int> mymarks;
    mymarks["ps"] = 99;
    mymarks["ss"] = 100;
    mymarks["sh"] = 88;

    
    map<string, int> :: iterator iterr;
    for(iterr = mymarks.begin(); iterr!=mymarks.end(); iterr++){
        cout<<(*iterr).first<<" "<<(*iterr).second<<"\n";
    }

    //insert method
    mymarks.insert({"hh",98});
    map<string, int> :: iterator iter;
    for(iter = mymarks.begin(); iter!=mymarks.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    
    return 0;
}