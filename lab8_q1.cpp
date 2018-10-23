#include<iostream>


using namespace std;


	//Recursive function for sum	

	int sumarr (int arr[], int n) {

		

	if (n != 0 ) {
	

	return arr[n-1] + sumarr(arr, n-1);  

	}

	
	else return 0;
	 
	
	}






	int main () {


	int e, r;

	cout<<"Enter the number of elements you want in your array ";
	cin>>e;
	cout<<endl;

	int ar[e];


	//Taking elements of array

	cout<<"Enter the elements of the array "<<endl;

	
	for (int l = 0; l<e; l++) {
	
	cin>>ar[l];

	cout<<endl;
	
	}

	


	r = sumarr(ar, e);

	cout<<"The sum of the elements in the array is "<<r<<" ."<<endl;


	}

	

