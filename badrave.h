/*
	badrave by @0xabadidea Feb 2015
*/

#include <stdint.h>	

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

/* functions */

byte* genMeasureRhythm(void);
byte getOneBeat(void);
void printMMLHeader(dword);


/* debug functions */
void debugPrintMeasureRhythm(byte*);
void debugPrintPlayableMeasure(byte*);
