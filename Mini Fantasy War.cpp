#include <iostream>
using namespace std;int main() {int h, m, a, s, p_h, p_m, p_a, p_s,t,total = 0;cin >> t;for (int i = 0; i < t; i++) {cin >> h >> m >> a >> s >> p_h >> p_m >> p_a >> p_s;if (h + p_h < 1) h = 1;else h = h + p_h;if (m + p_m < 1) m = 1;else m = m + p_m;if (a + p_a < 0) a = 0;else a = a + p_a;total = h + 5 * m + 2 * a + 2 * (s + p_s);cout << total << endl;	total = 0;}}