#include "subdir/Helper.h"
#include "Constants.h"
#include <iostream>

namespace helper
{

void greet()
{
    std::cout << constants::GREETING << std::endl;
}

} // namespace helper