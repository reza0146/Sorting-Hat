#include <tuple>
#include <map>
#include <string>
#include <vector>
#include <iostream>

template <typename T>
std::tuple<T, int> ArrayMax(T arr[], size_t len) { 

    T max = arr[0];
    int max_idx = 0;
    
    for (int i = 0; i < len; i++) {
        if ( arr[i] > max) {
            max = arr[i];
            max_idx  = i;
        }
    }
    return std::tuple<T, int>{max, max_idx};
}

template <typename T>
void ShowMapInfo(T the_map) {
    for (auto item : the_map) {
        std::cout << item.first << " " << item.second << std::endl;
    }
}


std::pair<std::string, int> VectorOfPairsMaxValue(std::vector<std::pair<std::string, int>> vec_of_pairs);