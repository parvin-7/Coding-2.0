#include <iostream>
using namespace std;

template <class T>
class vector
{
    public:
    T *arr;
    int size;

public:
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;

        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector <float>v1(3);
    v1.arr[0] = 2.4;
    v1.arr[1] = 4.8;
    v1.arr[2] = 3.2;
    vector <float>v2(3);
    v2.arr[0] = 2.9;
    v2.arr[1] = 5.3;
    v2.arr[2] = 2.8;

    float a = v1.dotproduct(v2);
    cout << "dot product: " << a;

    return 0;
}
