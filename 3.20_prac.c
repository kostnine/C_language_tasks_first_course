#include <stdio.h> //task 1
int main() 
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d %d", c,b,a);
    return 0;
}
Ввод:  1 3 5  ||  1 1 2
Вывод: 5 3 1  ||  2 1 1


#include <stdio.h> //task 2
int main() 
{
    int a,b,sum;
    scanf("%d %d", &a, &b);
    sum = a+b;
    printf("%d\n",sum);
    return 0;

}

Ввод:  10 2  ||  123456789 1
Вывод:  12   ||  123456790

#include <stdio.h> //task 3
int main()
{
    int a, b, proizvedenie;
    scanf("%d %d",&a, &b);
    proizvedenie = a*b;
    printf("%d\n", proizvedenie);
    return 0;

}

Ввод:  10 2  ||  300000 500000
Вывод: 20    ||  150000000000

#include <stdio.h> //task 4
int main()
{
    int a,b;
    float res;
    scanf("%d %d",&a, &b);
    res = (float) a/b;
    printf("%.2f\n", res);
    return 0;

}

Ввод:  2 3  ||  3 2
Вывод: 0.67 ||  1.50

#include <stdio.h> //task 5
int main()
{
    long long  a;
    int b;
    int d;
    scanf("%lld", &a);
    b = a % 10;
    d = a % 100 / 10;
    printf("%d\n", b);
    printf("%d\n", d);
    return 0;

}

Ввод:  2019 ||  7
Вывод:  9   ||  7
        1       0  

#include <stdio.h> //task 6
int main()
{
    int a,b,c,d;
    int summa;
    scanf("%d\n", &a);
    b =  a % 10; //находим последнюю цифру
    c =  a / 10 % 10; //находим вторую цифру
    d = a / 100; //находим первую цифру
    summa = b + c + d;
    printf("%d", summa);
    return 0;
}

Ввод:  495  ||  101
Вывод: 18   ||  2

#include <stdio.h> //task 7
int main()
{
    int a, b, c;
    float d;
    float e;
    scanf("%d %d %d", &a, &b, &c);
    d = (float) (a + b + c) / 3.0;
    e = (float) (3.0/(1.0/a + 1.0/b + 1.0/c ));
    printf("%.2f %.2f\n", d, e);
    return 0;
}

Ввод:  2 3 6      ||  1 2 2
Вывод: 3.67 3.00  ||  1.67 1.50

#include <stdio.h> //task 8
int main()
{
    double x;
    int ans;
    scanf("%lf",&x);
    ans = (int)(x * 100) % 10;
    printf("%d\n", ans);
    return 0;
}

Ввод:  123.456  || 0.987
Вывод:    5     ||  8

#include <stdio.h> //task 9
int main()
{
	int a,b,c;
	float x;
	float y;
	scanf("%d %d %d\n", &a, &b, &c);
	x = (float) (-b/2)/a;
	y = (float) -((b * b)+(-4 * a * c))/ (4 * a);
	printf("%.2f %.2f", x, y);
	return 0;
}

Ввод:  3 2 1      ||  4 8 3
Вывод: -0.33 0.67 ||  -1.00 -1.00

#include <stdio.h> //task 10
#include <math.h>
int main()
{
	double a, b, c;
	double r, R, result;
	double p, S;
	scanf("%lf %lf %lf", &a, &b, &c);
	p = (a+b+c) / 2.0;
	S = sqrt(p * (p-a) * (p-b) * (p-c)); //для библиотеки math.h небходимо при компиляции добавить флаг -lm
	r = 2 * S / (a + b + c);
	R = (a * b * c) / (4 * S);
	result = R / r;
	printf("%.2lf", result);
	return 0;
}

Ввод:  3.0 4.0 5.0 || 2.0 3.0 2.5
Вывод:  2.50       || 2.29 