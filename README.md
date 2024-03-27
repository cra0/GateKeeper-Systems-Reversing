# GateKeeper Systems Smart Wheel Reversing

## About

This repo contains the findings from reverse engineering of a smart wheel attached to a shopping cart/trolley used by various supermarkets.

### 8khz_unlock_lock

This contains an example Lock & Unlock Signal that can be played back through speakers held close to the wheel. It was captured using a custom VLF [loop antenna](https://en.wikipedia.org/wiki/Loop_antenna) I constructed.

The lock/unlock codes that seems to be used for all GateKeeper Smart Wheels are:

- Lock `10001110` (0x8E)
- Unlock `01110001` (0x71)

![chip](docs/signal_screenshot.png)

### chip-cc2510-F32

This contains memory dumps of the firmware from CC2510 chips.

![chipRevJ](chip-cc2510-F32/soc-photos/SOC_RevJ.jpg)
![chipRevK](chip-cc2510-F32/soc-photos/SOC_RevK.jpg)

### WIP

This repo obviously doesn't have much however my aim is to figure out what other functionality is built into the firmware thats a bit more then just a [replay attack](https://en.wikipedia.org/wiki/Replay_attack).

## References

1. https://www.ti.com/product/CC2510

2. https://infocon.org/cons/DEF%20CON/DEF%20CON%2029/DEF%20CON%2029%20presentations/Joseph%20Gabay%20-%20Dos-%20Denial%20of%20Shopping%20%E2%80%93%20Analyzing%20and%20Exploiting%20(Physical)%20Shopping%20Cart%20Immobilization%20Systems.pdf

3. https://www.tmplab.org/2008/06/18/consumer-b-gone/

4. https://web.archive.org/web/20170504023929/http://www.gatekeepersystems.com/sol_cc_cc_how_it_works.php
