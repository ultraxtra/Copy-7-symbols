
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

bool FromFileToFile() {
    FILE* file_from, * file_to;
    char buf[1000];
    char path_from[] = "file1.txt";
    char path_to[] = "file2.txt";
    if ((file_from = fopen(path_from, "r")) == NULL) {
        perror("Invalid File is not Open!");
        return false;
    }
    if ((file_to = fopen(path_to, "w")) == NULL) {
        perror("Invalid File is not Open!");
        return false;
    }
    while (fgets(buf, 1000, file_from))
    {
        fputs(buf, file_to);
    }


    fclose(file_from);
    fclose(file_to);

}
//char* ReadFile(char* path, FILE* file) {
//
//
//    char* buf = new char[1000];
//    if ((file = fopen(path, "r")) == NULL) {
//        perror("Invalid File is not Open!");
//    }
//    else {
//        int counter = 0;
//        while (fgets(buf, 1000, file)) {
//            counter++;
//        }
//        cout << counter << " lines was reading!" << endl;
//        fclose(file);
//    }
//    return buf;
//}
int main()
{

    FromFileToFile();
    return 0;
}