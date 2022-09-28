/*2. Իրականացնել strlen(str); ֆունկցիա, որը ստանում է C-ական տող և վերադարձնում է տողի սիմվոլների քանակը (մինչև \0):*/

#include <iostream>

int strlen(char* str);

int main() {
  char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
  int size = strlen(str);
  std::cout << "size = " << size << std::endl;
  return 0;
}

int strlen(char* str) {
  int size = 0, i = 0;
  while (str[i] != '\0') {
    ++size;
    ++i;
  }
  return size;
}