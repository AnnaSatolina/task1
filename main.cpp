#include <iostream>
#include <string>
int main(){
  std::cout << "hello!\n";
  std::string str("qqqq");
  std::cout << str << "\n";

  std::string str1(std::move(str));
  std::cout << str <<std::endl << str1;
  int x = 5;
  int&& y = std::move(x);

  int&& z = 6;
  y = 7;

  int&& t = static_cast<int&&>(x);
  return 0;
}
  
