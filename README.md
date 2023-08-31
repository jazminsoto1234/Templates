# Templates c++
### TEORIA
- Es un modo de generalizar el uso de datos al crear una funcion o clase. 
```cpp
template<typename T> //Declaracion de un tipo de dato general
template<class S> //Declaracion de una clase general
```
## Ejemplo 1
```cpp
template<typename T> //Declaracion de templates
int count_char(T &text, char letter){
    int cont =0;
    for(auto t : text ){
        if(t == letter){
            cont++;
        }
    }
    return cont;
}
```
## Ejemplo 2
```cpp
#include<cmath>
template<typename T = int, typename D = int> //Declaracion de templates
auto potencia(T a, D b){ //Para evitar complicaciones en que tipo de dato elegir, una buena manera es aplicar auto 
    return pow(a,b);
}
```





**Main :**
```cpp
auto count = count_char("Esta es una prueba", 'e');
std::cout << "count: "<<count<<std::endl;
string text = "Esta es una prueba";
count = count_char(text, 'e');
std::cout << "count: " <<count <<std::endl;
std::array texto = {'E','s','t','a',' ','e','s',' ','u','n','a',' ','p','r','u','e','b','a'};
count = count_char(texto, 'e');
std::cout << "count: " << count<<std::endl;
std::deque txto = {'E','s','t','a',' ','e','s',' ','u','n','a',' ','p','r','u','e','b','a'};
count = count_char(txto, 'e');
std::cout << "count: " << count<<std::endl;
```
