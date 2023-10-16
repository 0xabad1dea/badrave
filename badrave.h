/*
	badrave by @0xabadidea Feb 2015
*/

#include <stdint.h>

#ifdef __linux__
size_t strlcat (char *__dst, __const char *__src, size_t __n)
     __THROW __nonnull ((1, 2));
#endif

/* abadidea's safety ban collection. clang -Wno-unused-macros */

/*	SIGNED ARITHMETIC IS THE ENEMY.			*/
#define int		BANNED
/*	THESE OTHER THINGS ARE ALSO THE ENEMY.	*/
#ifdef	strcpy
#undef	strcpy
#endif
#define strcpy	BANNED
#ifdef	strcat
#undef	strcat
#endif
#define strcat	BANNED
#ifdef	strncat
#undef	strncat
#endif
#define strncat	BANNED
#ifdef	strncpy
#undef	strncpy
#endif
#define strncpy	BANNED
#ifdef	sprintf
#undef	sprintf
#endif
#define sprintf	BANNED

/* typenames the way I like them */
typedef uint32_t	dword;
typedef uint16_t	word;
typedef uint8_t		byte;
typedef size_t		sizet;


#define badversion "badrave version 0"

/* mml macros (the numbers are the order I invented them in) */
#define volume1 "@v1 = { 15 15 14 14 13 13 12 12 11 11 10 10 9 9 8 8 7 7 6 6 }"
#define volume9 "@v9 = {14 7 3 4 2 1 1 1 1 1 1 0 }"
#define volume15 "@v15 = { 6  7  8  9  10  11  12 12 13 13 14 14 15 15 }"
#define volume16 "@v16 = { 6 7 8 9 10 11 12 12 12 }"
#define volume21 "@v21 = { 6 7 8 | 9 10 11 12 12 12 12 12 12 11 10 9 8 }" 
#define volume23 "@v23 = { 6  7  8  9  10  11  12 12 13 13 14 | 14 15 15 15 14 14 13 13 12 13 }"
#define volume26 "@v26 = { 15 15 15 15 15 15 14 14 14 14 14 13 13 12 11 10 10 9  8  7  6 7 8 9 10 11 12 13 }"
#define volume27 "@v27 = { 15 15 14 14 14 14 14 13 13 13 14 14 15 }"

#define o2 "o2"
#define o3 "o3"
#define o4 "o4"
#define o5 "o4"
// yep cheating

#define at0 "@0"
#define at1 "@1"
#define at2 "@2"
#define at3 "@3"
#define at4 "@@4"
#define at7 "@@7"
#define at10 "@@10"
#define at21 "@@21"

#define atat4 "@4 = {|0 0 0 0 1 1 1 1 2 2 2 2 3 3 3 3}"
#define atat7 "@7 = {|2 2 2 2 2 0 0 0}"
#define atat10 "@10 = { 2 2 2 2 1 1 1 1 }"
#define atat21 "@21 = {|1 1 1 1 1 1 1 1 2 2 2 3 2 2 2 2}"
// that's actually @@3 in my personal headers but w/e


/* scales */
#define third 2
#define fifth 3
#define seventh 4
static char *aminor[8] = {"a", "b", "c", "d", "e", "f", "g", "a"};
static char *fminor[8] = {"f", "g", "a-","b-","c", "d-","e-","f"};

/* functions */

byte* genMeasureRhythm(void);
byte getOneBeat(void);
void printMMLHeader(dword);
char* naiveNotePicker(char, char**, byte*);
char* harmonyNotePicker(char, char**, byte*);
char* randomOctave(void);
char* randomVolume(void);
char* randomTimbre(void);


/* debug functions */
void debugPrintMeasureRhythm(byte*);
void debugPrintPlayableMeasure(byte*);
