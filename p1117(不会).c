//
//#include <stdio.h>
//#include <string.h>
//#define M 1000
//void bubble_sort(char str[][M], int n); // 函数声明
//int main() {
//    char name[][M] = { "Bob", "Bill", "Joseph", "Taylor", "George" },t[1000];
//    int i,n;
//	scanf("%d",&n);
//    for (i = 0; i < n; i++)
//        gets(name[i]);
//   
//    bubble_sort(name, n); // 函数调用
//    if(name[n-1]!="China")
//	{
//		strcpy(t,name[n-1]);
//		strcpy(name[n-2],name[n-1]);
//		strcpy(name[n-1],"China");
//
//	}
//        for (i = 0; i < n; i++)
//            printf("%s\n", name[i]);
//    return 0;
//}
//
//void bubble_sort(char str[][M], int n)
//{
//    int i, j;
//    char t[M];
//    for(i=0;i<n-1;i++)
//        for(j=0;j<n-1-i;j++)
//            if (strcmp(str[j], str[j + 1]) > 0)
//            {
//                strcpy(t, str[j]);
//                strcpy(str[j],str[j+1]);
//                strcpy(str[j+1],t);
//
//            }
//}
