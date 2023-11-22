#include<iostream>
using namespace std;
int main(){
   int* p=new int[5];//int type pointer created
   ////p= new int;//p pointer to int type memory created
   ////*p=10;
   
 //delete[] p;
   p[0]=8;
   *(p+1)=2;
   p[2]=1;
   p[3]=3;
   p[4]=9;
   
   for(int i=0;i<5;i++){
    cout<<p[i]<<endl;
   }

    return 0;
}