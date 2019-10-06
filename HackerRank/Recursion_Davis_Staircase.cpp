#include <bits/stdc++.h>

using namespace std;

// Complete the stepPerms function below.
int stepPerms(int n) {
    static map<int, int> m;
    if(n < 1)
        return 0;
    else if(n < 3)
        return n;
    else if(n == 3)
        return 4;
    else {
        if(m[n])
            return m[n];
        else
            return m[n] = (stepPerms(n-1) + stepPerms(n-2) + stepPerms(n-3));
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int s;
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int s_itr = 0; s_itr < s; s_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int res = stepPerms(n);

        fout << res << "\n";
    }

    fout.close();

    return 0;
}
