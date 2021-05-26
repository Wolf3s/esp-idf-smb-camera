#define CMD_TAKE	100
#define CMD_PUT		200
#define CMD_OK		300
#define CMD_NG		400
#define CMD_HALT	900

typedef struct {
    uint16_t command;
    TaskHandle_t taskHandle;
} CMD_t;

typedef struct {
    uint16_t command;
    char localFileName[64];
	size_t localFileSize;
    char remoteFileName[64];
    TaskHandle_t taskHandle;
} REQUEST_t;

typedef struct {
    uint16_t command;
    char response[256];
    TaskHandle_t taskHandle;
} RESPONSE_t;
