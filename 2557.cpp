// 문제: Hello World!를 출력하시오.
//
// 어떻게 풀까?
// - C++ 환경에서 표준 출력을 사용할 수 있는지를 묻는 문제.
// - 표준 헤더를 이용해서 출력 스트림을 만들면 됨.

// 표준 입출력 헤더
#include <iostream>

// 프로그램 진입점인 메인 함수
int main() {

  // iostream 내부 std::cout을 사용한 문장의 출력.
  // << 연산자 우항을 표준 출력한다.
  std::cout << "Hello World!";
}
