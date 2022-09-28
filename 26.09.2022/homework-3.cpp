

#include <iostream> 

int  min_el(char* arr, int size);
int max_el(char* arr, int size);
int vowels_count(char* arr, int size);
void reverse(char* arr, int size);
void reverse_el(char* arr, int size);
void uppercase(char* arr, int size);

int main() {
char arr[] = "CheeseBurger";
int size = sizeof(arr);
int min = min_el(arr, size);
  std::cout << min << std::endl;
int max = max_el(arr, size);
  std::cout << max << std::endl;
int vowel = vowels_count(arr, size);
     std::cout << vowel << std::endl;
reverse(arr, size);
reverse_el(arr, size);
  for (int i = 0; i < size - 1; ++i) {
    std::cout << arr[i];
  }
  std::cout << std::endl;
uppercase(arr, size);
  for (int i = 0; i < size - 1; ++i) {
    std::cout << arr[i];
  }
  std::cout << std::endl;
  return 0;
}

int  min_el(char* arr, int size) {
  int index = arr[0];
  for (int i = 0; i < size - 1; ++i) {
    if (arr[i] < index) {
      index = arr[i];
    }
    }
  return index;
}

int max_el(char* arr, int size) {
  int index = arr[0];
  for (int i = 0; i < size - 1; ++i) {
    if (arr[i] > index) {
      index = arr[i];
    }
    }
  return index;
}

int vowels_count(char* arr, int size) {
    int count = 0;
  for (int i = 0; i < size - 1; ++i) {
    if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'o' || arr[i] == 'i' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'O' || arr[i] == 'I' || arr[i] == 'U') {
      ++count;
    }
    }
  return count;
}

void reverse(char* arr, int size) {
  for (int i = size - 2; i >= 0; --i) {
    std::cout << arr[i];
  }
  std::cout << std::endl;
}

void reverse_el(char* arr, int size) {
  char ch;
  for (int i = 0, j = size - 2; i == j; ++i, --j) {
    ch = arr[i];
    arr[i] = arr[j];
    arr[j] = ch;
  }
  std::cout << "After reverse: " << std::endl;
    for (int i = size - 2; i >= 0; --i) {
    std::cout << arr[i];
  }
  std::cout << std::endl;
}

void uppercase(char* arr, int size) {
  for (int i = 0; i < size - 1; ++i) {
    if (arr[i] >= 'a' && arr[i] <= 'z') {
      arr[i] = arr[i] - 32;
    }
    std::cout << arr[i];
  }
   std::cout << std::endl;
}