#include <stdio.h>
#include <stdarg.h>

void Process()
{
	printf("Process...\n");
}

void Stats(int health, const char* name)
{
	printf("health : %d\n", health);
	printf("name : %s\n\n", name);
}

void Swap(int* left, int* right)
{
	int temporary = *left;

	*left = *right;

	*right = temporary;
}

void Recursion(int count)
{
	if (count <= 0)
	{
		return;
	}

	printf("Recursion\n");

	Recursion(count - 1);
}

inline void Collision()
{
	printf("Collision");
}

void Average(int count, ...)
{
	// va_list : ���� �μ��� �޸� �ּҸ� �����ϴ� ������ �����Դϴ�.
	va_list pointer;

	// va_start : ���� �μ��� ������ �� �ֵ��� �����͸� �����ϴ� �Լ��Դϴ�.
	va_start(pointer, count);

	double sum = 0.0;

	// va_arg : ���� �μ� �����Ϳ��� Ư�� �ڷ����� ũ�⸸ŭ ���� �������� �Լ��Դϴ�.
	for (int i = 0; i < count; i++)
	{
		sum += va_arg(pointer, int);
	}

	double average = sum / count;

	printf("average : %lf\n", average);

	// va_end : ���� �μ��� ������ �� �����͸� NULL�� �ʱ�ȭ�ϴ� �Լ��Դϴ�.
	va_end(pointer);
}

void Provide()
{
	printf("Provide\n");
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

	// int x = 10;
	// int y = 20;
	// 
	// Swap(&x, &y);
	// 
	// printf("x ������ �� : %d\n", x);
	// printf("y ������ �� : %d\n", y);

	// �μ��� ��� ���� �����ϴ� �μ��� ���� ���޹޴� �Ű� ������
	// �ڷ����� ���� ��ġ�ؾ� �մϴ�.
#pragma endregion

#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� �����ϴ�
	// �Լ��Դϴ�.

	// Recursion(3);
#pragma endregion

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
	// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.

	// Collision();

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó�� �ӵ���
	// ��������, �ζ��� �Լ��� ���� ����ϰ� �Ǹ� �Լ��� �ڵ尡
	// ����Ǳ� ������ ���� ������ ũ�Ⱑ Ŀ���� �˴ϴ�.
#pragma endregion

#pragma region ���� �μ� ���
	// �����Ǿ� �ִ� �Ű� ���� �ܿ� ������ �������� ����
	// �μ��� �߰��� ���� �� �ִ� �μ��Դϴ�.

	// Average(5, 92, 90, 88, 95, 100);
#pragma endregion

#pragma region �Լ� ������
	// �Լ��� �ּ� ���� �����ϰ� ����ų �� �ִ�
	// ������ �����Դϴ�.

	// void (*functionPointer)();
	// 
	// functionPointer = Provide;
	// 
	// functionPointer();

#pragma endregion

	// �Լ��� ���α׷��� ���� ���� �� �Լ� ȣ�� ��ġ
	// ���� �ش� �Լ��� �̵���Ų ��, �۾��� �����ϰ�
	// �ٽ� ���� ��ġ�� ���ƿ��� �����Դϴ�.
#pragma endregion
}