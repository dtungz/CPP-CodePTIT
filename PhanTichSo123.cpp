    #include <bits/stdc++.h>
    using namespace std;
    using ll = long long;

    // --- Các hàm chia lấy trần / sàn an toàn với số âm ---
    ll floor_div(ll a, ll b) {
        if (a >= 0) return a / b;
        return - ( ( -a + b - 1 ) / b );
    }
    ll ceil_div(ll a, ll b) {
        if (a >= 0) return (a + b - 1) / b;
        return - ( (-a) / b );
    }

    // Kiểm tra xem với số lượng thành phần = K, có thể phân tích ra N hay không
    bool check_with_K(const vector<int>& digits, int K) {
        // digits: mảng chữ số của N (từ phải sang trái, LSD -> MSD)
        // Trạng thái dp: map[carry] = s_max
        //   carry: nhớ sang cột tiếp theo
        //   s_max: số lượng phần tử tối đa còn đang "sống" ở cột hiện tại

        unordered_map<ll,int> dp, dp_next;
        dp[0] = K; // ban đầu: chưa có nhớ, tất cả K số đều "sống"

        int numDigits = (int)digits.size();
        int maxCol = numDigits + 80; // thêm vài cột dự phòng cho carry

        for (int col = 0; col <= maxCol; ++col) {
            int digit = (col < numDigits ? digits[col] : 0); // chữ số của N tại cột này
            dp_next.clear();

            for (auto &state : dp) {
                ll carry = state.first;   // nhớ hiện tại
                int alive_max = state.second; // số lượng số "sống" tối đa ở cột này

                // Xét mọi số lượng số sống thật sự tại cột này: alive ∈ [0..alive_max]
                for (int alive = alive_max; alive >= 0; --alive) {
                    if (alive == 0) {
                        // Nếu không còn số nào ở cột này, tổng đóng góp = 0
                        int sum_col = 0;
                        if (((sum_col + carry) % 10 + 10) % 10 == digit) {
                            ll new_carry = (sum_col + carry - digit) / 10;
                            dp_next[new_carry] = max(dp_next[new_carry], alive);
                        }
                        continue;
                    }

                    // Ràng buộc: tổng ở cột này ∈ [alive .. 3*alive]
                    // Gọi sum_col = r + 10*m
                    int r = ((digit - carry) % 10 + 10) % 10;
                    ll low = ceil_div((ll)alive - r, 10);
                    ll high = floor_div(3LL*alive - r, 10);

                    for (ll m = low; m <= high; ++m) {
                        ll sum_col = r + 10*m;
                        if (sum_col < alive || sum_col > 3LL*alive) continue;

                        ll new_carry = (sum_col + carry - digit) / 10;
                        dp_next[new_carry] = max(dp_next[new_carry], alive);
                    }
                }
            }

            dp.swap(dp_next);

            // Nếu đã xử lý hết chữ số và carry=0 tồn tại thì thành công
            if (col >= numDigits - 1 && dp.find(0) != dp.end()) return true;
            if (dp.empty()) break; // không còn trạng thái nào hợp lệ
        }
        return false;
    }

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int T;
        cin >> T;

        const int K_LIMIT = 200; // giới hạn K cần thử (200 là dư sức)

        while (T--) {
            string N;
            cin >> N;

            // Xóa số 0 thừa ở đầu -> Có thể bỏ`

            // int idx = 0;
            // while (idx + 1 < (int)N.size() && N[idx] == '0') ++idx;
            // if (idx) N = N.substr(idx);

            // Chuyển thành mảng chữ số LSD -> MSD
            vector<int> digits;
            for (int i = (int)N.size()-1; i >= 0; --i) digits.push_back(N[i]-'0');

            int answer = -1;
            for (int K = 1; K <= K_LIMIT; ++K) {
                if (check_with_K(digits, K)) {
                    answer = K;
                    break;
                }
            }

            cout << answer << '\n';
        }
        return 0;
    }
