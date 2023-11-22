#include<iostream>
using namespace std;

int main(){
    int i,j,n;
     cout<<"Enter side of sq.: ";
    cin>>n;
if(n==1){
    cout<<"*";
}
else
{
    for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        {
           if(i==1 || i==n-1)
           {
             if(j!=0 || j!=n-1)
             {
              cout<<" ";
             }
            }
           else
            {
            cout<<"*";
            }
        cout<<"*";
        }
        cout<<"\n";
      }

}
}