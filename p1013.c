//#include<stdio.h>
//int main()
//{
//	int n, a, i, max, j, t;
//	int v[1000];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		v[i] = a;
//
//	}
//
//for (i=0; i<n-1; ++i)  
//    {
//        for (j=0; j<n-1-i; ++j) 
//            if (v[j] < v[j+1])
//            {
//                t = v[j];
//                v[j] = v[j+1];
//                v[j+1] = t;
//            }
//        
//    }
//	max = v[0];
//	printf("%d", max);
//	}