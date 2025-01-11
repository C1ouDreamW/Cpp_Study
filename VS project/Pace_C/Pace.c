#define _CRT_SECURE_NO_WARNINGS  //禁用安全警告
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

////D
//int main() {
//    int t = 0;
//    scanf("%d", &t);
//    for (int i = 0; i < t; i++) {
//        int n, l;
//        int a[1000];
//        scanf("%d", &l);
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++) {
//            int len, start;
//            scanf("%d %d", &len, &start);
//            for (int j = start; j < l; j += len) {
//                a[j]++;
//            }
//        }
//        int max_layer = 0, max_index = 0;
//        for (int i = 0; i < l; i++) {
//            if (a[i] > max_layer) {
//                max_layer = a[i];
//                max_index = i;
//            }
//        }
//        printf("%d %d", max_index, max_layer);
//
//    }
//    
//    return 0;
//}









//
////J
//#define int long long
//
//int Max(int*num,int m,int n);
//signed main() {
//	int t = 0;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++) {
//		int n = 0, m = 0;
//		int cnt = 0;
//		int sum = 0;
//		scanf("%d %d", &n, &m);
//		int* a = (int*)malloc((m + n) * sizeof(int));
//		for (int j = 0; j < m + n; j++) {
//			scanf("%d", &a[j]);
//		}
//		qsort(a,(m+n),sizeof(int),);
//		for (int j = 0; j < m + n; j++) {
//			if (a[j] == 0) {
//				cnt++;
//			}
//		}
//		
//		
//        Max(a, (m + n), cnt);
//
//		free(a);
//	}
//	return 0;
//}











//
//int main() {
//	int t = 0, n = 0;
//	scanf("%d", &t);
//
//	for (int i = 0; i < t; i++) {
//		n = 0;
//		scanf("%d", &n);
//		int* a = (int)malloc(n * sizeof(int));
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &a[i]);
//		}
//		int ret = 1;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (a[i] > a[j]) {
//					ret *= a[i];
//				}
//			}
//		}
//		printf("%d\n", ret);
//		free(a);
//	}
//
//	return 0;
//}

//A
//int f(int a,int len);
//int main() {
//	int t = 0, n = 0;
//	scanf("%d", &t);
//
//	for (int i = 0; i < t; i++) {
//		n = 0;
//		scanf("%d", &n);
//		int* a = (int)malloc(n * sizeof(int));
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &a[i]);
//		}
//		printf("%d", f(a,n)); //调用f()函数
//		free(a);
//	}
//
//
//	return 0;
//}
//
//int f(int *a,int len) {
//	for (int i = 0; i < len; i++) {
//		printf("%d", a[i]);
//	}
//	return 0;
//}

//B
//int main() {
//	int t;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++) {
//		int n = 0, a = 0, b = 0;
//		int ret = 0;
//		scanf("%d %d %d", &n, &a, &b);
//		if (a > b) {
//			if (n % 2 == 0) {//n为偶数
//				ret = n / 2 * a + n / 2 * b;
//			}
//			else {
//				ret = (n - 1) / 2 * a + (n - 1) / 2 * b + a;
//			}
//			printf("%d\n", ret);
//		}
//		else {
//			printf("%d\n", n * a);
//		}
//		
//	}
//	return 0;
//}

//C
//int main() {
//    printf("I Love wlyw!");
//    return 0;
//}

//D
//int main() {
//	int t = 0;
//	scanf("%d", &t);
//	
//	for (int i = 0; i < t; i++) {
//		int m = 0, n = 0;
//		scanf("%d %d", &m, &n);
//		int* a = (int)malloc((n + m) * sizeof(int));
//		for (int j = 0; j < n+m; j++) {
//			a[j] = 1;
//		}
//		for (int j = 0; j < n + m; j++) {
//			scanf("%d", &a[j]);
//		}
//		for (int i = 0; i < n + m; i++) {
//			printf("%d", a[i]);
//		}
//		free(a);
//	}
//	
//	return 0;
//}

//int main() {
//	int t = 0;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++) {
//		int n = 0;
//		scanf("%d", &n);
//		char* str = (char*)malloc(n * sizeof(char));
//		
//		for (int j = 0; j < n; j++) {
//			scanf("%c", &str[j]);
//		}
//		if (n % 2 == 0) {
//			for (int i = 0; i < (n / 2); i++) {
//				int cnt = 1 + i;
//				if (str[cnt] == "H" && str[cnt + 1] == "R") {
//					printf("YES\n");
//					break;
//				}
//				else if (str[cnt] == "R" && str[cnt + 1] == "H") {
//					printf("YES\n");
//					break;
//				}
//				else {
//					printf("NO\n");
//					break;
//				}
//			}
//		}
//		else {
//			printf("NO\n");
//		}
//		free(str);
//	}
//
//	return 0;
//}



//I-1
//int main() {
//	int t = 0;
//	scanf("%d", &t);
//	int* a = (int*)malloc(t * sizeof(int));
//	for (int i = 0; i < t; i++) {
//		a[i] = -1;
//	}
//
//	for (int i = 0; i < t; i++) {
//		long long n = 0;
//		scanf("%d", &n);
//		char* str = (char*)malloc(sizeof(char)*100000);
//		scanf("%s", str);
//		int ret = 1;
//
//		int cnt = 0;
//		for (int j = 0; j < n; j = j+2) {
//			if (str[j] == 'H' && str[j+1] == 'R') {
//				cnt++;
//			}
//			else if (str[j] == 'W' && str[j + 1] == 'W') {
//				cnt++;
//			}
//			else if(str[j] == 'R' && str[j+1] == 'H') {
//				cnt++;
//			}
//			else {
//				a[i] = 0;
//				ret = 0;
//				break;
//			}
//		}
//		if (ret == 1) {
//			if (cnt != 0&& cnt == n / 2) {
//				a[i] = 1;
//			}
//			else {
//				a[i] = 0;
//			}
//		}
//
//		free(str);
//	}
//	for (int i = 0; i < t; i++) {
//		if (a[i] == 0) {
//			printf("NO\n");
//		}
//		else if (a[i] == 1) {
//			printf("YES\n");
//		}
//		else {
//			printf("Error!\n");
//		}
//	}
//	free(a);
//
//	return 0;
//}

////i-2
//int main() {
//	int t = 0;
//	scanf("%d", &t);
//	
//	for (int i = 0; i < t; i++) {
//		long long n = 0;
//		scanf("%d", &n);
//		char* str = (char*)malloc(sizeof(char)*100000);
//		scanf("%s", str);
//		for (int i = 0; i < n; i++) {
//			int cnt = 0;
//			if (str[i] == "H" || "R") {
//				cnt++;
//			}
//		}
//		
//		free(str);
//	}
//
//
//	return 0;
//}

//
//#define MAX_LENGTH 100005
//#define MAX_CASES 10005
//
//int f(const char* s, int n) {
//    char new[MAX_LENGTH];
//    int len = 0;
//
//    for (int i = 0; i < n; i++) {
//        if (s[i] != 'W') {
//            new[len++] = s[i];
//        }
//    }
//
//
//    
//    
//
//    return 1;
//}
//
//int main() {
//    int t;
//    scanf("%d", &t);
//
//    char s[MAX_LENGTH];
//    int n;
//
//    for (int i = 0; i < t; i++) {
//        scanf("%d", &n);
//        scanf("%s", s);
//
//        if (f(s, n)) {
//            printf("YES\n");
//        }
//        else {
//            printf("NO\n");
//        }
//    }
//
//    return 0;
//}
//















////Test
//int main() {
//	int*a = (int*)malloc(10 * sizeof(int));
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < 10; i++) {
//		printf("%d", a[i]);
//	}
//	free(a);
//	return 0;
//}


//int main() {
//	int t = 0;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++) {
//		long long n = 0;
//		long long sum = 0;
//		scanf("%lld", &n);
//		for (int j = (n-1); j > 0; j--) {
//			sum += j;
//		}
//		printf("%lld\n", sum);
//	}
//	return 0;
//}














#include<math.h>

typedef long long ll;
int main() {
	ll t = 0;
	scanf("%lld", &t);
	for (int i = 0; i < t; i++) {
		const int size = 3 * 5;
		const int one_y = 11, two_y = 7;
		ll x = 0, y = 0;
		double n = 0;

		scanf("%lld %lld", &x, &y);
		double z = (double)x;
		if (y) {
			if (y % 2 == 0) {//Y是偶数
				n += y / 2;
				if (x > n * two_y) {
					x -= n * two_y;
					n += z / size;
				}

			}
			else {//Y是奇数 
				n += (y + 1) / 2;
				if (x > ((n - 1) * two_y + one_y)) {
					x -= (n * (n - 1) * two_y + one_y);
					n += z / size;
				}
			}

		}
		else {
			n = ceil(z / 15);
		}
		printf("%lld", (ll)ceil(n));
	}

	return 0;
}









