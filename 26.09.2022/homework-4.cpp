/* Գրեք ծրագիր, որը երկու չափսի զանգվածներ կմիավորի երրորդ զանգվածի մեջ: Այսինքն ստանալ զանգված, որը կպարունակի սկզբնական երկու զանգվածների բոլոր էլեմենտները։ */

#include <iostream> 

int* creat_arr(int size);
void delete_arr(int* arr);

int main() {
  int size1;
  int size2;
  std::cout << " PLease, enter the size for two array: " << std::endl;
  std::cout << "size1 = ";
  std::cin >> size1;
  std::cout << std::endl;
  std::cout << "size2 = ";
  std::cin >> size2;
  std::cout << std::endl;
  int* ptr_arr1 = creat_arr(size1);
  int* ptr_arr2 = creat_arr(size2);
  int* ptr_arr = creat_arr(size1 + size2);
  delete_arr(ptr_arr1);
  delete_arr(ptr_arr2);
  delete_arr(ptr_arr);
  return 0;
}

int* creat_arr(int size) {
  int* ptr_arr = new int[size];
  for (int i = 0; i < size; ++i) {
    ptr_arr[i] = rand() % 10;
    std::cout << " ";
  }
  for (int i = 0; i < size; ++i) {
    std::cout << ptr_arr[i] << " ";
  }
  std::cout << std::endl;
  return ptr_arr;
  }

void delete_arr(int* arr) {
  delete[] arr;
  arr =nullptr;
}