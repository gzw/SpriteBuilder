//
//  SKLabelNode.h
//  SpriteBuilder
//
//  Created by Steffen Itterheim on 22/01/14.
//
//

#import "CCLabelTTF.h"

@interface SKLabelNode : CCLabelTTF

// SKNode properties
@property CGSize frameSize;
@property CGFloat alpha;
@property CGFloat speed;
@property CGFloat xScale;
@property CGFloat yScale;
@property CGFloat zRotation;
@property CCSizeType frameSizeType;
@property BOOL hidden;

@end
