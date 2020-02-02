#include "Nugget.hpp"

using namespace std;

/*
struct Nugget
{
    bool x;
    int y;
};
*/

// Should print x and then y, seperated by a space
// See test_Nugget_io_in.txt for examples.
ostream &operator<<(ostream &dst, const Nugget &o)
{
  dst << o.x << " " << o.y ;
  //return dst;
}
// TODO : Create a definition

istream &operator>>(istream &src, Nugget &o)
{
  //src >> o.x >> o.y ;
  //return src;
// TODO : Create a definition
    /*char first = cin.get();
    if (first = ' ') {
      cin.ignore();
    } */
    src >> o.x;
    cin.ignore();
    src >> o.y;
    return src;
}
