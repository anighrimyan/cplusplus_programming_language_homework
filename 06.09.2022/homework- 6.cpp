/*6. Իրականացնել char* strcat(char* s1, char* s2); ֆունկցիան, որը ստանում է երկու C տողեր և կոնկատենացնում (միացնում) տողերը իրար՝ պահելով առաջին արգումենտում։*/

#include <iostream>

char* strcat(char* s1, char* s2);

int main() {
  char s1[20] = {'H', 'e', 'l', 'l', 'o', ' ', '\0'};
  char s2[20] = {'w', 'o', 'r', 'l', 'd', '\0'};
  //char* ptr_str = strcat(s1, s2);
  std::cout << strcat(s1, s2);
}

char* strcat(char* s1, char* s2) {
int i = 0, size = 0;
  while (s1[i] != '\0') {
    ++size;;
    ++i;
  }
  i = 0;
  while (s2[i] != '\0') {
    s1[size + i] += s2[i];
    ++i;
  }
  return s1;
}
