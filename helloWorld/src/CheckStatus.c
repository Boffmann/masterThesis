#include "CheckStatus.h"

/* Array to hold the names for all ReturnCodes. */
char *RetCodeName[13] = {
    "DDS_RETCODE_OK",
    "DDS_RETCODE_ERROR",
    "DDS_RETCODE_UNSUPPORTED",
    "DDS_RETCODE_BAD_PARAMETER",
    "DDS_RETCODE_PRECONDITION_NOT_MET",
    "DDS_RETCODE_OUT_OF_RESOURCES",
    "DDS_RETCODE_NOT_ENABLED",
    "DDS_RETCODE_IMMUTABLE_POLICY",
    "DDS_RETCODE_INCONSISTENT_POLICY",
    "DDS_RETCODE_ALREADY_DELETED",
    "DDS_RETCODE_TIMEOUT",
    "DDS_RETCODE_NO_DATA",
    "DDS_RETCODE_ILLEGAL_OPERATION" };

/**
 * Returns the name of an error code.
 **/
char *getErrorName(DDS_ReturnCode_t status)
{
    return RetCodeName[status];
}

/**
 * Check the return status for errors. If there is an error, then terminate.
 **/
void checkStatus(
    DDS_ReturnCode_t status,
    const char *info ) {

    if (status != DDS_RETCODE_OK && status != DDS_RETCODE_NO_DATA) {
        fprintf(stderr, "Error in %s: %s\n", info, getErrorName(status));
#ifndef _WIN32
        exit(1);
#endif
    }
}

/**
 * Check whether a valid handle has been returned. If not, then terminate.
 **/
void checkHandle(
    void *handle,
    const char *info ) {

     if (!handle) {
        fprintf(stderr, "Error in %s: Creation failed: invalid handle\n", info);
#ifndef _WIN32
        exit(1);
#endif
     }
}
