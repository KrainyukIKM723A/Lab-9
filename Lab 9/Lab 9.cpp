#include <iostream> 

#include <vector> 



using namespace std;



int main() {

    // Розмір матриці 

    int n, m;

    cin >> n >> m;



    // Введення матриці 

    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            cin >> a[i][j];

        }

    }



    // Знаходження максимальних елементів у кожному рядку 

    for (int i = 0; i < n; i++) {

        int max = a[i][0];

        for (int j = 1; j < m; j++) {

            if (a[i][j] > max) {

                max = a[i][j];

            }

        }

        cout << max << " ";

    }

    cout << endl;



    // Обчислення середнього арифметичного значення від'ємних елементів 

    // головної діагоналі 

    int sum = 0, cnt = 0;

    for (int i = 0; i < n; i++) {

        if (a[i][i] < 0) {

            sum += a[i][i];

            cnt++;

        }

    }

    double avg = (cnt == 0) ? 0 : (double)sum / cnt;



    // Виведення результату 

    cout << avg << endl;



    return 0;

}


