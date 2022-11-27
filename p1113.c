//#include<stdio.h>
//int main()
//{
//	int v[1000] = {3 ,1 ,2, 3 ,2 ,1 ,2, 3 ,1, 2 ,2 ,1 ,3 ,3 ,1 ,2 ,3 ,3, 
//	}, a = 1, i, t, j, m, x, s[10];
//	for (i = 0;; i++)
//	{
//		scanf("%d", &a);
//		if (a == -1)
//			break;
//		v[i] = a;
//	}
//	for (i = 0; v[i]<= 10 && v[i] >= 1; i++);
//
//
//	t = i;
//	for (i = 0; i < t - 1; i++)
//		for (j = 0; j < t - 1 - i; j++)
//			if (v[j] >= v[j + 1])
//			{
//				m = v[j+1];
//				v[j+1] = v[j ];
//				v[j ] = m;
//			}
//	for (i = 0,m=0;;m++)
//	{
//		for (x = 1; ; x++,i++)
//		{
//			if (v[i] != v[i + 1]|| v[i]==0)
//			{
//				
//				i++;break;
//			}
//		}
//		
//		s[m] = x;
//		if (v[i] == 0)
//			break;
//	}
//	for (i = 0; i < m - 1; i++)
//		for (j = 0; j < m - 1 - i; j++)
//			if (s[j] >= s[j + 1])
//			{
//				t = s[j+1];
//				s[j+1] = s[j ];
//				s[j ] = t;
//			}
//	for (i = 0; i <=m; i++)
//	{
//		printf("%d %d\n", i + 1, s[i]);
//	}
//
//}