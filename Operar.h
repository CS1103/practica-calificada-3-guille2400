//
// Created by sanch on 11/7/2019.
//

#ifndef INC_07_11_19_OPERAR_H
#define INC_07_11_19_OPERAR_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
class Operar {
    map<string, int> my_map;
    vector<pair<string, int>> vecautilizar;
public:
    void sort_load_info(const string &file_name);
    void promedio(const pair<string, int> &a, const pair<string, int> &b);
    void grabar_info(const string &file_name);
};


#endif //INC_07_11_19_OPERAR_H
