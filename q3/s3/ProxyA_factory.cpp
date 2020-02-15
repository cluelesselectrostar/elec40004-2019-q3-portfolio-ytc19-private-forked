#include "ProxyA_factory.hpp"
#include "ProxyA_Impl1.hpp"
#include "ProxyA_Impl2.hpp"
#include <cstdlib>
//#include <string>
using namespace std;

/*Create an instance of ProxyA, using the given
  string to select the concrete type:
- 'Impl1' : Returns a new ProxyA_Impl1
- 'Impl2' : Returns a new ProxyA_Impl2
*/

ProxyA *ProxyA_factory(const string &type) {
  if (type == "Impl1") {
    return new ProxyA_Impl1();
  } else if (type == "Impl2") {
    return new ProxyA_Impl2();
  } else {
    exit(1);
  }
};
