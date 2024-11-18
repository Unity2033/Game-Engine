namespace Program
{
    internal class Program
    {
        static void Main(string[] args)
        {
            #region 오버플로우
            // 특정한 자료형이 표현할 수 있는 최댓값의 범위를
            // 넘어서 연산을 수행하는 과정입니다.

            // short mineral = 32767;

            // Console.WriteLine("mineral 변수의 값 : " + mineral);

            // 오버플로우는 부호 없는 자료형에서도 똑같이 발생합니다.
            #endregion

            #region 언더플로우
            // 특정한 자료형이 표현할 수 있는 최솟값의 범위를
            // 넘어서 연산을 수행하는 과정입니다.

            // short gas = -32769;

            // Console.WriteLine("gas의 값 : " + gas);

            // 언더플로우는 부호 없는 자료형에서도 똑같이 발생하며,
            // 최솟값보다 더 작은 값으로 저장하게 되면 최댓값부터
            // 다시 최솟값을 넘어간 만큼 다시 계산합니다.
            #endregion

            #region 부호 없는 자료형

            // 최댓값 : 65535
            // 최솟값 : 0

            // 42,~~~ 
            // ushort money = 65535;

            // Console.WriteLine(money);

            #endregion

            #region 실수를 저장하는 방법

            #region 실수 형태의 10 진수를 2 진수로 변환하는 과정
            // 10진수 실수 부분을 1.0이 될 때까지 계속 2로 곱한 다음
            // 곱한 결과의 정수 부분을 위에서 아래로 순서대로 정렬합니다.

            // float pi = 3.1111111f;

            // Console.WriteLine(pi);

            // float 자료형은 소수점 이하 6자리까지만 정확도를 표기하며,
            // double 자료형의 경우 소수점 이하 15자리까지만 정확도를 표기합니다.
            #endregion

            #endregion

            #region 시프트 연산자
            // 비트 값을 주어진 수만큼 특정한 방향으로
            // 이동시키는 연산자입니다.

            // int x = 4; // 0 0 0 0 0 1 0 0 
            // int y = 9; // 0 0 0 0 1 0 0 1

            // // 0 0 0 1 0 0 0 0 
            // Console.WriteLine("x 변수를 왼쪽으로 2번 이동한 결과 : " + (x << 2));

            // // 0 0 0 0 0 0 1 0
            // Console.WriteLine("y 변수를 오른쪽으로 2번 이동한 결과 : " + (y >> 2));

            #endregion

            #region 자료형 변환
            // 서로 다른 자료형을 가지고 있는 변수끼리 연산이 이루어
            // 질 때 기존에 지정했던 자료형을 다른 자료형으로 변환하는
            // 과정입니다.

            #region 암묵적 형 변환
            // 서로 다른 자료형으로 연산이 이루어질 때 자료형의
            // 크기가 큰 자료형으로 변환되는 과정입니다.

            // int initializeHealth = 100;
            // 
            // float health = initializeHealth + 5.0f;
            // 
            // Console.WriteLine("health의 변수의 값 : " + health);
            #endregion

            #region 명시적 형 변환
            // 연산이 이루어지기 전에 사용자가 직접 자료형을
            // 변환하는 과정입니다.

            // int attack = 10;
            // int defense = 3;
            // 
            // float damage = (float)attack / defense;
            // 
            // Console.WriteLine("damage 변수의 값 : " + damage);

            // 정수형 변수끼리 연산을 수행하게 되면 정수의 결과
            // 값만 가질 수 있습니다.
            #endregion


            #endregion
        }
    }
}
