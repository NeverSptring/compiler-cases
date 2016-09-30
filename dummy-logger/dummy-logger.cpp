/*
 * =====================================================================================
 *
 *       Filename:  dummy-logger.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/30/2016 11:22:12 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

namespace dummy {
#ifdef DUMMY_LOGGER
#include <fstream>
class Logger {
  public:
  static Logger& GetInstance() {
    static Logger instance; 
    return instance;
  }
};

#else  // DUMMY_LOGGER
class Logger {
  public:
  template<class T>
   Logger& operator<<(const T& ) { return *this; }
  static Logger& GetInstance() {
    static Logger instance; 
    return instance;
  }
};
}  // nmaespace dummy

#endif  // DUMMY_LOGGER

#define Logger() dummy::Logger::GetInstance()

void foo() {
  int x = 10;
  int y = 20;
  int z = x * y;
  Logger() << "result is " << z << "\n";
}

int main()
{
  foo();
  return 0;
}
