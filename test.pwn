#include "timerplus.inc"

DefTimer:PrintTest() {

    printf("Test");
    return 1;
}

public OnGameModeInit() {

    Timer_Set("PrintTest", 1000, true);
    return 1;
}

public OnGameModeExit() {

    Timer_Kill("PrintTest");
    return 1;
}

main() {

    printf("Timer Plus -> Test Script : Started!");
    return 0;
}
