/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface _CNCustomActionSheetPresentation : NSObject <CNCustomPresentation, UIActionSheetPresentationControllerDelegate, UIViewControllerTransitioningDelegate> {
    id /* block */  _dismissHandler;
    unsigned int  _permittedArrowDirections;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissHandler;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int permittedArrowDirections;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) UIView *sourceView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg1;
- (id /* block */)dismissHandler;
- (unsigned int)permittedArrowDirections;
- (void)prepareForPresentationOfController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)presentedViewController;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setPermittedArrowDirections:(unsigned int)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (void)setViewController:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (id)viewController;

@end