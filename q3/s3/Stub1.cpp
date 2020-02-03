#include "ProxyA.hpp"

#include <iostream>

int main()
{
    ProxyA proxy;

    int x=0;
    for(int i=0; i<11; i++){
        proxy.hhh(to_string(i));
        x += proxy.ggg();
        cout << x << " " << proxy.fff() << endl;
    }
}
