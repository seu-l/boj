// 문제: 두 정수의 곱을 출력하라.
//
// 어떻게 풀까?
// - 입력을 받아와 저장하고, 활용할 수 있는지 묻는 문제
// - std::cin의 사용
// - 기본 연산자를 알고 있는가?

// 표준 입출력 헤더
#include <iostream>

// 진입점
int main() {

  // 정수 입력 A와 B를 담을 변수 두 개 선언
  // {} 할당은 C++ 11에서 추가된 방식으로, g++사용시 -std=c++17 플래그 줘야함.
  int input_A {0};
  int input_B {0};

  // iostream 내부의 std::cin 사용
  // >> : 좌항의 입력 스트림을 우항에 '넣는' 연산자.
  std::cin >> input_A >> input_B;

  // iostream 내부의 std::cout 사용
  // << : 우항을 좌항으로 '보낸다' 라는 의미의 연산자.
  // * : 좌항 x 우항 값을 반환하는 연산자.
  std::cout << input_A * input_B;
}