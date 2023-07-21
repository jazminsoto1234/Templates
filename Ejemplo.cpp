#include<iostream>
#include<array>
#include<deque>
using namespace std;
template<typename T>
int count_char(T &text, char letter){
    int cont =0;
    for(auto t : text ){
        if(t == letter){
            cont++;
        }
    }
    return cont;
}



int main(){
    auto count = count_char("Esta es una prueba", 'e');
    std::cout << "count: "<<count<<std::endl;
    string text = "Esta es una prueba";
    count = count_char(text, 'e');
    std::cout << "count: " <<count <<std::endl;
    
    std::array texto = {'E','s','t','a',' ','e','s',' ',
                   'u','n','a',' ',
                   'p','r','u','e','b','a'};
    count = count_char(texto, 'e');
    std::cout << "count: " << count<<std::endl;
    std::deque txto = {'E','s','t','a',' ','e','s',' ',
                    'u','n','a',' ',
                    'p','r','u','e','b','a'};
    count = count_char(txto, 'e');
    std::cout << "count: " << count<<std::endl;

    
    return 0;
}