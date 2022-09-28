/*1. Իրականացնել բինար որոնման ալգորիթմը զանգվածի համար` իտերատիվ և ռեկուրսիվ տարբերակներով։*/
#include <iostream>

void sort_array(int* arr, int size) {
  for (int i = 0; i < size; ++i) {
    int big = i;
    for (int j = 0; j < big; ++j) {
       if (arr[big] < arr[j]) {
         big = j;
      }
       std::swap(arr[i], arr[big]);
    }
  }
}

int binary_search_iterative(int* arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (end >= start) {
        int mid = start + (end - start) / 2;    
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int binary_search_recursive(int* arr, int start, int end, int key)
{
    int mid = start + (end - start) / 2;
    if (arr[mid] == key) {
        return mid;
    }
    if (start <= end){
        if (arr[mid] < key) {
            return binary_search_recursive(arr, mid + 1, end, key);
        }
        else {
            return binary_search_recursive(arr, start, mid - 1, key);
        }
    }
    return -1;
}

int main() {
  int size;
  std::cout << "Enter the size of array:\n" << "size = ";
  std::cin >> size;
  std::cout << std::endl;
  int key;
  std::cout << "Enter the key number:\n" << "key = ";
  std::cin >> key;
  std::cout << std::endl;
  int* arr = new int[size];
  for (int i = 0; i < size; ++i) {
    std::cin >> arr[i];
    std::cout << " ";
  }
  std::cout << std::endl;
  sort_array(arr, size);
  for (int i = 0; i < size; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
  int start = 0, end = size - 1;
  std::cout << binary_search_iterative(arr, size, key) << std::endl;
  std::cout << binary_search_recursive(arr, start, end, key) << std::endl;
  delete[] arr;
  arr = nullptr;
  return 0;
}