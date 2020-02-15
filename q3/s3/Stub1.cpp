#include "ProxyA_Impl1.hpp"


#include <iostream>

int main()
{
    //ProxyA proxy;

    ProxyA_Impl1 concrete_proxy;
    ProxyA_Impl1 &proxy = concrete_proxy;

    int x=0;
    for(int i=0; i<11; i++){
        proxy.hhh(to_string(i));
        x += proxy.ggg();
        cout << x << " " << proxy.fff() << endl;
    }
}
