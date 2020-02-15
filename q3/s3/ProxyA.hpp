#ifndef ProxyA_hpp
#define ProxyA_hpp

#include <string>

using namespace std;

class ProxyA
{
private:
    //int m_a;
    //float m_b;
public:
    //ProxyA();
    virtual ~ProxyA() {}

    virtual float fff() const = 0;
    virtual int ggg() = 0;
    virtual void hhh(string g) = 0;
};

#endif
