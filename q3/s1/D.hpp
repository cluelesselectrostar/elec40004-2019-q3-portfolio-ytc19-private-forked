#ifndef D_HPP
#define D_HPP

#include <vector>
#include <string>
#include <iostream>

using namespace std;

struct D
{
    int n;
    int accumulator;
    string name;
};

D *D_create(string n)
{
    D *res=new D;
    res->n = 0;
    res->accumulator = 0;
    res->name = n;
    return res;
}

void D_destroy(D *me)
{
    delete me;
}

void D_update(D *me, float x)
{
    me->n += 1 ;
    me->accumulator = me->accumulator + int(x * 1000) / me->n;
}

float D_reset(D *me)
{
    float r=me->accumulator;
    me->n = 0;
    me->accumulator = 0;
    return r;
}

void D_stats(D *me)
{
    cout << me->name << " " << me->n << " " << me->accumulator << endl; 
}

#endif
