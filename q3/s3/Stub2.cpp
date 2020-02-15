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

    ProxyA *concrete_proxy0 = ProxyA_factory(implementation);
    ProxyA &p0 = *concrete_proxy0;

    ProxyA *concrete_proxy1 = ProxyA_factory(implementation);
    ProxyA &p1 = *concrete_proxy1;

    int x=0;
    for(int i=0; i<10; i++){
        if(i&1){
            p0.hhh("4");
        }else{
            p1.hhh("7");
        }

        p0.ggg();
        cout << x << " " << p0.fff() << " " << p1.fff() << endl;
    }

    delete concrete_proxy0;
    delete concrete_proxy1;
}
