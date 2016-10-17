#ifndef FILE_H
#define FILE_H

#include <algorithm>
#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

class File
{
public:
    File();
    ~File();
    vector<char> readFile(string afileName);
    void saveFile(vector<char> abuff, string afileName);

private:
   ifstream m_ifile;
   ofstream m_ofile;

};

#endif // FILE_H
