#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <algorithm>
#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

class Encrypt
{
public:
    Encrypt();
    ~Encrypt();
    vector<char> doEncryption(vector<char> abuff, string key);

private:
    vector<char> m_buff;
    string m_key;

};

#endif // ENCRYPT_H
