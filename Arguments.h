#ifndef TEST_STR_H
#define TEST_STR_H

#include <string>
#include <optional>

struct Arguments {
    std::string mode;
    std::string input_filename;
    std::optional<std::string> output_filename;
    std::optional<std::string> search_phrase;
    std::optional<std::string> replacement;

    Arguments(int argc, char** argv);
};

#endif //TEST_STR_H
