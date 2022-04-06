// 문제: 두 정수의 사칙연산을 모두 출력하라. 단, 나눗셈은 truncation이다.
//
// 어떻게 풀까?
// - 입력을 받아와 저장하고, 활용할 수 있는지 묻는 문제
// - std::cin의 사용
// - 기본 연산자를 알고 있는가?

// 표준 입출력 헤더
#include <iostream>

// 진입점
int main() {

  // 문제에서는 자연수를 기반으로 한 연산만 다루므로 정수형으로 선언
  int input_A {0};
  int input_B {0};

  // iostream 내부의 std::cin 사용
  std::cin >> input_A >> input_B;

  // iostream 내부의 std::cout 사용
  std::cout
   << input_A + input_B << '\n'
   << input_A - input_B << '\n'
   << input_A * input_B << '\n'
   << input_A / input_B << '\n'
   << input_A % input_B << std::endl;
}