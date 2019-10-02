#include<bits/stdc++.h>
using namespace std;

int kembalian[50005], jenisKoin[505];

int coinChanges(int banyakKoin, int uang) {
     int result;
     kembalian[0] = 0;
     for (int i = 1; i <= uang; i++) {
          result = 2000000;
          for (int j = 0; j < banyakKoin; j++) {
               if (jenisKoin[j] <= i) {
                    result = min(result, kembalian[i - jenisKoin[j]] + 1);
               }
          }
          //cout << i << " " << result << endl;
          kembalian[i] = result;
     }
     result = kembalian[banyakKoin];
     if (result == 2000000) {
          return -1;
     } else {
          return kembalian[uang];
     }
}

int main() {
     ios_base::sync_with_stdio(false);

     int banyakKoin;    cin >> banyakKoin;
     for (int i = 0; i < banyakKoin; i++) {
          cin >> jenisKoin[i];
     }
     int uang;      cin >> uang;
     cout << coinChanges(banyakKoin, uang) << endl;

     return 0;
}
