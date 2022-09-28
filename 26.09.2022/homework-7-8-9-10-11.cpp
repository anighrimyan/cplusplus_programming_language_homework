/*Գրեք ծրագիր, որը տպում է ամբողջ թվային զանգվածի բոլոր զույգ թվերի արժեքները:
Գրեք ծրագիր, որը տպում է ամբողջ թվային զանգվածի կենտ թվերի քանակը:
Գրեք ծրագիր, որը ամբողջ թվային զանգվածի բոլոր կենտ թվերը լցնում է մեկ այլ զանգվածի մեջ: Ստացված զանգվածը տպել էկրանին։
Գրեք ծրագիր, որը ամբողջ թվային զանգվածի բոլոր զույգ էլեմենտները  նույն զանգվածի մեջ՝ կտեղավորի զանգվածի սկզբից, իսկ կենտերը վերջից:
Գրիր ծրագիր, որը կստուգի երկու նույն չափսի զանգվածները նույնն են, թե ոչ։ Այսինքն արդյոք բոլոր համապատասխանող ինդեքսներով արժեքները համընկնում են թե ոչ։*/

#include <iostream>

void is_even(int* arr, int size);
int count_odd(int* arr, int size);
void is_odd(int* arr, int size);
void even_odd(int* arr, int size);
void swap(int *x, int *y);
bool comp_arr(int* arr, int* arr2, int size);

int main() {
  int size;
  std::cout << "size = ";
  std::cin >> size;
  std::cout << std::endl;
  int* arr = new int[size];
  for (int i = 0; i < size; ++i) {
    std::cin >> arr[i];
    std::cout << " ";
  }
  std::cout << std::endl;
  is_even(arr, size);
  std::cout << count_odd(arr, size) << std::endl;
  is_odd(arr, size);
  even_odd(arr, size);
   int* arr2 = new int[size];
  for (int i = 0; i < size; ++i) {
    std::cin >> arr2[i];
    std::cout << " ";
    }
  std::cout << "result: " << comp_arr(arr, arr2, size) << std::endl;
  delete[] arr;
  arr= nullptr;
  delete[] arr2;
  arr2= nullptr;
}

void is_even(int* arr, int size) {
  for (int i = 0; i < size; ++i) {
    if (arr[i] % 2 ==0) {
      std::cout << arr[i] << " ";
    }
  }
  std::cout << std::endl;
}

 int count_odd(int* arr, int size) {
   int count = 0;
   for (int i = 0; i < size; ++i) {
    if (arr[i] % 2 !=0) {
       ++count;
    }
  }
  return count;
 }

void is_odd(int* arr, int size) {
  int j = 0;
  int* odd_arr = new int[count_odd(arr, size)]; {
    for (int i = 0; i < size; ++i) {
      if (arr[i] % 2 !=0) {
        odd_arr[j] = arr[i];
        ++j;
      }
    }
  }
  for (int i = 0; i < count_odd(arr, size); ++i) {
    std::cout << odd_arr[i] << " ";
  }
  std::cout << std::endl;
  delete[] odd_arr;
  odd_arr = nullptr;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
void even_odd(int* arr, int size)
{
  int left_num = 0, right_num = size-1;
   while (left_num < right_num) {
     while (arr[left_num] % 2 == 0 && left_num < right_num) {
         ++left_num;
      }
     while (arr[right_num] % 2 == 1 && left_num < right_num) {
          --right_num;
         }
     if (left_num < right_num)
        {
          swap(&arr[left_num], &arr[right_num]);
          ++left_num;
          --right_num;
        }
    }
  for (int i = 0; i < size; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

bool comp_arr(int* arr, int* arr2, int size) {
  int count = 0;
  for (int i = 0; i < size; ++i) {
    if (arr[i] == arr2[i]) {
      ++count;
    }
  }
  if (count == size) {
    return true;
  } 
  return false;
}