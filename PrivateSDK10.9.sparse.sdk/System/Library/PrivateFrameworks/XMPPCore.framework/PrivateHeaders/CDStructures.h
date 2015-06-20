//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct BigRange {
    unsigned long long location;
    unsigned long long length;
};

struct FSRef {
    unsigned char hidden[80];
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _SASLMechanismInternal {
    struct sasl_conn *_field1;
    struct sasl_security_properties *_field2;
    struct sasl_callback *_field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct sasl_callback;

struct sasl_conn;

struct sasl_security_properties;

struct sockaddr;

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    int _field2;
} CDStruct_87dc826d;

typedef struct CDStruct_183601bc;

typedef struct {
    unsigned int _field1;
    struct sockaddr *_field2;
    CDStruct_183601bc *_field3;
    CDStruct_183601bc **_field4;
    CDStruct_183601bc **_field5;
    CDStruct_183601bc **_field6;
    CDStruct_183601bc **_field7;
} CDStruct_5d34f741;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    struct __CFData *_field4;
} CDStruct_5398b360;
