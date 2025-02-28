#include<iostream>
#include<fstream>
using namespace std;

void xorEncryptDecrypt(string filename,char key){
    fstream file(filename,ios::in|ios::out|ios::binary);
    if(!file){
        cout<<"File not Found!"<<endl;
        return ;
    }
    char ch;
    while(file.get(ch)){
        file.seekp(-1,ios::cur);
        file.put(ch^key);
    }
    file.close();
}
int main()
{
    string filename;
    char key;
    cout<<"Enter file name:";
    cin>>filename;
    cout<<"Enter Encryption/Decryption key(Single char):";
    cin>>key;
    xorEncryptDecrypt(filename,key);
    cout<<"File Enrypted/Decrypted successfully!"<<endl;
    return 0;
}