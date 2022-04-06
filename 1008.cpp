// 문제: 두 정수의 나눗셈을 출력하라. 단, 출력값과 정답의 오차가 10^-9 이하여야 한다.
//
// 어떻게 풀까?
// - 입력을 받아와 저장하고, 활용할 수 있는지 묻는 문제
// - std::cin의 사용
// - 기본 연산자를 알고 있는가?
// - 부동소수점 자료형을 활용할 수 있는가?
// - 출력값 자릿수를 조정할 수 있는가?

// 표준 입출력 헤더
#include <iostream>

// 진입점
int main() {

  // 결과가 나눗셈이어야 하므로, 각 변수는 부동소수점을 지원하는 자료형이어야함.
  double input_A {0};
  double input_B {0};

  // iostream 내부의 std::cin 사용
  // >> : 좌항의 입력 스트림을 우항에 '넣는' 연산자.
  std::cin >> input_A >> input_B;

  // iostream 내부의 std::cout 사용
  // << : 우항을 좌항으로 '보낸다' 라는 의미의 연산자.
  // / : 좌항 / 우항 값을 반환하는 연산자.
  // std::cout.precision(parameter) : 매개변수로 전달하는 인자의 크기만큼의 정밀도로 출력을 조정
  std::cout.precision(11);
  std::cout << input_A / input_B;
}