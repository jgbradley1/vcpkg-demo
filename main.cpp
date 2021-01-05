// main.cpp
#include "opencv2/opencv.hpp"
#include <sqlite3.h>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    cout << "SQLite3 version: " << sqlite3_libversion() << endl;
    cout << "OpenCV version: " << CV_VERSION << endl;
    return 0;
}
