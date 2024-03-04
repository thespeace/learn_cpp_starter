#include <iostream>

int main()
{
	//정수형 변수의 선언 및 초기화
	int x, y(2), z = 3; //c스타일의 초기화
	x = 1;

	std::cout << x << std::endl; //endl : end line, 개행을 의미
	std::cout << y << std::endl;
	std::cout << z << std::endl;

	int num0 = 1;
	int num1 = num0 * 1.5;
	int num2 = num0 / 2;
	int num3 = 2.5;

	std::cout << "num0 " << num0 << std::endl; // 1
	std::cout << "num1 " << num1 << std::endl; // 1
	std::cout << "num2 " << num2 << std::endl; // 0
	std::cout << "num3 " << num3 << std::endl; // 2, 정수형은 소수점 아래는 표현 불가(소수점 아래 값은 버림)


	//변수가 아닌 값을 입력하는 것을 리터럴(literal)이라 한다. 
	int literal0 = 11;   // 10진수
	int literal1 = 011;  // 8진수(0)
	int literal2 = 0b11; // 2진수(0b)
	int literal3 = 0x11; // 16진수(0x)

	std::cout << "literal0 " << literal0 << std::endl; // 11
	std::cout << "literal1 " << literal1 << std::endl; // 8  + 1 = 9
	std::cout << "literal2 " << literal2 << std::endl; // 2  + 1 = 3
	std::cout << "literal3 " << literal3 << std::endl; // 16 + 1 = 17, 리터럴 중에는 접두어를 붙힘으로써 의미가 변형된다.


	//자료형의 크기는 컴파일러 또는 컴퓨터 아키텍처에 의존한다.
	/// <see cref="https://en.cppreference.com/w/cpp/language/types"/>
	int integerSize = 0;
	long longSize = 0;
	int* integerPointerSize = &integerSize; // `*` : 타입 선언시 타입 앞에 에스터 리스크를 붙히면 포인터가 된다.

	std::cout << sizeof(integerSize) << std::endl;
	std::cout << sizeof(longSize) << std::endl;
	std::cout << sizeof(integerPointerSize) << std::endl; // sizeof() : 연산자를 사용시 변수의 사이즈(bytes)를 알 수 있다.
	

	//고정된 너비 정수 (fixed-width integers)
	//대상 아키텍처에 따라 크기가 달라질 수 있는 변수를 다루는 것은 사이즈에 민감한 것들을 다룰때 결과가 완전히 다르게 나온다. ex) 라이브러리나 알고리즘들 등등
	int8_t num123 = 0;
	int16_t num234 = 0;
	int32_t num345 = 0;

	std::cout << sizeof(num123) << std::endl;
	std::cout << sizeof(num234) << std::endl;
	std::cout << sizeof(num345) << std::endl;
}