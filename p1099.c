//#include<stdio.h>
//int max(int n);
//int min(int n);
//int main()
//{
//	int n, m, i, k=0 , t;
//	while (scanf("%d", &n)!=EOF)
//	{
//		if(n != 6174)
//		for (k=1;;)
//	{
//		t = max(n) - min(n);
//		if (t != 6174)
//		{
//			k++; n = t;
//		}
//		if (t == 6174)
//		{printf("%d\n", k);break;}
//	}
//		else
//		printf("%d\n", 0); }
//
//}
//int max(int n)
//{
//	int ma[4], i, j, t;
//	ma[0] = n / 1000;
//	ma[1] = n / 100 % 10;
//	ma[2] = n / 10 % 10;
//	ma[3] = n % 10;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3 - i; j++)
//			if (ma[j] >= ma[j + 1])
//			{
//				t = ma[j];
//				ma[j] = ma[j + 1];
//				ma[j + 1] = t;
//			}
//	return ma[3] * 1000 + ma[2] * 100 + ma[1] * 10 + ma[0];
//
//
//}
//int min(int n)
//{
//	int ma[4], i, j, t;
//	ma[0] = n / 1000;
//	ma[1] = n / 100 % 10;
//	ma[2] = n / 10 % 10;
//	ma[3] = n % 10;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3 - i; j++)
//			if (ma[j] <= ma[j + 1])
//			{
//				t = ma[j];
//				ma[j] = ma[j + 1];
//				ma[j + 1] = t;
//			}
//	return ma[3] * 1000 + ma[2] * 100 + ma[1] * 10 + ma[0];
//}