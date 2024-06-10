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
    StartTimer("ShowHello", 1000, false);
    return 1;
}

public OnGameModeExit() {
    return 1;
}

main() {
    return 0;
}
