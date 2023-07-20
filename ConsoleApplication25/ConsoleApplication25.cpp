// ConsoleApplication25.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;

vector<int> solution(vector<int>& A, int K) {
    int N = A.size();
    if (N == 0) {
        return A;
    }

    K = K % N; 

    
    for (int i = 0; i < K; ++i) {
        int lastElement = A.back();
        A.pop_back();
        A.insert(A.begin(), lastElement);
    }

    return A;
}

int main() { 
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector<int> A1 = { 3, 8, 9, 7, 6 };
    int K1 = 3;
    vector<int> result1 = solution(A1, K1);
    for (int num : result1) {
         cout << num << " ";
    }
    cout << endl;

    vector<int> A2 = { 0, 0, 0 };
    int K2 = 1;
   vector<int> result2 = solution(A2, K2);
    for (int num : result2) {
       cout << num << " ";
    }
    cout << endl;

    vector<int> A3 = { 1, 2, 3, 4 };
    int K3 = 4;
    vector<int> result3 = solution(A3, K3);
    for (int num : result3) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
