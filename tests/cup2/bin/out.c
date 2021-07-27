#include "stdint.h"
#include "stdlib.h"
#include "string.h"
#include "stdio.h"
#include "stdarg.h"
#include "ctype.h"
#include "time.h"
typedef struct _o _o;typedef struct _r _r;typedef struct _u _u;typedef struct _w _w;typedef struct _11 _11;typedef struct _31 _31;typedef struct _41 _41;typedef struct _y _y;typedef struct _61 _61;typedef struct _91 _91;typedef struct _C1 _C1;typedef struct _H1 _H1;double _n();void _p(_o __1);void _q();_r _s(int __1);_r _t(uint8_t* __1);_u _v(uint8_t* __1);int main(int __1,uint8_t** __2);_w _x(int __4);void _21(_11* __1,_w __2,int __3);void _51(uint8_t* __1,...);void _01(uint8_t* __1,uint8_t* __2,uint8_t* __3);_y _z(_w __1);_61 _71(int __4);void _81(_61* this,uint8_t __6);int _A1(_91 __1);uint8_t* _B1(_91 __1);void _D1(_31 __1,_61* __2,int __3,uint8_t __4,uint8_t __5);_91 _E1(uint8_t* __1);uint8_t _F1(_91 __1);void _G1(_H1 __1);uint8_t* _O="\n    No options are available for this command";uint8_t* _P="\n    -i, --input     Specify the input file name\n    -o, --output    Specify the output file name\n    -cg, --gcc     Use GCC as a compiler\n    -cm, --msvc    Use MSVC as a compiler\n    -cc, --clang   use Clang as a compiler\n    -ct, --tcc     Use TinyCC as a compiler";typedef struct _o{int t;union{}u;}_o;typedef struct _r{uint8_t* buf;int len;int cap;}_r;typedef struct _u{uint8_t* buf;int len;}_u;typedef struct _w{_u* buf;int len;}_w;typedef struct _11{int t;union{struct{_u thing;}Some;}u;}_11;typedef struct _41{uint8_t* buf;int len;}_41;typedef struct _31{uint8_t* name;_41 data;}_31;typedef struct _y{int t;union{}u;}_y;typedef struct _61{uint8_t* buf;int len;int cap;}_61;typedef struct _91{int t;union{}u;}_91;typedef struct _C1{_91 kind;int index;uint8_t* value;}_C1;typedef struct _H1{_C1* buf;int len;int cap;}_H1;double _n(){return ((double)clock())/CLOCKS_PER_SEC;};void _p(_o __1){if(){printf("\033[35m");}else if(){printf("\033[32m");}else if(){printf("\033[0;31m");}};void _q(){printf("\033[0m");};_r _s(int __1){return (_r){.buf=malloc(sizeof(uint8_t)*__1),.len=0,.cap=__1,};};_r _t(uint8_t* __1){int __2=strlen(__1)+1;uint8_t* __3=malloc((sizeof(uint8_t)*__2)*2);memcpy(__3,__1,sizeof(uint8_t)*__2);return (_r){.buf=__3,.len=__2-1,.cap=__2*2,};};_u _v(uint8_t* __1){int __2=strlen(__1)+1;uint8_t* __3=malloc(sizeof(uint8_t)*__2);memcpy(__3,__1,sizeof(uint8_t)*__2);return (_u){.buf=__3,.len=__2-1,};};_w _x(int __4){return (_w){.buf=malloc(sizeof(_u)*__4),.len=__4,};};int main(int __1,uint8_t** __2){_w __3=_x(__1);for(int __4=0;__4<(__3.len);__4+=1){((__3.buf)[__4])=_v((*(__2+__4)));}_y __4=_z(__3);if(__4.t==0){_p((_o){.t=2});printf("error: ");_q();printf("no such command: '%s",(__3.buf)[1]);for(int __5=2;__5<__1;__5+=1){printf(" %s",(__3.buf)[__5]);}printf("'\n\nSee 'cup help' for the list of available commands.\n");return 1;}else if(__4.t==14||__4.t==15){goto ret_m;}else if(__4.t==16||__4.t==17||__4.t==18||__4.t==19||__4.t==20||__4.t==21||__4.t==22||__4.t==23||__4.t==24||__4.t==25){return 1;}else if(__4.t==1){printf("Cup Toolkit v0.0.1\n\n");printf("USAGE:\n    cup [COMMAND] [OPTIONS]");printf("\n\nCOMMANDS:");printf("\n    run                  Compile and run the current package");printf("\n    build                Compile the current package");printf("\n    check                Analyze the current package");printf("\n    new [PACKAGE]        Create a new package");printf("\n    update [PACKAGE]     Update given dependency");printf("\n    add [PACKAGE]        Adds given dependency");printf("\n    remove [PACKAGE]     Removes given dependency");printf("\n    gen docs             Generate documentation for the current package");printf("\n    gen binds [HEADER]   Generate bindings for a given C header file");printf("\n    self update          Update the Cup Toolkit");printf("\n    self install         Install the Cup Toolkit");printf("\n    self uninstall       Uninstall the Cup Toolkit");printf("\n\nSee 'cup help [COMMAND]' for more info about a specific command and it's available options.\n");return 0;}else if(__4.t==2){_01("run","Compile and run the current package",_P);return 0;}else if(__4.t==3){_01("build","Compile the current package",_P);return 0;}else if(__4.t==4){_01("check","Analyze the current package",_O);return 0;}else if(__4.t==5){_01("new","Create a new package",_O);return 0;}else if(__4.t==6){_01("update","Update given dependency",_O);return 0;}else if(__4.t==7){_01("add","Adds given dependency",_O);return 0;}else if(__4.t==8){_01("remove","Removes given dependency",_O);return 0;}else if(__4.t==9){_01("gen docs","Generate documentation for the current package",_O);return 0;}else if(__4.t==10){_01("gen binds","Generate bindings for a given C header file",_O);return 0;}else if(__4.t==11){_01("self update","Update the Cup Toolkit",_O);return 0;}else if(__4.t==12){_01("self install","Install the Cup Toolkit",_O);return 0;}else if(__4.t==13){_01("self uninstall","Uninstall the Cup Toolkite",_O);return 0;}ret_m:_11 __5=(_11){.t=1};_11 __6=(_11){.t=1};for(int __7=2;__7<(__3.len);__7+=1){if((strcmp(((__3.buf)[__7]).buf,"-i")==0)||(strcmp(((__3.buf)[__7]).buf,"--input")==0)){_21((&__5),__3,__7+=1);}else if(((strcmp(((__3.buf)[__7]).buf,"-o")==0)||strcmp(((__3.buf)[__7]).buf,"--output"))==0){_21((&__6),__3,__7+=1);}else{_p((_o){.t=2});printf("error: ");_q();printf("invalid option '%s'\n",((__3.buf)[__7]).buf);return 1;}}if(__5.t==1){__5=(_11){.t=0,.u={.Some={.thing=_v("."),}}};}if(__6.t==1){__6=(_11){.t=0,.u={.Some={.thing=_v("out.c"),}}};}printf("Compilation ");_p((_o){.t=1});printf("successful");_q();printf(" (%.2lfs elapsed)\n",_n());return 0;};void _21(_11* __1,_w __2,int __3){if((__2.len)>__3){(*__1)=(_11){.t=0,.u={.Some={.thing=(__2.buf)[__3],}}};}else{_51("missing value after '%s' option",((__2.buf)[(__3-1)]).buf);}};void _51(uint8_t* __1,...){va_list __2;va_start(__2,__1);_p((_o){.t=2});printf("error:");_q();printf(" ");vprintf(__1,__2);printf("\n");exit(1);va_end(__2);};void _01(uint8_t* __1,uint8_t* __2,uint8_t* __3){printf(__2);printf("\n\nUSAGE:\n    cup ");printf(__1);printf(" [OPTIONS]\n\nOPTIONS:");printf(__3);printf("\n");};_61 _71(int __4){return (_61){.buf=malloc(sizeof(uint8_t)*__4),.len=0,.cap=__4,};};void _81(_61* this,uint8_t __6){(*(((*this).buf)+((*this).len)))=__6;((*this).len)+=1;if(((*this).len)==((*this).cap)){((*this).cap)*=4;((*this).buf)=realloc((*this).buf,sizeof(uint8_t)*((*this).cap));}};_y _z(_w __1){if((__1.len)==1){return (_y){.t=1};}uint8_t __2=0;_61 __3=_71(16);for(int __4=1;__4<(__1.len);__4+=1){if(__4==4){goto ret_l;}if(((((__1.buf)[__4]).buf)[0])=='-'){if(__2){goto ret_l;}goto l;}__2=1;for(int __5=0;__5<(((__1.buf)[__4]).len);__5+=1){_81((&__3),(((__1.buf)[__4]).buf)[__5]);}l:}ret_l:((__3.buf)[(__3.len)])='\0';uint8_t* __4=__3.buf;if(strcmp(__4,"help")==0){return (_y){.t=1};}else if(strcmp(__4,"helprun")==0){return (_y){.t=2};}else if(strcmp(__4,"helpbuild")==0){return (_y){.t=3};}else if(strcmp(__4,"helpcheck")==0){return (_y){.t=4};}else if(strcmp(__4,"helpupdate")==0){return (_y){.t=6};}else if(strcmp(__4,"helpadd")==0){return (_y){.t=7};}else if(strcmp(__4,"helpremove")==0){return (_y){.t=8};}else if(strcmp(__4,"helpgendocs")==0){return (_y){.t=9};}else if(strcmp(__4,"helpgenbinds")==0){return (_y){.t=10};}else if(strcmp(__4,"helpselfupdate")==0){return (_y){.t=11};}else if(strcmp(__4,"helpselfinstall")==0){return (_y){.t=12};}else if(strcmp(__4,"helpselfuninstall")==0){return (_y){.t=13};}else if(strcmp(__4,"run")==0){return (_y){.t=14};}else if(strcmp(__4,"build")==0){return (_y){.t=15};}else if(strcmp(__4,"check")==0){return (_y){.t=16};}else if(strcmp(__4,"update")==0){return (_y){.t=18};}else if(strcmp(__4,"add")==0){return (_y){.t=19};}else if(strcmp(__4,"remove")==0){return (_y){.t=20};}else if(strcmp(__4,"gendocs")==0){return (_y){.t=21};}else if(strcmp(__4,"genbinds")==0){return (_y){.t=22};}else if(strcmp(__4,"selfupdate")==0){return (_y){.t=23};}else if(strcmp(__4,"selfinstall")==0){return (_y){.t=24};}else if(strcmp(__4,"selfuninstall")==0){return (_y){.t=25};}return (_y){.t=0};};int _A1(_91 __1){if(__1.t==7){return 4;}else if(__1.t==8){return 5;}else if(__1.t==9){return 4;}else if(__1.t==10){return 4;}else if(__1.t==11){return 3;}else if(__1.t==12){return 3;}else if(__1.t==13){return 3;}else if(__1.t==14){return 4;}else if(__1.t==15){return 4;}else if(__1.t==16){return 4;}else if(__1.t==17){return 3;}else if(__1.t==18){return 3;}else if(__1.t==19){return 3;}else if(__1.t==20){return 3;}else if(__1.t==21){return 2;}else if(__1.t==22){return 4;}else if(__1.t==23){return 4;}else if(__1.t==24){return 4;}else if(__1.t==25){return 5;}else if(__1.t==26){return 3;}else if(__1.t==27){return 4;}else if(__1.t==28){return 2;}else if(__1.t==29){return 5;}else if(__1.t==30){return 3;}else if(__1.t==31){return 4;}else if(__1.t==32){return 4;}else if(__1.t==33){return 3;}else if(__1.t==34){return 2;}else if(__1.t==35){return 3;}else if(__1.t==36){return 1;}else if(__1.t==37){return 1;}else if(__1.t==38){return 1;}else if(__1.t==39){return 1;}else if(__1.t==40){return 1;}else if(__1.t==41){return 1;}else if(__1.t==42){return 1;}else if(__1.t==43){return 1;}else if(__1.t==44){return 1;}else if(__1.t==45){return 1;}else if(__1.t==46){return 1;}else if(__1.t==47){return 1;}else if(__1.t==48){return 1;}else if(__1.t==49){return 1;}else if(__1.t==50){return 1;}else if(__1.t==51){return 1;}else if(__1.t==52){return 2;}else if(__1.t==53){return 1;}else if(__1.t==54){return 2;}else if(__1.t==55){return 1;}else if(__1.t==56){return 1;}else if(__1.t==57){return 1;}else if(__1.t==58){return 2;}else if(__1.t==59){return 1;}else if(__1.t==60){return 2;}else if(__1.t==61){return 1;}else if(__1.t==62){return 2;}else if(__1.t==63){return 1;}else if(__1.t==64){return 2;}else if(__1.t==65){return 1;}else if(__1.t==66){return 2;}else if(__1.t==67){return 1;}else if(__1.t==68){return 2;}else if(__1.t==69){return 1;}else if(__1.t==70){return 2;}};uint8_t* _B1(_91 __1){if(__1.t==1){return "EMPTY";}else if(__1.t==2){return "IDENT";}else if(__1.t==3){return "STRING_LIT";}else if(__1.t==4){return "CHAR_LIT";}else if(__1.t==5){return "INT_LIT";}else if(__1.t==6){return "FLOAT_LIT";}else if(__1.t==7){return "TRUE";}else if(__1.t==8){return "FALSE";}else if(__1.t==9){return "THIS";}else if(__1.t==10){return "TYPE";}else if(__1.t==11){return "TAG";}else if(__1.t==12){return "MOD";}else if(__1.t==13){return "USE";}else if(__1.t==14){return "COMP";}else if(__1.t==15){return "ENUM";}else if(__1.t==16){return "PROP";}else if(__1.t==17){return "DEF";}else if(__1.t==18){return "SUB";}else if(__1.t==19){return "VAR";}else if(__1.t==20){return "NEW";}else if(__1.t==21){return "IF";}else if(__1.t==22){return "ELIF";}else if(__1.t==23){return "ELSE";}else if(__1.t==24){return "LOOP";}else if(__1.t==25){return "WHILE";}else if(__1.t==26){return "FOR";}else if(__1.t==27){return "EACH";}else if(__1.t==28){return "IN";}else if(__1.t==29){return "MATCH";}else if(__1.t==30){return "RET";}else if(__1.t==31){return "NEXT";}else if(__1.t==32){return "JUMP";}else if(__1.t==33){return "TRY";}else if(__1.t==34){return "AS";}else if(__1.t==35){return "HAS";}else if(__1.t==36){return "SEMICOLON";}else if(__1.t==37){return "COLON";}else if(__1.t==38){return "COMMA";}else if(__1.t==39){return "DOT";}else if(__1.t==40){return "QUESTION_MARK";}else if(__1.t==41){return "TILDE";}else if(__1.t==42){return "HASH";}else if(__1.t==43){return "LEFT_PAREN";}else if(__1.t==44){return "RIGHT_PAREN";}else if(__1.t==45){return "LEFT_BRACE";}else if(__1.t==46){return "RIGHT_BRACE";}else if(__1.t==47){return "LEFT_BRACKET";}else if(__1.t==48){return "RIGHT_BRACKET";}else if(__1.t==49){return "DEREF";}else if(__1.t==50){return "ADDRESS";}else if(__1.t==51){return "ASSIGN";}else if(__1.t==52){return "EQUAL";}else if(__1.t==53){return "NOT";}else if(__1.t==54){return "NOT_EQUAL";}else if(__1.t==55){return "AND";}else if(__1.t==56){return "OR";}else if(__1.t==57){return "LESS";}else if(__1.t==58){return "LESS_EQUAL";}else if(__1.t==59){return "GREATER";}else if(__1.t==60){return "GREATER_EQUAL";}else if(__1.t==61){return "ADD";}else if(__1.t==62){return "ADD_ASSIGN";}else if(__1.t==63){return "SUBTRACT";}else if(__1.t==64){return "SUBTRACT_ASSIGN";}else if(__1.t==65){return "MULTIPLY";}else if(__1.t==66){return "MULTIPLY_ASSIGN";}else if(__1.t==67){return "DIVIDE";}else if(__1.t==68){return "DIVIDE_ASSIGN";}else if(__1.t==69){return "MODULO";}else if(__1.t==70){return "MODULO_ASSIGN";}};void _D1(_31 __1,_61* __2,int __3,uint8_t __4,uint8_t __5){if((__5==2)&&(((*__2).len)==4)){}_81(__2,__4);(((*__2).buf)[((*__2).len)])='\0';};_91 _E1(uint8_t* __1){if(strcmp(__1,"tag")==0){return (_91){.t=11};}else if(strcmp(__1,"mod")==0){return (_91){.t=12};}else if(strcmp(__1,"use")==0){return (_91){.t=13};}else if(strcmp(__1,"comp")==0){return (_91){.t=14};}else if(strcmp(__1,"enum")==0){return (_91){.t=15};}else if(strcmp(__1,"prop")==0){return (_91){.t=16};}else if(strcmp(__1,"def")==0){return (_91){.t=17};}else if(strcmp(__1,"sub")==0){return (_91){.t=18};}else if(strcmp(__1,"var")==0){return (_91){.t=19};}else if(strcmp(__1,"this")==0){return (_91){.t=9};}else if(strcmp(__1,"type")==0){return (_91){.t=10};}else if(strcmp(__1,"new")==0){return (_91){.t=20};}else if(strcmp(__1,"true")==0){return (_91){.t=7};}else if(strcmp(__1,"false")==0){return (_91){.t=8};}else if(strcmp(__1,"if")==0){return (_91){.t=21};}else if(strcmp(__1,"elif")==0){return (_91){.t=22};}else if(strcmp(__1,"else")==0){return (_91){.t=23};}else if(strcmp(__1,"loop")==0){return (_91){.t=24};}else if(strcmp(__1,"while")==0){return (_91){.t=25};}else if(strcmp(__1,"for")==0){return (_91){.t=26};}else if(strcmp(__1,"each")==0){return (_91){.t=27};}else if(strcmp(__1,"in")==0){return (_91){.t=28};}else if(strcmp(__1,"match")==0){return (_91){.t=29};}else if(strcmp(__1,"ret")==0){return (_91){.t=30};}else if(strcmp(__1,"next")==0){return (_91){.t=31};}else if(strcmp(__1,"jump")==0){return (_91){.t=32};}else if(strcmp(__1,"try")==0){return (_91){.t=33};}else if(strcmp(__1,"as")==0){return (_91){.t=34};}else if(strcmp(__1,"has")==0){return (_91){.t=35};}return (_91){.t=1};};uint8_t _F1(_91 __1){if(__1.t==43||__1.t==51||__1.t==52||__1.t==54||__1.t==55||__1.t==56||__1.t==57||__1.t==58||__1.t==59||__1.t==60||__1.t==61||__1.t==62||__1.t==63||__1.t==64||__1.t==65||__1.t==66||__1.t==67||__1.t==68||__1.t==69||__1.t==70||__1.t==34||__1.t==35){return 1;}else if(1){return 0;}};void _G1(_H1 __1){printf("Tokens:\n");for(int __2=0;__2<(__1.len);__2+=1){_91 __3=((__1.buf)[__2]).kind;_p((_o){.t=0});printf("  %s",_B1(__3));_q();if(__3.t==2||__3.t==3||__3.t==4||__3.t==5||__3.t==6){printf("(%s)",((__1.buf)[__2]).value);}printf("\n");}printf("\n");};