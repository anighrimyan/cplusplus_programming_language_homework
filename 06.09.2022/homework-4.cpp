/*4. Իրականացնել to_upper_case(string) ֆունկցիա, որը ստանում է տող (char*), ձևափոխում և վերադարձնում է նույն տողը, որտեղ բոլոր տառերը մեծատառ են։*/

#include <iostream>
#include <cstring>

char* to_upper_case(char* str);

int main() {
  char str[10];
  std::cin >> str;
  std::cout << std::endl;
  char* ptr_str = to_upper_case(str);
  std::cout << ptr_str << std::endl;
  return 0;
}

char* to_upper_case(char* str) {
  int size = strlen(str);
  for (int i = 0; i < size; ++i) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = str[i] + 'A' - 'a';
    }
  }
  return str;
}