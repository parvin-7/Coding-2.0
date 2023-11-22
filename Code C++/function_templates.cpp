#include<iostream>
using namespace std;
template <class t1,class t2>
float funcavg(t1 x,t2 y){
    float avg = (x+y)/2;
    return avg;
}
int main(){
    float a = funcavg(3,5.4);
    printf("avg of both number is: %f ",a);
    return 0;
}