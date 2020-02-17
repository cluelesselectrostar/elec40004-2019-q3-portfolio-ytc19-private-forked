#ifndef ProxyA_Impl2_hpp
#define ProxyA_Impl2_hpp

#include <string>
#include "ProxyA.hpp"

using namespace std;

class ProxyA_Impl2
  : public ProxyA
{
protected:
    //int m_a;
    //float m_b;
public:
    ProxyA_Impl2();
    ~ProxyA_Impl2(){};

    float fff() const;

    //int ggg();

    void hhh(string g);
};

#endif
