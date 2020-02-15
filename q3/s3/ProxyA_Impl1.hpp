#ifndef ProxyA_Impl1_hpp
#define ProxyA_Impl1_hpp

#include <string>
#include "ProxyA.hpp"

using namespace std;

class ProxyA_Impl1
  : public ProxyA
{
protected:
    int m_a;
    float m_b;
public:
    ProxyA_Impl1();
    //~ProxyA_Impl1();

    float fff() const;

    int ggg();

    void hhh(string g);
};

#endif
