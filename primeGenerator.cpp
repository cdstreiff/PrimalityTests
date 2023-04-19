#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 0;
    int num = 2;
    vector<int> primes;

    while (count < 1000000) {
        if (isPrime(num)) {
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

