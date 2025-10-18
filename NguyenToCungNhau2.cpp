//Chưa rõ

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    // Tăng tốc độ nhập xuất cho C++
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    // Mảng boolean để đánh dấu các ước số nguyên tố "cấm"
    // Kích thước 100001 vì max(A[i]) = 100000
    vector<bool> bad_primes(100001, false);

    // Bước 1: Tìm tất cả các ước số nguyên tố "cấm" từ mảng A
    for (int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        if (a == 1) {
            continue; // Số 1 không có ước nguyên tố
        }

        // Phân tích a ra thừa số nguyên tố
        int temp = a;
        for (int p = 2; p * p <= temp; ++p) {
            if (temp % p == 0) {
                bad_primes[p] = true;
                // Loại bỏ hết thừa số p
                while (temp % p == 0) {
                    temp /= p;
                }
            }
        }
        // Nếu còn lại thừa số lớn hơn 1, nó cũng là số nguyên tố
        if (temp > 1) {
            bad_primes[temp] = true;
        }
    }

    // Bước 2: Sàng các số không hợp lệ trong khoảng [1, M]
    vector<bool> is_valid(M + 1, true);

    for (int p = 2; p <= 100000; ++p) {
        // Nếu p là một ước số nguyên tố "cấm"
        if (bad_primes[p]) {
            // Loại bỏ tất cả các bội số của p
            for (int j = p; j <= M; j += p) {
                is_valid[j] = false;
            }
        }
    }

    // Bước 3: Thu thập và in kết quả
    vector<int> result;
    for (int k = 1; k <= M; ++k) {
        if (is_valid[k]) {
            result.push_back(k);
        }
    }

    cout << result.size() << "\n";
    if (!result.empty()) {
        for (size_t i = 0; i < result.size(); ++i) {
            cout << result[i] << (i == result.size() - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}