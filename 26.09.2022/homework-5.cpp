/* Գրեք ծրագիր, որը գտնում և տպում է զանգվածի երկրորդ ամենափոքր տարրը: Այսինքն՝ տվյալ տարրը փոքր է լինելու զանգվածի բոլոր էլեմենտներից, բացառությամբ երկուսից (ինքը իրենից և փոքրագույնից) */

#include <iostream> 

int* creat_arr(int size);
void delete_arr(int* arr);
void sort_arr(int* arr, int size);
int second_min_el(int* arr, int size);

int main() {
  int size;
  std::cout << "Please, enter a msize:" << std::endl;
  std::cout << "size = ";
  std::cin >> size;
  int* arr = creat_arr(size);
  sort_arr(arr, size);
   for (int i = 0; i < size; ++i) {
      std::cout << arr[i] << " ";
    }
  std::cout << std::endl;
  std::cout << second_min_el(arr,size);
  delete_arr(arr);
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

void sort_arr(int* arr, int size) {
  int tmp;
  for (int i = 0; i < size - 1; ++i) {
    for (int j = 0; j < size - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        tmp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = tmp;
      }
    }
  }
}

int second_min_el(int* arr, int size) {
  int min = arr[0];
  for (int i = 0; i < size; ++i) {
    if (arr[i] < arr[i + 1]) {
      return arr[i + 1];
    } else {
      min = arr[i + 1];
    }
  }
  return -1;
}