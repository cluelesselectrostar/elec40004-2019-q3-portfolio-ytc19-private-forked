//#ifndef Chan_Dst1_hpp
//#define Chan_Dst1_hpp

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
    m_f.x = !m_f.x;
    m_f.y += 3;
}

void Chan::f(int d)
{
    m_x = m_y;
    m_y = d * 2;
    cout << m_f << " " << m_x << endl;
}

//#endif
