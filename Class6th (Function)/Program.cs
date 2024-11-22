namespace Class6th__Function_
{
    internal class Program
    {
        static void Create()
        {
            for (int i = 0; i < 3; i++)
            {
                Console.WriteLine("Create GameObject");
            }
        }

        static void Health(int health)
        {
            Console.WriteLine("체력 : " + health);
        }

        static void Swap(ref int x, ref int y)
        {
            int temporary = y;

            y = x;

            x = temporary;
        }

        static void Position(int x = 0, int y = 0)
        {
            Console.WriteLine("x의 좌표 : " + x);
            Console.WriteLine("y의 좌표 : " + y);
        }

        static void Score(char grade, out int score)
        {
            switch (grade)
            {
                case 'A':
                    score = 100;
                    break;
                case 'B':
                    score = 90;
                    break;
                case 'C':
                    score = 80;
                    break;
                case 'D':
                    score = 70;
                    break;
                case 'E':
                    score = 60;
                    break;
                default:
                    score = 0;
                    break;
            }
        }

        static void Connect(int count)
        {
            if (count <= 0)
            {
                return;
            }

            Console.WriteLine("Connection...");

            Connect(count - 1);
        }

        static void Receive(in int packet)
        {
            Console.WriteLine("packet : " + packet);
        }

        static void Main(string[] args)
        {
            #region 함수
            // 하나의 특별한 목적의 작업을 수행하기 위해 독립적으로
            // 설계된 코드의 집합입니다.

            // Create();

            // Create();

            // 함수의 경우 자료형과 반환하는 값의 형태가 일치하지 않으면
            // 원하는 값을 얻을 수 없습니다.
            #endregion

            #region 매개 변수 한정자
            // 함수에 전달하는 매개 변수의 전달 방식을 
            // 지정하기 위해 사용하는 지정자입니다.

            #region 매개 변수
            // 함수의 정의에서 전달받은 인수를 함수 내부로 전달하기 
            // 위해 사용하는 변수입니다.

            // int currentHealth = 100;

            // Health(currentHealth);

            // 하나의 함수에서 서로 다른 자료형의 매개 변수를 선언할 수 
            // 있고, 여러 개의 매개 변수를 선언할 수 있습니다.
            #endregion

            #region ref 매개 변수 한정자

            // int x = 10;
            // int y = 20;
            // 
            // Swap(ref x, ref y);
            // 
            // Console.WriteLine("x의 값 : " + x);
            // Console.WriteLine("y의 값 : " + y);

            #endregion

            #region out 매개 변수 한정자

            // int score = 0;
            // 
            // Score('B', out score);
            // 
            // Console.WriteLine("score 변수의 값 : " + score);

            #endregion

            #region in 매개 변수 한정자

            // int data = 100;

            // Receive(data);

            #endregion

            #region 기본 매개 변수
            // 함수를 선언 및 정의할 때 사용자가 미리 기본값을
            // 지정하는 매개변수입니다.

            // Position(5);

            // 기본 매개 변수를 지정할 때 오른쪽에서 부터 지정해서 사용할 수 
            // 있으며, 기본 매개 변수의 경우 왼쪽에서 데이터를 넣어줍니다.
            #endregion

            #region 재귀 함수
            // 어떤 함수에서 자신을 다시 호출하여 작업을 
            // 수행하는 함수입니다.

            // Connect(3);

            // 재귀 함수는 함수를 계속 호출하기 때문에 
            // 스택 영역에 메모리가 계속 쌓이기 되므로
            // 스택 오버플로우가 발생합니다.
            #endregion

            #endregion
        }
    }
}
