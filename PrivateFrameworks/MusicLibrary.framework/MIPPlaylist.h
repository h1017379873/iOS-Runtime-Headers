/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MIPSmartPlaylistInfo, NSMutableArray, NSString;

@interface MIPPlaylist : PBCodable <NSCopying> {
    struct { 
        unsigned int storeId : 1; 
        unsigned int type : 1; 
        unsigned int hidden : 1; 
    NSMutableArray *_childPlaylists;
    } _has;
    BOOL _hidden;
    NSMutableArray *_items;
    NSString *_name;
    MIPSmartPlaylistInfo *_smartPlaylistInfo;
    long long _storeId;
    int _type;
}

@property(retain) NSMutableArray * childPlaylists;
@property BOOL hasHidden;
@property(readonly) BOOL hasName;
@property(readonly) BOOL hasSmartPlaylistInfo;
@property BOOL hasStoreId;
@property BOOL hasType;
@property BOOL hidden;
@property(retain) NSMutableArray * items;
@property(retain) NSString * name;
@property(retain) MIPSmartPlaylistInfo * smartPlaylistInfo;
@property long long storeId;
@property int type;

- (void).cxx_destruct;
- (void)addChildPlaylists:(id)arg1;
- (void)addItems:(id)arg1;
- (id)childPlaylists;
- (id)childPlaylistsAtIndex:(unsigned int)arg1;
- (unsigned int)childPlaylistsCount;
- (void)clearChildPlaylists;
- (void)clearItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasHidden;
- (BOOL)hasName;
- (BOOL)hasSmartPlaylistInfo;
- (BOOL)hasStoreId;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)hidden;
- (BOOL)isEqual:(id)arg1;
- (id)items;
- (id)itemsAtIndex:(unsigned int)arg1;
- (unsigned int)itemsCount;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setChildPlaylists:(id)arg1;
- (void)setHasHidden:(BOOL)arg1;
- (void)setHasStoreId:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setItems:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSmartPlaylistInfo:(id)arg1;
- (void)setStoreId:(long long)arg1;
- (void)setType:(int)arg1;
- (id)smartPlaylistInfo;
- (long long)storeId;
- (int)type;
- (void)writeTo:(id)arg1;

@end