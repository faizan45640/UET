#include<iostream>
using namespace std;
 bool  isperfectnumber(int n) {
	int originalnum=n;
	int sum = 0;

	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			sum = sum + i;
		}
	}
	if (sum == originalnum) {
		cout << sum;
		return true;
	}
	else {
		return false;
		cout << sum;
	}
	
}
bool firstcondition(int n){
	int digit = 0;
	int sum = 0;
	int originalnum = n;
	int count = 0;
	//sum of digits
	while (n > 0) {
		digit = n % 10;
		sum = sum + digit;
		n = n / 10;
	}
	int newnum = sum-1;
	
	for (int i = 1; i <= newnum; i++) {
		if (newnum % i==0) {
			count++;
		}
		
	}
	if (count == 2) {
		return true;
	}
	else {
		return false;
	}
	
	
	
}

bool secondcondition(int n) {
	int digit = 0;
	int sum1 = 0;
	int sum2 = 0;
	int originalnum = n;
	int count = 0;
	int sum = 0;
	int secondhalfsum = 0;
	int firsthalfsum = 0;
	int diff = 0;
	//for counting:
	while (n > 0) {
		n = n / 10;
		count++;
		
	}

	
	n = originalnum;
	int numofdigits = count;

	if (count % 2 == 0) {
		while (n > 0) {
			digit = n % 10;
			sum = sum + digit;
			n=n / 10;
			count--;
				if (count == numofdigits / 2) {
					 secondhalfsum = sum;
					sum = 0;

				}
				firsthalfsum = sum;
		}
		
		int diff = firsthalfsum - secondhalfsum;
		if (diff < 0) {
			diff = diff * (-1);
		}
		
		if (isperfectnumber(diff))
			return true;
		else {
			return false;
		}                                                       
		                                                       


	}
	if (count % 2 != 0) {
		while (n > 0) {
			digit = n % 10;
			if (count == (numofdigits / 2) + 1) {
				n=n/10;
				count--;
				continue;
			}
				
			sum = sum + digit;
			n = n / 10;
			count--;
			
			if (count == numofdigits / 2) {
				secondhalfsum = sum;
				sum = 0;

			}                                          
			firsthalfsum = sum;
		}
	
		int diff = firsthalfsum - secondhalfsum;
		if (diff < 0) {
			diff = diff * (-1);
		}

		if (isperfectnumber(diff))
			return true;
		else {
			return false;
		}
	}

	

}

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if ( secondcondition(num) || firstcondition(num)) {
		cout << "It is a funny number";
	}
	else {
		cout << "Serious number";
	}
	
	

}