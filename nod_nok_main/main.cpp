#include <iostream>
#include "nod.h"
using namespace std;

int main()
{
    unsigned a1,b1;
    cin>>a1>>b1;
    NOD num(a1,b1);
    cout<<num.Nod()<<"\n"<<num.Nok();
}
