#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>

using namespace std;

int main() {
    string path; cin >> path;
    string range; cin >> range;

    string start_str;
    string end_str;
    int start;
    int end;

    string current;

    for (char chr : range) {
        if (chr == '-')
        {
            start_str = current;
            current = "";
            continue;
        }
        
        current.push_back(chr);
    }

    end_str = current;

    start = start_str.empty() ? 1 : stoi(start_str);
    end = stoi(end_str);

    mkdir(path.c_str(), 0777);

    for (int i = start; i <= end; i++)
    {
        mkdir((path + '/' + to_string(i)).c_str(), 0777);
    }

    cout << "Directory created" << endl;

    return 0;
}