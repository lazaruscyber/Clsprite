# Csprite

**Csprite** — Simple spritesheet handling in **C (Clang)**.  
Build your own custom spritesheets from scratch **without any external libraries**. Perfect for learning, prototyping, or lightweight game projects.

---

## Features

- Fully implemented in standard C, compatible with Clang/GCC.
- Handles 2D sprite grids using simple string paths.
- Easy to use: choose sprites by row and column indices.
- No external dependencies required.
- Lightweight and portable — perfect for small games or educational projects.

---

## Getting Started

### Prerequisites

- C compiler (Clang, GCC, or compatible)
- Basic knowledge of C programming
- Terminal/command-line environment

---

### Installation

1. Clone the repository:

```bash
git clone https://github.com/your-username/Csprite.git
cd Csprite
Compile the project:
clang main.c -o csprite
or with GCC:
gcc main.c -o csprite
Run the program:
./csprite
Usage
Define your spritesheet paths:
const char *SpriteSheet[2][3] = {
    {"brick_path.png", "wood_path.png", "metal_path.png"},
    {"marble_path.png", "mud_path.png", "grass_path.png"}
};
Select a sprite using the provided function:
chooseSprite(1, 2); // Prints "grass_path.png"
Example function with bounds checking:
void chooseSprite(int y, int x) {
    if (y < 0 || y >= 2 || x < 0 || x >= 3) {
        printf("Invalid sprite coordinates!\n");
        return;
    }
    printf("%s\n", SpriteSheet[y][x]);
}
Example
#include <stdio.h>

int main() {
    chooseSprite(0, 1); // Output: "wood_path.png"
    chooseSprite(1, 2); // Output: "grass_path.png"
    chooseSprite(2, 2); // Output: "Invalid sprite coordinates!"
    return 0;
}
Contributing
We welcome contributions!
Fork the repository
Make your changes
Submit a pull request
Please follow standard C coding practices and include clear comments for any additions.
License
This project is licensed under the MIT License — see the LICENSE file for details.
Contact
For questions or feedback, feel free to open an issue or contact the maintainer directly.

---

If you want, I can also make a **version with badges, highlighted code blocks, and a cleaner professional GitHub look** so your repo stands out.  

Do you want me to do that?
