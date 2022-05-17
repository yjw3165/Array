#include <iostream>
#include <array>

using namespace std;

int main()
{
	//배열은 같은 타입의 값을 나란히 저장하며, 배열에 놓인 위치로 접근한다.
	//배열을 선언할 때는 배열의 크기를 지정해야하는데 반드시 상수 또는 상수 표현식으로 지정해야한다.

	int myArray[3];
	myArray[0] = 0;
	myArray[1] = 0;
	myArray[2] = 0;
	//C++에서 배열의 첫번째 원소 위치는 0이다.
	//그러므로 마지막 원소의 위치는 배열크기에서 1을 뺀 값이다.

	int myArray1[3] = { 0 };
	//위의 myArray배열과 같이 원소가 3개이면서 각각의 원소 값이 전부 0으로 초기화 된것이다.
	int myArray2[3] = {};
	//또는 0을 생략해도 0으로 초기화 된다.
	int myArray3[] = { 1,2,3,4 };
	//크기를 지정하지 않고 원소 갯수를 직접 지정하면 배열의 크기는 컴파일러가 알아서 지정한다.
	int myArray4[3] = { 2 };
	//이러면 첫 원소의 값만 2이고 나머지는 0으로 초기화 된다.

	unsigned int ArraySize = size(myArray4);
	//이러면 배열의 크기를 알 수 있다.
	unsigned int ArraySize1 = sizeof(myArray4);
	//Sizeof()로 배열크기를 구할 수 있다.

	char TicTacBoard[3][3];
	TicTacBoard[1][1] = 'o';
	//이러면 2차원 배열이 되고
	//X Y로 3칸씩 9칸 배열이고
	//x=1 y=1 의 값은 o이다.

	//여기까지 C스타일 배열이었고
	//C++에서는 std::array라는 고정 크기 컨테이너를 제공한다.
	//<array> 헤더 파일에 정의 되어 있다.
	//C스타일 배열에 비해 std::array는 여러가지 장점을 가지고 있다.
	//항상 크기를 알수 있다. 
	//자동으로 포인터를 캐스팅하지 않아서 버그를 방지한다.
	//Iterator로 배열에 원소에 대한 반복문을 쉽게 작성할 수 있다.
	
	//array컨테이너
	//array<원소 타입, 배열 크기>

	array<int, 3> arr = { 9,8,7 };
	cout << "Array Size = " << arr.size() << endl;
	cout << "2nd element = " << arr[1] << endl;
	return 0;
}