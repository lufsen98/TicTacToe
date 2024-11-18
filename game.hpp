#include <vector>
#include <string>

class Game{
    private:
    public: 

    // check
    std::vector <std::vector <std::string>>board {{" "," "," "},
                                                  {" "," "," "},
                                                  {" "," "," "}};


    void displayBoard();

    bool checkWin();

    bool checkDraw();


};
