#include <stdio.h>

int stage = 1;

void SetStage(int count)
{
	stage = count;
}

void Increase()
{
	static int score = 0;

	score++;

	printf("score : %d\n", score);
}

int main()
{
#pragma region �޸� ����

#pragma region CODE ����
	// ���α׷��� �����ϱ� ���� �ʿ��� �ڵ尡 ����Ǵ� ��������
	// �Լ��� �ּҿ� ����� ����Ǵ� �޸� �����Դϴ�.
#pragma endregion

#pragma region DATA ����
	// ���α׷��� ���۰� �Բ� �޸𸮿� ����Ǹ�, ���α׷���
	// ����� �� �޸𸮰� �����ǰ�, �ʱ�ȭ�� �̷���� ����
	// ������ ���� ������ ����Ǵ� �޸� �����Դϴ�.
#pragma endregion

#pragma region BSS ����
	// ���α׷��� ����� �� �ʱ�ȭ�� �̷������ ���� ���� ������
	// ���� ������ ����Ǵ� �޸� �����Դϴ�.
#pragma endregion

#pragma region STACK ����
	// ���α׷��� �ڵ����� ����ϴ� �ӽ� �޸� ��������
	// �Լ� ȣ�� �� �����Ǵ� ���� ������ �Ű� ������ ����
	// �Ǵ� �޸� �����Դϴ�.
#pragma endregion

#pragma region HEAP ����
	// ����ڰ� ���� �޸� ������ �������ִ� �޸� �����̸�,
	// ������� �ʴ� ��� ����ڰ� ���� �޸𸮸� �����ؾ� �Ǵ�
	// �޸� �����Դϴ�.
#pragma endregion

#pragma endregion

#pragma region ������ ����

#pragma region ���� ����
	// �Լ� ���ο��� ����� ������ �Լ� ���ο����� ������ �� ������,
	// �Լ��� ����Ǿ��� �� �޸𸮿��� ������� Ư¡�� ������ �ִ� �����Դϴ�.

	//int x = 10;
	//
	//{
	//	 int x = 20;
	//
	//	 printf("x ������ �� : %d\n", x);
	//}
	//
	//printf("x ������ �� : %d\n", x);

	// ���� ������ ����� ���ÿ� �ʱ�ȭ���� ������, ������ �޸� ��ġ��
	// �����ߴ� ���� ������ �˴ϴ�.
#pragma endregion

#pragma region ���� ����
	// �Լ� �ܺο��� ����� ������ ���α׷��� ����� ��
	// �޸𸮿� �ö󰡰� �Ǹ�, ���α׷��� ����Ǹ� �޸�
	// ���� �����Ǵ� �����Դϴ�.

	// SetStage(3);

	// printf("stage ������ �� : %d\n", stage);

	// ���� ������ ����� ���ÿ� �ʱ�ȭ�� �Ǿ� ���� ������
	// �ڵ����� �ʱ�ȭ�˴ϴ�.
#pragma endregion

#pragma region ���� ����
	// ���α׷��� ����Ǵ� ���� �޸𸮿� �����ϸ�, �����
	// ���� �������� ������ ������ Ư¡�� ������ �ִ� �����Դϴ�.

	// Increase();
	// Increase();
	// Increase();

	// ���� ������ �� �� ���� �ʱ�ȭ�� �̷�����ϴ�.
#pragma endregion

#pragma endregion

	return 0;
}