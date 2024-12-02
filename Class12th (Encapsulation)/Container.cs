namespace Class12th__Encapsulation_
{
    internal class Container<T>
    {
        private T [ ] container;

        public Container()
        {
            container = new T[10];
        }
        
        #region 형식 매개 변수
        // 형식을 지정하지 않아도 호출 시에 형식만 지정하면
        // 어떤 형식으로 다 설정될 수 있는 매개 변수입니다.

        public T this[int index] 
        {
            get { return container[index]; } 
            set { container[index] = value; }
        }

        #endregion

    }
}
