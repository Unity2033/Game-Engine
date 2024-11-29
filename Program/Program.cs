namespace Program
{
    internal class Program
    {
        static void Main(string[] args)
        {
            #region 캡슐화
            // 관련성 있는 데이터와 그 데이터를 다루는 함수를
            // 객체 안에 구현하고, 객체 밖에서 알아야 할 필요가
            // 없는 속성들은 숨기는 것입니다.

            // Vitamin vitamin = new Vitamin();
            // 
            // vitamin.Protein = 30;
            // 
            // Console.WriteLine("Protein의 값 : " + vitamin.Protein);
            // 
            // vitamin.Protein = 999;

            #endregion

            #region 일반화 프로그래밍
            // 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른
            // 자료형들을 가질 수 있는 기술에 중점을 두어 재사용성을
            // 높일 수 있는 프로그래밍 방식입니다.

            // Container<char> containerChar = new Container<char>();
            // 
            // for(int i = 0; i < 10; i++)
            // {
            //     containerChar[i] = 'A';
            // 
            //     Console.Write(containerChar[i] + " ");
            // }
            // 
            // Console.WriteLine();
            // 
            // Container<int> containerInt32 = new Container<int>();
            // 
            // for (int i = 0; i < 10; i++)
            // {
            //     containerInt32[i] = i;
            // 
            //     Console.Write(containerInt32[i] + " ");
            // }
            // 
            // Console.WriteLine();
            // 
            // Container<float> containerFloat = new Container<float>();
            // 
            // for (int i = 0; i < 10; i++)
            // {
            //     containerFloat[i] = i * 1.5f;
            // 
            //     Console.Write(containerFloat[i] + " ");
            // }

            #endregion

            #region 컬렉션
            // 많은 수의 데이터를 사용 목적에 적합한 자료 구조로
            // 합친 다음 하나로 그룹화시킨 객체입니다.

            #region List
            // List<int> list = new List<int>();
            // 
            // list.Capacity = 10;
            // 
            // list.Add(10);
            // list.Add(20);
            // list.Add(30);
            // list.Add(40);
            // list.Add(50);
            // 
            // for (int i = 0; i < list.Count; i++)
            // {
            //     Console.WriteLine(list[i]);
            // }
            #endregion

            #region Stack         
            // Stack<int> stack = new Stack<int>();
            // 
            // stack.Push(10);
            // stack.Push(20);
            // stack.Push(30);
            // stack.Push(40);
            // stack.Push(50);
            // 
            // while (stack.Count > 0)
            // {
            //     Console.WriteLine(stack.Pop());
            // }
            #endregion

            #region Queue


            #endregion


            #endregion
        }
    }
}



