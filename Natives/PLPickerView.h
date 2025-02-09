#import <UIKit/UIKit.h>

@interface UIPickerView(private)
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (UITableView * _Nullable)tableViewForColumn:(NSInteger)column;
@end

@interface PLPickerView : UIPickerView
- (UIImage * _Nullable)imageAtRow:(NSInteger)row column:(NSInteger)column;
@end

@protocol PLPickerViewDelegate<UIPickerViewDelegate>
@required
- (UIImage * _Nullable)pickerView:(PLPickerView * _Nonnull)pickerView imageForRow:(NSInteger)row forComponent:(NSInteger)component;
@end
