#include "ProxyA.hpp"

#include <string>

ProxyA::ProxyA()
{
    m_a=2;
    m_b=1;
}

float ProxyA::fff() const
{
    return m_b + m_a;
}

int ProxyA::ggg()
{
    m_a += m_b;
    return m_a*m_a;
}

void ProxyA::hhh(string g)
{
    m_a=stoi(g);
}
