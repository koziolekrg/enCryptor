#include "encrypt.h"

Encrypt::Encrypt(){

}

Encrypt::~Encrypt(){

}

vector<char> Encrypt::doEncryption(vector<char> abuff, string key){
    int keylenght = key.length(), j=0;
    const char *ckey = key.c_str();
    vector<char> buff;

    for(int i = 0; i!=abuff.size(); i++){
        buff.push_back(abuff[i]^ckey[j]);
        if(j == keylenght)
            j=0;
        else
            j++;
    }
    return buff;
}
