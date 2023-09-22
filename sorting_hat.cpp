#include "question.hpp"
#include "misc.hpp"

int main() {

    
    Question question1("When I'm dead, I want people to remember me as:", 
        {"The Good ",
        "The Great",
        "The Wise",
        "The Bold"});

    Question question2("Dawn or Dusk?",
        {"Dawn",
        "Dask"});

    Question question3("Which kind of instrument most pleases your ear?",
        {"The violin",
        "The trumpet",
        "The piano",
        "The drum"});

    Question question4("Which road tempts you most?",
        {"The wide, sunny grassy lane",
        "The narrow, dark, lantern-lit alley",
        "The twisting, leaf-strewn path through woods",
        "The cobbled street lined (ancient buildings)"});
    
    
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    question1.Ask();
    question2.Ask();
    question3.Ask();
    question4.Ask();

    switch (question1.answer_) {
        case 1:
            hufflepuff++;
            break;
        case 2: 
            slytherin++;
            break;
        case 3:
            ravenclaw++;
            break;
        case 4:
            gryffindor++;
            break;
        default:
            std::cout << "Invalid input";
    }
    
    switch (question2.answer_) {
    case 1:
        gryffindor++;
        ravenclaw++;
        break;
    case 2:
        hufflepuff++;
        slytherin++;
        break;
    default:
        std::cout << "Invalid input";
        break;
    }

    switch (question3.answer_) {
    case 1:
        slytherin++;
        break;
    case 2:
        hufflepuff++;
        break;
    case 3:
        ravenclaw++;
        break;
    case 4:
        gryffindor++;
        break;
    default:
        std::cout << "Invalid input";
        break;
    }

    switch (question4.answer_) {
    case 1:
        hufflepuff++;
        break;
    case 2:
        slytherin++;
        break;
    case 3:
        gryffindor++;
        break;
    case 4:
        ravenclaw++;
        break;
    default:
        std::cout << "Invalid input";
    }


    std::vector<std::pair<std::string, int>> scores = {{"gryffindor", gryffindor},
        {"slytherin", slytherin},
        {"ravenclaw", ravenclaw},
        {"hufflepuff", hufflepuff}};

    std::cout << "You belong to the house: " << VectorOfPairsMaxValue(scores).first << std::endl;


    

    return 0;





}