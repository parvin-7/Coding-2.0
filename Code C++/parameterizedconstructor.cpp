#include<iostream>
#include<cmath>
using namespace std;

class point{
    int x, y;
    friend void distance(point, point);
public:
    point(int a, int b){
        x = a;
        y = b;
    }
    void display(void){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }
};

void distance(point p1, point p2){
    int x_diff = (p2.x-p1.x);
    int y_diff = (p2.y-p1.y);
    cout<<"The distance b/w these two points is: "<<sqrt(pow(x_diff, 2)+ pow(y_diff, 2))<<" units."<<endl;
}

int main(){
    point p1(1,2);
    p1.display();
    point p2(1,5);
    p2.display();
    distance(p1, p2);
    return 0;
}