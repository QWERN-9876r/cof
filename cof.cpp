#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>

using namespace std;

int main() {
    string path; cin >> path;
    int count; cin >> count;

    if (mkdir(path.c_str(), 0777) == -1)
        cerr << "Error :  " << strerror(errno) << endl;
    else {
        for (int i = 0; i < count; i++)
        {
            mkdir((path + '/' + char(i + '1')).c_str(), 0777);
        }

        cout << "Directory created";
    }

    return 0;
}