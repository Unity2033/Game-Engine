#include <stdio.h>	 
#include <math.h>

struct Card
{
	char grade;
	int health;
	double attack;

	// 구조체의 크기는 구조체를 구성하는 멤버 중에서 크기가
	// 가장 큰 자료형의 배수가 되도록 설정합니다.
};

struct Point2D
{
	int x;
	int y;
};

struct Node
{
	int data;
	struct Node* next;
};

int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

	// struct Card card = {'A', 200, 12.5};

	// 구조체의 각 멤버는 구조체 선언에서 나타나는 순서대로 초기화해야 되며,
	// 이 순서는 왼쪽에서부터 오른쪽으로 이어집니다.

	// printf("card.grade : %c\n", card.grade);
	// printf("card.health : %d\n", card.health);
	// printf("card.attack : %lf\n\n", card.attack);
	// 
	// card.grade = 'B';
	// card.health = 100;
	// card.attack = 7.5;
	// 
	// printf("card.grade : %c\n", card.grade);
	// printf("card.health : %d\n", card.health);
	// printf("card.attack : %lf\n", card.attack);

	// 구조체를 선언하기 전에 구조체는 메모리 공간이 생성
	// 되지 않으므로, 구조체 내부에 있는 데이터를 초기화
	// 할 수 없습니다.
#pragma endregion

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에
	// 읽을 수 있도록 컴파일러가 레지스터의 블록에 
	// 맞추어 바이트를 패딩해주는 최적화 작업입니다.

	// printf("Card 구조체의 크기 : %u\n", sizeof(struct Card));

	// 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리
	// 크기가 다르게 설정될 수 있으며, 구조체 크기를 결정
	// 하는 형태는 기본 자료형으로만 구성됩니다.
#pragma endregion

#pragma region 두 점 사이의 거리

	//	struct Point2D rogue = {0, 0};
	//	struct Point2D slime = {1, 1};
	//	
	//	double x = rogue.x - slime.x;
	//	double y = rogue.y - slime.y;
	//	
	//	double distance = sqrt(pow(x, 2) + pow(y, 2));
	//	
	//	if (distance >= 3.0)
	//	{
	//		printf("Can't Attack");
	//	}
	//	else
	//	{
	//		printf("Can Attack");
	//	}

#pragma endregion

#pragma region 자기 참조 구조체
	// 자기 자신과 같은 타입의 포인터를 멤버로 포함하고
	// 있는 구조체입니다.
	
	struct Node node1 = { 10, NULL };
	struct Node node2 = { 20, NULL };
	struct Node node3 = { 30, NULL };

	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;

#pragma endregion

	return 0;
}