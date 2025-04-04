/*#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;


    long long tiles_n = (n + a - 1) / a;
    long long tiles_m = (m + a - 1) / a;


    cout << tiles_n * tiles_m << endl;

    return 0;
}

*/
/*
#include <iostream>
using namespace std;

int main() {
    int s , count = 0;
    cin >> s;

    for (int i = 0; i < s; i++) {
        int a, b, c;
        cin >> a >> b >> c;


        if (a + b + c >= 2) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

*/
/*
#include <iostream>
using namespace std;

struct Book {
    string title;
    int count;
};

Book books[100000];
int bookCount = 0;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string title;
        cin >> title;

        bool found = false;
        for (int i = 0; i < bookCount; i++) {
            if (books[i].title == title) {
                found = true;
                books[i].count++;
                cout << title << books[i].count << endl;
                break;
            }
        }

        if (!found) {
            books[bookCount].title = title;
            books[bookCount].count = 0;
            bookCount++;
            cout << "OK" << endl;
        }
    }

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
    int n, T = 0;
    cin >> n;

    while (n--) {
        string command;
        cin >> command;

        if (command.find("++") != string::npos) {
            T++;
        }
        else {
            T--;
        }
    }

    cout << T << endl;
    return 0;
}
*/
/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (size_t i = 0; i < x.size(); i++) {
        int digit = x[i] - '0';
        int transformed = 9 - digit;

        if (i == 0 && transformed == 0) {
            continue;
        }

        if (transformed < digit) {
            x[i] = transformed + '0';
        }
    }

    cout << x << endl;
    return 0;
}
*/