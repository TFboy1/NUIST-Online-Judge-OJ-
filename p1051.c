//#include<stdio.h>
//#include<math.h>
//int is_prime(int n);
//int opposenum(int n);
//int main()
//{
//	int n, m, i;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &m);
//		if (is_prime(m) && is_prime(opposenum(m)))
//		{
//			printf("1\n"); continue;
//		}
//		else
//		{
//			printf("0\n"); continue;
//		}
//	}
//
//
//
//}
//int is_prime(int n)
//{
//	for (int i = 2; i <= n; i++)
//	{
//		if (i == n)
//		{
//			return 1;
//			break;
//			
//		}
//		if (n % i == 0)
//		{
//			return 0;
//			break;
//			
//		}
//
//	}
//}
//int opposenum(int n)
//{
//	int t=1, y=1, sum = 0;
//	for (;n;)
//	{
//		t = n % 10;
//		sum = sum * 10 + t;
//		n = n / 10;
//	}
//	return sum;
//}