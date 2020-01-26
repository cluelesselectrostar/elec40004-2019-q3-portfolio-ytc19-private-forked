#include "D.hpp"
#include <cmath>

int main()
{
    D c;
    int accumulator = c.reset();
    //c.n = 0;
    //c.accumulator = 0;
    //c.name = "S1";

    double running=0;

    for(int i=0; i<12; i++){
        for(int j=0; j<30; j++){
            int ij = i*j;
            c.update(int(sin(ij)*131));
        }

        cout << "S1";
        c.stats();

        //int accumulator; //=c.accumulator;
        accumulator = c.reset();
        //c.n=0;
        //c.accumulator=0;
        running += accumulator;

    }

    cout << running << endl;
}
