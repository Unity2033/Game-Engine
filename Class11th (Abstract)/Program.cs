using UnrealEngine;

namespace Class11th__Abstract_
{
    internal class Program
    {
        static void Main(string[] args)
        {
            #region 추상화
            // 객체를 정의할 때 필요없는 부분을 생략하고 객체의
            // 속성 중에서 중요한 부분을 중점으로 두어 간단하게 
            // 설계를 있도록 만들어주는 것입니다.

            // Character character = null;
            // 
            // character = new Warrior();
            // 
            // character.Skill();
            // 
            // character.Stats();
            // 
            // character = new Wizard();
            // 
            // character.Skill();
            // 
            // character.Stats();
            // 
            // character = new Rogue();
            // 
            // character.Skill();
            // 
            // character.Stats();

            // 추상 클래스는 객체로 생성할 수 없습니다.
            #endregion

            #region 이름 공간
            // 속성을 구분할 수 있도록 유효 범위를 설정하는
            // 영역입니다.

            // Broadcast broadcast = new Broadcast();

            // broadcast.Send();

            // 이름 공간은 같은 이름의 함수나 변수를 또 다른
            // 공간에 선언하여 중복되지 않도록 선언할 수 있습니다.
            #endregion

            #region 의사 난수 생성기

            // Random random = new Random();
            // 
            // int value = random.Next(0, 3);
            // 
            // Console.WriteLine(value);

            #endregion

            #region UP - DOWN 게임
            // 
            // Random rand = new Random();
            // 
            // int computer = rand.Next(1, 31);
            // 
            // int health = 5;
            // 
            // int answer = 0;
            // 
            // while(health > 0)
            // {
            //     Console.Write("Computer가 가지고 있는 값 : ");
            // 
            //     answer = int.Parse(Console.ReadLine());
            // 
            //     if(computer > answer)
            //     {
            //         Console.WriteLine("Computer가 가지고 있는 값보다 작습니다.");
            //         health--;
            //     }
            //     else if(computer < answer)
            //     {
            //         Console.WriteLine("Computer가 가지고 있는 값보다 큽니다.");
            //         health--;
            //     }
            //     else
            //     {
            //         Console.WriteLine("게임에서 승리하였습니다.");
            //         break;
            //     }
            // 
            //     Console.WriteLine();
            // }
            // 
            // if(health <= 0)
            // {
            //     Console.WriteLine("게임에서 패배하였습니다.");
            // }

            #endregion
        }
    }
}

namespace UnrealEngine
{
    public class Broadcast
    {
        public void Send()
        {
            Console.WriteLine("Send Message");
        }
    }
}