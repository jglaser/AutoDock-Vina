#ifndef CALLBACK_H
#define CALLBACK_H

#include "conf.h"
#include "common.h"

#include <vector>

class Callback
{
   public:
      Callback(){}

      virtual ~Callback(){}
      virtual double call(std::vector<double> v){ return 0.0; }
};

#endif
