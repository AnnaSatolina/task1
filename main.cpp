#include <iostream>
#include <string>
int main(){
  std::cout << "hello!\n";
  std::string str("qqqq");
  std::cout << str << "\n";

  std::string str1(std::move(str));
  std::cout << str <<std::endl << str1;
  return 0;
}
  
