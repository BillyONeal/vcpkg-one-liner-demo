#include <stdio.h>
#include <zlib.h>
#include <string>

int main() {
    std::string example = "hello world";
    puts(example.c_str());
	puts(ZLIB_VERSION);
}
