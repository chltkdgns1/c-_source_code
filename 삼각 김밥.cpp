#include <iostream>
using namespace std;int main() {int n;double x25, y25,temp,x,y;cin >> x25 >> y25;temp = (1000 / y25) * x25;cin >> n;for (int i = 0; i < n; i++) {	cin >> x >> y;if (temp > 1000 / y * x) {	temp = 1000 / y * x;	}}printf("%.2lf\n", temp);}