//
//  QuizViewController.h
//  Quiz
//
//  Created by Sarah Haskins on 5/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QuizViewController : UIViewController 
{
    int currentQuestionIndex;
    
    // The model objects
    NSMutableArray *questions;
    NSMutableArray *answers;
    
    // The view objects
    IBOutlet UILabel *questionField;
    IBOutlet UILabel *answerField;
}

// Actions for the buttons to invoke
- (IBAction)showQuestion:(id)sender;
- (IBAction)showAnswer:(id)sender;

@end
