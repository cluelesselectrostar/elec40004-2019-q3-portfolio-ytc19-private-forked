#include "ProxyA.hpp"

#include <string>

ProxyA::ProxyA()
{
    m_a=1;
    m_b=2;
}

float ProxyA::fff() const
{
    return m_b / (1 + abs(m_a));
}

int ProxyA::ggg()
{
    m_a += m_b;
    return m_a*m_a;
}

void ProxyA::hhh(string g)
{
    m_b=stof(g);
}
