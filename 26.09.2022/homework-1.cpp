/* Հայտարարեք ցանկացած երեք տարբերվող տիպի ցուցիչներ: Արժեքավորեք ցուցիչները և տպեք էկրանին տվյալ ցուցիչների մեջ պահված հասցեները։ */
#include <iostream> 

int main() {
  int num = 3;
  int* ptr_num = &num;
  char ch = 'a';
  char* ptr_ch = &ch;
  float f_num = 3.14;
  float* ptr_f_num = &f_num;
  std::cout << ptr_num << std::endl;
  std::cout << (void*) &ptr_ch[0] << std::endl;
  std::cout << ptr_f_num << std::endl;
  return 0;
}