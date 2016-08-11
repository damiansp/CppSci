/* strings.cpp */
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::string city = "Oxford";
  std::cout << "String: " << city << " or " << city.c_str()
            << "\nLength: " << city.length()
            << "\nThird char: " << city.at(2) << " or " << city[2]
            << std::endl;

  return 0;
}
