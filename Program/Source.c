#include <stdio.h>	 
#include <math.h>

struct Card
{
	char grade;
	int health;
	double attack;

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿��� ũ�Ⱑ
	// ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.
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
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	// struct Card card = {'A', 200, 12.5};

	// ����ü�� �� ����� ����ü ���𿡼� ��Ÿ���� ������� �ʱ�ȭ�ؾ� �Ǹ�,
	// �� ������ ���ʿ������� ���������� �̾����ϴ�.

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

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������ ����
	// ���� �����Ƿ�, ����ü ���ο� �ִ� �����͸� �ʱ�ȭ
	// �� �� �����ϴ�.
#pragma endregion

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ����
	// ���� �� �ֵ��� �����Ϸ��� ���������� ��Ͽ� 
	// ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�.

	// printf("Card ����ü�� ũ�� : %u\n", sizeof(struct Card));

	// ����ü ũ���� ��� ��� ������ ������ ���� �޸�
	// ũ�Ⱑ �ٸ��� ������ �� ������, ����ü ũ�⸦ ����
	// �ϴ� ���´� �⺻ �ڷ������θ� �����˴ϴ�.
#pragma endregion

#pragma region �� �� ������ �Ÿ�

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

#pragma region �ڱ� ���� ����ü
	// �ڱ� �ڽŰ� ���� Ÿ���� �����͸� ����� �����ϰ�
	// �ִ� ����ü�Դϴ�.
	
	struct Node node1 = { 10, NULL };
	struct Node node2 = { 20, NULL };
	struct Node node3 = { 30, NULL };

	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;

#pragma endregion

	return 0;
}