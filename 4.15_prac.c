#include <stdio.h> //task 1
int main()
{
    int x;
    scanf("%d", &x);
    if(x >= 0 && x < 10 || x > 20 && x <= 30)
        printf("yes");
    else
        printf("no");
    return 0;    
}

Ввод:  5  ||  15 || 30
Вывод: yes|| no  || yes

#include <stdio.h> //task 2
int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    if(x % 2== 0 &&  y % 2 != 0 || x % 2 != 0 && y % 2 == 0)
        printf("yes");
    else
        printf("no");
    return 0;    
}

Ввод:  1 2 ||  -2 4|| -5 -7
Вывод: yes || no   || no

#include <stdio.h> //task 3
int main()
{
    int x, y, z;
    int sum, mult;
    scanf("%d %d %d", &x, &y, &z);
    if(x < 0 || y < 0 || z < 0)
    {
        sum = x + y + z;
        printf("%d\n", sum);
    }
    else
    {
        mult = x * y * z;
        printf("%d\n", mult);
    }
    return 0;   
}

Ввод: 2 12 -3  ||  2 12 3 || -2 -12 -3
Вывод: 11      || 72      || -17

#include <stdio.h>  //task 4
int main()
{
    float x, y;
    scanf("%f %f", &x, &y);
    if (x == 1 && y == 0 || x == -1 && y == 0 || x == 0 && y == 1 || x == 0 && y == -1 )
        printf("boundary");
    else if (x == 1 && y == 1 || x == -1 && y == -1 || x == -1 && y == 1 || x == 1 && y == -1)
        printf("out");
    else
        puts("in");
    return 0;    
}

Ввод:  1.0 0.0 ||  0.5 -0.6 || -1.0 1.0
Вывод: boundary|| in        || out

#include <stdio.h> //task 5
int main()
{
    double a, b, c, D;
    scanf("%lf %lf %lf", &a, &b, &c);
    D = b * b - 4 * a *c;
    if (D > 0 || D < 0)
        if (D > 0)
            printf("Имеет 2 корня");
        else
            printf("Не Имеет корней");
    else if (a == b == c == 0) 
        printf("infinity");
    else
        printf("Имеет 1 корень");
    return 0;    
                      
    
}

Ввод:  1.0 5.0 6.0  ||  0.0 0.0 0.0 || 0.0 0.0 1.0
Вывод: 2            || infinity     || 0

#include <stdio.h> //task 6
#include <stdlib.h>
int main()
{
    double x,y;
    scanf("%lf %lf", &x, &y);
    if (fabs(x) + fabs(y) <= 2)
        printf("yes");
    else
        printf("no");
    return 0;    
}

Ввод:  1.0 1.0  ||  2.0 2.0
Вывод: yes      || no  

#include <stdio.h> //task 7
#include <stdlib.h>
int main()
{
    int x1, x2, y1, y2, dx, dy;
    scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
    dx = abs(x1 - x2);
    dy = abs(y1 - y2);
    if((dx == 1 && dy == 2 )||
        (dx == 2 && dy == 1))
        puts("knight");
    else if (abs(x1 - x2) == abs(y1 -y2))
        printf("queen");
    else
        printf("nothing");
    return 0;    
}

Ввод:  3 4 7 8  || 3 4 1 3 || 3 4 5 7
Вывод: queen    || knight      || nothing

#include <stdio.h> //task 8
int main()
{
    double x,y;
    scanf("%lf %lf", &x, &y);
    if((x < 1 && x >= 0 && y < 1 && y >= 0) || (x < 1 && x >= 0 && y > -1 && y <= 0) ||
        (x > -1 && x <= 0 && y < 1 && y >= 0) || (x > -1 && x <= 0 && y > -1 && y <= 0))
        printf("yes");
    else 
        printf("no");
    return 0;    
}

Ввод:  0.6 -0.6 ||  -1.4 0.4|| 0.7 1.2
Вывод: yes      || no       || no

#include <stdio.h> //task 9
#include <math.h>
int main()
{
    double a, b, c;
    double R, r, S, p;
    scanf("%lf %lf %lf", &a, &b, &c);
    p = (a + b +c) / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    if (a + b > c && b + c > a && c + a > b)
    {
        R = (a*b*c) / (4*S);
        r = 2*S / (a+b+c);
        printf("%.2lf %.2lf\n", r, R);
    } 
    else
        puts("do not exist");
    
    return 0;
    
}

Ввод:  3.0 4.0 5.0  ||  1.0 2.0 4.0
Вывод: 1.00 2.50    || do not exist  

#include <stdio.h> //task 10
#include <math.h>
int main()
{
    int a, b, c;
    float garm, arif, geom, quad;
    scanf("%d %d %d", &a,  &b, &c);
    arif = (float) (a+b+c) / 3;
    garm = (float) (3.0/(1.0/a + 1.0/b + 1.0/c ));
    quad = (float) sqrt((a*a+b*b+c*c) / 3); 
    geom = (float) cbrtf(a*b*c); //вычисление кубического корня из a * b * c
    printf("%.2f %.2f %.2f %.2f\n", arif, garm, quad, geom);
    return 0;
    
}

Ввод:  3 3 3          || 2 4 8
Вывод: 3.0 3.0 3.0 3.0|| 3.43 4.67 4.00 5.29