namespace Class4th__Conditional_Statement_
{
    internal class Program
    {
        static void Main(string[] args)
        {
            #region 조건문
            // 어떤 조건이 주어질 때 해당 조건에 따라 동작을
            // 수행하도록 실행하는 명령문입니다.

            #region 관계 연산자
            // 두 개의 피연산자의 값을 비교하여 그 결과를 0 또는
            // 1 이라는 값으로 나타내는 연산자입니다.

            // bool result1 = 10 > 5;
            // bool result2 = 10 < 5;
            // bool result3 = 10 >= 5;
            // bool result4 = 10 <= 5;
            // bool result5 = 10 == 5;
            // bool result6 = 10 != 5;

            // Console.WriteLine("result1의 값 : " + result1);
            // Console.WriteLine("result2의 값 : " + result2);
            // Console.WriteLine("result3의 값 : " + result3);
            // Console.WriteLine("result4의 값 : " + result4);
            // Console.WriteLine("result5의 값 : " + result5);
            // Console.WriteLine("result6의 값 : " + result6);

            // 관계 연산자는 조건이 맞을 때 1 이라는 값으로 반환되며,
            // 조건이 틀릴 때는 0이라는 값으로 반환됩니다.
            #endregion

            #region if문
            // 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는
            // 명령문입니다.

            // int health = 0;

            // if(health <= 0)
            // {
            //     Console.WriteLine("GameObject Destroy");
            // }
            #endregion

            #region else if문
            // if문의 조건이 틀릴 때 else if문의 조건이 맞다면
            // 실행되는 명령문입니다.

            // char grade = 'B';
            // 
            // if(grade == 'A')
            // {
            //     Console.WriteLine("100점 ~ 91점");
            // }
            // else if(grade == 'B')
            // {
            //     Console.WriteLine("90점 ~ 81점");
            // }

            // else if문은 if문이 존재해야 사용할 수 있으며,
            // else if문의 경우 여러 개를 사용하여 연결할 수 있습니다.
            #endregion

            #region else문
            // if문과 else if문의 조건이 다 틀리면 실행되는
            // 명령문입니다.

            // int x = 0;
            // 
            // if (x > 0)
            // {
            //     Console.WriteLine("x 변수는 양수입니다.");
            // }
            // else if (x < 0)
            // {
            //     Console.WriteLine("x 변수는 음수입니다.");
            // }
            // else
            // {
            //     Console.WriteLine("x 변수는 음수도 아니고, 양수도 아닙니다.");
            // }

            // if문에 연결된 모든 조건문의 조건이 맞을 때 가장
            // 위에 있는 조건문만 실행됩니다.
            #endregion

            #region switch문
            // 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.

            // char alphabet = '1';
            // 
            // switch (alphabet)  
            // {
            //     // break문이란?
            //     // 특정한 지점에서 분기를 탈출하는 제어문입니다.
            //     case 'A': Console.WriteLine("A 입니다.");
            //         break;
            //     case 'B': Console.WriteLine("B 입니다.");
            //         break;
            //     case 'C': Console.WriteLine("C 입니다.");
            //         break;
            //     default : Console.WriteLine("Not The Alphabet");
            //         break;
            // }

            // switch문의 경우 조건에 해당하는 값에 따라 조건의
            // 위치로 이동합니다.
            #endregion

            #region 논리 연산자

            #region AND 연산자

            // int level = 99;
            // int exp = 10000;
            // 
            // if(level >= 99 && exp >= 10000)
            // {
            //     Console.WriteLine("전직을 할 수 있습니다.");
            // }

            #endregion

            #region OR 연산자

            //  int position = 0;
            //  int count = 5;
            //  
            //  if(position > 0 || count >= 5)
            //  {
            //      Console.WriteLine("Game Clear");
            //  }

            #endregion

            #region NOT 연산자
            // bool state = false;
            // 
            // if(!state)
            // {
            //     Console.WriteLine("Game Start");
            // }
            #endregion

            #endregion

            #region 사분면
            // 
            // int x = -1;
            // int y = 0;
            // 
            // if(x > 0 && y > 0)
            // {
            //     Console.WriteLine("제 1 사분면");
            // }
            // else if(x < 0 && y > 0)
            // {
            //     Console.WriteLine("제 2 사분면");
            // }
            // else if(x < 0 && y < 0)
            // {
            //     Console.WriteLine("제 3 사분면");
            // }
            // else if(x > 0 && y < 0)
            // {
            //     Console.WriteLine("제 4 사분면");
            // }
            // else if(x != 0 && y == 0)
            // {
            //     Console.WriteLine("x 절편");
            // }
            // else if(x == 0 && y != 0)
            // {
            //     Console.WriteLine("y 절편");
            // }
            // else
            // {
            //     Console.WriteLine("원점");
            // }
            #endregion

            #endregion
        }
    }
}
