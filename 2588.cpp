// 문제: 자릿수별 곱셈 값을 출력하라.
//
// 어떻게 풀까?
// - 입력을 받아와 저장하고, 활용할 수 있는지 묻는 문제
// - std::cin의 사용

#include <iostream>

int main() {

  int input_A {0};
  int input_B {0};

  // 첫번째 자연수
  std::cin >> input_A;
  // 두번째 자연수. 입력이 개행으로 분리되어있기 때문에 두번 사용한다.
  std::cin >> input_B;


  // 각 자릿수별로 출력하는 식
  // 1. 10으로 나눈 나머지 = 1의 자리
  // 2. 100으로 나눈 나머지 = 두자리 정수 --> 10으로 나눈 몫이 10의 자리가 됨.
  // 3. 100으로 나눈 몫 = 100의 자리
  // 4. 기본 곱셈
  // TODO: 어차피 입력이 정해져있으니 배열로 저장 후 바로 접근하는게 나을 수도.
  std::cout
   << input_A * (input_B % 10) << '\n'
   << input_A * ((input_B % 100) / 10 ) << '\n'
   << input_A * (input_B / 100) << '\n'
   << input_A * input_B << std::endl;
}