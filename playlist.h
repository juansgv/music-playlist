
#ifndef PLAYLIST_H
#define PLAYLIST_H

typedef struct TrackNode
{
    char    *artist;
    char    *song;
    struct  TrackNode *next;
} TrackNode;

// Prototypes
void add_trac_to_back(TrackNode **head, char *artist, char *song);
void remove_trac_from_back(TrackNode **head);
void add_trac_in_the_middle(TrackNode **head, char *artist, char *song, int position);
void print_playlist(TrackNode *head);
void play_next_trac(TrackNode **head);
void free_playlist(TrackNode **head);

#endif PLAYLIST_H