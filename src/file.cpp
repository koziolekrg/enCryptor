#include "file.h"

File::File(){

}

File::~File(){

}

vector<char> File::readFile(string afileName){
    vector<char> buffer;
    m_ifile.open(afileName, ios::binary);

    while(!m_ifile.eof()){
        buffer.push_back(m_ifile.get());
    }
    m_ifile.close();

    return buffer;
}

void File::saveFile(vector<char> a_buffer, string afileName){
    m_ofile.open("encrypted_"+afileName, ios::binary);

    ostream_iterator<char> output_iterator(m_ofile);
    copy(a_buffer.begin(), a_buffer.end(), output_iterator);
    m_ofile.close();

}
