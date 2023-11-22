#include<iostream>
#include<list>
using namespace std;
//template<class T>
void display(list<int> &lst){
    list<int> :: iterator ity;
    cout<<endl;
    for(ity=lst.begin();ity!=lst.end();ity++){
         cout<<*ity<<" ";
    }
}

int main(){
    list<int> list1;//list of 0 length
    list1.push_back(6);
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(3);
    list1.push_back(2);
    
    //list1.
    //display(list1);

    //list<int> :: iterator iter = list1.begin();
    
     //cout<<*iter<<" ";
    display(list1);
    /*removing elements from the list
    list1.pop_back();
    display(list1);
    list1.remove(5);
    display(list1);
    */
   //sorting the list
    list1.sort();
   display(list1);
    list<int> list2(4); //empty list of size 4
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 32;
    iter++;
    *iter = 31;
    iter++;
    *iter = 30;
    iter++;
    *iter = 29;
    //cout<<endl;
     display(list2);
     //sorting the 2nd list
     list2.sort();
   display(list2);

   //merging both lists
   list1.merge(list2);
   cout<<endl<<"merging both lists";
   display(list1);
    return 0;
    
}