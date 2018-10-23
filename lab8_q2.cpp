#include<iostream>



using namespace std;

	

	int maxel (float ar1[], int k) {

	int max = ar1[0];



	for (int i = 1; i<k; i++) {

	if (max < ar1[i]) {

	max = ar1[i];

	}

	}

	return max;

	}
	



	int minel (float ar2[], int k) {

	int min = ar2[0];



	for (int i = 1; i<k; i++) {

	if (min > ar2[i]) {

	min = ar2[i];

	}

	}

	return min;

	}





	int sumel (float ar3[], int k, int i) {

	

	if (i == k) {return 0;}

	else {

	

	return ar3[i] + sumel (ar3, k, i+1);

	}
	
	}




	float medel (float ar4[], int k) {
	
	int t, i, j;


	//Sorting elements in ascending order

	for (i=0; i<k; i++) {


	for (j=i+1; j<k; j++) {

	//Switching elements if the element on right side is less than the one on the left
	if (ar4[j]<ar4[i]) {
		
	t = ar4[i];
	
	ar4 [i] = ar4[j];

	ar4[j] = t;

	}

	//If element on rt side is equal to the number then give it becomes the next element of the array
	if (ar4[j] == ar4[i]) {

	t = ar4[i+1];
	
	ar4[i+1] = ar4[j];

	ar4[j] = t;

	}
	

	}


	}



	if (k%2 == 0) {

	return (ar4[(k-2)/2] + ar4[k/2])/2;
	
	}



	else {


	return ar4[((k+1)/2)-1];

	}



	}



	

















	int main () {


	float max, min, freq, sum, med;
	int n;

	
	cout<<"Enter the number of elements you want in your array ";

	cin>>n;

	cout<<endl;

	float arr[n];

	cout<<"Enter all the elements of your array "<<endl;	

	for (int i = 0; i<n; i++) {

	cin>>arr[i];
	cout<<endl;

	}
	

	

	max = maxel(arr, n);

	min = minel(arr, n);

	sum = sumel(arr, n, 0);
	
	med = medel(arr, n);


	cout<<"The maximum element is "<<max<<" ."<<endl;
	cout<<"The minimum element is "<<min<<" ."<<endl;
	cout<<"The mean is "<<sum/n<<" ."<<endl;
	cout<<"The median is "<<med<<" ."<<endl;
	


	}





