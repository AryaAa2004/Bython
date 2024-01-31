#include <iostream>
#include "Bython.h"
#include <vector>
#include <map>
#include <string>

using namespace std;

static int count = 0;


int main() {
    vector<std::string> sentences;
    string input;
    string voroodi = "voroodi";
    string dash = "-----";

    while (true) {
        std::getline(std::cin, input);
        if (input.find(voroodi) != std::string::npos){
            count++;
        }
        sentences.push_back(input);

        if (input.find(dash) != std::string::npos) {
            break;
        }
    }
    for (int j=0;j<count;j++){
        cin>>input;
        sentences.push_back(input);
    }
    Bython by(sentences);
    by.getVal();
    return 0;
}