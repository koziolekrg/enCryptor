#include <iostream>
#include "file.h"
#include "encrypt.h"
#include <vector>

using namespace std;

int main(int argc, char *argv[]){

    if(argc<3){
        cout<<"Type [file name] as second parameter";
        cout<<"Type [key] as third parameter";
        exit(1);
    }

    File file;
    Encrypt enc;

    vector <char> output;

    cout<<"File ["<<argv[1]<<"] loaded"<<endl;
    output = file.readFile(argv[1]);

    cout<<"Encrypted with key ["<<argv[2]<<"]"<<endl;
    output = enc.doEncryption(output, argv[2]);

    cout<<"File saved to [encrypted_"<<argv[1]<<"]"<<endl;
    file.saveFile(output, argv[1]);


}
