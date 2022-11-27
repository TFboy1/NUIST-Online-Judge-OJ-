//#include<stdio.h>
//int main()
//{
//	int n, v[10000], m[10000], i, a, k;
//	scanf("%d", &n);
//	scanf("%d", &k);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		v[i] = a;
//	}
//
//	for (i = 0; i < n-k+1; i++)
//	{
//		m[i] = v[i + k];
//	}
//	for (i=0;i<k;i++)
//	{
//		m[n - k + i] = v[i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\n", m[i]);
//	}
//
//}