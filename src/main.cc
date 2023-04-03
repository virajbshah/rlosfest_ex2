#include <LuaCpp.hpp>
#include <iostream>

using namespace LuaCpp;
using namespace LuaCpp::Engine;

int main(int argc, char **argv) {
    // Initialize Lua context object
    LuaContext lua;

    // Print something out from Lua
    try {
        lua.CompileStringAndRun(
            "print('Viraj says hello :)')"
        );
    } catch (std::runtime_error &e) {
        std::cout << e.what() << '\n';
    }

    // Insert a C++ variable into the created Lua context
    std::shared_ptr<LuaTNumber> var = std::make_shared<LuaTNumber>(42);
    lua.AddGlobalVariable("var", var);

    // Demonstrate accessing inserted variable from Lua context
    try {
        lua.CompileStringAndRun(
            "print('Variable var borrowed from C++: ' ..var)"
        );
    } catch (std::runtime_error &e) {
        std::cout << e.what() << '\n';
    }

    // Demonstrate modifying a variable in the Lua context, then accessing it in C++
    try {
        lua.CompileStringAndRun(
            "print('Modifying the value of var...') "
            "var = 1337"
        );
    } catch (std::runtime_error &e) {
        std::cout << e.what() << '\n';
    }

    std::cout << "Modified value of var as reflected in C++: " << var->getValue() << '\n';

    return 0;
}
