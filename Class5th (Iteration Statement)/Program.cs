namespace Class5th__Iteration_Statement_
{
    internal class Program
    {
        static void Main(string[] args)
        {
            #region 반복문
            // 프로그램 내에서 특정한 작업을 반복적으로 수행하는
            // 명령문입니다.

            #region 증감 연산자
            // 피연산자를 하나씩 증가시키거나 감소시킬 때 사용하는
            // 연사자입니다.

            //  int x = 0;
            //  
            //  int vectorX = ++x;
            //  
            //  Console.WriteLine("전위 증가한 x의 값 : " + x);
            //  Console.WriteLine("vectorX의 값 : " + vectorX);
            //  
            //  vectorX = --x;
            //  
            //  Console.WriteLine("전위 감소한 x의 값 : " + x);
            //  Console.WriteLine("vectorX의 값 : " + vectorX);

            // 전위 증감 연산자는 변수의 값을 증감시킨 후에 연산을
            // 수행하고, 후위 증감 연산자는 연산을 수행한 다음 변수
            // 의 값을 증감시킵니다.

            // int y = 0;
            // int vectorY = y++;
            // 
            // Console.WriteLine("후위 증가한 y의 값 : " + y);
            // Console.WriteLine("vectorY의 값 : " + vectorY);
            // 
            // vectorY = y--;
            // 
            // Console.WriteLine("후위 감소한 y의 값 : " + y);
            // Console.WriteLine("vectorY의 값 : " + vectorY);

            #endregion

            #region for문
            // 초기식을 연산하여 조건식의 결과에 따라 특정한
            // 횟수만큼 반복하는 반복문입니다.

            // for(int i = 0; i < 3; i++)
            // {
            //     Console.WriteLine("Execute...");
            // }

            // for 문의 경우 조건이 끝나는 형태와 반대로 초기식을
            // 연산하게 되면 조건이 일치하지 않아 계속 반복적으로
            // 실행되는 문제가 발생합니다.
            #endregion

            #region while문
            // 특정 조건을 만족할 때까지 계속해서 주어진 명령문을
            // 실행하는 반복문입니다.

            //  int count = 1;
            //  
            //  while(count <= 5)
            //  {
            //      Console.WriteLine(count);
            //  
            //      count++;
            //  }

            // while문의 경우 위에서 아래로 실행되며, 아래에 있는
            // 명령문의 실행이 다 끝나면 다시 위에 있는 명령문으로
            // 돌아가는 반복하는 구조입니다.
            #endregion

            #region do while문
            // 조건과 상관없이 한 번의 작업을 수행한 다음 조건에
            // 따라 명령문을 실행하는 반복문입니다.

            // int connection = 0;
            // 
            // do
            // {
            //     Console.WriteLine("connection");
            // }
            // while (connection > 0);

            // do while문은 do에서 변수를 생성하고 초기화를 하게 되면
            // while문의 조건에서 do에 생성한 변수를 인식할 수 없습니다.
            #endregion

            #region continue문
            // 해당 조건문만 실행하지 않고, 반복문은 이어서
            // 실행되는 제어문입니다.

            // for(int i = 1; i <= 10; i++)
            // {
            //     if(i % 3 == 0)
            //     {
            //         continue;
            //     }
            // 
            //     Console.WriteLine(i);
            // }

            #endregion

            #region 2중 for문
            // for(int i = 0; i < 3; i++)
            // {
            //     Console.WriteLine("i의 값 : " + i);
            // 
            //     for(int j = 0; j < 3; j++)
            //     {
            //         Console.WriteLine("j의 값 : " + j);
            //     }
            // }
            #endregion

            #region 구구단

            // for(int i = 1; i <= 9; i++)
            // {
            //     Console.WriteLine("구구단 " + i + " 단");
            // 
            //     Console.WriteLine();
            // 
            //     for (int j = 1; j <= 9; j++)
            //     {
            //         Console.WriteLine(i + " x " + j + " = " + i * j);
            //     }
            // 
            //     Console.WriteLine();
            // }

            #endregion

            #region Star Wars
            // for(int i = 0; i < 5; i++)
            // {
            //     for(int j = 0; j <= i; j++)
            //     {
            //         Console.Write("★");
            //     }
            // 
            //     Console.WriteLine();
            // }
            #endregion

            #endregion
        }
    }
}
