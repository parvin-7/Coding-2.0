#include<iostream>
using namespace std;

class rectangle{
    public:
    int l,b;
    
      rectangle(){
        l=0;
        b=0;
      }
      void operator +(){
        /* l+=2;
        b+=2; */

        l=2+b;
        b=2+l;
      }
      void display(){
        cout<<"length of l is: "<<l<<endl;
        cout<<"length of b is: "<<b<<endl;
      }
};
int main(){
    rectangle R;
    R.display();
    /* ++R; */

    +R;
    R.display();
    
}