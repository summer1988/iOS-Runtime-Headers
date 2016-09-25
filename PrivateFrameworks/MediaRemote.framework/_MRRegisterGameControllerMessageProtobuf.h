/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRRegisterGameControllerMessageProtobuf : PBCodable <NSCopying> {
    _MRGameControllerPropertiesProtobuf * _properties;
}

@property (nonatomic, readonly) BOOL hasProperties;
@property (nonatomic, retain) _MRGameControllerPropertiesProtobuf *properties;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasProperties;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)properties;
- (BOOL)readFrom:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)writeTo:(id)arg1;

@end