#include <stdio.h>

void Process()
{
	printf("Process...\n");
}

void Stats(int health, const char * name)
{
	printf("health : %d\n", health);
	printf("name : %s\n\n", name);
}

void Swap(int left, int right)
{
	int temporary = left;

    left = right;

	right = temporary;
}

void main()
{
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����Դϴ�.

	// Process();

#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η�
	// �����ϱ� ���� ����ϴ� �����Դϴ�.

	// Stats(100, "Slime");
	// Stats(250, "Goblin");
	// Stats(500, "Junior Golem");

	// �Ű� ������ �Լ� ���ο����� ������ �̷������,
	// ���� ���� �Ű� ������ ������ �� �ֽ��ϴ�.
#pragma endregion

#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű� ������ ������ ���޵Ǵ� ���Դϴ�.

	int x = 10;
	int y = 20;

	Swap(x, y);

	printf("x ������ �� : %d\n", x);
	printf("y ������ �� : %d\n", y);

	// �μ��� ��� ���� �����ϴ� �μ��� ���� ���޹޴� �Ű� ������
	// �ڷ����� ���� ��ġ�ؾ� �մϴ�.
#pragma endregion



	// �Լ��� ���α׷��� ���� ���� �� �Լ� ȣ�� ��ġ
	// ���� �ش� �Լ��� �̵���Ų ��, �۾��� �����ϰ�
	// �ٽ� ���� ��ġ�� ���ƿ��� �����Դϴ�.
#pragma endregion


}