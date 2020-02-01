#ifndef Chan_Dst2_hpp
#define Chan_Dst2_hpp

#include "Chan.hpp"

int Chan::get_X() const
{ return m_x; }

float Chan::get_Y() const
{ return m_y; }

string Chan::get_Z() const
{ return m_z; }

void Chan::set_X(int x)
{
    m_x=x;
}

void Chan::set_Y(float y)
{
    m_y=y;
}

void Chan::set_Z(const string &z)
{
    m_z=z;
}

void Chan::g()
{
    m_f.x = (m_f.y % 5)==0;
    m_f.y += 7;
}

void Chan::f(int c)
{
    m_y = c + 3;
    m_x = m_x * c;
    cout << m_y << " " << m_x << endl;
}

#endif
