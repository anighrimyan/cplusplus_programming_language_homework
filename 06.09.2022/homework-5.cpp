/*5. [**] Իրականացնել հաշվիչ ծրագիր, որն օգտագործում է std::map և ֆունկցիայի ցուցիչներ։ Ֆունկցիայի ցուցիչները հղվում են համապատասխան թվաբանական գործողությունը կատարող ֆունկցիայի վրա։*/

#include <iostream> 
#include <map>

double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);

int main() {
   char symbol;
  double num1, num2;
  std::cout << "Please, enter a symbol from list: +, - * and /" << std::endl;
  std::cout << "symbol = ";
  std::cin >> symbol;
  std::cout << std::endl;
  
  std::cout << "Please, enter the numbers:" << std::endl;
  std::cout << "num1 = ";
  std::cin >> num1;
  std::cout << std::endl;
  
  std::cout << "num2 = ";
  std::cin >> num2;
  std::cout << std::endl;
  
  std::map<char, double(*)(double, double)> counter; 
     counter['+'] = &add;
     counter['-'] = &sub;
     counter['/'] = &div;
     counter['*'] = &mul;

 std::cout << counter[symbol](num1, num2) ;
  }

double add(double num1, double num2) {
  return (num1 + num2);
}

double sub(double num1, double num2) {
  return (num1 - num2);
}
double mul(double num1, double num2) {
  return (num1 * num2);
}
double div(double num1, double num2) {
  if (num2 != 0) {
  return (num1 / num2);
    }
  else {std::cout << "Num2 is 0, can not do this operation." << std::endl;
    return -1;}
}