#include "Bython.h"

namespace std {
    int Bython::numVorood = 0;
    bool Bython::isNumber(const std::string &str) {
        for (char c : str) {if (!std::isdigit(c)) {return false;}}return true;}


    bool Bython::isContain(const std::string &str2) {
        if ((*list).find(str2) != (*list).end()) {
            return true;
        } else {
            return false;
        }
    }


    void Bython::inserting(const std::string &vorod, const int x = 0) {
        (*list)[vorod] = x;
    }

    void Bython::meghdar(std::string &x) {
        int equalnum;
        string moteghayer;
        string box;
        string triangle;
        bool pluse = false;
        int pluse1 = 0;
        bool minus = false;
        int minus1 = 0;
        int minus2 = 0;
        for (int i = 0; i < x.length(); i++) {
            if (x[i] == '=') {
                equalnum = i;
            }
        }
        moteghayer = x.substr(0, equalnum);
        for (int j = 0; j < x.length(); j++) {
            if (x[j] == '+') {
                pluse = true;
                pluse1 = j;
            }
        }
        for (int i = 0; i < x.length(); i++) {
            if (x[i] == '-') {
                minus = true;
                minus1 = i;
                break;
            }
        }
        for (int i = 0; i < x.length(); i++) {
            if (x[i] == '-') {
                minus = true;
                minus2 = i;
            }
        }

        if (!isContain(moteghayer)) {
            inserting(moteghayer);
        }

        if(!pluse && !minus){
            box = x.substr(equalnum +1 , x.length());
            if(isContain(box)){
                (*list)[moteghayer] = (*list)[box];
            }if(isNumber(box) && !isContain(box)){
                int numbox = stoi(box);
                (*list)[moteghayer] = numbox;
            }
        }

        if(!pluse && minus && (minus1 == minus2) && (equalnum +1 ==minus1)){
            box = x.substr(minus1 + 1 , x.length());
            if(isContain(box)){
                int megdarbox = (*list)[box];
                (*list)[moteghayer] = (megdarbox*-1);
            }if(isNumber(box) && !isContain(box)){
                int numbox = stoi(box);
                (*list)[moteghayer] = (numbox*-1);
            }
        }

        if(pluse && !minus){
            box = x.substr(equalnum + 1 , pluse1 - equalnum - 1);
            triangle = x.substr(pluse1 +1 , x.length());
            if (isNumber(box) && isNumber(triangle)){
                int numbox = stoi(box);
                int numtrinangle = stoi(triangle);
                (*list)[moteghayer] =  numbox + numtrinangle;

            }

            if (!isNumber(box) && !isNumber(triangle)){
                if(isContain(box) && isContain(triangle)){
                    (*list)[moteghayer] = (*list)[box] + (*list)[triangle];
                }
            }


            else{
                if (isNumber(box) && !isNumber(triangle)){
                    if (isContain(triangle)){
                        int numbox = stoi(box);
                        (*list)[moteghayer] = numbox + (*list)[triangle];
                    }
                }

                if (!isNumber(box) && isNumber(triangle)){
                    if (isContain(box)){
                        int numtriangle = stoi(triangle);
                        (*list)[moteghayer] = numtriangle + (*list)[box];
                    }
                }
            }
        }

        if ((minus && !pluse) && (minus1 != minus2)){
            box = x.substr(minus1 + 1 , minus2 - minus1 - 1);
            triangle = x.substr(minus2 +1 , x.length());
            if (isNumber(box) && isNumber(triangle)){
                int numbox = stoi(box);
                int numtrinangle = stoi(triangle);
                (*list)[moteghayer] =  - numbox - numtrinangle;

            }
            if (!isNumber(box) && !isNumber(triangle)){
                if(isContain(box) && isContain(triangle)){
                    (*list)[moteghayer] = -(*list)[box] - (*list)[triangle];
                }
            }
            else{
                if (isNumber(box) && !isNumber(triangle)){
                    if (isContain(triangle)){
                        int numbox = stoi(box);
                        (*list)[moteghayer] = - numbox - (*list)[triangle];
                    }
                }

                if (!isNumber(box) && isNumber(triangle)){
                    if (isContain(box)){
                        int numtriangle = stoi(triangle);
                        (*list)[moteghayer] = - numtriangle - (*list)[box];
                    }
                }
            }
        }
        if (pluse && minus){
            box = x.substr(minus1 + 1 , pluse1 - minus1 - 1);
            triangle = x.substr(pluse1 +1 , x.length());
            if (isNumber(box) && isNumber(triangle)){
                int numbox = stoi(box);
                int numtrinangle = stoi(triangle);
                (*list)[moteghayer] =  - numbox + numtrinangle;

            }
            if (!isNumber(box) && !isNumber(triangle)){
                if(isContain(box) && isContain(triangle)){
                    (*list)[moteghayer] = -(*list)[box] + (*list)[triangle];
                }
            }
            if (isNumber(box) && !isNumber(triangle)){
                if (isContain(triangle)){
                    int numbox = stoi(box);
                    (*list)[moteghayer] = - numbox + (*list)[triangle];
                }
            }

            if (!isNumber(box) && isNumber(triangle)){
                if (isContain(box)){
                    int numtriangle = stoi(triangle);
                    (*list)[moteghayer] = + numtriangle - (*list)[box];
                }
            }

        }
        if (minus && !pluse && (equalnum +1 != minus1)){
            box = x.substr(equalnum + 1, minus1 - equalnum -1);
            triangle = x.substr(minus1 +1 , x.length());
            if (isNumber(box) && isNumber(triangle)){
                int numbox = stoi(box);
                int numtrinangle = stoi(triangle);
                (*list)[moteghayer] =  + numbox - numtrinangle;

            }
            if (!isNumber(box) && !isNumber(triangle)){
                if(isContain(box) && isContain(triangle)){
                    (*list)[moteghayer] = +(*list)[box] - (*list)[triangle];
                }
            }
            if (isNumber(box) && !isNumber(triangle)){
                if (isContain(triangle)){
                    int numbox = stoi(box);
                    (*list)[moteghayer] = + numbox - (*list)[triangle];
                }
            }

            if (!isNumber(box) && isNumber(triangle)){
                if (isContain(box)){
                    int numtriangle = stoi(triangle);
                    (*list)[moteghayer] = - numtriangle + (*list)[box];
                }
            }
        }
    }

    void Bython::agar(std::string &x) {
        int firstMosavi;
        int indexOfdonogte;
        string val;
        string shart;
        string others;
        for(int i=0;i<x.length();i++){
            if(x[i] == '='){
                firstMosavi = i;
                break;
            }
        }
        for (int j = 0; j < x.length(); j++) {
            if(x[j] == ':'){
                indexOfdonogte = j;
                break;
            }
        }
        val = x.substr(4, firstMosavi - 4);
        shart = x.substr(firstMosavi+2,indexOfdonogte-firstMosavi-2);
        if (isContain(val)){
            if(isContain(shart)){
                if((*list)[val] == (*list)[shart]){
                    others = x.substr(indexOfdonogte+1 , x.length() - indexOfdonogte - 1);
                    divider(others);

                }
            }
            if(isNumber(shart)){
                int intshart = stoi(shart);
                if ((*list)[val] == intshart){
                    others = x.substr(indexOfdonogte+1 , x.length() - indexOfdonogte - 1);
                    divider(others);
                }
            }
        }
        if (!isContain(val) && isNumber(val)){
            if (isContain(shart)){
                int shartval = stoi(val);
                if(shartval == (*list)[shart]){
                    others = x.substr(indexOfdonogte+1 , x.length() - indexOfdonogte - 1);
                    divider(others);
                }
            }
            if (!isContain(shart) && isNumber(shart)){
                int shartyek = stoi(val);
                int shartdo = stoi(shart);
                if(shartyek == shartdo) {
                    others = x.substr(indexOfdonogte+1 , x.length() - indexOfdonogte - 1);
                    divider(others);
                }
            }
        }
    }

    void Bython::voroodi(std::string &x) {
        int indexDash;
        int equalnum;
        int meghdar;

        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] == "-----") {
                indexDash = i;
            }
        }
        for (int i = 0; i < x.length(); i++) {
            if (x[i] == '=') {
                equalnum = i;
            }
        }
        if(isNumber(vec[indexDash + (numVorood) + 1])){
            meghdar = stoi(vec[indexDash + (numVorood) + 1]);
            numVorood ++;
            string moteghayer = x.substr(0,equalnum);
            if (isContain(moteghayer)) {
                (*list)[moteghayer] = meghdar;
            }


            if (!isContain(moteghayer)) {
                inserting(moteghayer , meghdar);
            }
        }
    }

    void Bython::khorooji(std::string &x) {
        int numOfComma = 0 ;
        int numLastparan = 0;
        int beinabein = 0;
        vector<int> index{8};
        vector<string> megdar;
        for(int i=0;i<x.length();i++){
            if(x[i] == ')'){numLastparan = i;}
        }
        beinabein = numLastparan - 9;
        for(int i=0;i<x.length();i++){
            if(x[i] == ','){numOfComma++;}
        }
        if(numOfComma != 0){
            for(int i=0;i<x.length();i++){
                if(x[i] == ','){index.push_back(i);}
            }
            index.push_back(numLastparan);
            for(int j = 0; j < numOfComma + 1 ;j++){
                int fasele = index[j+1] - index[j];
                fasele -= 1;
                string val = "";
                string outputString;
                val = x.substr(index[j] + 1 , fasele);
                for (char c : val) {
                    if (c != ' ') {
                        outputString += c;
                    }
                }
                megdar.push_back(outputString);
            }
            for(int k=0;k<megdar.size();k++){
                if(isContain(megdar[k])){
                    cout<<(*list)[megdar[k]]<<" ";

                }
                if(!isContain(megdar[k]) && isNumber(megdar[k])){
                    cout<<megdar[k]<<" ";
                }
            }
        }
        if(numOfComma == 0){
            string val;
            val = x.substr(9, beinabein);
            if(isContain(val)){
                cout<<(*list)[val]<<" ";

            }
            if(!isContain(val) && isNumber(val)){
                cout<<val<<" ";
            }
        }
        cout<<endl;
    }

    void Bython::divider(std::string &x) {
        string withoutSpace;
        for (char c : x) {if (c != ' ') {withoutSpace += c;}}
        string output = "khorooji";
        string input = "=voroodi";
        string _if = "agar";
        string eq = "=";
        if (withoutSpace.find(_if) != std::string::npos){agar(withoutSpace);}
        else if (withoutSpace.find(input) != std::string::npos){voroodi(withoutSpace);}
        else if (withoutSpace.find(output) != std::string::npos){khorooji(withoutSpace);}
        else if (withoutSpace.find(eq) != std::string::npos){meghdar(withoutSpace);}
    }

    void Bython::getVal() {
        cout<<list->size()<<endl;
    }

    Bython::Bython(vector<std::string> vec) : vec(vec) {
        for (auto &i: vec) {
            divider(i);
        }
    }
}