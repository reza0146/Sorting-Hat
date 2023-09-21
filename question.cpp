#include <iostream>
#include <vector>
#include <string>

#include "question.hpp"

Question::Question(std::string new_question, std::vector<std::string> new_choices, int new_answer) : question_(new_question), choices_(new_choices), answer_(0) {
    question_string_ = BuildQuestionString();
}

std::string Question::BuildQuestionString() {
    std::string choices_string;
    for (int i = 0; i < choices_.size(); i++) {

    }
}
