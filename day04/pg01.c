#include <stdio.h>
#define CAP 10
int getElem(int [], int);
int dispArr(int [], int);
int revArr(int [],int);

int revArrPos(int [], int si, int ei);


int main()
{
	int a[CAP];
	int k,i,n, count=0;
	int is,ie;
	
	scanf("%d",&n);

	getElem(a,n);

	scanf("%d",&k);
	dispArr(a,n);

	// revArr(a,CAP);
	/*revArrPos(a, 0, 5);
	printf("\nAfter Reversing\n");
	dispArr(a,CAP);
	revArrPos(a, 5, CAP);
	printf("\nAfter Reversing\n");
	dispArr(a,CAP);
	*/

	for(i=0, is=0;i<n;i++)
	{
		if(i%k == 0){
			ie = i;
			revArrPos(a, is, ie);
			is = ie;
		}
		else{
			if(i>=(n-1)){
				revArrPos(a,is,(i+1));
			}
		}

	}
	printf("\nAfter Reversing\n");
	dispArr(a,n);
	


	return 0;
}


int getElem(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

}


int dispArr(int arr[], int n)
{
	int i;
	printf("\nELements of array are\n");
	for(i=0;i<n;i++)
		printf(" %d",arr[i]);

	printf("\n\n");

}

int revArr(int arr[], int n)
{
	int i, temp, mid=n/2;

	for(i=0;i<mid;i++)
	{
		temp = arr[(n-1)-i];
		arr[(n-1) -i] = arr[i];
		arr[i] = temp;
		
	}
}


int revArrPos(int arr[], int is, int ie)
{
	int i, temp, mid;
	int end;

	end = ie-1;
	mid = ie/2;

	if(is >= mid)
	{
		mid = ie -1;
		end = ie -1;
	}

	for(i=is;(i<mid)&&(i<end);i++)
	{
		temp = arr[i];
		arr[i] = arr[end];
		arr[end] = temp;
		end--;
		
	}
}