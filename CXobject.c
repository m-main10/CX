//
// Created by Misha on 16.08.2026.
//
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

}CXObject;
