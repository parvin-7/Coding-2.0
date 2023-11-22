#include <iostream>
using namespace std;
int main()
{
    int num;
    int denum;
    float output;
    cin >> num >> denum;

    try
    {
        if (denum == 0)
        {
            throw(denum);
        }
        else
        {
            output = num / denum;
            cout << "Output: " << output;
        }
    }
    catch (int d)
    {
        cout << "You can't divide the number by 0" << endl;
    }
    return 0;
}