
#include <iostream>
#include <vector>

int solution(std::vector<int> cards) {
  // Edit your code here
  std::vector<int> cnt(1002);
  for (int i = 0; i < cards.size(); i++) {
    cnt[cards[i]]++;
  }
  for (int i = 0; i < cnt.size(); i++) {
    if (cnt[i] == 1){
        return i;
    }
  }

  return -1;
}

int main() {
  // Add your test cases here

  std::vector<int> test1 = {1, 1, 2, 2, 3, 3, 4, 5, 5};
  std::vector<int> test2 = {0, 1, 0, 1, 2};
  std::vector<int> test3 = {7, 3, 3, 7, 10};

  std::cout << (solution(test1) == 4) << std::endl;
  std::cout << (solution(test2) == 2) << std::endl;
  std::cout << (solution(test3) == 10) << std::endl;

  return 0;
}

