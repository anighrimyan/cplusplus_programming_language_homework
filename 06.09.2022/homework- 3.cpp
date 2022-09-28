/*3. Իրականացնել ֆունկցիա, որը շրջում է C-ական տողը (char*)։*/

#include <iostream>
#include <cstring>

void reverse(char* str);

int main() {
  char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
  reverse(str);
  std::cout << str << std::endl;
  return 0;
}

void reverse(char* str) {
  int size = strlen(str);
  char tmp;
for (int i = 0; i < size && i != size - 1 - i; ++i) {
  tmp = str[size - 1 - i];
  str[size - 1 - i] = str[i];
  str[i] = tmp;
}
}