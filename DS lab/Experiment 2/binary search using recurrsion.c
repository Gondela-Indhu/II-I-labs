#include<stdio.h>
int rec_binary_search(int [], int, int,int);
int main(){
	int a[10], i, n, key, pos,beg = 0,end;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	end = n;
	printf("Enter the elements: ");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d", &key);	
	pos = rec_binary_search(a, key,beg,end);
	printf("Element is at the position %d", pos+1);
	return 0;
}
	
int rec_binary_search(int a[], int key, int l, int r){
	int mid;
	mid = (l+r)/2;
	if(a[mid] == key){
    	return mid;
	}
	else if(key < a[mid]){
		return rec_binary_search(a,key,l,mid-1);
	}
	else if(key > a[mid]){
		return rec_binary_search(a,key,mid+1,r);
	}
}

