#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> vec1;//zero length integer vector
    vec1.push_back(1);
    //display(vec1);
    vector<float> vec2(4);//three element float vector
    vec2.push_back(2);
    //display(vec2);
    vector <float> vec3(vec2);//3-element char vector from vec2
    //display(vec3);
    vector <int> vec4(100,8);
    //display(vec4);
   //int element;
   //for (int i = 0; i < 3; i++)
   //{
   //    cout<<"enter element to add to this vector: ";
   //    cin>>element;

   //    vec1.push_back(element);
   //}
    //display(vec1);
    //Inserting an element in the vector from begining
    vector<int> :: iterator iter = vec1.begin();
    //vec1.insert(iter+2,100,566);
    cout<<*iter<<" ";
    //display(vec1);

    return 0;
}