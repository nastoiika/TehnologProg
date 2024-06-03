#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <bitset>
#include <random>
using namespace std;

class Des
{
private:
    string round_keys[16];
    string pt;

    string convertDecimalToBinary(int decimal);
    int convertBinaryToDecimal(string binary);
    string shift_left_once(string key_chunk);
    string shift_left_twice(string key_chunk);
    string Xor(string a, string b);
    void generate_keys(string key);
    string DES_block(string block, bool is_decryption);
    string stringToBinary(string s);
    string binaryToString(string binary);
    string padString(string s);
    string unpadString(string s);
    string padKey(string key);


public:
    Des();
    ~Des();

    string decrypt(string cipher_text, string key);
    string encrypt(string text, string key);
    string generateRandomString();

};
