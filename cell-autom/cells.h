#pragma once

#include <array>

#include <cell.h>

struct Cells{
    using Raw = std::array<Cell, 8>;
    using iterator = Raw::iterator;

    iterator begin() { return raw.begin(); };
    iterator end() { return raw.end(); };
private:
    Raw raw;
};
