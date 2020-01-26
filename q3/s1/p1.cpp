#include "D.hpp"
#include <cmath>

int main()
{
    D *c1 = new D;
    //c1->name = "M1";
    D *c2 = new D;
    //c2->name = "M2";

    for(int i=0; i<12; i++){
        c1->update(int(cos(i)*133));
        if(i % 2){
            c2->update(int(cos(i)*133));
        }
    }

    cout << "M1";
    c1->stats();

    cout << "M2";
    c2->stats();

    delete c1;
    delete c2;
}
