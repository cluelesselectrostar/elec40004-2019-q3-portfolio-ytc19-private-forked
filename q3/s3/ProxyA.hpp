#ifndef ProxyA_hpp
#define ProxyA_hpp

#include <string>

using namespace std;

class ProxyA
{
private:
    int m_a;
    float m_b;
public:
    ProxyA();

    float fff() const;

    int ggg();

    void hhh(string g);
};

#endif
