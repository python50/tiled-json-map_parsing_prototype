#include <iostream>
#include "map_parser.h"
namespace meta
{
    int screen_width;
    int screen_height;
    int map_width;
    int map_height;
}



//------------------------------



int main()
{
    load_map("foo.json");

    return 0;
}
