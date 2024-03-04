#include <iostream>

int main()
{
	//������ ������ ���� �� �ʱ�ȭ
	int x, y(2), z = 3; //c��Ÿ���� �ʱ�ȭ
	x = 1;

	std::cout << x << std::endl; //endl : end line, ������ �ǹ�
	std::cout << y << std::endl;
	std::cout << z << std::endl;

	int num0 = 1;
	int num1 = num0 * 1.5;
	int num2 = num0 / 2;
	int num3 = 2.5;

	std::cout << "num0 " << num0 << std::endl; // 1
	std::cout << "num1 " << num1 << std::endl; // 1
	std::cout << "num2 " << num2 << std::endl; // 0
	std::cout << "num3 " << num3 << std::endl; // 2, �������� �Ҽ��� �Ʒ��� ǥ�� �Ұ�(�Ҽ��� �Ʒ� ���� ����)


	//������ �ƴ� ���� �Է��ϴ� ���� ���ͷ�(literal)�̶� �Ѵ�. 
	int literal0 = 11;   // 10����
	int literal1 = 011;  // 8����(0)
	int literal2 = 0b11; // 2����(0b)
	int literal3 = 0x11; // 16����(0x)

	std::cout << "literal0 " << literal0 << std::endl; // 11
	std::cout << "literal1 " << literal1 << std::endl; // 8  + 1 = 9
	std::cout << "literal2 " << literal2 << std::endl; // 2  + 1 = 3
	std::cout << "literal3 " << literal3 << std::endl; // 16 + 1 = 17, ���ͷ� �߿��� ���ξ �������ν� �ǹ̰� �����ȴ�.


	//�ڷ����� ũ��� �����Ϸ� �Ǵ� ��ǻ�� ��Ű��ó�� �����Ѵ�.
	/// <see cref="https://en.cppreference.com/w/cpp/language/types"/>
	int integerSize = 0;
	long longSize = 0;
	int* integerPointerSize = &integerSize; // `*` : Ÿ�� ����� Ÿ�� �տ� ������ ����ũ�� ������ �����Ͱ� �ȴ�.

	std::cout << sizeof(integerSize) << std::endl;
	std::cout << sizeof(longSize) << std::endl;
	std::cout << sizeof(integerPointerSize) << std::endl; // sizeof() : �����ڸ� ���� ������ ������(bytes)�� �� �� �ִ�.
	

	//������ �ʺ� ���� (fixed-width integers)
	//��� ��Ű��ó�� ���� ũ�Ⱑ �޶��� �� �ִ� ������ �ٷ�� ���� ����� �ΰ��� �͵��� �ٷ궧 ����� ������ �ٸ��� ���´�. ex) ���̺귯���� �˰���� ���
	int8_t num123 = 0;
	int16_t num234 = 0;
	int32_t num345 = 0;

	std::cout << sizeof(num123) << std::endl;
	std::cout << sizeof(num234) << std::endl;
	std::cout << sizeof(num345) << std::endl;
}