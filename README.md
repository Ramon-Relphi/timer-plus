[![samp-include](https://img.shields.io/badge/sa--mp-library-2f2f2f.svg?style=for-the-badge)](https://github.com/Ramon-Relphi/timer-plus)


---

<br>

1. [Installation](#-Installation)

2. [Documentation](#-Documentation)

---

<br>

## 🚀 Installation

You can install the "Timer Plus" library in two ways:

- Using sampctl: You can install the library using the sampctl package manager. Simply run the following command in the terminal:
```bash
sampctl package install Ramon-Relphi/timer-plus
```

- Using Git: You can clone the library's Git repository and manually add it to your project. Run the following command in the terminal:
```bash
git clone https://github.com/Ramon-Relphi/timer-plus.git
```

Then, include the "timerplus.inc" include file in your code:

```pawn
#include "timerplus.inc"
```

---

<br>

## ☕ Documentation


### **Example**


```pawn
#include "timerplus.inc"

// Define Timer Callback
DefTimer:ShowHello() {

    // Print: "Hello, World!"
    printf("Hello, World!");
    
    // Delete Timer
    DeleteTimer("ShowHello");
    return 1;
}

public OnGameModeInit() {

    // Start Timer
    StartTimer("ShowHello", 1000, true);
    return 1;
}

public OnGameModeExit() {
    return 1;
}

main() {
    return 0;
}
```

---

This project is licensed. See the [LICENSE](LICENSE.md) file for more details.

