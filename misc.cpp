#include "misc.hpp"

std::pair<std::string, int> VectorOfPairsMaxValue(std::vector<std::pair<std::string, int>> vec_of_pairs) {
    
    int *value_arr = new int[vec_of_pairs.size()];

    for (int i = 0; i < vec_of_pairs.size(); i++) {
        value_arr[i] = vec_of_pairs[i].second;
    }
    
    auto [m, m_idx] = ArrayMax(value_arr, vec_of_pairs.size());
    
    delete value_arr;

    return vec_of_pairs[m_idx];


}