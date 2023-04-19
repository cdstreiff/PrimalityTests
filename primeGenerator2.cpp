#include <iostream>
#include <vector>

using namespace std;

int main(){

	int count = 1;
  	int num = 3;


       	vector<int> primes;

	primes.push_back(2);
	

	while(count < 1000000){

		bool prime = true;
		auto it = primes.begin();

		while((*it)*(*it) <= num){

			if(num % *it == 0){
				
				prime = false;
				break;
			}

			advance(it,1);
		}

		if(prime == true){
			primes.push_back(num);
			count++;
		}	
	
		num++;

	}


	

	for(auto element : primes){

		cout << element << "\n";

	}
	cout << endl;
	


	return 0;
}
