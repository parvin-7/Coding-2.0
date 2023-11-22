#include <iostream>
using namespace std;
class Instrument
{
public:
    virtual  void Makesound()
    {
        cout << endl;
        cout << "Instrument playin...\n";
        cout << endl;
    }
};
class Guitar : public Instrument
{
public:
    void Makesound()
    {
        cout << endl;
        cout << "Guitar playin...\n";
        cout << endl;
    }
};
int main()
{
    
    /* Instrument iobj;
    iobj.Makesound();
    
    Guitar gobj;
    gobj.Makesound(); */

    Instrument *i1;
    i1 = new Guitar;
    i1->Makesound();
    
    return 0;
}