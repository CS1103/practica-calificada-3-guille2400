//
// Created by sanch on 11/7/2019.
//

#include "Operar.h"
void Operar::promedio(const pair<string, int> &a, const pair<string, int> &b)
{
    int suma=0;
    for(auto & i : vecautilizar)
    {
        suma += i.second;
    }
    cout<<suma;
}
void Operar::sort_load_info(const string &file_name)
{
    ifstream archivo;
    string fila;
    archivo.open(file_name, ios::in);
    if (archivo.fail()) {
        cout << "No se puede abrir";
        exit(1);
    }
    if (archivo) {
        while (getline(archivo, fila)) {
            stringstream linea(fila);
            vector<string> temp;
            string palabra;
            while (getline(linea, palabra)) {
                temp.push_back(palabra);
            }
            //if (temp[0][0] == 'C'){
            //   postulantes->push_back(new PostulanteCiencias(temp[0], temp[1], temp[2], stoul(temp[3], nullptr, 0), stoul(temp[4], nullptr, 0), stoul(temp[5], nullptr, 0)));
            //} else {
            //    postulantes->push_back(new PostulanteLetras(temp[0], temp[1], temp[2], stoul(temp[3], nullptr, 0), stoul(temp[4], nullptr, 0), stoul(temp[5], nullptr, 0)));
        }
    }
    archivo.close();

    //---------------------------Ordenar el map creado-----------------------------------
    map<string, int>::iterator it;
    for (it = my_map.begin(); it != my_map.end(); it++) {
        cout << it->first << " - " << it->second << endl;
    }
    map<string, int>::iterator it2;
    for (it2 = my_map.begin(); it2 != my_map.end(); it2++) {
        vecautilizar.emplace_back(it2->first, it2->second);
    }
    sort(vecautilizar.begin(), vecautilizar.end(), [](const pair<string, int> &a, const pair<string, int> &b){return (a.second < b.second);});
    cout<< "La informacion fue guardada en un .txt y tambien sera immpresa: "<<endl;
    for (auto & i : vecautilizar)
    {
        cout << i.first << " " << i.second << endl;
    }
}

void Operar::grabar_info(const string &file_name)
{
    ofstream myfile;
    myfile.open(file_name);
    if (!myfile)
    {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(1);
    }

    //La parte de IPHONE 11,50,30,20
    'myfile << Nombredelproducto << "," << *max_element(vecautilizar.begin(), vecautilizar.end()) << ", " << promedio(&vecautilizar);';

    for (auto & i : vecautilizar)
    {
        myfile << i.first << " " << i.second << endl;
    }
    myfile.close();

}





