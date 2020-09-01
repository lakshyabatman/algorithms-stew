#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int no_test;
	cin >> no_test;
	for(int test = 0;test < no_test;++test) {
		int width,height,walls;
		cin >> width >> height >> walls;
		int x_cord[walls];
		int y_cord[walls];
		if(walls == 0) {
			cout << width * height << endl;
			continue;
		}
		for(int i = 0;i < walls;++i)
			cin >> x_cord[i] >> y_cord[i];
		sort(x_cord,x_cord+walls);
		sort(y_cord,y_cord+walls);
		int x_max = x_cord[0]-1;
		int y_max = y_cord[0]-1;
		for(int i = 1;i < walls;++i) {
			x_max = max(x_max,x_cord[i] - x_cord[i-1]-1);
			y_max = max(y_max,y_cord[i] - y_cord[i-1]-1);
		}
		x_max = max(x_max,width - x_cord[walls-1]);
		y_max = max(y_max,height - y_cord[walls-1]);
		cout << x_max * y_max << endl;
	}
	return 0;
}