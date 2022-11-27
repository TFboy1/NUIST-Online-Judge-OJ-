//#include<stdio.h>
//#include<math.h>
//long long int jiec(int n);
//int main()
//{
//	long long int n, i,t, j = 0, y = 0;
//	
//	     while(scanf("%d", &n)!=EOF)
//		 {t = jiec(n);
//		if (n <4)
//			printf("%d", 0);
//		else
//		{   j=0;
//			for (i = 1;; i++)
//			{
//				y = t % (int)pow(10, i);
//				if (y == 0)
//					j++;
//				if (y != 0)
//					break;
//			}
//			printf("%d\n", j);
//		}}
//		
//		
//	}
//
//
//long long int jiec(int n)
//{
//	if (n == 1||n==0)
//		return 1;
//	else
//		return n * jiec(n - 1);
//}
//#include <stdio.h>
//int main() {
//    int a, ans = 0;
//    while (scanf("%d", &a) != EOF)
//    {int count = 0;
// for (; ;) {
// a = a/5;
// if (a == 0) {
// break;
// }
// else {
// count+= a;
// }
// }
// printf("%d\n",count);
//    }
//    
//    return 0;
//}