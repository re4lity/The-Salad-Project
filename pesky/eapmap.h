#define WPA_NONCE_LEN 32
#define ETH_ADDR_LEN 6
#define WPA_PTK_LEN 32
#define WPA_PMK_LEN 32
#define WPA_KEY_LEN 32
#define LEN_MAC 6
#define LEN_NONCE 32
#define LEN_MIC	16
#define LEN_ESSID_MAX 32
#define LEN_ESSID_MIN 8

#define EAP1_TEMPLATE "\x00\x00\x0d\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"\
"\x08\x02\x3a\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x40\x01"\
"\xaa\xaa\x03\x00\x00\x00\x88\x8e"\
"\x02\x03\x00\x5f\x02\x00\x8a\x00\x10\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
#define EAP1_SIZE 144
#define EAP1_OFFSET_SUPMAC 17
#define EAP1_OFFSET_BSSID1 23
#define EAP1_OFFSET_BSSID2 29
#define EAP1_OFFSET_ANONCE 62

#define EAP2_TEMPLATE "\x00\x00\x12\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x08\x01\x3a\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x20\x65\xaa\xaa\x03\x00\x00\x00\x88\x8e\x02\x03\x00\x75\x02\x01\x0a\x00\x10\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x16\x30\x14\x01\x00\x00\x0f\xac\x04\x01\x00\x00\x0f\xac\x04\x01\x00\x00\x0f\xac\x02\x0c\x00\x00\x00\x00\x00"
#define EAP2_SIZE 175
#define EAP2_OFFSET_SUPMAC 28
#define EAP2_OFFSET_BSSID1 22
#define EAP2_OFFSET_BSSID2 34
#define EAP2_OFFSET_SNONCE 67
#define EAP2_OFFSET_MIC	131
#define EAP2_OFFSET_CRC	171
#define EAP2_OFFSET_MIC_START	50
#define EAP2_OFFSET_MIC_STOP	121
#define EAP2_OFFSET_CRC_START	18
#define EAP2_OFFSET_CRC_STOP	153
