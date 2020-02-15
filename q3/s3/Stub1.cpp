#include "ProxyA_factory.hpp"


#include <iostream>

int main(int argc, const char **argv)
{

    string implementation;

    if (argv[1]== NULL) {
      implementation = "Impl1";
    } else {
      implementation = argv[1];
    }

    ProxyA *concrete_proxy = ProxyA_factory(implementation);
    ProxyA &proxy = *concrete_proxy;

    int x=0;
    for(int i=0; i<11; i++){
        proxy.hhh(to_string(i));
        x += proxy.ggg();
        cout << x << " " << proxy.fff() << endl;
    }

    delete concrete_proxy;
}
