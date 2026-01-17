## Mathlib
A simple math library for graphics.

This library differs from GLM in that it's right-handed,
and the matrices are row-major.

### Building from source
```shell
git clone https://github.com/Pixels67/Mathlib.git
cd Mathlib

cmake -S . -B build/
cmake --build build/ --config Release # Or Debug
```