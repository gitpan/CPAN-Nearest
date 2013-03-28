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
#define GZ_BUFFER_LEN 0x1000
typedef struct nearest_module
{
    /* The file to look at. */
    gzFile * gzfile;
    FILE * file;
    unsigned char * gz_buffer;
    int gz_buffer_at;
    /* Is this file a gz file? */
    int is_gz : 1;
    /* Print blah messages? */
    int verbose : 1;
    /* Actually found something? */
    int found : 1;
    /* The buffer. */
    char buf[MAXLEN];
    /* The length of the buffer. */
    int buf_len;
    /* The nearest module to the search term. */
    char nearest[MAXLEN];
    /* The name of the file to read from. */
    const char * file_name;
    /* Text::Fuzzy object. */
    text_fuzzy_t tf;
}
nearest_module_t;

#line 282 "nearest-module.c"
char * cpan_nearest_search (char * file_name , char * search_term );

#line 323 "nearest-module.c"

#ifdef TEST
extern const char * file_name;

#endif /* TEST */

#endif /* CFH_NEAREST_MODULE_H */
