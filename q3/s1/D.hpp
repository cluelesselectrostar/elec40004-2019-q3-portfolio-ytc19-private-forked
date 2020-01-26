#ifndef D_HPP
#define D_HPP

#include <vector>
#include <string>
#include <iostream>

using namespace std;

struct D
{

public:

  int n;
  int accumulator;
  string name;


  D() {
    this->n;
    this->accumulator;
    this->name;
  }

  void destroy()
  {
      delete this;
  }

  void update(float x)
  {
      this->n += 1 ;
      this->accumulator = this->accumulator + int(x * 1000) / this->n;
  }

  float reset()
  {
      float r=this->accumulator;
      this->n = 0;
      this->accumulator = 0;
      return r;
  }

  void stats()
  {
      cout << this->name << " " << this->n << " " << this->accumulator << endl;
  }

};

#endif
