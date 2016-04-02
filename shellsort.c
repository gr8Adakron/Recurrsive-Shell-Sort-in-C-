#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
 			int a[50],n,i,k;
 			int shellsort(int a[],int,int);
			void display(int a[],int);
 			printf("\nEnter the number of elements of array=== ");
 			scanf("%d",&n);
 			printf("\n*******Enter the Elements****\n");
			    for(i=0;i<=n-1;i++){
					printf("\nENter the element number %d=== ",i+1);
					scanf("%d",&a[i]);
				}
				printf("\n\n******THE UNSORTED LIST YOU ENTERED IS*************\n\n");
				for(i=0;i<=n-1;i++){
					printf("\n\t%d",a[i]);
					k=(n+1)/2;
					shellshort(a,n,k);
					display(a,n);
			}
		}

int shellshort(int a[], int n, int k)
{
 	if(k<=0){
		return 0;
	}
	else{
 	    int i=0,temp,key;
 		key=k;
 		while(key<n){
			if(a[i]>=a[key]){
				temp=a[i];
				a[i]=a[key];
				a[key]=temp;
			}
			key++;
			i++;
		 					 
		}
	shellshort(a,n,k-1);
	}
}
 		 
 		 
void display(int a[],int n)
{
 	int i=0;
 	printf("\n\n*********THE SORTED LIST IS USING SHELLL SORTs *********\n");
	for(i=0;i<=n-1;i++){
		printf("\n \t %d",a[i]);
	}
}
									 				
								 								
