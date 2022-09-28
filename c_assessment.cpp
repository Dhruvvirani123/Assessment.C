#include<stdio.h>
main()
{
															//Matrix 1
	int a[2][2],b[2][2],i,j;
	printf("\n--------------------Matrix 1--------------------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter Matrix : ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	
														//Matrix 2
														
	printf("\n--------------------Matrix 2--------------------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter Matrix : ");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	
															//multiplication
	int d[2][2],k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{	
			d[i][j]=0;
			for(k=0;k<2;k++)
			{
				d[i][j] += a[i][k] * b[k][j];
			}
		}
	}						
	
	printf("\n---------------Result : Multiplication Matrix---------------\n");
	for(i=0;i<2;i++)									
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",d[i][j]);
		}
		printf("\n");
	}
	
//											//Addition
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			d[i][j] = a[i][j] + b[i][j];
//		}
//	}												
//	printf("\n---------------Result : Addition Matrix---------------\n");
//	for(i=0;i<2;i++)									
//	{
//		for(j=0;j<2;j++)
//		{
//			printf(" %d ",d[i][j]);
//		}
//		printf("\n");
//	}
//	
//	
//														//Subtracation
//		for(i=0;i<2;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			d[i][j] = a[i][j] - b[i][j];
//		}
//	}												
//	printf("\n---------------Result : Subtracation Matrix---------------\n");
//	for(i=0;i<2;i++)									
//	{
//		for(j=0;j<2;j++)
//		{
//			printf(" %d ",d[i][j]);
//		}
//		printf("\n");
//	}


//													//Division
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			d[i][j] = a[i][j] / b[i][j];
//		}
//	}												
//	printf("\n---------------Result : Subtracation Matrix---------------\n");
//	for(i=0;i<2;i++)									
//	{
//		for(j=0;j<2;j++)
//		{
//			printf(" %d ",d[i][j]);
//		}
//		printf("\n");
//	}
}