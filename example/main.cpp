#include <iostream>

#include <unicode/unistr.h>

int main() {
    auto ucs = icu::UnicodeString::fromUTF8(icu::StringPiece("test"));
    std::string result;
    std::cout << ucs.toUTF8String(result) << std::endl;
    return 0;
}
