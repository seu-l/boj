// 문제: 입력 뒤에 ??!를 concatenate 하라.
//
// 어떻게 풀까?
// - 입력을 받아와 저장하고, 활용할 수 있는지 묻는 문제
// - std::cin의 사용
// - string 입력을 받을 수 있는가?

// 표준 입출력 헤더
#include <iostream>
// 문자열 입력을 받기 위한 string 헤더
#include <string>

// 진입점
int main() {

  // 문자열을 담기 위한 string형 변수 선언
  std::string id;

  // iostream 내부의 std::cin 사용
  // 아이디에는 공백이 포함되지 않기 때문에 cin 사용 가능
  std::cin >> id;

  // iostream 내부의 std::cout 사용
  std::cout << id << "\?\?!" << std::endl;
}