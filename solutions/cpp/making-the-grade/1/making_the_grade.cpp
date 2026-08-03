#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> new_student_scores;
    for(int i = 0; i < student_scores.size(); i++){
        new_student_scores.push_back(static_cast<int>(student_scores[i]));
    }
    return new_student_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int failed = 0;
    for(int i = 0; i < student_scores.size(); i++){
        if (student_scores[i] <= 40){++failed;}
    }
    return failed;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int, 4> marks{};
    int lowest = 40;
    int diff = (highest_score - lowest) / 4;
    marks[0] = lowest + 1;
    for(int i = 1; i < marks.size(); i++){
        marks[i] = marks[i - 1] + diff;
    }
    return marks;
}

// Organize the student's rank, name, and grade information in ascending order.

std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string>rank_list{};
    for(int i{0}; i < student_scores.size(); ++i){
        rank_list.emplace_back(std::to_string(i + 1) + ". " + student_names.at(i) + ": " + std::to_string(student_scores.at(i)));
    }
    return rank_list;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for(int i = 0; i < student_scores.size(); i++){
        if (student_scores[i] == 100){
            return student_names[i];
        }
    }
    return "";
}