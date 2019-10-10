#include <vector>
#include <iostream>
#include <algorithm>
#include <assert.h>
#include <map>

// Given an array of integers, return indices of the two numbers such that
// they add up to a specific target.

// You may assume that each input would have exactly one solution, and you
// may not use the same element twice.

std::vector<int> twoSums(std::vector<int>& numbers, int target) {
  // std::map is a red-black tree so Insertion: O(log n), Lookup: O(log n)
  std::map<int, int> numbersHash;

  // Insert the vector into the map where the map key is the vector value. 
  // O(n log (n))
  for (int i = 0; i < numbers.size(); ++i) {
    numbersHash.insert(std::make_pair(numbers.at(i), i));
  }

  // Check if we have a key in the map equal to target -  O(n log(n))
  for (int i = 0; i < numbers.size(); ++i) {

    auto mapIndex = numbersHash.find(target - numbers.at(i));

    // make sure the index is not itself (given [5, 4, 6] and a target of 10
    // [0, 0] is not correct)
    if ((mapIndex != numbersHash.end()) && (mapIndex->second != i)) {
      return std::vector<int>{i, mapIndex->second};
    }
  }

  return std::vector<int>{};
}

int main() {
  std::vector<int> testVector1 = {9, 4, 2, 6};
  std::vector<int> answer1 {1, 2};

  std::vector<int> testVector2 = {5, 4, 6};
  std::vector<int> answer2 {1, 2};

  std::vector<int> testVector3 = {2, 4, 6, 8, 10};
  std::vector<int> answer3 {};

  assert(twoSums(testVector1, 6) == answer2);
  assert(twoSums(testVector2, 10) == answer2);
  assert(twoSums(testVector3, 9) == answer3);

  return 0;
}
