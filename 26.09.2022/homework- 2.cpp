/* Գրեք ծրագիր, որտեղ ցուցիչի մեջ պահված կլինի զանգվածի առաջին էլեմենտի հասցեն: Ցուցիչի օգնությամբ տպել զանգվածի տարրերը էկրանին։ */
#include <iostream> 

int main() {
  int size;
  std::cin >> size;
  std::cout << std::endl;
  int* arr = new int[size];
  for (int i = 0; i < size; ++i) {
    std::cin >> arr[i];
    std::cout << " ";
  }
  int* ptr_arr = &arr[0];
  for (int i = 0; i < size; ++i) {
    std::cout << (*ptr_arr) + i << " ";
  }
  delete [] arr;
  arr = nullptr;
  return 0;
}
