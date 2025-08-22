#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	int a[n], s[n], maxlength = 0;

	cin >> a[0];
	s[0] = a[0];
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
	}
	
	for (int i = 0; i < n; i++) {
		if (a[i] > t) continue;

		int l = i, r = n - 1, ans;
		while (l <= r) {
			int mid = (r + l) / 2;
			int sum = s[mid] - (i > 0 ? s[i - 1] : 0);

			if (sum <= t) {
				ans = mid;
				l = mid + 1;
			} else {
				r = mid - 1;
			}
		}

		maxlength = max(maxlength, ans - i + 1);
	}

	cout << maxlength << endl;
	return 0;
}

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
// 	int n, t;
// 	cin >> n >> t;
// 	int a[n], r = 0, sum = 0, maxlength = 0;

// 	for (int i = 0; i < n; i++) {
// 		cin >> a[i];
// 	}
	
// 	for (int l = 0; l < n; l++) {
// 		while (r < n && sum + a[r] <= t) {
// 			sum += a[r];
// 			r++;
// 		}
// 		maxlength = max(maxlength, r - l);
// 		sum -= a[l];
// 	}

// 	cout << maxlength << endl;
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	int n, t;
// 	cin >> n >> t;
// 	int a[n], b, max = 0;

// 	for (int i = 0; i < n; i++) {
// 		cin >> a[i];
// 	}
	
// 	for (int i = 0; i < n; i++) {
// 		b = 0;
		
// 		for (int j = i; ; j++) {
// 			if (j == n || b + a[j] > t) {
// 				max = max > j - i ? max : j - i;
// 				break;
// 			} else {
// 				b += a[j];
// 			}
// 		}
// 	}

// 	cout << max << endl;
// 	return 0;
// }