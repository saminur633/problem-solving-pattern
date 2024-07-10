// sum of pattern
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
        cout << "1";
        for (int j = 2; j <= i; ++j) {
            cout << " + " << j;
        }
        cout << " = " << sum << endl;
    }

    return 0;
}
// square pattern
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the square: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
// pyramid pattern
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Print leading spaces
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    return 0;
}
// half diamond pattern
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for the upper half of the diamond: ";
    cin >> n;

    // Print the upper half of the diamond
    for (int i = 1; i <= n; ++i) {
        // Print leading spaces
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    // Print the lower half of the diamond
    for (int i = n - 1; i >= 1; --i) {
        // Print leading spaces
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    return 0;
}
// zero pair sum
#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int cnt = 0; // stores the number of pairs
  // fix the first index of the pair
  for (int i = 0; i < n; i++) {
    // fix the second index of the pair
    // start from i + 1, because we want j > i
    for (int j = i + 1; j < n; j++) {
      if (a[i] + a[j] == 0) {
        cnt++;
      }
    }
  }
  cout << cnt << '\n';
  return 0;
}
// Delete from string
#include<iostream>
#include<string.h> 
using namespace std;

int main() {
  char s[11]; 
  cin >> s; 
  int n = strlen(s); 
  for (int i = 1; i < n; i++) {
    s[i - 1] = s[i]; 
  }
  s[n - 1] = '\0'; 
  cout << s << '\n';
  return 0;
}

