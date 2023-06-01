typedef union
{
    char *id;
} YYSTYPE;

/* Tokens.  *//* Tokens.  */
#define TLOWERTHANELSE 258
#define TELSE 259
#define TIDENT 260
#define TNUMBER 261
#define TCONST 262
#define TIF 263
#define TINT 264
#define TFLOAT 265
#define TRETURN 266
#define TVOID 267
#define TWHILE 268
#define TADDASSIGN 269
#define TSUBASSIGN 270
#define TMULASSIGN 271
#define TDIVASSIGN 272
#define TMODASSIGN 273
#define TOR 274
#define TAND 275
#define TEQUAL 276
#define TNOTEQU 277
#define TGREATE 278
#define TLESSE 279
#define TINC 280
#define TDEC 281
#define TPLUS 282
#define TMINUS 283
#define TSTAR 284
#define TSLASH 285
#define TMOD 286
#define TASSIGN 287
#define TNOT 288
#define TLESS 289
#define TGREAT 290
#define TLSBRACKET 291
#define TRSBRACKET 292
#define TCOMMA 293
#define TLMBRACKET 294
#define TRMBRACKET 295
#define TLLBRACKET 296
#define TRLBRACKET 297
#define TSEMICOLON 298
#define TCOMMENT 299
#define TSEPERATOR 300
#define TLINE 301
#define TILLID 302
#define TERROR 303

extern YYSTYPE yylval;