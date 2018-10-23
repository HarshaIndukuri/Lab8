#include<iostream>



using namespace std;






	int minel (int ar2[], int k) {

	int min = ar2[0];



	for (int i = 1; i<k; i++) {

	if (min > ar2[i]) {

	min = ar2[i];

	}

	}

	return min;

	}



	
	



	int maxel (int a4[], int f) {

	int max = a4[0];



	for (int n = 1; n<f; n++) {

	if (max < a4[n]) {

	max = a4[n];

	}

	}

	return max;

	}
	











	int main () {

	int e1, e2, max, min;



	cout<<"Enter the number of elements you want in your first array ";
	cin>>e1;
	cout<<endl;



	
	cout<<"Enter the number of elements you want in your second array ";
	cin>>e2;
	cout<<endl;







	
	int e3 = e1+e2;

	int ar1[e1], ar2[e2], ar3[e3];	



	//Taking first array elements
	
	cout<<"Enter the elements of the first array "<<endl;

	
	for (int l = 0; l<e1; l++) {
	
	cin>>ar1[l];

	cout<<endl;
	
	}







	//Taking second array elemnts

	cout<<"Enter the elements of the second array "<<endl;

	
	for (int m = 0; m<e2; m++) {
	
	cin>>ar2[m];

	cout<<endl;

	}

	
	//making the merged array

	for (int j = 0; j<e1; j++) {

	ar3[j] = ar1[j];

	}

	for (int i = 0; i<e2; i++) {

	ar3[e1+i] = ar2[i];

	}

	



	

	//Displaying the merged array

	cout<<"The merged array is ";

	for (int i = 0; i<e3; i++) {
	

	if (i<(e3-1)) {
	cout<<ar3[i]<<", ";
	}

	else {

	cout<<ar3[i];

	}

	}


	cout<<endl;

	
	max = maxel(ar3, e3);
	min = minel(ar3, e3);


	cout<<"The largest element of the merged array is "<<max<<endl;

	cout<<"The smallest element of the merged array is "<<min<<endl;


	
	


	
	
	}




