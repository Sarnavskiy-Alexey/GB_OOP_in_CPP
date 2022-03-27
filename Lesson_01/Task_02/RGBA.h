#pragma once
#include <cstdint>
class RGBA
{
private:
	std::uint8_t m_red = 0;
	std::uint8_t m_green = 0;
	std::uint8_t m_blue = 0;
	std::uint8_t m_alpha = 255;

public:
	RGBA();
	RGBA(std::uint8_t m_red, std::uint8_t m_green, std::uint8_t m_blue, std::uint8_t m_alpha);
	void print();
};

