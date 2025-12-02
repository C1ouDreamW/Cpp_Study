#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> s1(n), s2(n), s3(n), s4(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  s1[0] = -1;
  int max_left = 0;
  for (int i = 1; i < n; i++) {
    max_left = max(max_left, a[i - 1]);
    if (a[i - 1] > a[i]) {
      s1[i] = a[i - 1];
    } else {
      if (s1[i - 1] == -1) {
        s1[i] = -1;
      } else {
        if (a[i] >= max_left) {
          s1[i] = -1;
        } else {
          s1[i] = max_left;
        }
      }
    }
  }

  s3[0] = -1;
  int min_left = 0;
  for (int i = 1; i < n; i++) {
    min_left = min(min_left, a[i - 1]);
    if (a[i - 1] < a[i]) {
      s3[i] = a[i - 1];
    } else {
      if (s3[i - 1] == -1) {
        s3[i] = -1;
      } else {
        if (a[i] <= max_left) {
          s3[i] = -1;
        } else {
          s3[i] = max_left;
        }
      }
    }
  }

  reverse(a.begin(), a.end());
  s2[0] = -1;
  for (int i = 1; i < n; i++) {
    max_left = max(max_left, a[i - 1]);
    if (a[i - 1] > a[i]) {
      s2[i] = a[i - 1];
    } else {
      if (s2[i - 1] == -1) {
        s2[i] = -1;
      } else {
        if (a[i] >= max_left) {
          s2[i] = -1;
        } else {
          s2[i] = max_left;
        }
      }
    }
  }

  s4[0] = -1;
  for (int i = 1; i < n; i++) {
    min_left = min(min_left, a[i - 1]);
    if (a[i - 1] < a[i]) {
      s4[i] = a[i - 1];
    } else {
      if (s4[i - 1] == -1) {
        s4[i] = -1;
      } else {
        if (a[i] <= max_left) {
          s4[i] = -1;
        } else {
          s4[i] = max_left;
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << s1[i] << " ";
  }
  cout << endl;

  for (int i = n - 1; i >= 0; i--) {
    cout << s2[i] << " ";
  }
  cout << endl;

  for (int i = 0; i < n; i++) {
    cout << s3[i] << " ";
  }
  cout << endl;

  for (int i = n - 1; i >= 0; i--) {
    cout << s4[i] << " ";
  }
  cout << endl;

  return 0;
}