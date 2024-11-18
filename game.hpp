#include <vector>
#include <string>

class Game{
    private:
    public: 

    // check 8 olika kombinationer
    std::vector <std::vector <std::string>>board {{" "," "," "},
                                                  {" "," "," "},
                                                  {" "," "," "}};


    //check
    void displayBoard();

    bool checkWin();

    bool checkDraw();


};
