/* This is a Cfunctions (version 0.28) generated header file.
   Cfunctions is a free program for extracting headers from C files.
   Get Cfunctions from 'http://www.lemoda.net/cfunctions/'. */

/* This file was generated with:
'cfunctions -inc nearest-module.c' */
#ifndef CFH_NEAREST_MODULE_H
#define CFH_NEAREST_MODULE_H

/* From 'nearest-module.c': */

#line 18 "nearest-module.c"
#define MAXLEN 0x400
typedef struct nearest_module
{
    /* The file to look at. */
    gzFile * gzfile;
    FILE * file;
    /* Is this file a gz file? */
    int is_gz : 1;
    /* The term to search for. */
    const char * search_term;
    /* The length of the search term. */
    int search_len;
    /* The buffer. */
    char buf[MAXLEN];
    /* The length of the buffer. */
    int buf_len;
    /* The nearest module to the search term. */
    char nearest[MAXLEN];
    /* The edit distance from "search_term" to "nearest". */
    int distance;
    /* The name of the file to read from. */
    const char * file_name;
}
nearest_module_t;

#line 236 "nearest-module.c"
char * cpan_nearest_search (char * file_name , char * search_term );

#endif /* CFH_NEAREST_MODULE_H */
