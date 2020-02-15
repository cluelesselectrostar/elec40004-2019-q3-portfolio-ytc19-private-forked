#ifndef ProxyA_factory_hpp
#define ProxyA_factory_hpp

/*Create an instance of ProxyA, using the given
  string to select the concrete type:
- 'Impl1' : Returns a new ProxyA_Impl1
- 'Impl2' : Returns a new ProxyA_Impl2
*/

#include "ProxyA.hpp"

ProxyA *ProxyA_factory(const string &type);

#endif
