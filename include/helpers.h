// A header file for helpers.c

#include "icssh.h"
#include "linkedlist.h"

void bgDeleter(void* data);
void historyDeleter(void* data);
void DestroyHistory(list_t** list);
void DestroyBG(list_t** list);
int redirection_invalid_error(char* x1, char* x2, char* x3);
void bgRemoveTerminated(list_t* list, pid_t wpid);

void* removeTail(list_t* list);
void* removeHead(list_t* list);

void exitOnRedirectionError(job_info* job, char* line);
void executeCmd(job_info* job, proc_info* proc, char*line);