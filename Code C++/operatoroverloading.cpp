#include <iostream>
using namespace std;
class Coins
{

 int a_coins;
public:
 Coins(int coins) { a_coins = coins; }
 // Overload Coins + int
 friend Coins operator+(const Coins &c1,const Coins &c2);
 int getCoins() const { return a_coins; }
};
// note: this function is a member function!
// the coins parameter in the friend version is now the implicit *this parameter
Coins operator+(const Coins &c1,const Coins &c2)
{
 return Coins(c1.getCoins() + c2.getCoins());
}
int main()
{
Coins coins1(6);
Coins coins2(7);
int d=coins1.getCoins();
cout<<d;
int e=coins2.getCoins();
cout<<endl<<e;
cout<<endl;
Coins coinssum = coins1 + coins2;
cout << "We have " << coinssum.getCoins() << " coins.\n";
return 0;
}
