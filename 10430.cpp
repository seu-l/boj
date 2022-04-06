// 문제: 수식 몇가지를 출력하라.
//
// 어떻게 풀까?
// - 입력을 받아와 저장하고, 활용할 수 있는지 묻는 문제
// - std::cin의 사용

#include <iostream>

int main() {

  int input_A {0};
  int input_B {0};
  int input_C {0};

  std::cin >> input_A >> input_B >> input_C;

  std::cout
   << (input_A + input_B) % input_C << '\n'
   << ((input_A % input_C) + (input_B % input_C)) % input_C << '\n'
   << (input_A * input_B) % input_C << '\n'
   << ((input_A % input_C) * (input_B % input_C)) % input_C << std::endl;
}