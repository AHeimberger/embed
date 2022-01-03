#include "resource_holder.hpp"
#include <iostream>

namespace rh {
	ResourceHolder embed;
}

int main() {
	for (auto file: rh::embed.ListFiles()) {
		std::cout << "- file:" << file << "\n";
	}

	auto data = rh::embed(R"(./example/nmea.txt)");
	auto find = rh::embed.FindByFilename("nmea.txt");

	std::cout << "- file content: nmea.txt \n";
	for (auto d: data) {
		std::cout << d;
	}

	return 0;
}
