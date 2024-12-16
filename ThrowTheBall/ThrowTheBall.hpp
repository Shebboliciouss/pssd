#include <iostream>
#include <vector>

using namespace std;

class ThrowTheBall {
 public:
  int timesThrown(int N, int M, int L) {
    int playerCount = 0;
    int passCount = 0;
    vector<int> player(N, 0);
    player[0] = 1;

    while (player[playerCount] < M) {
      if (player[playerCount] % 2 == 0) {
        playerCount = (playerCount + L) % N;
        player[playerCount] = player[playerCount] + 1;
      } else {
        playerCount = (playerCount - L + N) % N;
        player[playerCount] = player[playerCount] + 1;
      }

      passCount++;
    }

    std::cout << passCount << std::endl;
    return passCount;
  }
};