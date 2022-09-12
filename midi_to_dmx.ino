 
#include <MIDI.h>  // Midi Library
#include <DmxSimple.h> // DMX Library
#include <avr/pgmspace.h> // PROGMEM Library
 
// Define globals
 
#define LED 13    // Arduino Board LED is on Pin 13
#define DMXCHANNELS 50 // Maximum DMX channels, the more channels the choppier it animates
 
// Create an instance of the library with default name, serial port and settings
MIDI_CREATE_DEFAULT_INSTANCE();
 
void setup() {
  
  MIDI.begin(10); // Set MIDI channel, MIDI_CHANNEL_OMNI = all, number = channel 
  MIDI.setHandleNoteOn(MIDINoteOn); // call Note On function
  MIDI.setHandleNoteOff(MIDINoteOff); // call Note Off function
  
  pinMode (LED, OUTPUT); // Set Arduino board pin 13 to output
 
 
  DmxSimple.usePin(4); //DMX digital output pin on Arduino
  DmxSimple.maxChannel(200);
  
}
 
 
void loop() { // Main loop
  
  MIDI.read(); //check for MIDI
  
}
 
 
void MIDINoteOn(byte channel, byte pitch, byte velocity) { 
    
    digitalWrite(LED,HIGH);  //Turn LED on when MIDI note is detete
 switch (pitch) {
    case 0:
    DmxSimple.write(1,velocity*2); 
       break;
       case 1:
    DmxSimple.write(2,velocity*2); 
       break;
        case 2:
    DmxSimple.write(3,velocity*2); 
       break;
         case 3:
    DmxSimple.write(4,velocity*2); 
       break;
    case 4:
    DmxSimple.write(5, velocity*2); 
       break;
    case 5:
    DmxSimple.write(6,velocity*2); 
       break;
      case 6:
    DmxSimple.write(7,velocity*2); 
       break;
      case 7:
    DmxSimple.write(8, velocity*2); 
      break;
   case 8:
    DmxSimple.write(9, velocity*2); 
      break;
       case 9:
    DmxSimple.write(10, velocity*2); 
      break;
      case 10:
    DmxSimple.write(11,velocity*2); 
       break;
       case 11:
    DmxSimple.write(12,velocity*2); 
       break;
        case 12:
    DmxSimple.write(13,velocity*2); 
       break;
         case 13:
    DmxSimple.write(14,velocity*2); 
       break;
    case 14:
    DmxSimple.write(15, velocity*2); 
       break;
    case 15:
    DmxSimple.write(16,velocity*2); 
       break;
      case 16:
    DmxSimple.write(17,velocity*2); 
       break;
      case 17:
    DmxSimple.write(18, velocity*2); 
      break;
   case 18:
    DmxSimple.write(19, velocity*2); 
      break;
       case 19:
    DmxSimple.write(20, velocity*2); 
      break;
      case 20:
    DmxSimple.write(21,velocity*2); 
       break;
       case 21:
    DmxSimple.write(22,velocity*2); 
       break;
        case 22:
    DmxSimple.write(23,velocity*2); 
       break;
         case 23:
    DmxSimple.write(24,velocity*2); 
       break; 
       
      case 24:
    DmxSimple.write(25, velocity*2); 
       break;
    case 25:
    DmxSimple.write(26,velocity*2); 
       break;
      case 26:
    DmxSimple.write(27,velocity*2); 
       break;
      case 27:
    DmxSimple.write(28, velocity*2); 
      break;
   case 28:
    DmxSimple.write(29, velocity*2); 
      break;
       case 29:
    DmxSimple.write(30, velocity*2); 
      break;
       case 30:
    DmxSimple.write(31,velocity*2); 
       break;
       case 31:
    DmxSimple.write(32,velocity*2); 
       break;
        case 32:
    DmxSimple.write(33,velocity*2); 
       break;
         case 33:
    DmxSimple.write(34,velocity*2); 
       break;
    case 34:
    DmxSimple.write(35, velocity*2); 
       break;
    case 35:
    DmxSimple.write(36,velocity*2); 
       break;
      case 36:
    DmxSimple.write(37,velocity*2); 
       break;
      case 37:
    DmxSimple.write(38, velocity*2); 
      break;
   case 38:
    DmxSimple.write(39, velocity*2); 
      break;
       case 39:
    DmxSimple.write(40, velocity*2); 
      break;
       case 40:
    DmxSimple.write(41,velocity*2); 
       break;
       case 41:
    DmxSimple.write(42,velocity*2); 
       break;
        case 42:
    DmxSimple.write(43,velocity*2); 
       break;
         case 43:
    DmxSimple.write(44,velocity*2); 
       break;
    case 44:
    DmxSimple.write(45, velocity*2); 
       break;
    case 45:
    DmxSimple.write(46,velocity*2); 
       break;
      case 46:
    DmxSimple.write(47,velocity*2); 
       break;
      case 47:
    DmxSimple.write(48, velocity*2); 
      break;
   case 48:
    DmxSimple.write(49, velocity*2); 
      break;
       case 49:
    DmxSimple.write(50, velocity*2); 
      break;
       case 50:
    DmxSimple.write(51,velocity*2); 
       break;
       case 51:
    DmxSimple.write(52,velocity*2); 
       break;
        case 52:
    DmxSimple.write(53,velocity*2); 
       break;
         case 53:
    DmxSimple.write(54,velocity*2); 
       break;
    case 54:
    DmxSimple.write(55, velocity*2); 
       break;
    case 55:
    DmxSimple.write(56,velocity*2); 
       break;
      case 56:
    DmxSimple.write(57,velocity*2); 
       break;
      case 57:
    DmxSimple.write(58, velocity*2); 
      break;
   case 58:
    DmxSimple.write(59, velocity*2); 
      break;
       case 59:
    DmxSimple.write(60, velocity*2); 
      break;
       case 60:
    DmxSimple.write(61,velocity*2); 
       break;
       case 61:
    DmxSimple.write(62,velocity*2); 
       break;
        case 62:
    DmxSimple.write(63,velocity*2); 
       break;
         case 63:
    DmxSimple.write(64,velocity*2); 
       break;
    case 64:
    DmxSimple.write(65, velocity*2); 
       break;
    case 65:
    DmxSimple.write(66,velocity*2); 
       break;
      case 66:
    DmxSimple.write(67,velocity*2); 
       break;
      case 67:
    DmxSimple.write(68, velocity*2); 
      break;
   case 68:
    DmxSimple.write(69, velocity*2); 
      break;
       case 69:
    DmxSimple.write(70, velocity*2); 
      break;
       case 70:
    DmxSimple.write(71,velocity*2); 
       break;
       case 71:
    DmxSimple.write(72,velocity*2); 
       break;
        case 72:
    DmxSimple.write(73,velocity*2); 
       break;
         case 73:
    DmxSimple.write(74,velocity*2); 
       break;
    case 74:
    DmxSimple.write(75, velocity*2); 
       break;
    case 75:
    DmxSimple.write(76,velocity*2); 
       break;
      case 76:
    DmxSimple.write(77,velocity*2); 
       break;
      case 77:
    DmxSimple.write(78, velocity*2); 
      break;
   case 78:
    DmxSimple.write(79, velocity*2); 
      break;
       case 79:
    DmxSimple.write(80, velocity*2); 
      break;
       case 80:
    DmxSimple.write(81,velocity*2); 
       break;
       case 81:
    DmxSimple.write(82,velocity*2); 
       break;
        case 82:
    DmxSimple.write(83,velocity*2); 
       break;
         case 83:
    DmxSimple.write(84,velocity*2); 
       break;
    case 84:
    DmxSimple.write(85, velocity*2); 
       break;
    case 85:
    DmxSimple.write(86,velocity*2); 
       break;
      case 86:
    DmxSimple.write(87,velocity*2); 
       break;
      case 87:
    DmxSimple.write(88, velocity*2); 
      break;
   case 88:
    DmxSimple.write(89, velocity*2); 
      break;
       case 89:
    DmxSimple.write(90, velocity*2); 
      break;
       case 90:
    DmxSimple.write(91,velocity*2); 
       break;
       case 91:
    DmxSimple.write(92,velocity*2); 
       break;
        case 92:
    DmxSimple.write(93,velocity*2); 
       break;
         case 93:
    DmxSimple.write(94,velocity*2); 
       break;
    case 94:
    DmxSimple.write(95, velocity*2); 
       break;
    case 95:
    DmxSimple.write(96,velocity*2); 
       break;
      case 96:
    DmxSimple.write(97,velocity*2); 
       break;
      case 97:
    DmxSimple.write(98, velocity*2); 
      break;
   case 98:
    DmxSimple.write(99, velocity*2); 
      break;
       case 99:
    DmxSimple.write(100, velocity*2); 
      break;
       case 100:
    DmxSimple.write(101,velocity*2); 
       break;
       case 101:
    DmxSimple.write(102,velocity*2); 
       break;
        case 102:
    DmxSimple.write(103,velocity*2); 
       break;
         case 103:
    DmxSimple.write(104,velocity*2); 
       break;
    case 104:
    DmxSimple.write(105, velocity*2); 
       break;
      case 105:
    DmxSimple.write(106,velocity*2); 
       break;
      case 106:
    DmxSimple.write(107,velocity*2); 
       break;
      case 107:
    DmxSimple.write(108, velocity*2); 
      break;
   case 108:
    DmxSimple.write(109, velocity*2); 
      break;
       case 109:
    DmxSimple.write(110, velocity*2); 
      break;
      case 110:
    DmxSimple.write(111,velocity*2); 
       break;
       case 111:
    DmxSimple.write(112,velocity*2); 
       break;
        case 112:
    DmxSimple.write(113,velocity*2); 
       break;
         case 113:
    DmxSimple.write(114,velocity*2); 
       break;
    case 114:
    DmxSimple.write(115, velocity*2); 
       break;
    case 115:
    DmxSimple.write(116,velocity*2); 
       break;
      case 116:
    DmxSimple.write(117,velocity*2); 
       break;
      case 117:
    DmxSimple.write(118, velocity*2); 
      break;
   case 118:
    DmxSimple.write(119, velocity*2); 
      break;
       case 119:
    DmxSimple.write(120, velocity*2); 
      break;
      case 120:
    DmxSimple.write(121,velocity*2); 
       break;
       case 121:
    DmxSimple.write(122,velocity*2); 
       break;
        case 122:
    DmxSimple.write(123,velocity*2); 
       break;
         case 123:
    DmxSimple.write(124,velocity*2); 
       break;
    case 124:
    DmxSimple.write(125, velocity*2); 
       break;
    case 125:
    DmxSimple.write(126,velocity*2); 
       break;
      case 126:
    DmxSimple.write(127,velocity*2); 
       break;
      case 127:
    DmxSimple.write(128, velocity*2); 
      break;
   
    }
 
} // void MIDINoteOn
 
 
void MIDINoteOff(byte channel, byte pitch, byte velocity) { 
  
  digitalWrite(LED,LOW);  //Turn LED off when MIDI note off is detected    
   switch (pitch) {
    case 0:
    DmxSimple.write(1,velocity*0); 
       break;
       case 1:
    DmxSimple.write(2,velocity*0); 
       break;
        case 2:
    DmxSimple.write(3,velocity*0); 
       break;
         case 3:
    DmxSimple.write(4,velocity*0); 
       break;
    case 4:
    DmxSimple.write(5, velocity*0); 
       break;
    case 5:
    DmxSimple.write(6,velocity*0); 
       break;
      case 6:
    DmxSimple.write(7,velocity*0); 
       break;
      case 7:
    DmxSimple.write(8, velocity*0); 
      break;
   case 8:
    DmxSimple.write(9, velocity*0); 
      break;
       case 9:
    DmxSimple.write(10, velocity*0); 
      break;
      case 10:
    DmxSimple.write(11,velocity*0); 
       break;
       case 11:
    DmxSimple.write(12,velocity*0); 
       break;
        case 12:
    DmxSimple.write(13,velocity*0); 
       break;
         case 13:
    DmxSimple.write(14,velocity*0); 
       break;
    case 14:
    DmxSimple.write(15, velocity*0); 
       break;
    case 15:
    DmxSimple.write(16,velocity*0); 
       break;
      case 16:
    DmxSimple.write(17,velocity*0); 
       break;
      case 17:
    DmxSimple.write(18, velocity*0); 
      break;
   case 18:
    DmxSimple.write(19, velocity*0); 
      break;
       case 19:
    DmxSimple.write(20, velocity*0); 
      break;
      case 20:
    DmxSimple.write(21,velocity*0); 
       break;
       case 21:
    DmxSimple.write(22,velocity*0); 
       break;
        case 22:
    DmxSimple.write(23,velocity*0); 
       break;
         case 23:
    DmxSimple.write(24,velocity*0); 
       break;
    case 24:
    DmxSimple.write(25, velocity*0); 
       break;
    case 25:
    DmxSimple.write(26,velocity*0); 
       break;
      case 26:
    DmxSimple.write(27,velocity*0); 
       break;
      case 27:
    DmxSimple.write(28, velocity*0); 
      break;
   case 28:
    DmxSimple.write(29, velocity*0); 
      break;
       case 29:
    DmxSimple.write(30, velocity*0); 
      break;
       case 30:
    DmxSimple.write(31,velocity*0); 
       break;
       case 31:
    DmxSimple.write(32,velocity*0); 
       break;
        case 32:
    DmxSimple.write(33,velocity*0); 
       break;
         case 33:
    DmxSimple.write(34,velocity*0); 
       break;
    case 34:
    DmxSimple.write(35, velocity*0); 
       break;
    case 35:
    DmxSimple.write(36,velocity*0); 
       break;
      case 36:
    DmxSimple.write(37,velocity*0); 
       break;
      case 37:
    DmxSimple.write(38, velocity*0); 
      break;
   case 38:
    DmxSimple.write(39, velocity*0); 
      break;
       case 39:
    DmxSimple.write(40, velocity*0); 
      break;
       case 40:
    DmxSimple.write(41,velocity*0); 
       break;
       case 41:
    DmxSimple.write(42,velocity*0); 
       break;
        case 42:
    DmxSimple.write(43,velocity*0); 
       break;
         case 43:
    DmxSimple.write(44,velocity*0); 
       break;
    case 44:
    DmxSimple.write(45, velocity*0); 
       break;
    case 45:
    DmxSimple.write(46,velocity*0); 
       break;
      case 46:
    DmxSimple.write(47,velocity*0); 
       break;
      case 47:
    DmxSimple.write(48, velocity*0); 
      break;
   case 48:
    DmxSimple.write(49, velocity*0); 
      break;
       case 49:
    DmxSimple.write(50, velocity*0); 
      break;
       case 50:
    DmxSimple.write(51,velocity*0); 
       break;
       case 51:
    DmxSimple.write(52,velocity*0); 
       break;
        case 52:
    DmxSimple.write(53,velocity*0); 
       break;
         case 53:
    DmxSimple.write(54,velocity*0); 
       break;
    case 54:
    DmxSimple.write(55, velocity*0); 
       break;
    case 55:
    DmxSimple.write(56,velocity*0); 
       break;
      case 56:
    DmxSimple.write(57,velocity*0); 
       break;
      case 57:
    DmxSimple.write(58, velocity*0); 
      break;
   case 58:
    DmxSimple.write(59, velocity*0); 
      break;
       case 59:
    DmxSimple.write(60, velocity*0); 
      break;
       case 60:
    DmxSimple.write(61,velocity*0); 
       break;
       case 61:
    DmxSimple.write(62,velocity*0); 
       break;
        case 62:
    DmxSimple.write(63,velocity*0); 
       break;
         case 63:
    DmxSimple.write(64,velocity*0); 
       break;
    case 64:
    DmxSimple.write(65, velocity*0); 
       break;
    case 65:
    DmxSimple.write(66,velocity*0); 
       break;
      case 66:
    DmxSimple.write(67,velocity*0); 
       break;
      case 67:
    DmxSimple.write(68, velocity*0); 
      break;
   case 68:
    DmxSimple.write(69, velocity*0); 
      break;
       case 69:
    DmxSimple.write(70, velocity*0); 
      break;
       case 70:
    DmxSimple.write(71,velocity*0); 
       break;
       case 71:
    DmxSimple.write(72,velocity*0); 
       break;
        case 72:
    DmxSimple.write(73,velocity*0); 
       break;
         case 73:
    DmxSimple.write(74,velocity*0); 
       break;
    case 74:
    DmxSimple.write(75, velocity*0); 
       break;
    case 75:
    DmxSimple.write(76,velocity*0); 
       break;
      case 76:
    DmxSimple.write(77,velocity*0); 
       break;
      case 77:
    DmxSimple.write(78, velocity*0); 
      break;
   case 78:
    DmxSimple.write(79, velocity*0); 
      break;
       case 79:
    DmxSimple.write(80, velocity*0); 
      break;
       case 80:
    DmxSimple.write(81,velocity*0); 
       break;
       case 81:
    DmxSimple.write(82,velocity*0); 
       break;
        case 82:
    DmxSimple.write(83,velocity*0); 
       break;
         case 83:
    DmxSimple.write(84,velocity*0); 
       break;
    case 84:
    DmxSimple.write(85, velocity*0); 
       break;
    case 85:
    DmxSimple.write(86,velocity*0); 
       break;
      case 86:
    DmxSimple.write(87,velocity*0); 
       break;
      case 87:
    DmxSimple.write(88, velocity*0); 
      break;
   case 88:
    DmxSimple.write(89, velocity*0); 
      break;
       case 89:
    DmxSimple.write(90, velocity*0); 
      break;
       case 90:
    DmxSimple.write(91,velocity*0); 
       break;
       case 91:
    DmxSimple.write(92,velocity*0); 
       break;
        case 92:
    DmxSimple.write(93,velocity*0); 
       break;
         case 93:
    DmxSimple.write(94,velocity*0); 
       break;
    case 94:
    DmxSimple.write(95, velocity*0); 
       break;
    case 95:
    DmxSimple.write(96,velocity*0); 
       break;
      case 96:
    DmxSimple.write(97,velocity*0); 
       break;
      case 97:
    DmxSimple.write(98, velocity*0); 
      break;
   case 98:
    DmxSimple.write(99, velocity*0); 
      break;
       case 99:
    DmxSimple.write(100, velocity*0); 
      break;
       case 100:
    DmxSimple.write(101,velocity*0); 
       break;
       case 101:
    DmxSimple.write(102,velocity*0); 
       break;
        case 102:
    DmxSimple.write(103,velocity*0); 
       break;
         case 103:
    DmxSimple.write(104,velocity*0); 
       break;
    case 104:
    DmxSimple.write(105, velocity*0); 
       break;
      case 105:
    DmxSimple.write(106,velocity*0); 
       break;
      case 106:
    DmxSimple.write(107,velocity*0); 
       break;
      case 107:
    DmxSimple.write(108, velocity*0); 
      break;
   case 108:
    DmxSimple.write(109, velocity*0); 
      break;
       case 109:
    DmxSimple.write(110, velocity*0); 
      break;
      case 110:
    DmxSimple.write(111,velocity*0); 
       break;
       case 111:
    DmxSimple.write(112,velocity*0); 
       break;
        case 112:
    DmxSimple.write(113,velocity*0); 
       break;
         case 113:
    DmxSimple.write(114,velocity*0); 
       break;
    case 114:
    DmxSimple.write(115, velocity*0); 
       break;
    case 115:
    DmxSimple.write(116,velocity*0); 
       break;
      case 116:
    DmxSimple.write(117,velocity*0); 
       break;
      case 117:
    DmxSimple.write(118, velocity*0); 
      break;
   case 118:
    DmxSimple.write(119, velocity*0); 
      break;
       case 119:
    DmxSimple.write(120, velocity*0); 
      break;
      case 120:
    DmxSimple.write(121,velocity*0); 
       break;
       case 121:
    DmxSimple.write(122,velocity*0); 
       break;
        case 122:
    DmxSimple.write(123,velocity*0); 
       break;
         case 123:
    DmxSimple.write(124,velocity*0); 
       break;
    case 124:
    DmxSimple.write(125, velocity*0); 
       break;
    case 125:
    DmxSimple.write(126,velocity*0); 
       break;
      case 126:
    DmxSimple.write(127,velocity*0); 
       break;
      case 127:
    DmxSimple.write(128, velocity*0); 
      break;
   
  
  } 
      
} // void MIDINoteOff
