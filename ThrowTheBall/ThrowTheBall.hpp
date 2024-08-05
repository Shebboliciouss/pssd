#include <iostream>
#include <vector>

using namespace std;

class ThrowTheBall {
 private:
  int passCount = 0;

  int playerCount = 0;

 public:
  int timesThrown(int N, int M, int L) {
    vector<int> player(N, 0);

    while (player[playerCount] < M) {
      std::cout << passCount << std::endl;

      if (player[playerCount] % 2 == 0) {
        passCount = passCount + 1;

        playerCount = (playerCount + L) % N;

      } else {
        passCount = passCount + 1;

        playerCount = (playerCount - L + N) % N;
      }

      player[playerCount] = player[playerCount] + 1;
    }
    return passCount;
  }
};
