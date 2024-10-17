#pragma once

#include <stdexcept>
#include <string>

class SQLException : public std::runtime_error
{
public:
    SQLException(const std::string& msg);
    SQLException(const SQLException& x) noexcept;
    SQLException& operator=(const SQLException& x) noexcept;
};
