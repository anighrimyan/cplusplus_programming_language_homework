/*7. Իրականացնել strset(char* s, char ch); ֆունկցիան, որը տրված s տողի բոլոր սիմվոլները փոխարինում է ch սիմվոլով։*/

#include <iostream>
#include <cstring>

char* strset(char* s, char ch);

int main() {
  char s[10];
  std::cin >> s;
  std::cout << std::endl;
  char ch;
  std::cin >> ch;
  std::cout << std::endl;
  char* ptr_s = strset(s, ch);
  std::cout << ptr_s;
  delete [] ptr_s;
  ptr_s = nullptr;
}

char* strset(char* s, char ch) {
  int i = 0, size = strlen(s) + 1;
  char* new_s = new char[size];
  while (s[i] != '\0') {
    if (s[i] == ch) {
    new_s[i] += s[i];
    ++i;
  } else {
     new_s[i] += ch;
    ++i;  
  }
    }
  return new_s;
}
