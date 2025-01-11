#define _CRT_SECURE_NO_WARNINGS  //禁用安全警告


#include <stdio.h>  //std - 标准 ；i - input ；o - output
                    //stdio.h 标准输出库 "std io"
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

//测量运行时间函数
clock_t time_start, time_stop;
double duration;

void RunTime_A() {
    time_start = clock();
}
double RunTime_B() {
    time_stop = clock();
    duration = ((double)(time_stop - time_start) / CLK_TCK);
    printf("ticks = %f", (double)(time_stop - time_start));
    return duration;

}






//C语言代码中一定要有main()函数,是程序的入口，有且仅有一个
//主函数
//int main()  //int 整型
//{
//	printf("hello c world");  //库函数printf 专门用来打印
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//	return 0;
//}


//int a = 1000;
//int main()
//{
//    int a = 10;
//    printf("a=%d\n", a);
//    return 0;
//}

//int num1 = 0;
//int num2 = 0;
//int num3 = 0;
//int main() {
//
//    输入
//    scanf("%d %d", &num1, &num2);
//
//    求和
//    int num3 = num1 + num2;
//    输出
//    printf("The result is : %d", num3);
//
//
//    return 0;
//}


//int main() {
//
//    char arr_1[] = "ab\0cd";
//    char arr_2[] = { 'a','b','c','d' ,'\0'};
//
//    printf("%s\n", arr_1);
//    printf("%d\n", strlen(arr_1));
//
//    return 0;
//
//
//
//}


//int main() {
//    int message = 0;
//    printf("好好学习（1/0）： ");
//    scanf("%d", &message);
//
//    if (message == 1) {
//        printf("成功\n");
//    }
//    else {
//        printf("失败\n");
//    }
//
//
//    return 0;
//}


//int main() {
//    int code = 0;
//
//    while (code < 20000) {
//        printf("沃特么学学学！第%d次\n",code);
//        code++;
//    }
//    if (code >= 20000) {
//        printf("功成名就!");
//    }
//    else {
//        printf("死吧！");
//    }
//    return 0;
//}

//int Add(int x, int y) {
//    return x + y;
//}
//
//
//int main() {
//
//    int x = 0;
//    int y = 0;
//
//    scanf("%d %d", &x, &y);
//    int sum = Add(x, y);
//    printf("%d", sum);
//    return 0;
//}


//int main() {
//    int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//    int i = 0;
//    while (i < 10) {
//        printf("%d", arr[i]);
//        i++;
//    }
//    return 0;
//}
//
//
//int main() {
//
//    auto a = 1;
//    printf("%d", a);
//    return 0;
//}


//
//int main() {
//    int money = 20;
//    int charge = 0;
//    int give = 0;
//    printf("请输入付款金额");
//    scanf("%d", &give);
//    charge = give - money;
//    printf("找零：%d",charge);
//
//
//    return 0;
//}
//
//int main() {
//    float meter = 0;
//    printf("请输入英尺： ");
//    scanf("%f", &meter);
//    float result = meter * 0.3048f;
//    printf("换算为米是： %f 米", result);
//
//    return 0;
//}

//int main() {
//    int hour_1, min_1;
//    int hour_2, min_2;
//    scanf("%d,%d", &hour_1, &min_1);
//    scanf("%d,%d", &hour_2, &min_2);
//
//
//    int hour = hour_2 - hour_1;
//    int min = min_2 - min_1;
//    int cul = hour * 60 + min;
//    printf("时间差为：%d分钟", cul);
//    int c_hour = cul / 60;
//    int c_min = cul % 60;
//
//    printf("时间差为：%d小时%d分钟",c_hour,c_min);
//
//
//
//
//    return 0;
//}
//
//int main() {
//    int a = 5;
//    int b = 10;
//    auto int c = a;
//    a = b;
//    b = c;
//    printf("a = %d,b = %d", a, b);
//
//    return 0;
////}
//int main() {
//    int a = 1;
//    int b = a++;
//    int c = ++a;
//    printf("%d\n", a);
//    printf("%d\n",b);
//    printf("%d\n",c);
//    
//
//
//
//    return 0;
//}


//int main() {
//    int num = 0;
//    scanf("%d", &num);
//    int one = num % 10;
//    int two = num / 100;
//    int three = num - one * 1 - two * 100;
//    int result = one * 100 + two * 1 + three;
//    printf("%d", result);
//    return 0;
//}

//
//int main() {
//
//    int bjt = 0;
//    int utc = 0;
//    scanf("%d", &bjt);
//    
//    utc = bjt - 800;
//    if (bjt >= 800) {
//        
//        printf("%d", utc);
//    }
//    else {
//        printf("%d", 2400 + utc);
//    }
//
//    return 0;
//}
//
//
//int main() {
//    int num = 0;
//    scanf("%d", &num);
//    int i = 0;
//    while (i<num) {
//        i++;
//        int a = i % 2;
//        if (a != 0) {
//            printf("%d", i);
//            printf(" ");
//        }
//        
//    }
//    return 0;
//}



//int main() {
//    int n;
//
//    // 读取输入的n值
//    scanf("%d", &n);
//
//    // 遍历1到n的所有奇数，输出这些编号
//    for (int i = 1; i <= n; i += 2) {
//        // 输出编号，注意最后一个编号后面没有空格
//        if (i > 1) {
//            printf(" ");
//        }
//        printf("%d", i);
//    }
//
//    // 换行
//    printf("\n");
//
//    return 0;
//}

//
//int main() {
//
//    int a, b, c;
//    int A, G;
//    scanf("%d %d %d", &a, &b, &c);
//    
//    A = a - b;
//    G = a + c;
//    printf("%d %d", A, G);
//
//
//    return 0;
//}
//

//int main() {
//
//    int x, y, a;
//    scanf("%d %d", &x, &y);
//    a = x + y * 2;
//
//    printf("%d", a);
//
//
//
//
//
//    return 0;
//}

//int main() {
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//
//    printf("%d", b);
//
//    return 0;
//}

//int main() {
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("%8d %8d %8d", a, b, c);
//
//    return 0;
//}
//
//int main() {
//    char a = 0;
//    scanf("%c", &a);
//
//    printf("  %c\n %c%c%c\n%c%c%c%c%c", a,a,a,a,a,a,a,a,a);
//
//    return 0;
//}

//int main() {
//    double x, a, y, b;
//    double z;
//    scanf("%lf %lf %lf %lf", &x, &a, &y, &b);
//
//    z = (a * x - b * y) / (a - b);
//    printf("%.2f", z);
//    return 0;
//}

//int main() {
//    int A = 0;
//    int B = 0;
//    int sum = 0;
//    scanf("%d %d", &A, &B);
//
//    sum = A + B;
//    printf("%d", sum);
//
//    return 0;
//}


//int main() {
//    float a, b;
//    scanf("%f\n%f", &a, &b);
//    float c = b / a;
//    printf("%.3f%%", c*100);
//
//}


//int main() {
//
//    int x, y;
//    scanf("%d %d", &x, &y);
//    if (x<=1 & x>=-1) {
//        if (y <= 1 & y >= -1) {
//            printf("yes");
//        }
//        else {
//            printf("no");
//        }
//    }
//    else {
//        printf("no");
//    }
//
//    return 0;
//}

//
//int main() {
//    int a, b;
//    char c ;
//    scanf("%d %d %c", &a, &b, &c);
//    int result = 0;
//    if (c == '+') {
//        result = a + b;
//        printf("%d", result);
//    }
//    else if (c == '-') {
//        result = a - b;
//        printf("%d", result);
//    }
//    else if (c == '*') {
//        result = a * b;
//        printf("%d", result);
//    }
//    else if (c == '/') {
//        if (b == 0) {
//            printf("Divided by zero!");
//        }
//        else {
//            result = a / b;
//            printf("%d", result);
//        }
//    }
//    else {
//        printf("%c", c);
//        printf("Invalid operator!");
//    }
//
//    return 0;
//
//}

//int main() {
//    int a, b, c, d, e, f, g, h;
//    int A, B, C, D;
//    int one, two, three;
//    int sum_a, sum_b, sum_c;
//    int sum;
//    scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
//    scanf("%d %d %d %d", &A, &B, &C, &D);
//    scanf("%d %d %d", &one, &two, &three);
//
//    sum_a = a + b + c + d + e + f + g + h;
//    sum_b = A + B + C + D;
//    sum_c = one + two + three;
//    if (sum_a < 80) {
//        sum = sum_a;
//    }
//    else {
//        if (sum_b < 40) {
//            sum = sum_a + sum_b;
//        }
//        else {
//            sum = sum_a + sum_b + sum_c;
//        }
//    }
//
//    printf("%d", sum);
//    return 0;
//}


//int main() {
//    int A = 0;
//    scanf("%d", &A);
//    
//    switch (A) {
//    case 1:
//        printf("1");
//    case 2:
//        printf("2");
//        break;
//    case 3:
//        printf("3");
//    }
//
//
//    return 0;
//}

//int main() {
//    int A;
//    int out = 1;
//    scanf("%d", &A);
//
//    if (A < 0) {
//        A = -A;
//    }
//
//    while (A >= 1) {
//        printf("In Loop\n");
//        A = A / 10;
//        if (A >= 1) {
//            out++;
//        }
//    }
//    printf("%d", out);
//
//    return 0;
//}

//int main() {
//    srand(time(0));
//    int A = rand()%100; /*生成100以内的随机数*/
//    int B = 0;
//    
//
//    while (B != A) {
//        scanf("%d", &B);
//        if (B > A) {
//            printf("大了\n");
//        }
//        else if (B < A) {
//            printf("小了\n");
//        }
//        else {
//            printf("你猜对了\n");
//            break;
//        }
//
//    }
//
//
//}

//
////求平均数
//int main() {
//    int A = 0;
//    int sum = 0;
//    int i = -1;
//    
//    while (A != -1) {
//        scanf("%d", &A);
//        sum += A;
//        i++;
//    }
//    printf("%d", sum / i);
//
//    return 0;
//}


////阶乘
//int main() {
//    int n = 0;
//    int res = 1;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        res *= i;
//    }
//    printf("%d", res);
//    return 0;
//}

////判断素数
//int main() {
//    int n = 0;
//    int a = 0;
//    scanf("%d", &n);
//    for (int i = 2; i < n; i++) {
//        a = n % i;
//        if (a != 0) {
//            continue;
//        }
//        else {
//            printf("不是素数");
//            break;
//        }
//    }
//    return 0;
//}


////输出一百以内的素数
//int main() {
//    int n = 5;
//    int a = 0;
//    int b = 1;
//    for (b = 1; b <= n; b++) {
//        printf("b = %d\n", b);
//        for (int i = 2; i <= b; i++) {
//            a = b % i;
//            printf("a = %d\n", a);
//            if (i == b & a != 0 ) {
//                printf("%d", b);
//                break;
//            }
//            else if (i == b & a == 0) {
//                break;
//            }
//            else if(a == 0) {
//                break;
//            }
//            else {
//                continue;
//            }
//        }
//
//
//    }
//
//    return 0;
//}

// 

//int main() {
//    int n, age = 0, i = 1;
//    float sum = 0.00f;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++) {
//        scanf("%d", &age);
//        sum += age;
//    }
//    printf("%0.2f", sum / n);
//    return 0;
//}


//int main() {
//    int n = 0, a = 0, Max = 0;
//    scanf("%d", &n);
//
//    for (int i = 1; i < n; i++) {
//        scanf("%d ", &a);
//        if (a > Max) {
//            Max = a;
//        }
//    }
//    printf("%d", Max);
//
//
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int n;
//    scanf("%d", &n); // 输入参加考试的人数
//
//    int score, max_score = 0;
//
//    // 循环读取每个学生的成绩，找出最高成绩
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &score);
//        if (score > max_score) {
//            max_score = score;
//        }
//    }
//
//    printf("%d\n", max_score); // 输出最高成绩
//
//    return 0;
//}

//int main() {
//    unsigned char a = 255;
//    int b = 255;
//    printf("%d,%d", a, b);
//
//    return 0;
//}
//
//int main() {
//    float a = 123455.11111;
//    printf("%f %e", a, a);
//     
//    return 0;
//}
//
//
//int IsPrime(int n) {
//    if (n < 2) {
//        return 0;
//    }
//    for (int i = 2; i < n-1; i++) {
//        if (n % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    if (IsPrime(n)) {
//        printf("%d 是素数", n);
//    }
//    else {
//        printf("%d 不是素数", n);
//    }
//    return 0;
//}
//
//int SumNumber(int a, int b) {
//    int sum = 0;
//    for (int i = a; i <= b; i++) {
//        sum += i;
//    }
//    return sum;
//}
//
//int main() {
//    printf("%d\n", SumNumber(1, 10));
//    printf("%d\n", SumNumber(20, 30));
//    printf("%d\n", SumNumber(35, 45));
//    return 0;
//}


//int main() {
//    int a[100];
//    int b,arr;
//    int sum = 0;
//    int cnt = 0;
//    scanf("%d", &b);
//    while (b != -1) {
//        a[cnt] = b;
//        sum += b;
//        cnt++;
//        scanf("%d", &b);
//    }
//    arr = sum / cnt;
//    for (int i = 0; i < cnt; i++) {
//        if (a[i] > arr) {
//            printf("%d ", a[i]);
//        }
//    }
//    return 0;
// }



//int main() {
//    int a, b;
//    char c;
//    scanf("%d %d %c", &a, &b, &c);
//    int result = 0;
//    if (c == '+') {
//        result = a + b;
//        printf("%d", result);
//    }
//    else if (c == '-') {
//        result = a - b;
//        printf("%d", result);
//    }
//    else if (c == '*') {
//        result = a * b;
//        printf("%d", result);
//    }
//    else if (c == '/') {
//        if (b == 0) {
//            printf("Divided by zero!");
//        }
//        else {
//            result = a / b;
//            printf("%d", result);
//        }
//    }
//    else {
//        printf("Invalid operator!");
//    }
//
//    return 0;
//
//}


//int main() {
//    int n = 0,cnt = 0;
//    int sum = 0;
//    float arr ;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        int a = 0;
//        scanf("%d", &a);
//        sum += a;
//        cnt++;
//    }
//    arr = sum / (float)n;
//    printf("%.2f\n", arr);
//    return 0;
//}

//
//int main() {
//    int n;
//    double x;
//    scanf("%lf %d", &x, &n);
//    for (int i = 0; i < n; i++) {
//        x += x * 0.001;
//    }
//    printf("%.4f", x);
//
//    return 0;
//}

//
//int main() {
//    int a[100];
//    int n = 0, i = 0, x = 0, cnt = 0;
//    while (n != -1) {
//        scanf("%d", &n);
//        a[i] = n;
//        i++;
//    }
//    for (int j = 0; j < i; j++) {
//        x = a[j];
//        for (int k = 0; k < i; k++) {
//            if (a[k] == x) {
//                cnt++;
//            }
//        }
//        printf("%d出现了%d次\n", x, cnt);
//        cnt = 0;
//    }
//
//    return 0;
//}

//输出100以内的素数
//int main() {
//    int IsPrime[100];
//    for (int i = 0; i < 100; i++) {
//        IsPrime[i] = 1;
//    }
//
//    for (int i = 2; i < 100; i++) {
//        if (IsPrime[i] == 1) {
//            for (int j = i * 2; j < 100; j += i) {
//                IsPrime[j] = 0;
//            }
//        }
//    }
//    for(int i = 0;i<100;i++){
//        if(IsPrime[i]==1){
//            printf("%d ",i);
//        }
//    }
//    return 0;
//}


////三子棋判断胜负
//int main() {
//
//    int board[3][3];
//    int num0 = 0;
//    int numx = 0;
//    int result = -1;
//
//    // 输入棋盘
//    for (int i = 0; i < 3; i++) {
//        scanf("%d %d %d", &board[i][0], &board[i][1], &board[i][2]);
//    }
//
//    // 判断胜负
//    for (int i = 0; i < 3; i++) {
//        // 判断行
//        for (int j = 0; j < 3; j++) {
//            if (board[i][j] == 1) {
//                num0++;
//            }
//            else {
//                numx++;
//            }
//        }
//        if (num0 == 3) {
//            result = 0;
//            break;
//        }
//        else if (numx == 3) {
//            result = 1;
//            break;
//        }
//        // 重置行计数器
//        else {
//            num0 = 0;
//            numx = 0;
//        }
//        // 判断列
//        for (int j = 0; j < 3; j++) {
//            if (board[j][i] == 1) {
//                num0++;
//            }
//            else {
//                numx++;
//            }
//        }
//        if (num0 == 3) {
//            result = 0;
//            break;
//        }
//        else if (numx == 3) {
//            result = 1;
//            break;
//        }
//    }
//
//    //判断对角线
//    for (int i = 0; i < 3; i++) {
//        if (board[i][i] == 1) {
//            num0++;
//        }
//        else {
//            numx++;
//        }
//    }
//    if (num0 == 3) {
//        result = 0;
//    }
//    else if (numx == 3) {
//        result = 1;
//    }
//    //判断反对角线
//    for (int i = 0; i < 3; i++) {
//        if (board[i][2 - i] == 1) {
//            num0++;
//        }
//        else {
//            numx++;
//        }
//    }
//    if (num0 == 3) {
//        result = 0;
//    }
//    else if (numx == 3) {
//        result = 1;
//    }
//
//    //判断结果并输出
//    if (result == 0) {
//        printf("Player 0 wins!\n");
//    }
//    else if (result == 1) {
//        printf("Player X wins!\n");
//    }
//    else {
//        printf("Draw!\n");
//    }
//
//    return 0;
//}

//
//int main() {
//    int a = 10;
//    int p;
//    p = (int) & a;
//
//    printf("%d\n", p);
//    printf("%p\n", &a);
//
//    return 0;
//}


//void g(int i) {
//    i = 20;
//}
//void f(int* p) {
//    *p = 10;
//}
//
//
//int main() {
//    int a = 0;
//    int* p = &a;
//
//    g(a);
//    printf("%d\n", a);
//
//    f(p);
//    printf("%d\n", a);
//
//    return 0;
//}

////找出数组中最大和最小值
//void f(int a[], int len, int* max, int* min);
//
//int main() {
//    int a[] = { 1, 2, 3, 4, 5 };
//    int b[5];
//    for (int i = 0; i < 5; i++) {
//        scanf("%d", &b[i]);
//    }
//    int len_a = sizeof(a) / sizeof(a[0]);
//    int len_b = sizeof(b) / sizeof(b[0]);
//    int max, min;
//    f(a, len_a, &max, &min);
//    printf("a : MAX = %d MIN = %d\n", max, min);
//    f(b, len_b, &max, &min);
//    printf("b : MAX = %d MIN = %d\n", max, min);
//    return 0;
//}
//
//void f(int a[], int len, int* max, int* min) {
//    for(int i = 0;i<len;i++){
//        if(i==0){
//            *max = a[i];
//            *min = a[i];
//        }
//        else{
//            if(a[i]>*max){
//                *max = a[i];
//            }
//            if(a[i]<*min){
//                *min = a[i];
//            }
//        }
//    }
//}

//int f(int a, int b, int* result);
//
//int main() {
//    int a, b, result;
//    result = 0;
//    scanf("%d %d", &a, &b);
//    if (f(a, b, &result)) {
//        printf("a / b = %d", result);
//    }
//    return 0;
//}
//int f(int a, int b, int* result) {
//    int ret = 1;
//    if (b == 0) {
//        printf("Error!");
//        ret = 0;
//    }
//    else {
//        *result = a / b;
//    }
//    return ret;
//}


////第一种遍历数组的方法
//int main() {
//    int a[5] = { 1,2,3,4,5 };
//    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
//        printf("%d", a[i]);
//    }
//    return 0;
//}

////第二种遍历数组的方法
//int main() {
//    int a[6] = { 1,2,3,4,5,-1 };
//    int* p = a;
//    while (*p != -1) {
//        printf("%d", *p++);  // “*p++”的效率一般更高
//    }
//}

//强制转换指针类型
//int main() {
//    char a[4] = { 1,2,3,4 };
//    for (int i = 0; i < 4; i++) {
//        printf("%d", a[i]);
//    }
//    printf("\n");
//    char* p = a;
//    int * q = (int*)p;
//    *q = 0;
//    for (int i = 0; i < 4; i++) {
//        printf("%d", a[i]);
//    }
//    return 0;
//    
//}
//
//
//int main() {
//    int num, sum = 0;
//    scanf("%d", &num);
//    int* p = (int*)malloc(num * sizeof(int));
//
//    for (int i = 0; i < num; i++) {
//        scanf("%d", &p[i]);
//    }
//    for (int i = 0; i < num; i++) {
//        sum += p[i];
//    }
//    printf("%d", sum);
//    free(p);
//
//    return 0;
//}

////试图申请更多的内存空间
//int main() {
//    void* p = NULL;
//    int cnt = 0;
//    while ((p = malloc(1024 * 1024 * 100))) {
//        cnt++;
//    }
//    printf("最多申请了%d00MB的内存", cnt);
//
//    return 0;
//}


//int Max(int* num, int m, int n) {
//    int i, j, k, sum, max_sum, temp;
//    max_sum = 0;
//
//    for (i = 0; i < (1 << m); i++) {
//        sum = 0;
//        k = 0;
//        for (j = 0; j < m; j++) {
//            if (i & (1 << j)) {
//                k++;
//            }
//        }
//        if (k > n) {
//            continue;
//        }
//        for (j = 0; j < m; j++) {
//            if (i & (1 << j)) {
//                sum += num[j];
//            }
//        }
//        if (sum > max_sum) {
//            max_sum = sum;
//        }
//    }
//    printf("%d\n", max_sum);
//
//    return 0;
//}

////月份
//int main() {
//    int month = 0;
//    char* str[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
//    scanf("%d", &month);
//    if (month < 1 || month > 12) {
//        printf("Invalid month!");
//    }
//    else {
//        printf("%s", str[month - 1]);
//    }
//    return 0;
//}

//int mylen(char* str) {
//    int cnt = 0;
//    for (int i = 0; str[i] != '\0'; i++) {
//        cnt++;
//    }
//    return cnt;
//}
//int main() {
//    char str[] = "Hello";
//    printf("strlen = %lu\n", strlen(str));
//    printf("sizeof = %lu\n", sizeof(str));
//    printf("mylen = %d\n", mylen(str));
//    return 0;
//}

//int main() {
//    enum colors { red, green, yellow };
//    int color;
//    char* colorName = NULL;
//    scanf("%d", &color);
//    switch (color) {
//    case red:colorName = "Red"; break;
//    case green:colorName = "green"; break;
//    case yellow:colorName = "yellow"; break;
//    }
//
//    printf("You choose %s", colorName);
//    return 0;
//} 
//
//int main() {
//    printf("%c", 'B' + '8' - '3');
//    return 0;
//}

//
//struct date {
//    int day;
//    int month;
//    int year;
//}today,tomorrow;
//
//int main() {
//    struct date today = { 01,02,2007 };
//    printf("today is :%i.%i.%i", today.day, today.month, today.year);
//
//
//
//    return 0;
//}


//void printN(int n);
//int main() {
//    int n = 0;
//    scanf("%d", &n);

//    printN(n);
//
//    return 0;
//}
//
//void printX(int n) {
//    for (int i = 1; i < n; i++) {
//        printf("%d ", i);
//    }
//    printf("%d", n);
//}
//
//void printN(int n) {
//    if (n) {
//        printN(n-1);
//        printf("%d ",n);
//    }
//}
//
//double f(double* a, double x, int n);
//double g(double* a, double x, int n);
//
//int main() {
//    double a[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int duration;
//    int const MAXN = 1e7;
//
//    //运行f()
//    RunTime_A();
//    for (int i = 0; i < MAXN; i++) {
//        f(&a, 1.1, 9);
//    }
//    duration = RunTime_B()/MAXN;
//    printf("Run Time is : %6.2e\n", duration);
//
//    //运行g()
//    RunTime_A;
//    for (int i = 0; i < MAXN; i++) {
//        g(&a, 1.1, 9);
//    }
//    duration = RunTime_B()/MAXN;
//    printf("Run Time is : %6.2e\n", duration);
//
//    return 0;
//}
//
//double f(double* a, double x, int n) {
//    double ret = a[0];
//    for (int i = 1; i <= n; i++) {
//        ret += a[i] * pow(x, i);
//    }
//    return ret;
//}
//
//double g(double* a, double x, int n) {
//    double ret = a[n];
//    for (int i = n; i > 0; i--) {
//        ret = a[i - 1] + x * ret;
//    }
//    return ret;
//}
//
//int main() {
//    int n;
//    double x;
//    printf("Please input n and x : ");
//    scanf("%d &lf", &n,&x);
//    int* a = (int*)malloc(n * sizeof(int));
//    for (int i = 0; i <= n; i++) {
//        a[i] = i + 1;
//    }
//    double ret = f(&a, x, n);
//    printf("%lf",ret);
//
//
//
//
//
//
//    return 0;
//}


//算法1
int MaxSeqenceSum(int* a, int n);
int main() {
    int n;
    scanf("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] <= 0) {
        }
    }
    MaxSeqenceSum(a, n);
    free(a);
    return 0;
}

int MaxSeqenceSum(int* a, int n) {
    int max_sum = 0, sum = 0;
    int first = 0, last = 0;
    for(int i = 0;i<n;i++){
        sum = 0;
        for (int j = i; j < n; j++) {
            sum += a[j];
            if (sum > max_sum) {
                max_sum = sum;
                first = i;
                last = j;
            }
            
        }
    }
    if (max_sum < 0) {
        first = 0;
        last = n - 1;
    }
    printf("%d %d %d", max_sum, a[first], a[last]);
    return max_sum;
}
   
//////算法2
//int MaxSeqenceSum2(int* a, int n);
//int main() {
//    int n;
//    scanf("%d", &n);
//    int* a = (int*)malloc(n * sizeof(int));
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//    MaxSeqenceSum2(a, n);
//    return 0;
//}
//
//int MaxSeqenceSum2(int* a, int n) {
//    int max_sum = 0, sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += a[i];
//        if (sum > max_sum) {
//            max_sum = sum;
//            
//        }
//        else if (sum < 0) {
//            sum = 0;
//        }
//    }
//    printf("%d", max_sum);
//    return max_sum;
//}
//    


























