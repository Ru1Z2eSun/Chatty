#define MAX_Data 65536
#define MAX_Name 8
#define register "100"
#define login "101"
#define FileRequest "102"
#define MessageRequest "103"
#define SendMessage "200"
#define SendFileRequest "300"
#define SendingFile "301"
#define FinishSending "302"
#define ReceiveFileRequest "303"
#define ReceivingFlie "304"
#define FinishRecceiving "305"
#define loginPermit "400"
#define loginDenied "401"
#define offlineMessage "402"
#define offlineFile "403"
#define onlineMessage "405"
#define ongoingSend "406"
#define alreadySend "407"
#define ongoingReceive "408"
#define alreadyReceive "409"


struct packet
{
    char startSymbol;
    char PacketID[3];
    int length;
    char sender[MAX_Name];
    char receiver[MAX_Name];
    char data[MAX_Data];
};
