#include "SQLException.h"

SQLException::SQLException(const std::string& msg) : std::runtime_error(msg)
{
}

SQLException::SQLException(const SQLException& x) noexcept : std::runtime_error(x)
{
}

SQLException& SQLException::operator=(const SQLException& x) noexcept
{
    static_cast<std::runtime_error*>(this)->operator=(x);
    return *this;
}
