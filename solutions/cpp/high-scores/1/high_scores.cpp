#include "high_scores.h"

#include <algorithm>

namespace arcade {

std::vector<int> HighScores::list_scores() {
    // TODO: Return all scores for this session.
    return scores;
}

int HighScores::latest_score() {
    // TODO: Return the latest score for this session.
    return scores.back();
}

int HighScores::personal_best() {
    // TODO: Return the highest score for this session.
    return *std::max_element(scores.begin(), scores.end());
}

std::vector<int> HighScores::top_three() {
    // TODO: Return the top 3 scores for this session in descending order.
    std::vector<int> sorted_scores = scores;
    std::sort(sorted_scores.begin(), sorted_scores.end(), std::greater<int>());
    
    if (sorted_scores.size() <= 3){
        return sorted_scores;
    }
    std::vector<int> res(sorted_scores.begin(), sorted_scores.begin() + 3);
    return res;
}

}  // namespace arcade
