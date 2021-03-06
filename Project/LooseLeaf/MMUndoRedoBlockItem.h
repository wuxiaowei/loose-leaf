//
//  MMUndoRedoBlockItem.h
//  LooseLeaf
//
//  Created by Adam Wulf on 7/2/14.
//  Copyright (c) 2014 Milestone Made, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MMUndoRedoItem.h"


@interface MMUndoRedoBlockItem : NSObject <MMUndoRedoItem> {
   @protected
    // YES if the item can undo,
    // NO if it can redo
    BOOL canUndo;
}

@property (nonatomic, readonly) BOOL canUndo;

+ (MMUndoRedoBlockItem*)itemWithUndoBlock:(void (^)())undoBlock andRedoBlock:(void (^)())redoBlock;

- (id)initWithUndoBlock:(void (^)())undoBlock andRedoBlock:(void (^)())redoBlock;


@end
