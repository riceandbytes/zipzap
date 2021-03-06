//
//  ZZZipNewTests.h
//  zipzap
//
//  Created by Glen Low on 4/09/14.
//
//

#import "ZZZipTests.h"

@interface ZZZipNewTests : ZZZipTests

- (void)setUp;
- (void)tearDown;

- (void)testCreatingZipWithNoEntries;
- (void)testCreatingZipEntriesWithDirectory;

- (void)testCreatingZipEntriesWithCompressedData;
- (void)testCreatingZipEntriesWithUncompressedData;

- (void)testCreatingZipEntriesWithCompressedStreamInSmallChunks;
- (void)testCreatingZipEntriesWithCompressedStreamInLargeChunks;
- (void)testCreatingZipEntriesWithUncompressedStreamInSmallChunks;
- (void)testCreatingZipEntriesWithUncompressedStreamInLargeChunks;

- (void)testCreatingZipEntriesWithCompressedImage;
- (void)testCreatingZipEntriesWithUncompressedImage;

- (void)testCreatingZipEntriesWithCompressedBadData;
- (void)testCreatingZipEntriesWithUncompressedBadData;
- (void)testCreatingZipEntriesWithCompressedBadStreamWriteNone;
- (void)testCreatingZipEntriesWithUncompressedBadStreamWriteNone;
- (void)testCreatingZipEntriesWithCompressedBadStreamWriteSome;
- (void)testCreatingZipEntriesWithUncompressedBadStreamWriteSome;
- (void)testCreatingZipEntriesWithCompressedBadDataConsumerWriteNone;
- (void)testCreatingZipEntriesWithUncompressedBadDataConsumerWriteNone;

@end
