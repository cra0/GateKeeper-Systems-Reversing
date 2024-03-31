 Deviation = 38.085938 
 Base frequency = 2432.999908 
 Carrier frequency = 2432.999908 
 Channel number = 0 
 Carrier frequency = 2432.999908 
 Modulated = true 
 Modulation format = 2-FSK 
 Manchester enable = false 
 Sync word qualifier mode = 30/32 sync word bits detected 
 Preamble count = 4 
 Channel spacing = 199.951172 
 Carrier frequency = 2432.999908 
 Data rate = 2.39897 
 RX filter BW = 203.125000 
  = Normal mode 
 Length config = Variable packet length mode. Packet length configured by the first byte after sync word 
 CRC enable = true 
 Packet length = 255 
 Device address = 0 
 Address config = No address check 
  = false 
  = false 
 TX power = 0 
typedef struct {
    BYTE fsctrl1;     // Frequency Synthesizer Control 
    BYTE fsctrl0;     // Frequency Synthesizer Control 
    BYTE freq2;       // Frequency Control Word, High Byte 
    BYTE freq1;       // Frequency Control Word, Middle Byte 
    BYTE freq0;       // Frequency Control Word, Low Byte 
    BYTE mdmcfg4;     // Modem configuration 
    BYTE mdmcfg3;     // Modem Configuration 
    BYTE mdmcfg2;     // Modem Configuration 
    BYTE mdmcfg1;     // Modem Configuration 
    BYTE mdmcfg0;     // Modem Configuration 
    BYTE channr;      // Channel Number 
    BYTE deviatn;     // Modem Deviation Setting 
    BYTE frend1;      // Front End RX Configuration 
    BYTE frend0;      // Front End TX Configuration 
    BYTE mcsm0;       // Main Radio Control State Machine Configuration 
    BYTE foccfg;      // Frequency Offset Compensation Configuration 
    BYTE bscfg;       // Bit Synchronization Configuration 
    BYTE agcctrl2;    // AGC Control  
    BYTE agcctrl1;    // AGC Control  
    BYTE agcctrl0;    // AGC Control  
    BYTE fscal3;      // Frequency Synthesizer Calibration 
    BYTE fscal2;      // Frequency Synthesizer Calibration 
    BYTE fscal1;      // Frequency Synthesizer Calibration 
    BYTE fscal0;      // Frequency Synthesizer Calibration 
    BYTE test2;       // Various Test Settings 
    BYTE test1;       // Various Test Settings 
    BYTE test0;       // Various Test Settings 
    BYTE pa_table0;   // PA Power Setting 
    BYTE pktctrl1;    // Packet Automation Control 
    BYTE pktctrl0;    // Packet Automation Control 
    BYTE addr;        // Device Address 
    BYTE pktlen;      // Packet Length  
} RF_SETTINGS;