#include<iostream>
#include<vector>
#include<utility> // Required for std::pair

int main(){
    // Vector of integers
    std::vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int>::iterator it; // Declaration of integer vector iterator

    // Iterating over v1
    for(it = v1.begin(); it != v1.end(); it++){
        std::cout << (*it) << " ";
    }
    std::cout << std::endl;

    // Vector of pairs
    std::vector<std::pair<int,int>> v2 = {{1,2},{3,4},{5,6},{7,8}};
    std::vector<std::pair<int,int>>::iterator it2; // Separate iterator for the pair vector

    // Iterating over v2
    for(it2 = v2.begin(); it2 != v2.end(); it2++){
        std::cout << "(" << it2->first << ", " << it2->second << ") ";
    }
    std::cout << std::endl;

    return 0;
}
