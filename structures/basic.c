#include<stdio.h>

typedef struct complex
{
    int a;
    int b;
} complex;
complex add(complex n1, complex n2);

complex add(complex n1,complex n2){
    complex temp;
    temp.a = n1.a + n2.a;
    temp.b = n1.b + n2.b;
    return temp;
}
typedef struct rectangle
{
    int a;
    int b;
} rectangle;
int area(rectangle r){
    return r.a * r.b;
}
int main(){
    struct complex n1 = {3, 4};
    struct complex n2 = {4, 5};
    complex ans = add(n1, n2);
    printf("%d + %di\n", ans.a, ans.b);
    rectangle r1 = {10,20};
    printf("Area of rectangle is %d", area(r1));
    return 0;
}