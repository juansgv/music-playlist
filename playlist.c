#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "playlist.h"

void add_trac_to_back(TrackNode **head, char *artist, char *song)
{
    TrackNode *new_trac = (TrackNode *)malloc(sizeof(TrackNode));
    if (!new_trac)
    {
        fprintf(stderr, "Memory allocation error\n");
        return;
    }
    
}