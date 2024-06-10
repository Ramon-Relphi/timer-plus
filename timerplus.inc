#if !defined _samp_included
    #include "A_SAMP"
#endif

#if defined _INC_timerplus
	#endinput
#endif
#define _INC_timerplus

#define DefTimer:%0(%1)\
        forward timer_%0(%1);\
        public timer_%0(%1)

#if !defined StartTimer
    #define StartTimer(%0,%1) SetSVarInt("timer_"%0"", SetTimer("timer_"%0"",%1))
#endif
#if !defined StartExtendedTimer
    #define StartExtendedTimer(%0,%1) SetSVarInt("timer_"%0"", SetTimerEx("timer_"%0"",%1))
#endif
#if !defined GetTimerId
    #define GetTimerId(%0) GetSVarInt("timer_"%0"")
#endif
#if !defined DeleteTimer
    #define DeleteTimer(%0) KillTimer(GetTimerId(%0)), DeleteSVar("timer_"%0"")
#endif
