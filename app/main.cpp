#include <print>

#include "html_parser/html_parser.hpp"


int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::println("USAGE: DOM_creator [.html file path]");
        return 1;
    }
    
    HTMLParser parser{ argv[1] };

    return 0;
}