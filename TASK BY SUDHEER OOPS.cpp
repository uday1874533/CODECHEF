#include <bits/stdc++.h>
using namespace std; 

class CricketPlayer {
private:
    string name;
    int age;
    int matchesPlayed;
    int runsScored;
    static int totalPlayers;

public:
    CricketPlayer(const string& playerName, int playerAge) {
        name = playerName;
        age = playerAge;
        matchesPlayed = 0;
        runsScored = 0;
        totalPlayers++;
    }

    void recordMatch(int runs) {
        matchesPlayed++;
        runsScored += runs;
    }

    void displayPlayerStats() const {
        cout << "Name: " << name << ", Age: " << age << std::endl;
        cout << "Matches Played: " << matchesPlayed << ", Runs Scored: " << runsScored << std::endl;
    }

    static void displayTotalPlayers() {
        std::cout << "Total Players: " << totalPlayers << std::endl;
    }
};

int CricketPlayer::totalPlayers = 0;

int main() {
    // Create CricketPlayer objects
    CricketPlayer player1("KOHLI ", 34);
    CricketPlayer player2("MS DHONI", 41);

    player1.recordMatch(254);
    player1.recordMatch(183);
    player2.recordMatch(91);

    std::cout << "Player 1:" << std::endl;
    player1.displayPlayerStats();
    std::cout << "\nPlayer 2:" << std::endl;
    player2.displayPlayerStats();

    CricketPlayer::displayTotalPlayers();

    return 0;
}

