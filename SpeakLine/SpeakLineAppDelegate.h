//
//  SpeakLineAppDelegate.h
//  SpeakLine
//
//  Created by xiaoqinliu on 13-6-8.
//  Copyright 2013年 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface SpeakLineAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *_window;
    NSSpeechSynthesizer * _speechSynthesizer;
    NSPersistentStoreCoordinator *__persistentStoreCoordinator;
    NSManagedObjectModel *__managedObjectModel;
    NSManagedObjectContext *__managedObjectContext;
    NSTextField *_textLine;
}

@property (strong) IBOutlet NSWindow *window;
- (IBAction)stopit:(id)sender;
- (IBAction)speakit:(id)sender;
@property (strong) IBOutlet NSTextField *textLine;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
