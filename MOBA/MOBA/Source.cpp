#include<vector>;
#include"GameManager.h"
#include"PlayerManager.h"
#include"HeroManager.h"
#include"PaH.h"
#include<string>

int  print_menu() {
    int variant = 0;
    system("cls");
    std::cout <<"What do you want to do?\n";
    std::cout << "1. Play (Need 10 players & heroes/ fast battle)\n";
    std::cout << "2. Add/Remove Player\n";
    std::cout << "3. Add/Remove Hero\n";
    std::cout << "4. Watch Sessions History\n";
    std::cout << "5. Exit\n";
    std::cout << ">";
    std::cin >> variant;
    return variant;
}

int main() {
    int variant = 0;

    std::string choose;

    std::vector<Player> players;
    std::vector<Hero> heroes;

    //for fast test
    std::vector<Player> pre_players;
    pre_players.reserve(10);
    pre_players.emplace_back(1, "Ramzes", 1000);
    pre_players.emplace_back(2, "Noone", 1000);
    pre_players.emplace_back(3, "Dendi", 1000);
    pre_players.emplace_back(4, "Iceberg", 1000);
    pre_players.emplace_back(5, "Fly", 1000);
    pre_players.emplace_back(6, "AlohaDance", 1000);
    pre_players.emplace_back(7, "Miracle", 1000);
    pre_players.emplace_back(8, "Resolution", 1000);
    pre_players.emplace_back(9, "Solo", 1000);
    pre_players.emplace_back(10, "XBOCT", 1000);
    std::vector<Hero> pre_heroes;
    pre_heroes.reserve(10);
    pre_heroes.emplace_back(1, "Abadon", 6, 16);
    pre_heroes.emplace_back(2, "Nyx", 8, 10);
    pre_heroes.emplace_back(3, "Anti-Mage", 15, 8);
    pre_heroes.emplace_back(4, "Axe", 10, 20);
    pre_heroes.emplace_back(5, "BroodMother", 15, 4);
    pre_heroes.emplace_back(6, "Sven", 15, 12);
    pre_heroes.emplace_back(7, "Ursa", 10, 18);
    pre_heroes.emplace_back(8, "Slark", 18, 18);
    pre_heroes.emplace_back(9, "Mars", 14, 16);
    pre_heroes.emplace_back(10, "BristleBack", 10, 24);
    //

    std::vector<PaH>Dire;
    std::vector<PaH>Radiant;

    GameManager gameManager;
    PlayerManager playerManager;
    HeroManager heroManager;

    do {
        variant = print_menu();

        switch (variant) {
        case 1:
            std::cout << "Fast battle? ( Yes / No )\n";
            std::cin >> choose;
            if (choose == "Yes")
            {
                gameManager.PerformGameSession(Dire, Radiant, pre_players, pre_heroes);
                system("pause");
            }
            else if (choose == "No")
            {
                if (players.size() > 10 && heroes.size() > 10)
                {
                    gameManager.PerformGameSession(Dire, Radiant, players, heroes);
                    system("pause");
                }
                else
                {
                    std::cout << "Not enought\n";
                }
            }
            break;

        case 2:
            std::cout << "Add or Remove? (Enter full word)\n";
            std::cin >> choose;
            if (choose == "Add")
            {
                int id;
                std::string name;
                int rank;
                std::cout << "Eneter Name: ";
                std::cin >> name;
                std::cout << "Eneter Rank: ";
                std::cin >> rank;
                std::cout << "Eneter ID: ";
                std::cin >> id;
                players.emplace_back(playerManager.CreatePlayer(id, name, rank));
            }
            else if(choose == "Remove")
            {
                if (players.size() == 0)
                {
                    std::cout << "List Empty" << std::endl;
                }
                else
                {
                    int index;
                    std::cout << "List:" << std::endl;
                    for (int i = 0; i < players.size(); i++)
                    {
                        std::cout << "[" << i << "] " << players[i] << std::endl;
                    }
                    std::cout << "Enter Index";
                    std::cin >> index;
                    if (index >= 0 && index < players.size())
                    {
                        /*auto iterP = players.cbegin();
                        players.erase(iterP + index);*/
                        playerManager.DeletePlayer(players[index]);
                    }
                }
            }
            break;

        case 3:
            std::cout << "Add or Remove? (Enter full word)\n";
            std::cin >> choose;
            if (choose == "Add")
            {
                int id;
                std::string name;
                int hp;
                int dmg;
                std::cout << "Eneter Name: ";
                std::cin >> name;
                std::cout << "Eneter HP: ";
                std::cin >> hp;
                std::cout << "Eneter dmg: ";
                std::cin >> dmg;
                std::cout << "Eneter ID: ";
                std::cin >> id;
                heroes.emplace_back(heroManager.CreateHero(id, name, hp, dmg));
            }
            else if (choose == "Remove")
            {
                if (heroes.size() == 0)
                {
                    std::cout << "List Empty" << std::endl;
                }
                else
                {
                    int index;
                    std::cout << "List:" << std::endl;
                    for (int i = 0; i < heroes.size(); i++)
                    {
                        std::cout << "[" << i << "] " << heroes[i] << std::endl;
                    }
                    std::cout << "Enter Index";
                    std::cin >> index;
                    if (index >= 0 && index < heroes.size())
                    {
                        /*auto iterH = heroes.cbegin();
                        heroes.erase(iterH + index);*/
                        heroManager.DeleteHero(heroes[index]);
                    }
                }
            }
            break;

        case 4:
            gameManager.PrintGameSessions();
            system("pause");
            break;
        case 5:
            std::cout << "Exit..." << std::endl;
            break;
        default:
            std::cerr << "You choose wrong variant" << std::endl;
        }
    } while (variant != 5);

}