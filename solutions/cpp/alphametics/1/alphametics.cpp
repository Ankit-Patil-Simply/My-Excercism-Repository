#include "alphametics.h"
#include<bits/stdc++.h>
// #include <stdexcept>
// #include <vector>
// #include <array>
// #include <cstddef>
// #include <algorithm>
using namespace std;
namespace alphametics {

	namespace {
		const string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

		bool check(const vector<string>& left_words, const string& right_word,
			const array<int, 26>& mapping) {

			auto transform = [&](const string& text) {
				int num = 0;
				for (char ch :text) {
					num *= 10;
					num += mapping[ch - 'A'];
				}
				return num;
				};

			int left = 0;
			for (const string& str : left_words) {
				left += transform(str);
			}
			return left == transform(right_word);
		}
	}

	optional<unordered_map<char, int>> solve(const string& equation) {

		if (equation.find("==") == string::npos) throw invalid_argument("not an equation");

		vector<char> used_chars;
		for (char ch : equation) {
			if (find(used_chars.begin(), used_chars.end(), ch) == used_chars.end() 
				&& uppercase.find(ch) != string::npos) {
				used_chars.push_back(ch);
			}
		}

		// Pre-parse equation into word lists to avoid
		// repeated string splitting in recursive check.
		vector<string> left_words;
		size_t equal = equation.find("==");
		size_t start = equation.find_first_of(uppercase);
		while (start < equal) {
			size_t end = equation.find_first_not_of(uppercase, start);
			left_words.push_back(equation.substr(start, end - start));
			start = equation.find_first_of(uppercase, end);
		}
		size_t end = equation.find_first_not_of(uppercase, start);
		if (end == string::npos) end = equation.size();
		string right_word = equation.substr(start, end - start);

		// Multi-letter words cannot have leading zero.
		array<bool, 26> leading_letters;
		leading_letters.fill(false);
		for (const string& str : left_words) {
			if (str.size() > 1) leading_letters[str[0] - 'A'] = true;
		}
		if (right_word.size() > 1) leading_letters[right_word[0] - 'A'] = true;

		array<int, 26> mapping;
		mapping.fill(-1);

		array<bool, 10> num_available;
		num_available.fill(true);
		auto allocate = [&](auto&& self, vector<char>::iterator it) ->bool {
			for (int i = 0; i < 10; ++i) {
				if (num_available[i]) {
					char ch = *it;
					if (i == 0 && leading_letters[ch - 'A']) continue;
					mapping[ch - 'A'] = i;
					num_available[i] = false;

					if (it + 1 != used_chars.end()) {
						if (self(self, it + 1)) return true;
					}
					else {
						if (check(left_words, right_word, mapping)) return true;
					}
					num_available[i] = true;
				}
			}
			return false;
			};


		if (allocate(allocate, used_chars.begin())) {
			unordered_map<char, int> result;
			for (char ch : used_chars) {
				result[ch] = mapping[ch - 'A'];
			}
			return result;
		}
		else {
			return nullopt;
		}
	}


}  // namespace alphametics