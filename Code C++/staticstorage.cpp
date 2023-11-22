#include<iostream>
using namespace std;
main()
{
 int k=1;
 void repeat(void);
 while(k<=5)
 {
 repeat(); /* Calling to function */
 k++;
}

}
void repeat(void)
{
 static int j=100;
 //j=;
 j=j+1;
 cout<< "Value of j ="<<j<<endl;
}
