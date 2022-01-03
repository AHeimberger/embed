#include "resource_holder.hpp"
#include <iostream>

namespace rh {
	ResourceHolder embed;
}

int main() {
	std::cout << "- file list \n";
	for (auto file: rh::embed.ListFiles()) {
		std::cout << "- file:" << file << "\n";
	}

	auto data = rh::embed(R"(./example/nmea.txt)");
	auto find = rh::embed.FindByFilename("nmea.txt");

	std::cout << "\n\n- file content: nmea.txt \n";
	for (auto d: data) {
		std::cout << d;
	}

	std::cout << "\n\n- file content: test.txt \n";
	auto content = rh::embed.FileContent(R"(./example/test.txt)");
	std::cout << content;

	return 0;
}
