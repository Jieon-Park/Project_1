#include <iostream>

int main(){
  auto HelloWorld = [](){std::cout << "Hello World\n";};
  
  HelloWorld();
  
  return 0;
}
