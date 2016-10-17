#ifndef DECRYPT_H
#define DECRYPT_H

#include <algorithm>
#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

class Decrypt
{
public:
    Decrypt();
    ~Decrypt();
    vector<char> doDecryption(vector<char> abuff, string key);

private:
    vector<char> m_buff;
    string m_key;

};

#endif // DECRYPT_H
