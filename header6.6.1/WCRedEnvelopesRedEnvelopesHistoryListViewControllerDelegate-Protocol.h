//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCRedEnvelopesReceivedRedEnvelopesInfo, WCRedEnvelopesSendedRedEnvelopesInfo;

@protocol WCRedEnvelopesRedEnvelopesHistoryListViewControllerDelegate <NSObject>
- (void)OnChangeToScene:(int)arg1;
- (void)OnDeleteReceivedRedEnvelopesHistoryItem:(WCRedEnvelopesReceivedRedEnvelopesInfo *)arg1;
- (void)OnDeleteSendedRedEnvelopesHistoryItem:(WCRedEnvelopesSendedRedEnvelopesInfo *)arg1;
- (void)OnDidSelectOtherYear:(NSString *)arg1;
- (void)OnDidSelectReceivedRedEnvelopesHistoryItem:(WCRedEnvelopesReceivedRedEnvelopesInfo *)arg1;
- (void)OnDidSelectSendedRedEnvelopesHistoryItem:(WCRedEnvelopesSendedRedEnvelopesInfo *)arg1;
- (void)OnLoadMoreRedEnvelopesList;
- (_Bool)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesHistoryListViewControllerBack;
@end

