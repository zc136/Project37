////BC88�������в���һ����
////#include <stdio.h>
////int main()
////{
////	int n = 0;
////	int i = 0;
////	int m = 0;
////	int arr[1000] = { 0 };
////	scanf("%d", &n);
////	for (i = 0; i < n; i++)
////	{
////		scanf("%d", &arr[i]);
////	}
////	scanf("%d", &m);
////	for (i=n-1;i>=0;i--)//�Ӻ��濪ʼ����
////		
////	{
////		if (arr[i] < m)
////		{
////			arr[i + 1] = m;
////			break;
////		}
////		else
////		{
////			arr[i + 1] = arr[i];
////		}
////	}
////	
////	for (i = 0; i <= n; i++)
////	{
////		printf("%d ",arr[i]);
////	}
////	return 0;
////}
////BC89������֤
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[30] = { 0 };
//	char arr2[30] = { 0 };
//	scanf("%s %s", &arr1, &arr2);//%s  ��ӡ�ַ���
//	                             //%c   ��ӡ�ַ�
//	if (strcmp(arr1,arr2) == 0)
//	{
//		printf("same");
//	}
//	else
//	{
//		printf("different");
//	}
//	return 0;
//}
//BC90�����㷨
//#include<stdio.h>
//int main()
//{
//	int i, j, m, n = 0;
//	int arr[10][10] = { 0 };
//	int sum = 0;
//	scanf("%d %d", &n, &m);
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//
//			{
//				scanf("%d ", &arr[i][j]);
//				if (arr[i][j] > 0)
//					sum = sum + arr[i][j];//sum+=arr[i][j]
//			}
////		}
//////		printf("%d\n", sum);
//////	return 0;
//////}
//////BC91�ɼ���������
//#include<stdio.h>
//int main()
//{
//	int arr[20] = { 0 };
//	int i = 0;
//	for (i = 0; i <10; i++)
//	{
//		scanf("%d", &arr[i]);
//		printf("%d", arr[i]);
//	}
//		return 0;
//}
////BC92�������
//int main()
//{
//	int i = 0;
//	int arr[20] = { 0 };
//	for (i = 10;i > 0; i--)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
// �ж�������
//#include <stdio.h>
//int main()
//{
//	int a[20] = { 0 };
//	int i = 0;
//	int count_j = 0;
//	int count_o = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&a[i]);
//		if (a[i] > 0)
//		{
//			count_j++;
//		}
//		else
//		{
//			count_o++;
//		}
//	}
//	printf("positive:%d\n,negative:%d\n", count_j, count_o);
//	return 0;
//}
////BC95��߷�����ͷֵַĲ�
//int main()
//{
//	int n,i = 0;
//	int M = 0;//���ֵ
//	int m = 101;//��Сֵ
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&n);
//		//scanf("%d %d", &M, &n);
//		M = (n > M ? n : M);
//		m = (n > m ? m : n);
//	}
//	printf("%d",M - m);
//	return 0;
//}
//BC96-BC100�������е�����
////�ж����� �����ǽ���
//int main()
//{
//	int i = 0;
//	int a[55] = { 0 };
//	int n = 0;
//	int a1 = 0;
//	int a2 = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		if (i > 0)
//		{
//			if (a[i] <=a[i - 1])
//			{
//				a1 = 1;
//			}
//			else if (a[i] > a[i - 1])
//			{
//				a2 = 1;
//			}
//		}
//	}
//	if (a1==1&&a2==1)
//	{
//		printf("unsorted\n");
//	}
//	else
//	{
////		printf("sorted\n");
////	}
//
//	return 0;
////}
////�������в���һ����
////BC88�������в���һ����
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int m = 0;
//	int arr[1000] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &m);
//	for (i=n-1;i>=0;i--)//�Ӻ��濪ʼ����
//		
//	{
//		if (arr[i] < m)
//		{
//			arr[i + 1] = m;
//			break;//�ҵ�λ�þͽ���ѭ��
//		}
//		else
//		{
//			arr[i + 1] = arr[i];
//		}
//	}
//	for (i = 0; i <= n; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
