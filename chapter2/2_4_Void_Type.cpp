void my_function() // return type 없으면 void, my_function 안에 파라미터가 없으면 void 쳐야하나 요샌 안침
{

}

int main()
{
    int i = 123;
    float f = 123.456f;

    void *my_void;
    // pointer 다룰 때 void 많이 사용
    my_void = (void*)&i;
    my_void = (void*)&f; // 주소 데이터 타입은 동일

    return 0;

}