# RL Open Source Fest
## Feature Engineering in VW using LUA - Exercise 2: Working with Lua

---

### Instructions to Build and Run

Start off by installing dependencies:
```bash
sudo apt install cmake lua5.4 liblua5*-dev
```

Then to build the project:
```bash
cd rlosfest_ex2
mkdir build && cd build
cmake ..
make -j `nproc`
```

The built executable can now be found in the build subdirectory.
Run it using:
```bash
./rlosfest_ex2
```

### Output

Running the executable should print out the following:
```
Viraj says hello :)
Variable var borrowed from C++: 42.0
Modifying the value of var...
Modified value of var as reflected in C++: 1337
```

---

*Created by Viraj Shah as part of an application for the Microsoft RL Open Source Fest.*
