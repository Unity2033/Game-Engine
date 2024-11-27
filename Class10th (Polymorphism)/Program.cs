namespace Class10th__Polymorphism_
{
    class Coordinate
    {
        public void Position(int x, int y)
        {
            Console.WriteLine("x : " + x);
            Console.WriteLine("y : " + y);
        }

        public void Position(float x, float y)
        {
            Console.WriteLine("x : " + x);
            Console.WriteLine("y : " + y);
        }

        public void Position(float x, float y, float z)
        {
            Console.WriteLine("x : " + x);
            Console.WriteLine("y : " + y);
            Console.WriteLine("z : " + z);
        }
    }

    class Vehicle
    {
        protected float velocity;

        public void Behavior()
        {
            Console.WriteLine("Vehicle Behavior");
        }
    }

    class Bicycle : Vehicle
    {
        public new void Behavior()
        {
            Console.WriteLine("Bicycle Behavior");
        }
    }

    class Item
    {
        public virtual void Use()
        {
            Console.WriteLine("Use Item");
        }
    }

    class Potion : Item
    {
        public override void Use()
        {
            Console.WriteLine("Use Potion");
        }
    }

    class Knife : Item
    {
        public override void Use()
        {
            Console.WriteLine("Use Knife");
        }
    }

    class Grenade : Item
    {
        public override void Use()
        {
            Console.WriteLine("Use Grenade");
        }
    }

    internal class Program
    {

        static void Main(string[] args)
        {
            #region 다형성
            // 여러 개의 서로 다른 객체가 동일한 기능을 서로 다른 방법으로
            // 처리할 수 있는 작업입니다.

            #region 함수의 오버로딩
            // 같은 이름의 함수를 매개 변수의 자료형과 매개 변수의
            // 수로 구분하여 여러 개를 선언할 수 있는 기능입니다.

            // Coordinate coordinate = new Coordinate();
            // 
            // coordinate.Position(10, 10);
            // coordinate.Position(5.75f, 8.725f);
            // coordinate.Position(1.325f, 2.785f, 3.125f);

            // 함수의 오버로딩의 경우 함수의 매개 변수에 전달하는
            // 인수의 형태를 보고 호출하므로, 반환형으로 함수의
            // 오버로딩은 생성할 수 없습니다.
            #endregion

            #region 함수의 오버라이딩
            // 상위 클래스에 있는 함수를 하위 클래스에서 재정의하여
            // 사용하는 기능입니다.

            // Vehicle vehicle = new Vehicle();
            // 
            // vehicle.Behavior();
            // 
            // Bicycle bicycle = new Bicycle();
            // 
            // bicycle.Behavior();

            // 함수의 오버라이드는 상속 관계에서만 이루어지며, 하위
            // 클래스에서 함수를 재정의할 때 상위 클래스의 함수 
            // 형태와 일치해야 합니다.
            #endregion

            #region 가상 함수
            // 상속하는 클래스 내에서 같은 형태의 함수로 재정의 
            // 될 수 있는 함수입니다.

            // Item item = null;
            // 
            // Potion potion = new Potion();
            // 
            // item = potion;
            // 
            // item.Use();
            // 
            // 가상 함수의 경우 가상 함수 테이블을 사용하여 
            // 호출되는 함수를 실행 시간에 결정하며, 정적으로
            // 선언된 함수는 가상 함수로 선언할 수 없습니다.

            // Knife knife = new Knife();
            // 
            // item = knife;
            // 
            // item.Use();
            // 
            // 가상 함수는 한 개 이상의 가상 함수를 포함하는
            // 클래스가 있을 대 객체 주소에 가상 함수 테이블을
            // 추가합니다.

            //  Grenade grenade = new Grenade();
            // 
            //  item = grenade;
            // 
            //  item.Use();

            // 가상 함수 실행 시간에 상위 클래스에 대한 참조로
            // 하위 클래스에 재정의된 함수를 호출할 수 있습니다.
            #endregion

            // 다형성은 컴파일 시점에 함수와 속성이 결정되는 정적 바인딩을
            // 하지 않고, 실행 시간에 함수와 속성이 결정될 수 있는 동적 
            // 바인딩을 가능하게 합니다.  
            #endregion
        }
    }
}
