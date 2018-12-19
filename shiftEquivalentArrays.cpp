#include <iostream>
using namespace std;

bool equivalent(int a[], int b[], int n){
    for(int i=0; i<3; i++){ /* for loop states if i is less than 3 bec. the 
question asks if its possible to shift 3 places*/ 
		if (a[i]== b[0]) { /* if a[i] is 3 which equals b[0] which is 3 
then...*/
		
			for(int j=0; j<n; j++){
				if (a[(i+j)%n] != b[j]) break; /*i is a  
constant=2 here. We want to know if 2+j mod 5 does NOT equal b sub j. If that is 
the case, we would break out of the for loop. However, here this condition is 
never true. */ 
				if (j==(n-1)) return true; /*here n is 5 so if j 
is 4 then we break out of the for loop and return true. In this problem, when j is 
4 we have tested all of the arrays elements and therefor we know they are shift 
eqivalent. */
			}
		}
    }
	return false;
}

int main () {
        //test case here returns true. These arrays are shift eqivalent!
	int a[]={1,2,3,4,5};
	int b[]={3,4,5,1,2};
	
	if(equivalent(a,b,5)) {
	    cout << "It works! They are shift equivalent.";
	}
	else { 
	    	cout << "This does not work! They are not shift equivalent";
	}
	
	return 0;
}

