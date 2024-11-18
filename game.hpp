#include <vector>
#include <string>

class Game{
    private:
    std::vector <std::vector <std::string> > board {{" "," "," "},
                                                    {" "," "," "},
                                                    {" "," "," "}};
    public: 


    void displayBoard();

    bool checkWin();

    bool checkDraw();


};
