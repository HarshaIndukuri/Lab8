#include<iostream>




using namespace std;


	int ksmall (int ar1[], int p, int a) {

	int t1, i1, j1;


	//Sorting elements in ascending order

	for (i1=0; i1<p; i1++) {


	for (j1=i1+1; j1<p; j1++) {

	//Switching elements if the element on right side is less than the one on the left
	if (ar1[j1]<ar1[i1]) {
		
	t1 = ar1[i1];
	
	ar1 [i1] = ar1 [j1];

	ar1[j1] = t1;

	}

	//If element on rt side is equal to the number then it becomes the next element of the array
	if (ar1[j1] == ar1[i1]) {

	t1 = ar1[i1+1];
	
	ar1[i1+1] = ar1[j1];

	ar1[j1] = t1;

	}
	

	}


	}


	cout<<"The kth smallest term is "<<ar1[a-1]<<" .";

	}






	int klarge (int ar2[], int l, int c) {


	int t, i, j;


	//Sorting elements in descending order

	for (i=0; i<l; i++) {


	for (j=i+1; j<l; j++) {

	//Switching elements if the element on right side is greater than the one on the left
	if (ar2[j]>ar2[i]) {
		
	t = ar2[i];
	
	ar2 [i] = ar2[j];

	ar2[j] = t;

	}

	//If element on rt side is equal to the number then it becomes the next element of the array
	if (ar2[j] == ar2[i]) {

	t = ar2[i+1];
	
	ar2[i+1] = ar2[j];

	ar2[j] = t;

	}
	

	}


	}


	cout<<"The kth largest term is "<<ar2[c-1]<<" .";

	}

	



 











	int main () {

	int n, k;
	int arr[n];
	
	cout<<"Enter the number of elements you want in your array ";

	cin>>n;

	cout<<endl;

	

	cout<<"Enter all the elements of your array "<<endl;	

	for (int f = 0; f<n; f++) {

	cin>>arr[f];
	cout<<endl;

	}

 
	cout<<"Enter k for the kth largest term and kth smallest term ";
	cin>>k;
	cout<<endl;








	ksmall (arr, n, k);

	klarge (arr, n, k);

	




	}








































