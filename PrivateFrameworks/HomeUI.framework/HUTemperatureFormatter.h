/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTemperatureFormatter : WFTemperatureFormatter <HFTemperatureFormatter, WFTemperatureUnitObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fallbackTemperatureString;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inputIsCelsius;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)inputIsCelsius;
- (void)setInputIsCelsius:(bool)arg1;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2;

@end