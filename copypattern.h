#if COPYPATTERN == 1
  #if USE_PATTERN == PATTERN_SHELF
    void copyPattern()
    {
        realleds(183,213) = leds(0,30);
        realleds(152,182) = leds(30,0);
        realleds(1,48) = leds(31,78);
        realleds(49,78) = leds(79,108);
        realleds(105,151) = leds(78,30);
        realleds(102,102) = leds(78,78);
        realleds(103,103) = leds(78,78);
        realleds(104,104) = leds(78,78);
        realleds(214,214) = leds(31,31);
        realleds(215,215) = leds(31,31);
        realleds(216,216) = leds(31,31);
        realleds(79,101) = leds(55,77);
        realleds(217,239) = leds(30,52);
    }
  #endif
  #if USE_PATTERN == PATTERN_FALCON
    void copyPattern()
    {
        realleds(1,29) = leds(28,0);
        realleds(30,58) = leds(0,28);
        realleds(59,87) = leds(28,0);
        realleds(88,117) = leds(0,28);
    }
  #endif
#endif
