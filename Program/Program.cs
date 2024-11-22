namespace Program
{
    internal class Program
    {
        static int score = 0;

        static void PositionX()
        {
            int x = 5;

            Console.WriteLine("x의 값 : " + x);
        }

        static void Increase()
        {
            score++;

            Console.WriteLine("score의 값 : " + score);
        }

        static void Main(string[] args)
        {
            #region 메모리

            #region 코드 영역
            // 실행할 프로그램의 코드가 저장되는 영역이며, 프로그램이
            // 시작하고 종료될 때 까지 메모리에 계속 남아있는 특징을 가지고 있습니다.
            #endregion

            #region 데이터 영역
            // 프로그램의 정적 변수가 저장되는 영역이며, 프로그램이 실행될 때 메모리에
            // 올라가고, 프로그램이 종료되면 메모리에서 해제되는 특징을 가지고 있습니다.
            #endregion

            #region 스택 영역
            // 프로그램의 지역 변수와 매개 변수가 저장되는 영역이며, { }를 벗어나게 되면
            // 메모리에서 해제되는 특징을 가지고 있습니다.
            #endregion

            #region 관리되는 힙 영역
            // 프로그램에서 사용자가 직접 생성한 메모리가 저장되는 영역이며, 가비지 컬렉터에
            // 의해 메모리가 해제되는 특징을 가지고 있습니다.
            #endregion

            #endregion

            #region 지역 변수
            // 함수 내부에서 선언된 변수로 함수 내부에서만 접근을 허용하며,
            // 함수를 벗어나게 되면 메모리가 해제되는 변수입니다.

            // int x = 10;

            // PositionX();

            // Console.WriteLine("Main() 함수에 있는 x 의 값 : " + x);

            #endregion

            #region 정적 변수
            // 함수 내부에서 선언된 변수이지만, 단 한번만 초기화가 이루어지며
            // 프로그램이 실행될 때 메모리에 올라가게 되고 프로그램이 종료되어
            // 야만 메모리가 해제되는 변수입니다.

            // Increase();
            // Increase();
            // Increase();

            #endregion

            #region 배열
            // 같은 자료형의 변수들로 이루어진 유한 집합입니다.

            // int [ ] container = new int[5];
            // 
            // for(int i = 0; i < container.Length; i++)
            // {
            //     container[i] = (i + 1) * 10;
            // 
            //     Console.WriteLine("Previous container[" + i + "]의 값 : " + container[i]);
            // }

            // 배열의 경우 첫 번째 원소는 0부터 시작합니다.

            // container = new int[6];
            // 
            // for (int i = 0; i < container.Length; i++)
            // {
            //     container[i] = (i + 1) * 1;
            // 
            //     Console.WriteLine("New container[" + i + "]의 값 : " + container[i]);
            // }

            // 배열은 연속적인 메모리 공간을 가지며, 배열의 이름은
            // 배열의 시작 주소를 의미합니다.
            #endregion

            #region 박싱
            // 값 형식 데이터를 참조 형식으로 변환하는 과정입니다.

            // int code = 10;
            // 
            // object data = code;
            // 
            // Console.WriteLine("data 변수의 값 : " + data);

            #endregion

            #region 언박싱
            // 참조 형식의 데이터를 값 형식으로 변환하는 과정입니다.

            // char alphabet = 'A';
            // 
            // object pointer = alphabet;
            // 
            // alphabet = (char)pointer;

            #endregion

            #region 아스키 코드
            // 미국 국립 표준 협회에서 표준화한 정보 교환용
            // 7 bit 부호 체계입니다.

            // char character = (char)97;

            // Console.WriteLine("character 변수의 값 : " + character);
            #endregion

            #region 문자열
            // 연속적인 메모리 공간에 저장된 문자 변수의 집합입니다.

            string name = "Alistar";

            Console.WriteLine("name 변수의 값 : " + name);

            // 문자열은 공백도 함께 메모리 공간에 포함하여 크기가
            // 결정되며, 마지막에 문자열의 끝을 알려주는 제어 문자가
            // 추가됩니다.

            name = "Janna";

            Console.WriteLine("name 변수의 값 : " + name);

            // 문자열의 경우 서로 연속적인 메모리 공간으로 연결
            // 되어 있습니다.
            #endregion

        }
    }
}
