//
// Created by Misha on 16.08.2026.
//

#ifndef LANG_CXOBJECT_H
#define LANG_CXOBJECT_H
typedef enum  {
    Int,
     Float,
     String,
     Char,

 }TypeData;
typedef struct {
    void* data;
    TypeData type;
    int link;
    int size;
}CXObject;

#endif //LANG_CXOBJECT_H
