#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int third_max (std::vector<int>& nums)
{
    std::set<int> my_set;
    for (int i = 0; i < nums.size(); i++)
    {
        my_set.insert(nums[i]);
    }
    std::vector<int> my_vector(my_set.begin(), my_set.end());
    std::sort(my_vector.begin(), my_vector.end(), std::greater<int>());
    if (my_vector.size() >= 3)
    {
        return my_vector[2];
    }
    else
    {
        return my_vector[0];
    }
}

int main()
{
    int size;
    std::cout << "Enter the size of vector: ";
    std::cin >> size;
    std::vector<int> v(size);
    std::cout << "Enter the elements of vector: ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> v[i];
    }
    std::cout << "The maximum number is " << third_max(v);
    std::cout << '\n';
    
    return 0;
}
