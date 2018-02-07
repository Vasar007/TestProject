#include <iostream>
#include <functional>
#include <string_view>

int main()
{
	constexpr std::string_view str("World!\n", 8);
	[out = std::ref(std::cout << "Hello "), &str](){ out.get() << str; }();
	return 0;
}
