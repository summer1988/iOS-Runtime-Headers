/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSUZipEntry : NSObject {
    unsigned int _CRC;
    BOOL _compressed;
    unsigned long long _compressedSize;
    unsigned short _extraFieldLength;
    NSString *_name;
    unsigned short _nameLength;
    unsigned long long _offset;
    unsigned long long _size;
}

@property unsigned int CRC;
@property(getter=isCompressed) BOOL compressed;
@property unsigned long long compressedSize;
@property unsigned short extraFieldLength;
@property(copy) NSString * name;
@property unsigned short nameLength;
@property unsigned long long offset;
@property unsigned long long size;

- (void).cxx_destruct;
- (unsigned int)CRC;
- (unsigned long long)compressedSize;
- (id)description;
- (unsigned short)extraFieldLength;
- (BOOL)isCompressed;
- (id)name;
- (unsigned short)nameLength;
- (unsigned long long)offset;
- (void)setCRC:(unsigned int)arg1;
- (void)setCompressed:(BOOL)arg1;
- (void)setCompressedSize:(unsigned long long)arg1;
- (void)setExtraFieldLength:(unsigned short)arg1;
- (void)setName:(id)arg1;
- (void)setNameLength:(unsigned short)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end