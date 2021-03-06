//////////////////////////////////////////////////////////////////////////////////////
//
//  Copyright 2012 Freshplanet (http://freshplanet.com | opensource@freshplanet.com)
//  
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//  
//    http://www.apache.org/licenses/LICENSE-2.0
//  
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//  
//////////////////////////////////////////////////////////////////////////////////////

#import "FlashRuntimeExtensions.h"

@interface GoogleCloudStorageUpload : NSObject

+ (id)sharedInstance;

+ (void)dispatchEvent:(NSString *)eventName withInfo:(NSString *)info;
+ (void)log:(NSString *)message;
+ (void)status:(NSString*)code level:(NSString*)level;

@end



// upload
DEFINE_ANE_FUNCTION(uploadImageToServer);
DEFINE_ANE_FUNCTION(uploadVideoToServer);
DEFINE_ANE_FUNCTION(uploadBinaryFileToServer);

// ANE Setup
void GoogleCloudStorageUploadContextInitializer(void* extData, const uint8_t* ctxType, FREContext ctx, uint32_t* numFunctionsToTest, const FRENamedFunction** functionsToSet);
void GoogleCloudStorageUploadContextFinalizer(FREContext ctx);
void GoogleCloudStorageUploadInitializer(void** extDataToSet, FREContextInitializer* ctxInitializerToSet, FREContextFinalizer* ctxFinalizerToSet);
void GoogleCloudStorageUploadFinalizer(void *extData);