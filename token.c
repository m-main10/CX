/**
 *token.c
 *standart C11
 *
 */
#include <stdlib.h>
typedef enum {
   OP,
   Char,

}token_enem;
typedef enum {
   Minus,
   Plus,
   Multiplication ,
   Division,
   EQUAL,
   EQEQUAL,
   COLON,
   PlusEq,
   MinusEq,
   DivEq,
   MultiplyEq,

}OP_Type;
token_enem TokenOneChar(char _Char){
   switch(_Char) {
      case '-':
         return OP;
         case '+':
         return OP;
         case '*':
         return OP;
         case '/':
         return OP;
         case '=':
         return OP;
      case ',':
         return OP;
         default:
         return Char;
   }
}
OP_Type TokenTwoChar(char _Char1,char _Char2) {
   if (TokenOneChar(_Char1) == OP) {
      switch(_Char1) {
         case '-':
            if (_Char2 == '=') {return MinusEq;}
            return Minus;
         case '+':
            if (_Char2 == '='){return PlusEq;}
            else return Plus;

         case '*':
            if (_Char2 == '='){return MultiplyEq;}
            return Multiplication;
         case '/':
            if (_Char2 == '='){return DivEq;}
            return Division;
         case '=':
            if (_Char2 == '='){return EQEQUAL;}
            return EQUAL;

         case ',':
            return COLON;
      }


   }

}
