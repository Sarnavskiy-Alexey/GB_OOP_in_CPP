#include <iostream>
#include "RGBA.h"

RGBA::RGBA()
{
}

RGBA::RGBA(std::uint8_t m_red, std::uint8_t m_green, std::uint8_t m_blue, std::uint8_t m_alpha)
{
	this->m_red = m_red;
	this->m_green = m_green;
	this->m_blue = m_blue;
	this->m_alpha = m_alpha;
}

void RGBA::print()
{
	std::cout << "m_red = " << static_cast<unsigned short>(m_red) << "\n";
	std::cout << "m_green = " << static_cast<unsigned short>(m_green) << "\n";
	std::cout << "m_blue = " << static_cast<unsigned short>(m_blue) << "\n";
	std::cout << "m_alpha = " << static_cast<unsigned short>(m_alpha) << "\n";
}