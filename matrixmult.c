/* incorrect*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,m,n,p,q,a[100][100],b[100][100],c[100][100],opt1,opt2,s=0;
	
	printf("\nEnter the dimension of the 1st matrix : ");
	scanf("%d%d",&m,&n);
	printf("\nEnter the elements of the 1st matrix : ");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
			
	printf("\nEnter the dimension of the 2nd matrix : ");			
	scanf("%d%d",&p,&q);
	printf("\nEnter the elements of the 2nd matrix : ");
	for(i=0;i<p;i++)
		for(j=0;j<q;j++)
			scanf("%d",&b[i][j]);

/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
			
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
			printf("%d ",a[i][j]);
	}
	printf("\n");
	for(i=0;i<p;i++)
	{
		printf("\n");
		for(j=0;j<q;j++)
			printf("%d ",b[i][j]);			
	}
	printf("\n");
	
/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/

	X : printf("\n\nSelect an option from the following");
	printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit");
	printf("\nEnter : ");
	scanf("%d",&opt1);
	switch(opt1)
	{
		case 1: //Addition
		{
			if(m==p&&n==q)
			{
				for(i=0;i<m;i++)
				{
					printf("\n");
					for(j=0;j<n;j++)
					{
						printf("%d ",(a[i][j]+b[i][j]));
					}
				}
			}
			else
				printf("\nThe matrix is not compatable for addition.");
			break;
		}
		
		/*----------------------------------------------------------------------------------------------------------------------------------------------------*/
		
		case 2: //Subtraction
		{
			if(m==p&&n==q)
			{
				for(i=0;i<m;i++)
				{
					printf("\n");
					for(j=0;j<n;j++)
					{
						printf("%d ",(a[i][j]-b[i][j]));
					}
				}
			}
			else
				printf("\nThe matrix is not compatable for subtraction.");
			break;
		}
		
		/*----------------------------------------------------------------------------------------------------------------------------------------------------*/
		
		case 3: //Multiplication
		{
			Y : printf("\nSelect an option from the following");
			printf("\n1.Standard product\n2.Kronecker product\n3.Inner product\n4.Return to main menu\n5.Exit");
			printf("\nEnter : ");
			scanf("%d",&opt2);
			switch(opt2)
			{
				case 1: //Standard product
				{
					if(n==p)
					{
						for(i=0;i<m;i++)
						{
							for(j=0;j<q;j++)
							{
								c[i][j]=0;
								for(k=0;k<n;k++)
								{
									c[i][j]+=(a[i][k]*b[k][j]);
								}
							}
						}
						printf("\n");
						for(i=0;i<m;i++)
						{
							printf("\n");
							for(j=0;j<q;j++)
							{
								printf("%d ",c[i][j]);
							}
						}
					}
					else
						printf("\nThe matrix is not compatable for standard multiplication.");
					break;
				}
				case 2: //Kronecker product
				{
					if(m==p&&n==q)
					{
						for(i=0;i<m;i++)
						{
							printf("\n");
							for(j=0;j<n;j++)
							{
								printf("%d ",(a[i][j]*b[i][j]));
							}
						}
					}
					else
						printf("\nThe matrix is not compatable for kronecker product.");
				}
				case 3: //Inner product
				{
					if(m==p&&n==q)
					{
						for(i=0;i<m;i++)
						{
							for(j=0;j<n;j++)
							{
								s+=(a[i][j]*b[i][j]);
							}
						}
						printf("\nThe inner product = %d",s);
					}
					else
						printf("\nThe matrix is not compatable for inner product.");
				}
				case 4:
					goto X;
				case 5:
					exit(0);
				default:
					goto Y;	
			}
		}
		
		/*----------------------------------------------------------------------------------------------------------------------------------------------------*/
		
		case 5:
			exit(0);
		default:
			goto X;
	}
	return 0;
}
