#include <iostream>
#include <algorithm> 
#include <fstream>

using namespace std;

long long gcd(long long a, long long b) {
	// Find Minimum of a and b
    long long res = min(a, b);

  	// Testing divisiblity with all numbers starting from
	// min(a, b) to 1

    while (res > 1) {

        // If any number divide both a and b, so we
        // got the answer
        if (a % res == 0 && b % res == 0)
            break;
        res--;
    }
	return res;
}

void solve(int caseNum) {
  ifstream ent;
  ofstream sal;

  ent.open(to_string(caseNum) + ".in");
  sal.open(to_string(caseNum) + ".out");

  int N;
  ent >> N;

  int arr[N];
  for (int i = 0; i < N; i++) {
    ent >> arr[i];
  }

  long long ans = arr[0] * arr[1];
  long long actual_gcd = gcd(arr[0], arr[1]);

  for (int i = 2; i < N; i++) {
    actual_gcd = gcd(actual_gcd, arr[i]);
    ans *= arr[i];
  }

  sal << ans / actual_gcd << endl;
}

int main() {
  for (int i = 0; i < 60; i++) {
    solve(i);
  }
}