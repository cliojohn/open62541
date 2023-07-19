#include <stdio.h>
#include "open62541.h"
// program to import Nodeset files. Here's an example:

int main(void) {
    UA_ServerConfig config = UA_ServerConfig_standard;
    UA_Server *server = UA_Server_new(config);
    UA_StatusCode retval = UA_Server_addNodeset(server, "/nodeset/Opc.Ua.SE-IEC61850.NodeSet2.xml");
    if(retval != UA_STATUSCODE_GOOD) {
        printf("Failed to import Nodeset. Error code: %s\n", UA_StatusCode_name(retval));
    }
    UA_Server_run(server, &running);
    UA_Server_delete(server);
    return 0;
}
