#include<iostream>
using namespace std;
class Base1
{ int a, b;
public:
    Base1(int i, int j)
    {a = i; b = j;
        cout<<"\nConstructing Base1";
    }
    ~Base1( )
    {cout<< "\n Destructing Base1";}
    void show( )
    {cout<< '\n'<< a << '\n'<< b;}
};
class Base2
{ int c, d;
public:
    Base2(int i, int j)
    {c = i; d = j;
        cout<< "\nConstructing Base2";}
    ~Base2( )
    {cout<< "\nDestructing Base2";}
    void show( )
    {cout<< '\n'<< c << '\n'<< d;}
};
class Derived: public Base2, public Base1
{ int e, f;
public:
    Derived (int i, int j, int k, int l, int m, int n): Base1(i, j) , Base2(k, l)
    { e = m; f = n;
        cout<< "\nConstructing Derived";}
    ~Derived( )
    {cout<< "\n Destructing Derived";}
    void show( )
    {Base1::show( ); Base2::show( );
        cout<< '\n'<< e << '\n'<< f;}
};
int main( )
{Derived ob1 = Derived(1,2,3,4,5,6);
    ob1.show( );
    cout<< '\n' << sizeof (ob1); //Assume that int requires 4 bytes.
    return 0;}


