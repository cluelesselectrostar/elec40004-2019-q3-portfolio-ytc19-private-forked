#include "D.hpp"
#include <cmath>

int main()
{
    D *c1 = D_create("M1");
    D *c2 = D_create("M2");

    for(int i=0; i<12; i++){
        D_update(c1,int(cos(i)*133));
        if(i % 2){
            D_update(c2,int(cos(i)*133));
        }
    }

    D_stats(c1);
    D_stats(c2);

    D_destroy(c1);
    D_destroy(c2);
}
