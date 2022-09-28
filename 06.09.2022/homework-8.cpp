/*8. [*] Իրականացնել strmove(char* s, int n); ֆունկցիան, որը տրված s տողը ցիկլիկ տեղաշարժում է դեպի աջ n անգամ։ Օրինակ, strmove(“hello”, 2); կտեղաշարժի “hello”-ն 2 դիրքով դեպի աջ և կստանա “lohel”։*/

#include <iostream>
#include <cstring>

char* strmove(char* s, int n);

int main() {
  char s[10];
  std::cout << "Enter string: " << std::endl;
  std::cin >> s;
  std::cout << std::endl;
  int n;
  std::cout << "Enter a number: " << std::endl;
  std::cin >> n;
  std::cout << std::endl;
  char* ptr = strmove(s, n);
  std::cout << ptr;
  delete[] ptr;
  ptr = nullptr;
}

char* strmove(char* s, int n) {
  int size = strlen(s) + 1;
  int j = 0;
  char* new_s = new char[size];
  if (n > 0 && n < strlen(s)) {
    for (int i = strlen(s) - n; i <= strlen(s) && s[i] != '\0'; ++i) {
    new_s[j] += s[i];
      ++j;
  }
    for (int i = 0; i <= n + 2 && s[i] != '\0'; ++i) {
      new_s[j] += s[i];
      ++j;
    }
  }
  return new_s;
}
