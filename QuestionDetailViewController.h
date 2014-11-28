//
//  QuestionDetailViewController.h
//  EasyVote
//
//  Created by Juan Gabriel Gutierrez on 19/11/14.
//  Copyright (c) 2014 Juan Gabriel Gutierrez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QuestionDetailViewController : UIViewController{

    NSString * questionTitle;
    NSString * answerContent;
    NSString * questionId;


}

@property (strong, nonatomic) IBOutlet UITextView *question;
@property (strong, nonatomic) IBOutlet UITextView *answerText;

-(void) setQuestionTitle:(NSString *) title;
-(void) setAnswerContent:(NSString *) content;
-(void) setQuestionId:(NSString *) questionId;

- (IBAction)saveAnswer:(id)sender;


@end
