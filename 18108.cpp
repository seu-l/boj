// 문제: 불기 연도를 서기 연도로 변경하라.
//
// 어떻게 풀까?
// - 입력을 받아와 저장하고, 활용할 수 있는지 묻는 문제
// - std::cin의 사용


#include <iostream>

int main() {

  // 정수형으로 불기 변수 선언
  int buddhist_calendar {0};

  // 입력 받아서 변수에 저장
  std::cin >> buddhist_calendar;

  // 불기 -> 서기로 변경하려면 -543이 필요하다.
  std::cout << buddhist_calendar - 543 << std::endl;
}