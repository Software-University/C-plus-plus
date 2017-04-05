#include <iostream>

int main() {
    double x1, x2, y1, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    double area = (x2 - x1) * (y2 - y1), per = (x2 - x1 + y2 - y1) * 2 ;
    std::cout << area << std::endl << per << std::endl;
    return 0;
}
