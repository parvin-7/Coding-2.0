// Hybrid inheritance:
#include <iostream> 
using namespace std;
class A 
{ 
 protected: 
 int a; 
 public: 
 void geta() 
 { 
 cout << "Enter the value of 'a' : " << endl; 
 cin>>a; 
 } 
}; 
 
class B 
{ 
 protected: 
 int b; 
 public: 
 void getb() 
 { 
 cout << "Enter the value of 'b' : " <<endl; 
 cin>>b; 
 } 
}; 
class C :public A
{ 
 protected: 
 int c; 
 public: 
 void getc() 
 { 
 cout << "Enter the value of c is : " <<endl; 
cin>>c; 
 } 
}; 
 
class D : public B, public C 
{ 
 protected: 
 int d; 
 public: 
 void mul() 
 { 
 geta(); 
 getb(); 
 getc(); 
 cout << "Multiplication of a,b,c is : " <<a*b*c<< endl; 
 } 
}; 
int main() 
{ 
 D d; 
 d.mul(); 
 return 0; 
} 