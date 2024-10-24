#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MDSMnghaDataSourceCompanion, MDSStatusResponse, MDSResponse<T>, MDSAddBodyInfoDto, MDSKotlinArray<T>, MDSAddExerciseInfoDto, MDSAddGrantAccessDto, MDSHealthStatusDto, MDSAddHomeHealthRequestDto, MDSPart, MDSAddNewPatientDto, MDSAddPCPMessageDto, MDSRefillDto, MDSAddWearableInfoDto, MDSAdmissionStatusResponse, MDSImageLinks, MDSAppointmentRequestDto, MDSCdStatusItem, MDSPatientProfileResponse, MDSAppointmentTypes, MDSEligibilityResponse, MDSAppointmentCheckTypes, MDSCheckNafathLoginDto, MDSCheckNafathLoginResponse, MDSCheckNationalIdDto, MDSCheckNationalIdResponse, MDSRegistrationStatus, MDSCheckReportResults, MDSMonthDates, MDSVCareService, MDSCheckVerifyCodeRequest, MDSMedicationReport, MDSCurrentDrugs, MDSDependentItem, MDSKotlinByteArray, MDSPrescriptionResponse, MDSEligibilityListResponse, MDSAdminSurveyStatusResponse, MDSAppointmentCancellationReason, MDSDoctorEntry, MDSAppointmentsAvailableDate, MDSEligibilityResult, MDSHospital, MDSAvailablePhysicianResponse, MDSBodyInfoPeriod2, MDSBodyInfoPeriod, MDSAppointmentDetails, MDSEmrItem, MDSExerciseItem, MDSExerciseDaily, MDSExercisesPeriod, MDSFeedbackResult, MDSNotificationListResult, MDSLastVisit, MDSPHC, MDSPatientAddressResponse, MDSPatientInfoDto, MDSPendingSurvey, MDSRefillMedicationItem, MDSAppointmentRequest, MDSSANGInfo, MDSVirtualCareDepartment, MDSWearableInfo, MDSHealthStatusAfterVisitResponse, MDSHomeHealthResponse, MDSHomeSupplyOrder, MDSSurveyData, MDSLaboratoryFilteredItem, MDSAuthenticationRequest, MDSAuthenticationResponse, MDSModifyAppointmentDto, MDSMyReviewsResponse, MDSNafathLoginDto, MDSNafathLoginResponse, MDSPathologyItem, MDSPatientCardItem, MDSHospitalInfo, MDSRadiologyItem, MDSPatientInfo, MDSReportReason, MDSRequestCDDto, MDSRequestStatusResults, MDSTeleER, MDSRescheduleAppointmentDto, MDSResetPasswordRequest, MDSRetrieveMedicalNumberRequest, MDSSendDoctorMessageDto, MDSSendMyHealthEmailDto, MDSSendVerificationCodeRequest, MDSSpecialClinicItem, MDSSubmitMedicalReportDto, MDSMedicalReportResult, MDSRequestUpdateNBCDto, MDSSubmitSurveyDto, MDSSuggestionFeatureRequest, MDSSurveyServicesResponse, MDSAppInfo, MDSUpdateGrantAccessDto, MDSUpdatePatientProfileInfoRequest, MDSVaccineReminder, MDSVaccianation, MDSvisitHistory, MDSVisitListResponse, MDSKtor_client_coreHttpClient, MDSServerType, MDSRequestData, MDSResponseIOS, MDSDateInfo, MDSKotlinEnumCompanion, MDSKotlinEnum<E>, MDSDurationTime, MDSEndPoints, MDSExerciseType, MDSJsonConstants, MDSQuestionSelfAssessmentArray, MDSPartCompanion, MDSQuestionSelfAssessmentCompanion, MDSQuestionSelfAssessment, MDSQuestionSelfAssessmentArrayCompanion, MDSStartTime, MDSAddBodyInfoDtoCompanion, MDSAddExerciseInfoDtoCompanion, MDSAddGrantAccessDtoCompanion, MDSAddHomeHealthRequestDtoCompanion, MDSAddNewPatientDtoCompanion, MDSAddPCPMessageDtoCompanion, MDSAddWearableInfoDtoCompanion, MDSAppInfoCompanion, MDSAppointmentRequestDtoCompanion, MDSAuthenticationRequestCompanion, MDSCheckNafathLoginDtoCompanion, MDSCheckNationalIdDtoCompanion, MDSCheckVerifyCodeRequestCompanion, MDSHealthStatusDtoCompanion, MDSImageLinksCompanion, MDSModifyAppointmentDtoCompanion, MDSNafathLoginDtoCompanion, MDSPatientInfoDtoCompanion, MDSRefillDataCompanion, MDSRefillData, MDSRefillDtoCompanion, MDSRequestCDDtoCompanion, MDSRequestUpdateNBCDtoCompanion, MDSRescheduleAppointmentDtoCompanion, MDSResetPasswordRequestCompanion, MDSRetrieveMedicalNumberRequestCompanion, MDSSendDoctorMessageDtoCompanion, MDSSendMyHealthEmailDtoCompanion, MDSSendVerificationCodeRequestCompanion, MDSSubmitMedicalReportDtoCompanion, MDSSubmitSurveyDtoCompanion, MDSSuggestionFeatureRequestCompanion, MDSUpdateGrantAccessDtoCompanion, MDSUpdatePatientProfileInfoRequestCompanion, MDSQuestionDetail, MDSAnswer, MDSAdminSurveyStatusResponseCompanion, MDSAdmissionStatusResponseCompanion, MDSAllergyCompanion, MDSAllergy, MDSAnswerCompanion, MDSAppointmentCancellationReasonCompanion, MDSAppointmentDetailsCompanion, MDSAppointmentRequestCompanion, MDSAppointmentServicesTypes, MDSAppointmentsAvailableDateCompanion, MDSAuthenticationResponseCompanion, MDSAvailablePhysicianResponseCompanion, MDSBodyInfoPeriodCompanion, MDSBodyInfoPeriod2Companion, MDSCdStatusItemCompanion, MDSPersonInfoResponse, MDSCheckNafathLoginResponseCompanion, MDSNafathResultItem, MDSCheckNationalIdResponseCompanion, MDSCheckReportResultsCompanion, MDSCheckTherapyResponseCompanion, MDSCheckTherapyResponse, MDSCurrentDrugsCompanion, MDSSlot, MDSDateItemCompanion, MDSDateItem, MDSDependentItemCompanion, MDSDoctorEntryCompanion, MDSEligibilityCompanion, MDSEligibility, MDSEligibilityItem, MDSEligibilityApiResponseCompanion, MDSEligibilityApiResponse, MDSEligibilityItemCompanion, MDSUpdateNotBc, MDSEligibilityListResponseCompanion, MDSEligibilityResponseCompanion, MDSEligibilityResultCompanion, MDSEmrItemCompanion, MDSExerciseDailyCompanion, MDSExerciseItemCompanion, MDSExercisesPeriodCompanion, MDSFeedbackResultCompanion, MDSHealthCareResultCompanion, MDSHealthCareResult, MDSHealthStatusAfterVisitResponseCompanion, MDSHomeHealthResponseCompanion, MDSHomeSupplyOrderCompanion, MDSHospitalClinic, MDSHospitalCompanion, MDSHospitalClinicCompanion, MDSHospitalInfoCompanion, MDSHospitalItemCompanion, MDSHospitalItem, MDSHospitalNafathItemCompanion, MDSHospitalNafathItem, MDSTestResultRootCompanion, MDSTestResultRoot, MDSLaboratoryResult, MDSLaboratoryFilteredItemCompanion, MDSLaboratoryItemCompanion, MDSLaboratoryItem, MDSLaboratoryResultCompanion, MDSLastVisitResult, MDSPhy, MDSLastVisitCompanion, MDSLastVisitResultCompanion, MDSLoginResponseCompanion, MDSLoginResponse, MDSMedicalReportResultCompanion, MDSMedicationReportCompanion, MDSMonthDatesCompanion, MDSReview, MDSMyReviewsResponseCompanion, MDSNafathLoginResponseCompanion, MDSNafathResultItemCompanion, MDSNotificationItemCompanion, MDSNotificationItem, MDSNotificationListResultCompanion, MDSPHCCompanion, MDSPathologyItemCompanion, MDSPatientAddressResponseCompanion, MDSPatientCardItemCompanion, MDSPatientInfoCompanion, MDSTipInfo, MDSPatientProfileResponseCompanion, MDSPendingSurveyCompanion, MDSPersonResult, MDSPersonInfoResponseCompanion, MDSPersonResultCompanion, MDSPhyCompanion, MDSPreferredTimeCompanion, MDSPreferredTime, MDSPrescriptionResult, MDSPrescriptionResponseCompanion, MDSPrescriptionResultCompanion, MDSPromotionCompanion, MDSPromotion, MDSQuestionDetailCompanion, MDSRadiologyItemCompanion, MDSRefillMedicationItemCompanion, MDSRegionResponseCompanion, MDSRegionResponse, MDSRegistrationStatusCompanion, MDSReportReasonCompanion, MDSRequestStatusResultsCompanion, MDSResultCompanion, MDSResult, MDSReviewCompanion, MDSSANGInfoCompanion, MDSSlotCompanion, MDSSpecialClinicItemCompanion, MDSStatusResponseCompanion, MDSSurveyDataCompanion, MDSSurveyServicesResponseCompanion, MDSTeleERCompanion, MDSTipInfoCompanion, MDSTipInfoResponseCompanion, MDSTipInfoResponse, MDSTokenResponseCompanion, MDSTokenResponse, MDSUpdateNotBcCompanion, MDSVCareServiceCompanion, MDSVaccianationCompanion, MDSVaccineReminderCompanion, MDSVirtualCareDepartmentCompanion, MDSVisitCompanion, MDSVisit, MDSVisitListResponseCompanion, MDSWearableInfoCompanion, MDSvisitHistoryCompanion, MDSCallBackTypes, MDSMnghaDataSource, MDSApiCaller, NSArray, MDSKotlinPair<__covariant A, __covariant B>, MDSKotlinx_datetimeMonth, MDSKotlinx_datetimeLocalDateCompanion, MDSKotlinx_datetimeLocalDate, MDSKotlinx_datetimeDayOfWeek, MDSKotlinThrowable, MDSKotlinException, MDSKotlinRuntimeException, MDSKotlinIllegalStateException, MDSKotlinByteIterator, MDSKtor_client_coreHttpClientEngineConfig, MDSKtor_client_coreHttpClientConfig<T>, MDSKtor_eventsEvents, MDSKtor_client_coreHttpReceivePipeline, MDSKtor_client_coreHttpRequestPipeline, MDSKtor_client_coreHttpResponsePipeline, MDSKtor_client_coreHttpSendPipeline, MDSKtor_client_coreHttpRequestData, MDSKtor_client_coreHttpResponseData, MDSKotlinx_coroutines_coreCoroutineDispatcher, MDSKtor_client_coreProxyConfig, MDSKtor_utilsAttributeKey<T>, MDSKtor_eventsEventDefinition<T>, MDSKtor_utilsPipelinePhase, MDSKtor_utilsPipeline<TSubject, TContext>, MDSKtor_client_coreHttpReceivePipelinePhases, MDSKtor_client_coreHttpResponse, MDSKotlinUnit, MDSKtor_client_coreHttpRequestPipelinePhases, MDSKtor_client_coreHttpRequestBuilder, MDSKtor_client_coreHttpResponsePipelinePhases, MDSKtor_client_coreHttpResponseContainer, MDSKtor_client_coreHttpClientCall, MDSKtor_client_coreHttpSendPipelinePhases, MDSKotlinx_serialization_coreSerializersModule, MDSKotlinx_serialization_coreSerialKind, MDSKotlinNothing, MDSKtor_httpUrl, MDSKtor_httpHttpMethod, MDSKtor_httpOutgoingContent, MDSKtor_httpHttpStatusCode, MDSKtor_utilsGMTDate, MDSKtor_httpHttpProtocolVersion, MDSKotlinAbstractCoroutineContextElement, MDSKotlinx_coroutines_coreCoroutineDispatcherKey, MDSKtor_httpHeadersBuilder, MDSKtor_client_coreHttpRequestBuilderCompanion, MDSKtor_httpURLBuilder, MDSKtor_utilsTypeInfo, MDSKtor_client_coreHttpClientCallCompanion, MDSKtor_httpUrlCompanion, MDSKtor_httpURLProtocol, MDSKtor_httpHttpMethodCompanion, MDSKtor_httpContentType, MDSKotlinCancellationException, MDSKtor_httpHttpStatusCodeCompanion, MDSKtor_utilsGMTDateCompanion, MDSKtor_utilsWeekDay, MDSKtor_utilsMonth, MDSKtor_httpHttpProtocolVersionCompanion, MDSKotlinAbstractCoroutineContextKey<B, E>, MDSKtor_ioMemory, MDSKtor_ioChunkBuffer, MDSKtor_ioBuffer, MDSKtor_ioByteReadPacket, MDSKtor_utilsStringValuesBuilderImpl, MDSKtor_httpURLBuilderCompanion, MDSKtor_httpURLProtocolCompanion, MDSKtor_httpHeaderValueParam, MDSKtor_httpHeaderValueWithParametersCompanion, MDSKtor_httpHeaderValueWithParameters, MDSKtor_httpContentTypeCompanion, MDSKtor_utilsWeekDayCompanion, MDSKtor_utilsMonthCompanion, MDSKtor_ioMemoryCompanion, MDSKtor_ioBufferCompanion, MDSKtor_ioChunkBufferCompanion, MDSKtor_ioInputCompanion, MDSKtor_ioInput, MDSKtor_ioByteReadPacketCompanion, MDSKotlinKTypeProjection, MDSKotlinKVariance, MDSKotlinKTypeProjectionCompanion;

@protocol MDSKotlinx_coroutines_coreFlowCollector, MDSKotlinx_coroutines_coreFlow, MDSCloseable, MDSKotlinCoroutineContext, MDSKotlinx_coroutines_coreCoroutineScope, MDSOnApiCalledCompleted, MDSMultiplatform_settingsSettings, MDSKotlinComparable, MDSKotlinx_serialization_coreKSerializer, MDSKotlinIterator, MDSKotlinCoroutineContextElement, MDSKotlinCoroutineContextKey, MDSKtor_ioCloseable, MDSKtor_client_coreHttpClientEngine, MDSKtor_client_coreHttpClientEngineCapability, MDSKtor_utilsAttributes, MDSKotlinx_serialization_coreEncoder, MDSKotlinx_serialization_coreSerialDescriptor, MDSKotlinx_serialization_coreSerializationStrategy, MDSKotlinx_serialization_coreDecoder, MDSKotlinx_serialization_coreDeserializationStrategy, MDSKtor_client_coreHttpClientPlugin, MDSKotlinx_coroutines_coreDisposableHandle, MDSKotlinSuspendFunction2, MDSKotlinx_serialization_coreCompositeEncoder, MDSKotlinAnnotation, MDSKotlinx_serialization_coreCompositeDecoder, MDSKtor_httpHeaders, MDSKotlinx_coroutines_coreJob, MDSKotlinContinuation, MDSKotlinContinuationInterceptor, MDSKotlinx_coroutines_coreRunnable, MDSKotlinFunction, MDSKtor_httpHttpMessage, MDSKtor_ioByteReadChannel, MDSKtor_httpHttpMessageBuilder, MDSKtor_client_coreHttpRequest, MDSKotlinx_serialization_coreSerializersModuleCollector, MDSKotlinKClass, MDSKtor_httpParameters, MDSKotlinMapEntry, MDSKtor_utilsStringValues, MDSKotlinx_coroutines_coreChildHandle, MDSKotlinx_coroutines_coreChildJob, MDSKotlinSequence, MDSKotlinx_coroutines_coreSelectClause0, MDSKtor_ioReadSession, MDSKotlinSuspendFunction1, MDSKotlinAppendable, MDSKtor_utilsStringValuesBuilder, MDSKtor_httpParametersBuilder, MDSKotlinKType, MDSKotlinKDeclarationContainer, MDSKotlinKAnnotatedElement, MDSKotlinKClassifier, MDSKotlinx_coroutines_coreParentJob, MDSKotlinx_coroutines_coreSelectInstance, MDSKotlinx_coroutines_coreSelectClause, MDSKtor_ioObjectPool;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MDSBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MDSBase (MDSBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MDSMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MDSMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMDSKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MDSNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface MDSByte : MDSNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MDSUByte : MDSNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MDSShort : MDSNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MDSUShort : MDSNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MDSInt : MDSNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MDSUInt : MDSNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MDSLong : MDSNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MDSULong : MDSNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MDSFloat : MDSNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MDSDouble : MDSNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MDSBoolean : MDSNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol MDSKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MDSKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CFlow")))
@interface MDSCFlow<T> : MDSBase <MDSKotlinx_coroutines_coreFlow>

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MDSKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<MDSCloseable>)watchBlock:(void (^)(T))block __attribute__((swift_name("watch(block:)")));
@end

__attribute__((swift_name("Closeable")))
@protocol MDSCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol MDSKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<MDSKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MnghaDataSource")))
@interface MDSMnghaDataSource : MDSBase <MDSKotlinx_coroutines_coreCoroutineScope>
@property (class, readonly, getter=companion) MDSMnghaDataSourceCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)acceptDisclaimerDisclaimerFlag:(BOOL)disclaimerFlag completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("acceptDisclaimer(disclaimerFlag:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addBodyInfoBody:(MDSKotlinArray<MDSAddBodyInfoDto *> *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addBodyInfo(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addExerciseInfoBody:(MDSAddExerciseInfoDto *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addExerciseInfo(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addGrantAccessBody:(MDSAddGrantAccessDto *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addGrantAccess(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addHealthStatusAfterVisitParam:(MDSHealthStatusDto *)param completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addHealthStatusAfterVisit(param:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addHomeHealthRequestBody:(MDSAddHomeHealthRequestDto *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addHomeHealthRequest(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addNewFeedbackFeedbackMessage:(NSString *)feedbackMessage feedbackType:(NSString *)feedbackType pageName:(NSString *)pageName location:(NSString *)location patientEmail:(NSString *)patientEmail facilityFeed:(NSString *)facilityFeed otherFeedBack:(NSString *)otherFeedBack part:(MDSPart * _Nullable)part completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addNewFeedback(feedbackMessage:feedbackType:pageName:location:patientEmail:facilityFeed:otherFeedBack:part:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addNewPatientBody:(MDSAddNewPatientDto *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addNewPatient(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addPCPMessageBody:(MDSAddPCPMessageDto *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addPCPMessage(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addRefillRequestParam:(MDSRefillDto *)param completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addRefillRequest(param:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addWearableInfoBody:(MDSAddWearableInfoDto *)body completionHandler:(void (^)(MDSResponse<MDSLong *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addWearableInfo(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)admissionStatusWithCompletionHandler:(void (^)(MDSResponse<MDSAdmissionStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("admissionStatus(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)applicationSignatureWithCompletionHandler:(void (^)(MDSResponse<MDSImageLinks *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("applicationSignature(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)appointmentRequestBody:(MDSAppointmentRequestDto *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("appointmentRequest(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cancelPCPMessageItemCode:(NSString *)itemCode itemValue:(NSString *)itemValue completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cancelPCPMessage(itemCode:itemValue:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cancelReportRequestId:(int32_t)requestId completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cancelReport(requestId:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cancelRequestAppointmentAppointmentId:(NSString *)appointmentId appointmentType:(NSString *)appointmentType cancelationReason:(NSString *)cancelationReason hospitalCode:(NSString *)hospitalCode completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cancelRequestAppointment(appointmentId:appointmentType:cancelationReason:hospitalCode:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cancelRequestAppointmentDirectCancelationReason:(NSString *)cancelationReason hospitalCode:(NSString *)hospitalCode status:(NSString *)status vaccinationFlag:(BOOL)vaccinationFlag pactId:(NSString *)pactId completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cancelRequestAppointmentDirect(cancelationReason:hospitalCode:status:vaccinationFlag:pactId:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cdStatusPactId:(NSString *)pactId completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSCdStatusItem *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cdStatus(pactId:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkEligibilityPatient:(MDSPatientProfileResponse *)patient normalOrDental:(MDSAppointmentTypes *)normalOrDental completionHandler:(void (^)(MDSResponse<MDSEligibilityResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkEligibility(patient:normalOrDental:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkHourForAppointmentHospitalCode:(NSString *)hospitalCode checkType:(MDSAppointmentCheckTypes *)checkType dentalFlag:(BOOL)dentalFlag employeeFlag:(BOOL)employeeFlag directYn:(BOOL)directYn completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkHourForAppointment(hospitalCode:checkType:dentalFlag:employeeFlag:directYn:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkHourForTeleHealthWithCompletionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkHourForTeleHealth(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkNafathAuthenticationBody:(MDSCheckNafathLoginDto *)body completionHandler:(void (^)(MDSResponse<MDSCheckNafathLoginResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkNafathAuthentication(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkNationalIdBody:(MDSCheckNationalIdDto *)body completionHandler:(void (^)(MDSResponse<MDSCheckNationalIdResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkNationalId(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkPendingAppointmentRequestHospitalCode:(NSString *)hospitalCode iNMedSrvCd:(NSString *)iNMedSrvCd completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkPendingAppointmentRequest(hospitalCode:iNMedSrvCd:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkRefillWithCompletionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkRefill(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkRegistrationStatusWithCompletionHandler:(void (^)(MDSResponse<MDSRegistrationStatus *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkRegistrationStatus(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkReportMDfmClsDtlCd:(NSString *)mDfmClsDtlCd reasonId:(NSString *)reasonId pactId:(NSString *)pactId completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSCheckReportResults *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkReport(mDfmClsDtlCd:reasonId:pactId:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkTherapyInMedrStfNo:(NSString *)inMedrStfNo hospitalCode:(NSString *)hospitalCode hspiTpCd:(NSString *)hspiTpCd completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSMonthDates *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkTherapy(inMedrStfNo:hospitalCode:hspiTpCd:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkVCareEligibilityWithCompletionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkVCareEligibility(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkVCareServicesWithCompletionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSVCareService *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkVCareServices(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkVerificationCodeBody:(MDSCheckVerifyCodeRequest *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkVerificationCode(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)completedReportStartDate:(NSString * _Nullable)startDate endDate:(NSString * _Nullable)endDate pactId:(NSString * _Nullable)pactId completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSMedicationReport *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("completedReport(startDate:endDate:pactId:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)currentDrugsWithCompletionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSCurrentDrugs *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("currentDrugs(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteAllNotificationsWithCompletionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteAllNotifications(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteFeedbackFeedbackId:(int32_t)feedbackId messageType:(NSString *)messageType completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteFeedback(feedbackId:messageType:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteInboxMessagesInboxMessageId:(NSString *)inboxMessageId messageType:(NSString *)messageType completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteInboxMessages(inboxMessageId:messageType:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteNotificationsNotificationId:(NSString *)notificationId messageType:(NSString *)messageType completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteNotifications(notificationId:messageType:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)dependentSwitchAccountPatientId:(NSString *)patientId completionHandler:(void (^)(MDSResponse<MDSPatientProfileResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("dependentSwitchAccount(patientId:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)dependentsListWithCompletionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSDependentItem *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("dependentsList(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)downloadProfilePictureWithCompletionHandler:(void (^)(MDSResponse<MDSKotlinByteArray *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("downloadProfilePicture(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)drugsHistoryFromDate:(NSString *)fromDate toDate:(NSString *)toDate pactTypeCode:(NSString *)pactTypeCode completionHandler:(void (^)(MDSResponse<MDSPrescriptionResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("drugsHistory(fromDate:toDate:pactTypeCode:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)eligibilityListWithCompletionHandler:(void (^)(MDSResponse<MDSEligibilityListResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("eligibilityList(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAdminSurveyStatusPactId:(NSString *)pactId completionHandler:(void (^)(MDSResponse<MDSAdminSurveyStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAdminSurveyStatus(pactId:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAppointmentCancellationReasonsWithCompletionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSAppointmentCancellationReason *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAppointmentCancellationReasons(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAppointmentDatesAndTimesInHisHspTpCd:(NSString *)inHisHspTpCd inMedSrvCd:(NSString *)inMedSrvCd inMpdYn:(BOOL)inMpdYn completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSDoctorEntry *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAppointmentDatesAndTimes(inHisHspTpCd:inMedSrvCd:inMpdYn:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAppointmentsAvailableDatesInHisHspTpCd:(NSString *)inHisHspTpCd inMedSrvCd:(NSString *)inMedSrvCd inMpdYn:(BOOL)inMpdYn completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSAppointmentsAvailableDate *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAppointmentsAvailableDates(inHisHspTpCd:inMedSrvCd:inMpdYn:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAppointmentsHospitalsAndClinicsElg:(MDSEligibilityResult *)elg appointmentTypes:(MDSAppointmentTypes *)appointmentTypes completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSHospital *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAppointmentsHospitalsAndClinics(elg:appointmentTypes:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAvailablePhysicianInMedSrvCd:(NSString *)inMedSrvCd hospitalCode:(NSString *)hospitalCode employeeFlag:(BOOL)employeeFlag iNPhcYn:(BOOL)iNPhcYn completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSAvailablePhysicianResponse *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAvailablePhysician(inMedSrvCd:hospitalCode:employeeFlag:iNPhcYn:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBodyInfoPeriodFromDate:(NSString *)fromDate toDate:(NSString *)toDate itemCode:(NSString *)itemCode completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSBodyInfoPeriod2 *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBodyInfoPeriod(fromDate:toDate:itemCode:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBodyInfoPeriodListFromDate:(NSString *)fromDate toDate:(NSString *)toDate itemCode:(NSString *)itemCode completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSBodyInfoPeriod *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBodyInfoPeriodList(fromDate:toDate:itemCode:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentAppointmentsFromDate:(NSString *)fromDate toDate:(NSString *)toDate hospitalCodes:(NSString *)hospitalCodes dentalFlag:(BOOL)dentalFlag vaccinationFlag:(BOOL)vaccinationFlag teleFlag:(BOOL)teleFlag completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSAppointmentDetails *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentAppointments(fromDate:toDate:hospitalCodes:dentalFlag:vaccinationFlag:teleFlag:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEMRResultsWithCompletionHandler:(void (^)(MDSResponse<MDSEmrItem *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEMRResults(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEducationInfoWithCompletionHandler:(void (^)(MDSResponse<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEducationInfo(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getExerciseItemListWithCompletionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSExerciseItem *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getExerciseItemList(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getExerciseListDailyToDate:(NSString *)toDate completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSExerciseDaily *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getExerciseListDaily(toDate:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getExercisesListPeriodFromDate:(NSString *)fromDate toDate:(NSString *)toDate requestType:(NSString *)requestType completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSExercisesPeriod *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getExercisesListPeriod(fromDate:toDate:requestType:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFeedbackListPageNumber:(int32_t)pageNumber pageSize:(int32_t)pageSize completionHandler:(void (^)(MDSResponse<MDSFeedbackResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFeedbackList(pageNumber:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getHistoryAppointmentsFromDate:(NSString *)fromDate toDate:(NSString *)toDate hospitalCodes:(NSString *)hospitalCodes dentalFlag:(BOOL)dentalFlag vaccinationFlag:(BOOL)vaccinationFlag teleFlag:(BOOL)teleFlag completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSAppointmentDetails *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getHistoryAppointments(fromDate:toDate:hospitalCodes:dentalFlag:vaccinationFlag:teleFlag:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getHomePageDataOnPromotionCompleted:(id<MDSOnApiCalledCompleted>)onPromotionCompleted onUpcomingAppointmentsCompleted:(id<MDSOnApiCalledCompleted>)onUpcomingAppointmentsCompleted onTestResultCompleted:(id<MDSOnApiCalledCompleted>)onTestResultCompleted onCurrentDrugsCompleted:(id<MDSOnApiCalledCompleted>)onCurrentDrugsCompleted completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("getHomePageData(onPromotionCompleted:onUpcomingAppointmentsCompleted:onTestResultCompleted:onCurrentDrugsCompleted:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getInboxListPageNumber:(int32_t)pageNumber pageSize:(int32_t)pageSize completionHandler:(void (^)(MDSResponse<MDSNotificationListResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getInboxList(pageNumber:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLastVisitWithCompletionHandler:(void (^)(MDSResponse<MDSLastVisit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLastVisit(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getNotificationListPageNumber:(int32_t)pageNumber pageSize:(int32_t)pageSize completionHandler:(void (^)(MDSResponse<MDSNotificationListResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getNotificationList(pageNumber:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPHCListWithCompletionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSPHC *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPHCList(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPatientAddressWithCompletionHandler:(void (^)(MDSResponse<MDSPatientAddressResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPatientAddress(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPatientInfoBody:(MDSPatientInfoDto *)body completionHandler:(void (^)(MDSResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPatientInfo(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPatientProfileWithCompletionHandler:(void (^)(MDSResponse<MDSPatientProfileResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPatientProfile(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPendingSurveysWithCompletionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSPendingSurvey *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPendingSurveys(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPreventiveTestListWithCompletionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSPHC *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPreventiveTestList(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRefillMedicationsWithCompletionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSRefillMedicationItem *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRefillMedications(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRequestAppointmentsFromDate:(NSString *)fromDate toDate:(NSString *)toDate dentalFlag:(BOOL)dentalFlag virtualCare:(BOOL)virtualCare completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSAppointmentRequest *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRequestAppointments(fromDate:toDate:dentalFlag:virtualCare:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSANGInfoSangPatientId:(NSString *)sangPatientId mrnNbcUpdate:(NSString *)mrnNbcUpdate mobileNbcUpdate:(NSString *)mobileNbcUpdate completionHandler:(void (^)(MDSResponse<MDSSANGInfo *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSANGInfo(sangPatientId:mrnNbcUpdate:mobileNbcUpdate:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVirtualCareAvailableDepartmentsHospitalCode:(NSString *)hospitalCode completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSVirtualCareDepartment *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVirtualCareAvailableDepartments(hospitalCode:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getWearableInfoFromDate:(NSString *)fromDate toDate:(NSString *)toDate itemCode:(NSString *)itemCode completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSWearableInfo *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getWearableInfo(fromDate:toDate:itemCode:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)healthStatusAfterVisitMessageId:(NSString *)messageId completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSHealthStatusAfterVisitResponse *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("healthStatusAfterVisit(messageId:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)homeHealthRequestsFromDate:(NSString *)fromDate toDate:(NSString *)toDate completionHandler:(void (^)(MDSResponse<MDSHomeHealthResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("homeHealthRequests(fromDate:toDate:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)homeSupplyInfoPactId:(NSString * _Nullable)pactId completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSHomeSupplyOrder *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("homeSupplyInfo(pactId:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)inPatientServicesChatId:(NSString *)chatId completionHandler:(void (^)(MDSResponse<MDSSurveyData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("inPatientServices(chatId:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)laboratoryListFromDate:(NSString *)fromDate toDate:(NSString *)toDate hospitalCodes:(NSString *)hospitalCodes completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSLaboratoryFilteredItem *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("laboratoryList(fromDate:toDate:hospitalCodes:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginBody:(MDSAuthenticationRequest *)body completionHandler:(void (^)(MDSResponse<MDSAuthenticationResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)logoutWithCompletionHandler:(void (^)(MDSResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("logout(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)modifyAppointmentRequestBody:(MDSModifyAppointmentDto *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("modifyAppointmentRequest(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)myReviewsServiceId:(int32_t)serviceId completionHandler:(void (^)(MDSResponse<MDSMyReviewsResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("myReviews(serviceId:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)nafathAuthenticateBody:(MDSNafathLoginDto *)body completionHandler:(void (^)(MDSResponse<MDSNafathLoginResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("nafathAuthenticate(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)parentSwitchAccountWithCompletionHandler:(void (^)(MDSResponse<MDSPatientProfileResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("parentSwitchAccount(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)pathologyListFromDate:(NSString *)fromDate toDate:(NSString *)toDate hospitalCodes:(NSString *)hospitalCodes completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSPathologyItem *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("pathologyList(fromDate:toDate:hospitalCodes:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)patientCardWithCompletionHandler:(void (^)(MDSResponse<MDSPatientCardItem *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("patientCard(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)primaryHealthCareBusinessCenterFlag:(BOOL)businessCenterFlag completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSHospitalInfo *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("primaryHealthCare(businessCenterFlag:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)printAfterVisitReportMessageId:(NSString *)messageId medDeptCd:(NSString *)medDeptCd inMedDrSid:(NSString *)inMedDrSid hospitalCode:(NSString *)hospitalCode medicalDate:(NSString *)medicalDate completionHandler:(void (^)(MDSResponse<MDSKotlinByteArray *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("printAfterVisitReport(messageId:medDeptCd:inMedDrSid:hospitalCode:medicalDate:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)printAppointmentSlipSlipType:(NSString *)slipType pactId:(NSString *)pactId hspiTpCd:(NSString *)hspiTpCd inSchdRsvSeq:(NSString * _Nullable)inSchdRsvSeq hospitalCodes:(NSString *)hospitalCodes completionHandler:(void (^)(MDSResponse<MDSKotlinByteArray *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("printAppointmentSlip(slipType:pactId:hspiTpCd:inSchdRsvSeq:hospitalCodes:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)printLaboratoryResultsFromDate:(NSString *)fromDate toDate:(NSString *)toDate hospitalCodes:(NSString *)hospitalCodes completionHandler:(void (^)(MDSResponse<MDSKotlinByteArray *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("printLaboratoryResults(fromDate:toDate:hospitalCodes:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)printMedicalReportMdrcId:(MDSInt * _Nullable)mdrcId pactId:(NSString * _Nullable)pactId reportType:(NSString * _Nullable)reportType completionHandler:(void (^)(MDSResponse<MDSKotlinByteArray *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("printMedicalReport(mdrcId:pactId:reportType:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)printPrescriptionResultsWithCompletionHandler:(void (^)(MDSResponse<MDSKotlinByteArray *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("printPrescriptionResults(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)printVisitHistoryFromDate:(NSString *)fromDate toDate:(NSString *)toDate hospitalCode:(NSString *)hospitalCode inApcnYn:(BOOL)inApcnYn inSihsYn:(BOOL)inSihsYn completionHandler:(void (^)(MDSResponse<MDSKotlinByteArray *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("printVisitHistory(fromDate:toDate:hospitalCode:inApcnYn:inSihsYn:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)printVisitNotificationReportPatientSector:(NSString *)patientSector messageId:(NSString *)messageId inDate:(NSString *)inDate dsYn:(BOOL)dsYn completionHandler:(void (^)(MDSResponse<MDSKotlinByteArray *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("printVisitNotificationReport(patientSector:messageId:inDate:dsYn:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)radiologyDatesXxmCode:(NSString *)xxmCode hospitalCode:(NSString *)hospitalCode innerHospitalCodeType:(NSString *)innerHospitalCodeType completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSMonthDates *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("radiologyDates(xxmCode:hospitalCode:innerHospitalCodeType:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)radiologyListFromDate:(NSString *)fromDate toDate:(NSString *)toDate hospitalCodes:(NSString *)hospitalCodes completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSRadiologyItem *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("radiologyList(fromDate:toDate:hospitalCodes:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAllNotificationsWithCompletionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAllNotifications(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)relativesListWithCompletionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSPatientInfo *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("relativesList(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reportReasonPactId:(NSString *)pactId completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSReportReason *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reportReason(pactId:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestCDParams:(MDSRequestCDDto *)params completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestCD(params:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestStatusFromDate:(NSString *)fromDate toDate:(NSString *)toDate completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSRequestStatusResults *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestStatus(fromDate:toDate:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestTeleERRequestType:(NSString *)requestType completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSTeleER *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestTeleER(requestType:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)rescheduleAppointmentBody:(MDSRescheduleAppointmentDto *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("rescheduleAppointment(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resetPasswordBody:(MDSResetPasswordRequest *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("resetPassword(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)retrieveMedicalNumberBody:(MDSRetrieveMedicalNumberRequest *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("retrieveMedicalNumber(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendAfterVisitReportMessageId:(NSString *)messageId medDeptCd:(NSString *)medDeptCd inMedDrSid:(NSString *)inMedDrSid hospitalCode:(NSString *)hospitalCode medicalDate:(NSString *)medicalDate completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendAfterVisitReport(messageId:medDeptCd:inMedDrSid:hospitalCode:medicalDate:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendAppointmentSlipSlipType:(NSString *)slipType pactId:(NSString *)pactId hspiTpCd:(NSString *)hspiTpCd inSchdRsvSeq:(NSString * _Nullable)inSchdRsvSeq hospitalCodes:(NSString *)hospitalCodes completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendAppointmentSlip(slipType:pactId:hspiTpCd:inSchdRsvSeq:hospitalCodes:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendDoctorMessageBody:(MDSSendDoctorMessageDto *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendDoctorMessage(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendLaboratoryResultsFromDate:(NSString *)fromDate toDate:(NSString *)toDate hospitalCodes:(NSString *)hospitalCodes completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendLaboratoryResults(fromDate:toDate:hospitalCodes:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendMedicalReportMdrcId:(MDSInt * _Nullable)mdrcId pactId:(NSString * _Nullable)pactId reportType:(NSString * _Nullable)reportType completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendMedicalReport(mdrcId:pactId:reportType:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendMyHealthEmailBody:(MDSSendMyHealthEmailDto *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendMyHealthEmail(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendPrescriptionResultsWithCompletionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendPrescriptionResults(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendVerificationCodeBody:(MDSSendVerificationCodeRequest *)body completionHandler:(void (^)(MDSResponse<MDSAuthenticationResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendVerificationCode(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendVisitHistoryFromDate:(NSString *)fromDate toDate:(NSString *)toDate hospitalCode:(NSString *)hospitalCode apcnYn:(BOOL)apcnYn sihsYn:(BOOL)sihsYn completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendVisitHistory(fromDate:toDate:hospitalCode:apcnYn:sihsYn:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendVisitNotificationReportPatientSector:(NSString *)patientSector messageId:(NSString *)messageId inDate:(NSString *)inDate dsYn:(BOOL)dsYn completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendVisitNotificationReport(patientSector:messageId:inDate:dsYn:completionHandler:)")));
- (void)setLangLang:(NSString *)lang __attribute__((swift_name("setLang(lang:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)specialClinicListFromDate:(NSString *)fromDate toDate:(NSString *)toDate hospitalCodes:(NSString *)hospitalCodes completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSSpecialClinicItem *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("specialClinicList(fromDate:toDate:hospitalCodes:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)submitMedicalReportBody:(MDSSubmitMedicalReportDto *)body completionHandler:(void (^)(MDSResponse<MDSMedicalReportResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("submitMedicalReport(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)submitRequestUpdateNBCParam:(MDSRequestUpdateNBCDto *)param completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("submitRequestUpdateNBC(param:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)submitSurveyBody:(MDSSubmitSurveyDto *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("submitSurvey(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)suggestionFeatureBody:(MDSSuggestionFeatureRequest *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("suggestionFeature(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)surveyServicesWithCompletionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSSurveyServicesResponse *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("surveyServices(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateDeviceTokenBody:(MDSAppInfo *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateDeviceToken(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateGrantAccessBody:(MDSUpdateGrantAccessDto *)body completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateGrantAccess(body:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateInboxMessagesInboxMessageId:(NSString *)inboxMessageId messageType:(NSString *)messageType completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateInboxMessages(inboxMessageId:messageType:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateNotificationChatId:(NSString *)chatId completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateNotification(chatId:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateNotificationsNotificationId:(NSString *)notificationId messageType:(NSString *)messageType completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateNotifications(notificationId:messageType:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updatePatientProfileInfoParams:(MDSUpdatePatientProfileInfoRequest *)params completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updatePatientProfileInfo(params:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateSurveyEvaluationSurveyId:(int32_t)surveyId serviceEvaluation:(int32_t)serviceEvaluation comment:(NSString *)comment platform:(NSString *)platform completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateSurveyEvaluation(surveyId:serviceEvaluation:comment:platform:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateSurveyOptionsServiceNYL:(NSString *)serviceNYL completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateSurveyOptions(serviceNYL:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateTestGroupWithCompletionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateTestGroup(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateTipMessageTipId:(NSString *)tipId completionHandler:(void (^)(MDSResponse<MDSStatusResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateTipMessage(tipId:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateVaccineReminderEnableVaccineNotification:(BOOL)enableVaccineNotification completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSVaccineReminder *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateVaccineReminder(enableVaccineNotification:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)vaccinationListWithCompletionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSVaccianation *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("vaccinationList(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)visitHistoryListFromDate:(NSString *)fromDate toDate:(NSString *)toDate hospitalCodes:(NSString *)hospitalCodes completionHandler:(void (^)(MDSResponse<MDSKotlinArray<MDSvisitHistory *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("visitHistoryList(fromDate:toDate:hospitalCodes:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)visitListHospitalCode:(NSString *)hospitalCode completionHandler:(void (^)(MDSResponse<MDSVisitListResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("visitList(hospitalCode:completionHandler:)")));
@property (readonly) id<MDSKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MnghaDataSource.Companion")))
@interface MDSMnghaDataSourceCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSMnghaDataSourceCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiCaller")))
@interface MDSApiCaller : MDSBase
- (instancetype)initWithHttpClient:(MDSKtor_client_coreHttpClient *)httpClient settings:(id<MDSMultiplatform_settingsSettings>)settings serverType:(MDSServerType *)serverType __attribute__((swift_name("init(httpClient:settings:serverType:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEndPoint:(NSString *)endPoint completionHandler:(void (^)(MDSResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(endPoint:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEndPoint:(NSString *)endPoint params:(NSDictionary<NSString *, id> *)params completionHandler:(void (^)(MDSResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(endPoint:params:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postEndPoint:(NSString *)endPoint body:(id _Nullable)body completionHandler:(void (^)(MDSResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("post(endPoint:body:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)post_MultiPartEndPoint:(NSString *)endPoint body:(MDSMutableDictionary<NSString *, id> *)body completionHandler:(void (^)(MDSResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("post_MultiPart(endPoint:body:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putEndPoint:(NSString *)endPoint body:(id _Nullable)body completionHandler:(void (^)(MDSResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("put(endPoint:body:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putEndPoint:(NSString *)endPoint params:(NSDictionary<NSString *, NSString *> *)params completionHandler:(void (^)(MDSResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("put(endPoint:params:completionHandler:)")));
@property (readonly) MDSKtor_client_coreHttpClient *httpClient __attribute__((swift_name("httpClient")));
@property (readonly) MDSRequestData *requestData __attribute__((swift_name("requestData")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiCallerIOS")))
@interface MDSApiCallerIOS : MDSBase
- (instancetype)initWithHttpClient:(MDSKtor_client_coreHttpClient *)httpClient settings:(id<MDSMultiplatform_settingsSettings>)settings serverType:(MDSServerType *)serverType __attribute__((swift_name("init(httpClient:settings:serverType:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEndPoint:(NSString *)endPoint completionHandler:(void (^)(MDSResponseIOS * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(endPoint:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEndPoint:(NSString *)endPoint params:(NSDictionary<NSString *, NSString *> *)params completionHandler:(void (^)(MDSResponseIOS * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(endPoint:params:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postEndPoint:(NSString *)endPoint body:(id _Nullable)body completionHandler:(void (^)(MDSResponseIOS * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("post(endPoint:body:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)post_MultiPartEndPoint:(NSString *)endPoint body:(MDSMutableDictionary<NSString *, id> *)body completionHandler:(void (^)(MDSResponseIOS * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("post_MultiPart(endPoint:body:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putEndPoint:(NSString *)endPoint params:(NSDictionary<NSString *, NSString *> *)params completionHandler:(void (^)(MDSResponseIOS * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("put(endPoint:params:completionHandler:)")));
@property (readonly) MDSKtor_client_coreHttpClient *httpClient __attribute__((swift_name("httpClient")));
@property (readonly) MDSRequestData *requestData __attribute__((swift_name("requestData")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateInfo")))
@interface MDSDateInfo : MDSBase
- (instancetype)initWithDayNo:(int32_t)dayNo dayName:(NSString *)dayName monthNo:(int32_t)monthNo monthName:(NSString *)monthName year:(int32_t)year __attribute__((swift_name("init(dayNo:dayName:monthNo:monthName:year:)"))) __attribute__((objc_designated_initializer));
- (MDSDateInfo *)doCopyDayNo:(int32_t)dayNo dayName:(NSString *)dayName monthNo:(int32_t)monthNo monthName:(NSString *)monthName year:(int32_t)year __attribute__((swift_name("doCopy(dayNo:dayName:monthNo:monthName:year:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dayName __attribute__((swift_name("dayName")));
@property (readonly) int32_t dayNo __attribute__((swift_name("dayNo")));
@property (readonly) NSString *monthName __attribute__((swift_name("monthName")));
@property (readonly) int32_t monthNo __attribute__((swift_name("monthNo")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol MDSKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface MDSKotlinEnum<E> : MDSBase <MDSKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DurationTime")))
@interface MDSDurationTime : MDSKotlinEnum<MDSDurationTime *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MDSDurationTime *min0 __attribute__((swift_name("min0")));
@property (class, readonly) MDSDurationTime *min10 __attribute__((swift_name("min10")));
@property (class, readonly) MDSDurationTime *min20 __attribute__((swift_name("min20")));
@property (class, readonly) MDSDurationTime *min30 __attribute__((swift_name("min30")));
@property (class, readonly) MDSDurationTime *min40 __attribute__((swift_name("min40")));
@property (class, readonly) MDSDurationTime *min50 __attribute__((swift_name("min50")));
@property (class, readonly) MDSDurationTime *min60 __attribute__((swift_name("min60")));
@property (class, readonly) MDSDurationTime *hour110min __attribute__((swift_name("hour110min")));
@property (class, readonly) MDSDurationTime *hour120min __attribute__((swift_name("hour120min")));
@property (class, readonly) MDSDurationTime *hour130min __attribute__((swift_name("hour130min")));
@property (class, readonly) MDSDurationTime *hour140min __attribute__((swift_name("hour140min")));
@property (class, readonly) MDSDurationTime *hour150min __attribute__((swift_name("hour150min")));
@property (class, readonly) MDSDurationTime *hour2 __attribute__((swift_name("hour2")));
@property (class, readonly) MDSDurationTime *hour210min __attribute__((swift_name("hour210min")));
@property (class, readonly) MDSDurationTime *hour220min __attribute__((swift_name("hour220min")));
@property (class, readonly) MDSDurationTime *hour230min __attribute__((swift_name("hour230min")));
@property (class, readonly) MDSDurationTime *hour240min __attribute__((swift_name("hour240min")));
@property (class, readonly) MDSDurationTime *hour250min __attribute__((swift_name("hour250min")));
@property (class, readonly) MDSDurationTime *hour3 __attribute__((swift_name("hour3")));
@property (class, readonly) MDSDurationTime *hour310min __attribute__((swift_name("hour310min")));
@property (class, readonly) MDSDurationTime *hour320min __attribute__((swift_name("hour320min")));
@property (class, readonly) MDSDurationTime *hour330min __attribute__((swift_name("hour330min")));
@property (class, readonly) MDSDurationTime *hour340min __attribute__((swift_name("hour340min")));
@property (class, readonly) MDSDurationTime *hour350min __attribute__((swift_name("hour350min")));
@property (class, readonly) MDSDurationTime *hour4 __attribute__((swift_name("hour4")));
@property (class, readonly) MDSDurationTime *hour410min __attribute__((swift_name("hour410min")));
@property (class, readonly) MDSDurationTime *hour420min __attribute__((swift_name("hour420min")));
@property (class, readonly) MDSDurationTime *hour430min __attribute__((swift_name("hour430min")));
@property (class, readonly) MDSDurationTime *hour440min __attribute__((swift_name("hour440min")));
@property (class, readonly) MDSDurationTime *hour450min __attribute__((swift_name("hour450min")));
@property (class, readonly) MDSDurationTime *hour5 __attribute__((swift_name("hour5")));
+ (MDSKotlinArray<MDSDurationTime *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MDSDurationTime *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *durationTime __attribute__((swift_name("durationTime")));
@property (readonly) NSString *durationTimeArabic __attribute__((swift_name("durationTimeArabic")));
@property (readonly) NSString *durationTimeId __attribute__((swift_name("durationTimeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EndPoints")))
@interface MDSEndPoints : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)endPoints __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSEndPoints *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *AcceptDisclaimer __attribute__((swift_name("AcceptDisclaimer")));
@property (readonly) NSString *AddBodyInfo __attribute__((swift_name("AddBodyInfo")));
@property (readonly) NSString *AddExerciseInfo __attribute__((swift_name("AddExerciseInfo")));
@property (readonly) NSString *AddGrantAccess __attribute__((swift_name("AddGrantAccess")));
@property (readonly) NSString *AddHealthStatusAfterVisit __attribute__((swift_name("AddHealthStatusAfterVisit")));
@property (readonly) NSString *AddHomeHealthRequest __attribute__((swift_name("AddHomeHealthRequest")));
@property (readonly) NSString *AddNewFeedback __attribute__((swift_name("AddNewFeedback")));
@property (readonly) NSString *AddNewPatient __attribute__((swift_name("AddNewPatient")));
@property (readonly) NSString *AddPCPMessage __attribute__((swift_name("AddPCPMessage")));
@property (readonly) NSString *AddRefillRequest __attribute__((swift_name("AddRefillRequest")));
@property (readonly) NSString *AddWearableInfo __attribute__((swift_name("AddWearableInfo")));
@property (readonly) NSString *AdmissionStatus __attribute__((swift_name("AdmissionStatus")));
@property (readonly) NSString *ApplicationSignature __attribute__((swift_name("ApplicationSignature")));
@property (readonly) NSString *AppointmentCancellationReasons __attribute__((swift_name("AppointmentCancellationReasons")));
@property (readonly) NSString *AppointmentRequest __attribute__((swift_name("AppointmentRequest")));
@property (readonly) NSString *AppointmentsHospitalsAndClinics __attribute__((swift_name("AppointmentsHospitalsAndClinics")));
@property (readonly) NSString *Auth __attribute__((swift_name("Auth")));
@property (readonly) NSString *AvailablePhysician __attribute__((swift_name("AvailablePhysician")));
@property (readonly) NSString *BodyInfoPeriod __attribute__((swift_name("BodyInfoPeriod")));
@property (readonly) NSString *BodyInfoPeriodList __attribute__((swift_name("BodyInfoPeriodList")));
@property (readonly) NSString *CancelPCPMessage __attribute__((swift_name("CancelPCPMessage")));
@property (readonly) NSString *CancelReport __attribute__((swift_name("CancelReport")));
@property (readonly) NSString *CancelRequestAppointment __attribute__((swift_name("CancelRequestAppointment")));
@property (readonly) NSString *CancelRequestAppointmentDirect __attribute__((swift_name("CancelRequestAppointmentDirect")));
@property (readonly) NSString *CdStatus __attribute__((swift_name("CdStatus")));
@property (readonly) NSString *CheckAuthentication __attribute__((swift_name("CheckAuthentication")));
@property (readonly) NSString *CheckEligibility __attribute__((swift_name("CheckEligibility")));
@property (readonly) NSString *CheckHourForAppointment __attribute__((swift_name("CheckHourForAppointment")));
@property (readonly) NSString *CheckNationalId __attribute__((swift_name("CheckNationalId")));
@property (readonly) NSString *CheckPendingAppointmentRequest __attribute__((swift_name("CheckPendingAppointmentRequest")));
@property (readonly) NSString *CheckRefill __attribute__((swift_name("CheckRefill")));
@property (readonly) NSString *CheckRegistrationStatus __attribute__((swift_name("CheckRegistrationStatus")));
@property (readonly) NSString *CheckReport __attribute__((swift_name("CheckReport")));
@property (readonly) NSString *CheckTherapy __attribute__((swift_name("CheckTherapy")));
@property (readonly) NSString *CheckVCareEligibility __attribute__((swift_name("CheckVCareEligibility")));
@property (readonly) NSString *CheckVCareServices __attribute__((swift_name("CheckVCareServices")));
@property (readonly) NSString *CheckVerificationCode __attribute__((swift_name("CheckVerificationCode")));
@property (readonly) NSString *CompletedReport __attribute__((swift_name("CompletedReport")));
@property (readonly) NSString *CurrentAppointments __attribute__((swift_name("CurrentAppointments")));
@property (readonly) NSString *CurrentDrugs __attribute__((swift_name("CurrentDrugs")));
@property (readonly) NSString *DeleteAllNotifications __attribute__((swift_name("DeleteAllNotifications")));
@property (readonly) NSString *DeleteFeedback __attribute__((swift_name("DeleteFeedback")));
@property (readonly) NSString *DeleteInboxMessages __attribute__((swift_name("DeleteInboxMessages")));
@property (readonly) NSString *DeleteNotification __attribute__((swift_name("DeleteNotification")));
@property (readonly) NSString *DependentSwitchAccount __attribute__((swift_name("DependentSwitchAccount")));
@property (readonly) NSString *DependentsList __attribute__((swift_name("DependentsList")));
@property (readonly) NSString *DoctorsAppointmentDatesAndTimes __attribute__((swift_name("DoctorsAppointmentDatesAndTimes")));
@property (readonly) NSString *DownloadProfilePicture __attribute__((swift_name("DownloadProfilePicture")));
@property (readonly) NSString *DrugsHistory __attribute__((swift_name("DrugsHistory")));
@property (readonly) NSString *EMRResults __attribute__((swift_name("EMRResults")));
@property (readonly) NSString *EligibilityList __attribute__((swift_name("EligibilityList")));
@property (readonly) NSString *ExerciseItemList __attribute__((swift_name("ExerciseItemList")));
@property (readonly) NSString *ExerciseListDaily __attribute__((swift_name("ExerciseListDaily")));
@property (readonly) NSString *ExercisesListPeriod __attribute__((swift_name("ExercisesListPeriod")));
@property (readonly) NSString *FeedbackList __attribute__((swift_name("FeedbackList")));
@property (readonly) NSString *GetAdminSurveyStatus __attribute__((swift_name("GetAdminSurveyStatus")));
@property (readonly) NSString *GetAppointmentsAvailableDates __attribute__((swift_name("GetAppointmentsAvailableDates")));
@property (readonly) NSString *GetEducationInfo __attribute__((swift_name("GetEducationInfo")));
@property (readonly) NSString *GetLastVisit __attribute__((swift_name("GetLastVisit")));
@property (readonly) NSString *GetPendingSurveys __attribute__((swift_name("GetPendingSurveys")));
@property (readonly) NSString *GetRefillMedications __attribute__((swift_name("GetRefillMedications")));
@property (readonly) NSString *GetSANGInfo __attribute__((swift_name("GetSANGInfo")));
@property (readonly) NSString *GetWearableInfo __attribute__((swift_name("GetWearableInfo")));
@property (readonly) NSString *HealthStatusAfterVisit __attribute__((swift_name("HealthStatusAfterVisit")));
@property (readonly) NSString *HistoryAppointments __attribute__((swift_name("HistoryAppointments")));
@property (readonly) NSString *HomeHealthRequests __attribute__((swift_name("HomeHealthRequests")));
@property (readonly) NSString *HomeSupplyInfo __attribute__((swift_name("HomeSupplyInfo")));
@property (readonly) NSString *InPatientServices __attribute__((swift_name("InPatientServices")));
@property (readonly) NSString *InboxList __attribute__((swift_name("InboxList")));
@property (readonly) NSString *LaboratoryList __attribute__((swift_name("LaboratoryList")));
@property (readonly) NSString *LatestCurrentDrugs __attribute__((swift_name("LatestCurrentDrugs")));
@property (readonly) NSString *LatestTestResult __attribute__((swift_name("LatestTestResult")));
@property (readonly) NSString *LatestUpcomingAppointments __attribute__((swift_name("LatestUpcomingAppointments")));
@property (readonly) NSString *Logout __attribute__((swift_name("Logout")));
@property (readonly) NSString *ModifyAppointmentRequest __attribute__((swift_name("ModifyAppointmentRequest")));
@property (readonly) NSString *MyReviews __attribute__((swift_name("MyReviews")));
@property (readonly) NSString *NAfathAuthenticate __attribute__((swift_name("NAfathAuthenticate")));
@property (readonly) NSString *NotificationList __attribute__((swift_name("NotificationList")));
@property (readonly) NSString *PHCList __attribute__((swift_name("PHCList")));
@property (readonly) NSString *ParentSwitchAccount __attribute__((swift_name("ParentSwitchAccount")));
@property (readonly) NSString *PathologyList __attribute__((swift_name("PathologyList")));
@property (readonly) NSString *PatientCard __attribute__((swift_name("PatientCard")));
@property (readonly) NSString *PatientInfo __attribute__((swift_name("PatientInfo")));
@property (readonly) NSString *PatientProfile __attribute__((swift_name("PatientProfile")));
@property (readonly) NSString *PreventiveTestList __attribute__((swift_name("PreventiveTestList")));
@property (readonly) NSString *PrimaryHealthCare __attribute__((swift_name("PrimaryHealthCare")));
@property (readonly) NSString *PrintAfterVisitReport __attribute__((swift_name("PrintAfterVisitReport")));
@property (readonly) NSString *PrintAppointmentSlip __attribute__((swift_name("PrintAppointmentSlip")));
@property (readonly) NSString *PrintLaboratoryResults __attribute__((swift_name("PrintLaboratoryResults")));
@property (readonly) NSString *PrintMedicalReport __attribute__((swift_name("PrintMedicalReport")));
@property (readonly) NSString *PrintPrescriptionResults __attribute__((swift_name("PrintPrescriptionResults")));
@property (readonly) NSString *PrintVisitHistory __attribute__((swift_name("PrintVisitHistory")));
@property (readonly) NSString *PrintVisitNotificationReport __attribute__((swift_name("PrintVisitNotificationReport")));
@property (readonly) NSString *Promotions __attribute__((swift_name("Promotions")));
@property (readonly) NSString *RadiologyDates __attribute__((swift_name("RadiologyDates")));
@property (readonly) NSString *RadiologyList __attribute__((swift_name("RadiologyList")));
@property (readonly) NSString *ReadAllNotifications __attribute__((swift_name("ReadAllNotifications")));
@property (readonly) NSString *ReadNotification __attribute__((swift_name("ReadNotification")));
@property (readonly) NSString *Region __attribute__((swift_name("Region")));
@property (readonly) NSString *RelativesList __attribute__((swift_name("RelativesList")));
@property (readonly) NSString *ReportReason __attribute__((swift_name("ReportReason")));
@property (readonly) NSString *RequestAppointments __attribute__((swift_name("RequestAppointments")));
@property (readonly) NSString *RequestCD __attribute__((swift_name("RequestCD")));
@property (readonly) NSString *RequestStatus __attribute__((swift_name("RequestStatus")));
@property (readonly) NSString *RequestTeleER __attribute__((swift_name("RequestTeleER")));
@property (readonly) NSString *RescheduleAppointment __attribute__((swift_name("RescheduleAppointment")));
@property (readonly) NSString *ResetPassword __attribute__((swift_name("ResetPassword")));
@property (readonly) NSString *RetrieveMedicalNumber __attribute__((swift_name("RetrieveMedicalNumber")));
@property (readonly) NSString *SendAfterVisitReport __attribute__((swift_name("SendAfterVisitReport")));
@property (readonly) NSString *SendAppointmentSlip __attribute__((swift_name("SendAppointmentSlip")));
@property (readonly) NSString *SendDoctorMessage __attribute__((swift_name("SendDoctorMessage")));
@property (readonly) NSString *SendLaboratoryResults __attribute__((swift_name("SendLaboratoryResults")));
@property (readonly) NSString *SendMedicalReport __attribute__((swift_name("SendMedicalReport")));
@property (readonly) NSString *SendMyHealthEmail __attribute__((swift_name("SendMyHealthEmail")));
@property (readonly) NSString *SendPrescriptionResults __attribute__((swift_name("SendPrescriptionResults")));
@property (readonly) NSString *SendVerificationCode __attribute__((swift_name("SendVerificationCode")));
@property (readonly) NSString *SendVisitHistory __attribute__((swift_name("SendVisitHistory")));
@property (readonly) NSString *SendVisitNotificationReport __attribute__((swift_name("SendVisitNotificationReport")));
@property (readonly) NSString *SpecialClinicList __attribute__((swift_name("SpecialClinicList")));
@property (readonly) NSString *SubmitMedicalReport __attribute__((swift_name("SubmitMedicalReport")));
@property (readonly) NSString *SubmitRequestUpdateNBC __attribute__((swift_name("SubmitRequestUpdateNBC")));
@property (readonly) NSString *SubmitSurvey __attribute__((swift_name("SubmitSurvey")));
@property (readonly) NSString *SuggestionFeature __attribute__((swift_name("SuggestionFeature")));
@property (readonly) NSString *SurveyServices __attribute__((swift_name("SurveyServices")));
@property (readonly) NSString *UpdateDeviceToken __attribute__((swift_name("UpdateDeviceToken")));
@property (readonly) NSString *UpdateGrantAccess __attribute__((swift_name("UpdateGrantAccess")));
@property (readonly) NSString *UpdateInboxMessages __attribute__((swift_name("UpdateInboxMessages")));
@property (readonly) NSString *UpdateNotification __attribute__((swift_name("UpdateNotification")));
@property (readonly) NSString *UpdatePatientProfileInfo __attribute__((swift_name("UpdatePatientProfileInfo")));
@property (readonly) NSString *UpdateSurveyEvaluation __attribute__((swift_name("UpdateSurveyEvaluation")));
@property (readonly) NSString *UpdateSurveyOptions __attribute__((swift_name("UpdateSurveyOptions")));
@property (readonly) NSString *UpdateTestGroup __attribute__((swift_name("UpdateTestGroup")));
@property (readonly) NSString *UpdateTipMessage __attribute__((swift_name("UpdateTipMessage")));
@property (readonly) NSString *UpdateVaccineReminder __attribute__((swift_name("UpdateVaccineReminder")));
@property (readonly) NSString *VaccinationList __attribute__((swift_name("VaccinationList")));
@property (readonly) NSString *VirtualCareAvailableDepartments __attribute__((swift_name("VirtualCareAvailableDepartments")));
@property (readonly) NSString *VisitHistoryList __attribute__((swift_name("VisitHistoryList")));
@property (readonly) NSString *VisitList __attribute__((swift_name("VisitList")));
@property (readonly) NSString *getPatientAddress __attribute__((swift_name("getPatientAddress")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExerciseType")))
@interface MDSExerciseType : MDSKotlinEnum<MDSExerciseType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MDSExerciseType *walkingWeakly __attribute__((swift_name("walkingWeakly")));
@property (class, readonly) MDSExerciseType *walkingModerately __attribute__((swift_name("walkingModerately")));
@property (class, readonly) MDSExerciseType *walkingStrongly __attribute__((swift_name("walkingStrongly")));
@property (class, readonly) MDSExerciseType *mountaineeringWeakly __attribute__((swift_name("mountaineeringWeakly")));
@property (class, readonly) MDSExerciseType *mountaineeringModerately __attribute__((swift_name("mountaineeringModerately")));
@property (class, readonly) MDSExerciseType *mountaineeringStrongly __attribute__((swift_name("mountaineeringStrongly")));
@property (class, readonly) MDSExerciseType *bicycleWeakly __attribute__((swift_name("bicycleWeakly")));
@property (class, readonly) MDSExerciseType *bicycleStrongly __attribute__((swift_name("bicycleStrongly")));
@property (class, readonly) MDSExerciseType *stretching __attribute__((swift_name("stretching")));
@property (class, readonly) MDSExerciseType *aerobics __attribute__((swift_name("aerobics")));
@property (class, readonly) MDSExerciseType *badminton __attribute__((swift_name("badminton")));
@property (class, readonly) MDSExerciseType *dance __attribute__((swift_name("dance")));
@property (class, readonly) MDSExerciseType *soccer __attribute__((swift_name("soccer")));
@property (class, readonly) MDSExerciseType *tableTennis __attribute__((swift_name("tableTennis")));
@property (class, readonly) MDSExerciseType *tennis __attribute__((swift_name("tennis")));
@property (class, readonly) MDSExerciseType *fitness __attribute__((swift_name("fitness")));
@property (class, readonly) MDSExerciseType *golf __attribute__((swift_name("golf")));
@property (class, readonly) MDSExerciseType *swimFreeStyle __attribute__((swift_name("swimFreeStyle")));
@property (class, readonly) MDSExerciseType *swimBackstroke __attribute__((swift_name("swimBackstroke")));
@property (class, readonly) MDSExerciseType *swimButterfly __attribute__((swift_name("swimButterfly")));
@property (class, readonly) MDSExerciseType *swimBreaststroke __attribute__((swift_name("swimBreaststroke")));
+ (MDSKotlinArray<MDSExerciseType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MDSExerciseType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *exerciseId __attribute__((swift_name("exerciseId")));
@property (readonly) NSString *exerciseNameAr __attribute__((swift_name("exerciseNameAr")));
@property (readonly) NSString *exerciseNameEn __attribute__((swift_name("exerciseNameEn")));
@property (readonly) double exerciseValue __attribute__((swift_name("exerciseValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonConstants")))
@interface MDSJsonConstants : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jsonConstants __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSJsonConstants *shared __attribute__((swift_name("shared")));
- (MDSQuestionSelfAssessmentArray *)getExampleData __attribute__((swift_name("getExampleData()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Part")))
@interface MDSPart : MDSBase
- (instancetype)initWithFile:(MDSKotlinByteArray *)file fileName:(NSString *)fileName fileExtension:(NSString *)fileExtension __attribute__((swift_name("init(file:fileName:fileExtension:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSPartCompanion *companion __attribute__((swift_name("companion")));
- (MDSPart *)doCopyFile:(MDSKotlinByteArray *)file fileName:(NSString *)fileName fileExtension:(NSString *)fileExtension __attribute__((swift_name("doCopy(file:fileName:fileExtension:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSKotlinByteArray *file __attribute__((swift_name("file")));
@property (readonly) NSString *fileExtension __attribute__((swift_name("fileExtension")));
@property (readonly) NSString *fileName __attribute__((swift_name("fileName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Part.Companion")))
@interface MDSPartCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSPartCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuestionSelfAssessment")))
@interface MDSQuestionSelfAssessment : MDSBase
- (instancetype)initWithId:(MDSInt * _Nullable)id questionen:(NSString * _Nullable)questionen questionar:(NSString * _Nullable)questionar answersen:(MDSKotlinArray<NSString *> * _Nullable)answersen answersar:(MDSKotlinArray<NSString *> * _Nullable)answersar selectedAnswer:(MDSInt * _Nullable)selectedAnswer __attribute__((swift_name("init(id:questionen:questionar:answersen:answersar:selectedAnswer:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSQuestionSelfAssessmentCompanion *companion __attribute__((swift_name("companion")));
- (MDSQuestionSelfAssessment *)doCopyId:(MDSInt * _Nullable)id questionen:(NSString * _Nullable)questionen questionar:(NSString * _Nullable)questionar answersen:(MDSKotlinArray<NSString *> * _Nullable)answersen answersar:(MDSKotlinArray<NSString *> * _Nullable)answersar selectedAnswer:(MDSInt * _Nullable)selectedAnswer __attribute__((swift_name("doCopy(id:questionen:questionar:answersen:answersar:selectedAnswer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSKotlinArray<NSString *> * _Nullable answersar __attribute__((swift_name("answersar")));
@property (readonly) MDSKotlinArray<NSString *> * _Nullable answersen __attribute__((swift_name("answersen")));
@property (readonly) MDSInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable questionar __attribute__((swift_name("questionar")));
@property (readonly) NSString * _Nullable questionen __attribute__((swift_name("questionen")));
@property MDSInt * _Nullable selectedAnswer __attribute__((swift_name("selectedAnswer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuestionSelfAssessment.Companion")))
@interface MDSQuestionSelfAssessmentCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSQuestionSelfAssessmentCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuestionSelfAssessmentArray")))
@interface MDSQuestionSelfAssessmentArray : MDSBase
- (instancetype)initWithQuestionsSelfAssessmentModels:(MDSKotlinArray<MDSQuestionSelfAssessment *> * _Nullable)questionsSelfAssessmentModels __attribute__((swift_name("init(questionsSelfAssessmentModels:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSQuestionSelfAssessmentArrayCompanion *companion __attribute__((swift_name("companion")));
- (MDSQuestionSelfAssessmentArray *)doCopyQuestionsSelfAssessmentModels:(MDSKotlinArray<MDSQuestionSelfAssessment *> * _Nullable)questionsSelfAssessmentModels __attribute__((swift_name("doCopy(questionsSelfAssessmentModels:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSKotlinArray<MDSQuestionSelfAssessment *> * _Nullable questionsSelfAssessmentModels __attribute__((swift_name("questionsSelfAssessmentModels")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuestionSelfAssessmentArray.Companion")))
@interface MDSQuestionSelfAssessmentArrayCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSQuestionSelfAssessmentArrayCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestData")))
@interface MDSRequestData : MDSBase
- (instancetype)initWithSettings:(id<MDSMultiplatform_settingsSettings>)settings serverType:(MDSServerType *)serverType __attribute__((swift_name("init(settings:serverType:)"))) __attribute__((objc_designated_initializer));
- (NSString *)getBaseUrl __attribute__((swift_name("getBaseUrl()")));
- (NSDictionary<NSString *, NSString *> *)getHeaders __attribute__((swift_name("getHeaders()")));
- (NSString *)getLang __attribute__((swift_name("getLang()")));
- (MDSPatientProfileResponse * _Nullable)getPatientProfile __attribute__((swift_name("getPatientProfile()")));
- (BOOL)isAllowBackParent __attribute__((swift_name("isAllowBackParent()")));
- (void)setAllowBackParentIsAllowBackParent:(BOOL)isAllowBackParent __attribute__((swift_name("setAllowBackParent(isAllowBackParent:)")));
- (void)setJwtJwt:(NSString *)jwt __attribute__((swift_name("setJwt(jwt:)")));
- (void)setLangLang:(NSString *)lang __attribute__((swift_name("setLang(lang:)")));
- (void)setPatientProfilePatientProfile:(MDSPatientProfileResponse *)patientProfile __attribute__((swift_name("setPatientProfile(patientProfile:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerType")))
@interface MDSServerType : MDSKotlinEnum<MDSServerType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MDSServerType *staging __attribute__((swift_name("staging")));
@property (class, readonly) MDSServerType *preProduction __attribute__((swift_name("preProduction")));
@property (class, readonly) MDSServerType *production __attribute__((swift_name("production")));
+ (MDSKotlinArray<MDSServerType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MDSServerType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTime")))
@interface MDSStartTime : MDSKotlinEnum<MDSStartTime *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MDSStartTime *time5am __attribute__((swift_name("time5am")));
@property (class, readonly) MDSStartTime *time6am __attribute__((swift_name("time6am")));
@property (class, readonly) MDSStartTime *time7am __attribute__((swift_name("time7am")));
@property (class, readonly) MDSStartTime *time8am __attribute__((swift_name("time8am")));
@property (class, readonly) MDSStartTime *time9am __attribute__((swift_name("time9am")));
@property (class, readonly) MDSStartTime *time10am __attribute__((swift_name("time10am")));
@property (class, readonly) MDSStartTime *time11am __attribute__((swift_name("time11am")));
@property (class, readonly) MDSStartTime *time12am __attribute__((swift_name("time12am")));
@property (class, readonly) MDSStartTime *time1pm __attribute__((swift_name("time1pm")));
@property (class, readonly) MDSStartTime *time2pm __attribute__((swift_name("time2pm")));
@property (class, readonly) MDSStartTime *time3pm __attribute__((swift_name("time3pm")));
@property (class, readonly) MDSStartTime *time4pm __attribute__((swift_name("time4pm")));
@property (class, readonly) MDSStartTime *time5pm __attribute__((swift_name("time5pm")));
@property (class, readonly) MDSStartTime *time6pm __attribute__((swift_name("time6pm")));
@property (class, readonly) MDSStartTime *time7pm __attribute__((swift_name("time7pm")));
@property (class, readonly) MDSStartTime *time8pm __attribute__((swift_name("time8pm")));
@property (class, readonly) MDSStartTime *time9pm __attribute__((swift_name("time9pm")));
@property (class, readonly) MDSStartTime *time10pm __attribute__((swift_name("time10pm")));
@property (class, readonly) MDSStartTime *time11pm __attribute__((swift_name("time11pm")));
@property (class, readonly) MDSStartTime *time12pm __attribute__((swift_name("time12pm")));
+ (MDSKotlinArray<MDSStartTime *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MDSStartTime *> *entries __attribute__((swift_name("entries")));
- (NSString *)getFormattedTime __attribute__((swift_name("getFormattedTime()")));
@property (readonly) NSString *startTimeId __attribute__((swift_name("startTimeId")));
@property (readonly) NSString *startTimeName __attribute__((swift_name("startTimeName")));
@property (readonly) NSString *startTimeNameArabic __attribute__((swift_name("startTimeNameArabic")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddBodyInfoDto")))
@interface MDSAddBodyInfoDto : MDSBase
- (instancetype)initWithExexdate:(NSString * _Nullable)exexdate itemCode:(NSString * _Nullable)itemCode itemValue:(NSString * _Nullable)itemValue diastolicBloodPressure:(NSString * _Nullable)diastolicBloodPressure bodyMass:(NSString * _Nullable)bodyMass registrationDateTime:(NSString * _Nullable)registrationDateTime __attribute__((swift_name("init(exexdate:itemCode:itemValue:diastolicBloodPressure:bodyMass:registrationDateTime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAddBodyInfoDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSAddBodyInfoDto *)doCopyExexdate:(NSString * _Nullable)exexdate itemCode:(NSString * _Nullable)itemCode itemValue:(NSString * _Nullable)itemValue diastolicBloodPressure:(NSString * _Nullable)diastolicBloodPressure bodyMass:(NSString * _Nullable)bodyMass registrationDateTime:(NSString * _Nullable)registrationDateTime __attribute__((swift_name("doCopy(exexdate:itemCode:itemValue:diastolicBloodPressure:bodyMass:registrationDateTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bodyMass")
*/
@property (readonly) NSString * _Nullable bodyMass __attribute__((swift_name("bodyMass")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="diastolicBloodPressure")
*/
@property (readonly) NSString * _Nullable diastolicBloodPressure __attribute__((swift_name("diastolicBloodPressure")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="exexdate")
*/
@property (readonly) NSString * _Nullable exexdate __attribute__((swift_name("exexdate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="itemCode")
*/
@property (readonly) NSString * _Nullable itemCode __attribute__((swift_name("itemCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="itemValue")
*/
@property (readonly) NSString * _Nullable itemValue __attribute__((swift_name("itemValue")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="registrationDateTime")
*/
@property (readonly) NSString * _Nullable registrationDateTime __attribute__((swift_name("registrationDateTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddBodyInfoDto.Companion")))
@interface MDSAddBodyInfoDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAddBodyInfoDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddExerciseInfoDto")))
@interface MDSAddExerciseInfoDto : MDSBase
- (instancetype)initWithExexdate:(NSString * _Nullable)exexdate exerciseCode:(NSString * _Nullable)exerciseCode exerciseDate:(NSString * _Nullable)exerciseDate registrationDateTime:(NSString * _Nullable)registrationDateTime exerciseStartingDateTime:(NSString * _Nullable)exerciseStartingDateTime exrcREQRMI:(MDSInt * _Nullable)exrcREQRMI __attribute__((swift_name("init(exexdate:exerciseCode:exerciseDate:registrationDateTime:exerciseStartingDateTime:exrcREQRMI:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAddExerciseInfoDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSAddExerciseInfoDto *)doCopyExexdate:(NSString * _Nullable)exexdate exerciseCode:(NSString * _Nullable)exerciseCode exerciseDate:(NSString * _Nullable)exerciseDate registrationDateTime:(NSString * _Nullable)registrationDateTime exerciseStartingDateTime:(NSString * _Nullable)exerciseStartingDateTime exrcREQRMI:(MDSInt * _Nullable)exrcREQRMI __attribute__((swift_name("doCopy(exexdate:exerciseCode:exerciseDate:registrationDateTime:exerciseStartingDateTime:exrcREQRMI:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="exerciseCode")
*/
@property (readonly) NSString * _Nullable exerciseCode __attribute__((swift_name("exerciseCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="exerciseDate")
*/
@property (readonly) NSString * _Nullable exerciseDate __attribute__((swift_name("exerciseDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="exerciseStartingDateTime")
*/
@property (readonly) NSString * _Nullable exerciseStartingDateTime __attribute__((swift_name("exerciseStartingDateTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="exexdate")
*/
@property (readonly) NSString * _Nullable exexdate __attribute__((swift_name("exexdate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="exrc_REQR_MI")
*/
@property (readonly) MDSInt * _Nullable exrcREQRMI __attribute__((swift_name("exrcREQRMI")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="registrationDateTime")
*/
@property (readonly) NSString * _Nullable registrationDateTime __attribute__((swift_name("registrationDateTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddExerciseInfoDto.Companion")))
@interface MDSAddExerciseInfoDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAddExerciseInfoDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddGrantAccessDto")))
@interface MDSAddGrantAccessDto : MDSBase
- (instancetype)initWithSubPatientId:(NSString * _Nullable)subPatientId subEnterprisePatientId:(NSString * _Nullable)subEnterprisePatientId expiryDate:(NSString * _Nullable)expiryDate __attribute__((swift_name("init(subPatientId:subEnterprisePatientId:expiryDate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAddGrantAccessDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSAddGrantAccessDto *)doCopySubPatientId:(NSString * _Nullable)subPatientId subEnterprisePatientId:(NSString * _Nullable)subEnterprisePatientId expiryDate:(NSString * _Nullable)expiryDate __attribute__((swift_name("doCopy(subPatientId:subEnterprisePatientId:expiryDate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expiryDate")
*/
@property (readonly) NSString * _Nullable expiryDate __attribute__((swift_name("expiryDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="subEnterprisePatientId")
*/
@property (readonly) NSString * _Nullable subEnterprisePatientId __attribute__((swift_name("subEnterprisePatientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="subPatientId")
*/
@property (readonly) NSString * _Nullable subPatientId __attribute__((swift_name("subPatientId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddGrantAccessDto.Companion")))
@interface MDSAddGrantAccessDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAddGrantAccessDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddHomeHealthRequestDto")))
@interface MDSAddHomeHealthRequestDto : MDSBase
- (instancetype)initWithRequestType:(NSString * _Nullable)requestType inATCMYN:(MDSBoolean * _Nullable)inATCMYN inTH2TelNo:(NSString * _Nullable)inTH2TelNo inReqRsnCnte:(NSString * _Nullable)inReqRsnCnte inTH1TelNo:(NSString * _Nullable)inTH1TelNo inWabtLongVal:(NSString * _Nullable)inWabtLongVal inWabtLatiVal:(NSString * _Nullable)inWabtLatiVal __attribute__((swift_name("init(requestType:inATCMYN:inTH2TelNo:inReqRsnCnte:inTH1TelNo:inWabtLongVal:inWabtLatiVal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAddHomeHealthRequestDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSAddHomeHealthRequestDto *)doCopyRequestType:(NSString * _Nullable)requestType inATCMYN:(MDSBoolean * _Nullable)inATCMYN inTH2TelNo:(NSString * _Nullable)inTH2TelNo inReqRsnCnte:(NSString * _Nullable)inReqRsnCnte inTH1TelNo:(NSString * _Nullable)inTH1TelNo inWabtLongVal:(NSString * _Nullable)inWabtLongVal inWabtLatiVal:(NSString * _Nullable)inWabtLatiVal __attribute__((swift_name("doCopy(requestType:inATCMYN:inTH2TelNo:inReqRsnCnte:inTH1TelNo:inWabtLongVal:inWabtLatiVal:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_ATCM_YN")
*/
@property (readonly) MDSBoolean * _Nullable inATCMYN __attribute__((swift_name("inATCMYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_REQ_RSN_CNTE")
*/
@property (readonly) NSString * _Nullable inReqRsnCnte __attribute__((swift_name("inReqRsnCnte")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_TH1_TEL_NO")
*/
@property (readonly) NSString * _Nullable inTH1TelNo __attribute__((swift_name("inTH1TelNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_TH2_TEL_NO")
*/
@property (readonly) NSString * _Nullable inTH2TelNo __attribute__((swift_name("inTH2TelNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_WABT_LATI_VAL")
*/
@property (readonly) NSString * _Nullable inWabtLatiVal __attribute__((swift_name("inWabtLatiVal")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_WABT_LONG_VAL")
*/
@property (readonly) NSString * _Nullable inWabtLongVal __attribute__((swift_name("inWabtLongVal")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestType")
*/
@property (readonly) NSString * _Nullable requestType __attribute__((swift_name("requestType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddHomeHealthRequestDto.Companion")))
@interface MDSAddHomeHealthRequestDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAddHomeHealthRequestDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddNewPatientDto")))
@interface MDSAddNewPatientDto : MDSBase
- (instancetype)initWithDummy:(NSString * _Nullable)dummy __attribute__((swift_name("init(dummy:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAddNewPatientDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSAddNewPatientDto *)doCopyDummy:(NSString * _Nullable)dummy __attribute__((swift_name("doCopy(dummy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dummy")
*/
@property (readonly) NSString * _Nullable dummy __attribute__((swift_name("dummy")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddNewPatientDto.Companion")))
@interface MDSAddNewPatientDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAddNewPatientDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddPCPMessageDto")))
@interface MDSAddPCPMessageDto : MDSBase
- (instancetype)initWithHospitalCode:(NSString * _Nullable)hospitalCode bodyInfoId:(MDSInt * _Nullable)bodyInfoId msgCnt:(NSString * _Nullable)msgCnt __attribute__((swift_name("init(hospitalCode:bodyInfoId:msgCnt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAddPCPMessageDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSAddPCPMessageDto *)doCopyHospitalCode:(NSString * _Nullable)hospitalCode bodyInfoId:(MDSInt * _Nullable)bodyInfoId msgCnt:(NSString * _Nullable)msgCnt __attribute__((swift_name("doCopy(hospitalCode:bodyInfoId:msgCnt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bodyInfoId")
*/
@property (readonly) MDSInt * _Nullable bodyInfoId __attribute__((swift_name("bodyInfoId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg_CNT")
*/
@property (readonly) NSString * _Nullable msgCnt __attribute__((swift_name("msgCnt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddPCPMessageDto.Companion")))
@interface MDSAddPCPMessageDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAddPCPMessageDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddWearableInfoDto")))
@interface MDSAddWearableInfoDto : MDSBase
- (instancetype)initWithItemCode:(NSString * _Nullable)itemCode itemValue:(NSString * _Nullable)itemValue diastolicBloodPressure:(NSString * _Nullable)diastolicBloodPressure bodyMass:(NSString * _Nullable)bodyMass registrationDateTime:(NSString * _Nullable)registrationDateTime entryTP:(NSString * _Nullable)entryTP __attribute__((swift_name("init(itemCode:itemValue:diastolicBloodPressure:bodyMass:registrationDateTime:entryTP:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAddWearableInfoDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSAddWearableInfoDto *)doCopyItemCode:(NSString * _Nullable)itemCode itemValue:(NSString * _Nullable)itemValue diastolicBloodPressure:(NSString * _Nullable)diastolicBloodPressure bodyMass:(NSString * _Nullable)bodyMass registrationDateTime:(NSString * _Nullable)registrationDateTime entryTP:(NSString * _Nullable)entryTP __attribute__((swift_name("doCopy(itemCode:itemValue:diastolicBloodPressure:bodyMass:registrationDateTime:entryTP:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bodyMass")
*/
@property (readonly) NSString * _Nullable bodyMass __attribute__((swift_name("bodyMass")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="diastolicBloodPressure")
*/
@property (readonly) NSString * _Nullable diastolicBloodPressure __attribute__((swift_name("diastolicBloodPressure")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="entry_TP")
*/
@property (readonly) NSString * _Nullable entryTP __attribute__((swift_name("entryTP")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="itemCode")
*/
@property (readonly) NSString * _Nullable itemCode __attribute__((swift_name("itemCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="itemValue")
*/
@property (readonly) NSString * _Nullable itemValue __attribute__((swift_name("itemValue")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="registrationDateTime")
*/
@property (readonly) NSString * _Nullable registrationDateTime __attribute__((swift_name("registrationDateTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddWearableInfoDto.Companion")))
@interface MDSAddWearableInfoDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAddWearableInfoDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppInfo")))
@interface MDSAppInfo : MDSBase
- (instancetype)initWithToken:(NSString * _Nullable)token osVersion:(NSString * _Nullable)osVersion appVersion:(NSString * _Nullable)appVersion platform:(NSString * _Nullable)platform __attribute__((swift_name("init(token:osVersion:appVersion:platform:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAppInfoCompanion *companion __attribute__((swift_name("companion")));
- (MDSAppInfo *)doCopyToken:(NSString * _Nullable)token osVersion:(NSString * _Nullable)osVersion appVersion:(NSString * _Nullable)appVersion platform:(NSString * _Nullable)platform __attribute__((swift_name("doCopy(token:osVersion:appVersion:platform:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appVersion")
*/
@property (readonly) NSString * _Nullable appVersion __attribute__((swift_name("appVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="osVersion")
*/
@property (readonly) NSString * _Nullable osVersion __attribute__((swift_name("osVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="platform")
*/
@property (readonly) NSString * _Nullable platform __attribute__((swift_name("platform")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token")
*/
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppInfo.Companion")))
@interface MDSAppInfoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAppInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppointmentRequestDto")))
@interface MDSAppointmentRequestDto : MDSBase
- (instancetype)initWithEmployeeFlag:(MDSBoolean * _Nullable)employeeFlag dentalFlag:(MDSBoolean * _Nullable)dentalFlag directFlag:(MDSBoolean * _Nullable)directFlag vaccinationFlag:(MDSBoolean * _Nullable)vaccinationFlag refillFlag:(MDSBoolean * _Nullable)refillFlag hospitalCode:(NSString * _Nullable)hospitalCode status:(NSString * _Nullable)status amPmMarker:(NSString * _Nullable)amPmMarker requestReason:(NSString * _Nullable)requestReason basicAddress:(NSString * _Nullable)basicAddress detailsAddress:(NSString * _Nullable)detailsAddress inApptReschudleYn:(MDSBoolean * _Nullable)inApptReschudleYn inHopeMedEndDt:(NSString * _Nullable)inHopeMedEndDt inHopeMedStrDt:(NSString * _Nullable)inHopeMedStrDt inMedrStfNo:(NSString * _Nullable)inMedrStfNo inMedSrvCd:(NSString * _Nullable)inMedSrvCd inMpdYn:(MDSBoolean * _Nullable)inMpdYn inMedDate:(NSString * _Nullable)inMedDate inMedDeptCd:(NSString * _Nullable)inMedDeptCd inPhcYn:(MDSBoolean * _Nullable)inPhcYn inHmpsAddr:(NSString * _Nullable)inHmpsAddr inPhcWest:(NSString * _Nullable)inPhcWest inCtyNm:(NSString * _Nullable)inCtyNm inAddr:(NSString * _Nullable)inAddr __attribute__((swift_name("init(employeeFlag:dentalFlag:directFlag:vaccinationFlag:refillFlag:hospitalCode:status:amPmMarker:requestReason:basicAddress:detailsAddress:inApptReschudleYn:inHopeMedEndDt:inHopeMedStrDt:inMedrStfNo:inMedSrvCd:inMpdYn:inMedDate:inMedDeptCd:inPhcYn:inHmpsAddr:inPhcWest:inCtyNm:inAddr:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAppointmentRequestDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSAppointmentRequestDto *)doCopyEmployeeFlag:(MDSBoolean * _Nullable)employeeFlag dentalFlag:(MDSBoolean * _Nullable)dentalFlag directFlag:(MDSBoolean * _Nullable)directFlag vaccinationFlag:(MDSBoolean * _Nullable)vaccinationFlag refillFlag:(MDSBoolean * _Nullable)refillFlag hospitalCode:(NSString * _Nullable)hospitalCode status:(NSString * _Nullable)status amPmMarker:(NSString * _Nullable)amPmMarker requestReason:(NSString * _Nullable)requestReason basicAddress:(NSString * _Nullable)basicAddress detailsAddress:(NSString * _Nullable)detailsAddress inApptReschudleYn:(MDSBoolean * _Nullable)inApptReschudleYn inHopeMedEndDt:(NSString * _Nullable)inHopeMedEndDt inHopeMedStrDt:(NSString * _Nullable)inHopeMedStrDt inMedrStfNo:(NSString * _Nullable)inMedrStfNo inMedSrvCd:(NSString * _Nullable)inMedSrvCd inMpdYn:(MDSBoolean * _Nullable)inMpdYn inMedDate:(NSString * _Nullable)inMedDate inMedDeptCd:(NSString * _Nullable)inMedDeptCd inPhcYn:(MDSBoolean * _Nullable)inPhcYn inHmpsAddr:(NSString * _Nullable)inHmpsAddr inPhcWest:(NSString * _Nullable)inPhcWest inCtyNm:(NSString * _Nullable)inCtyNm inAddr:(NSString * _Nullable)inAddr __attribute__((swift_name("doCopy(employeeFlag:dentalFlag:directFlag:vaccinationFlag:refillFlag:hospitalCode:status:amPmMarker:requestReason:basicAddress:detailsAddress:inApptReschudleYn:inHopeMedEndDt:inHopeMedStrDt:inMedrStfNo:inMedSrvCd:inMpdYn:inMedDate:inMedDeptCd:inPhcYn:inHmpsAddr:inPhcWest:inCtyNm:inAddr:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="amPmMarker")
*/
@property (readonly) NSString * _Nullable amPmMarker __attribute__((swift_name("amPmMarker")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="basicAddress")
*/
@property (readonly) NSString * _Nullable basicAddress __attribute__((swift_name("basicAddress")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dentalFlag")
*/
@property (readonly) MDSBoolean * _Nullable dentalFlag __attribute__((swift_name("dentalFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="detailsAddress")
*/
@property (readonly) NSString * _Nullable detailsAddress __attribute__((swift_name("detailsAddress")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="directFlag")
*/
@property (readonly) MDSBoolean * _Nullable directFlag __attribute__((swift_name("directFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="employeeFlag")
*/
@property (readonly) MDSBoolean * _Nullable employeeFlag __attribute__((swift_name("employeeFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_ADDR")
*/
@property (readonly) NSString * _Nullable inAddr __attribute__((swift_name("inAddr")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_APPT_RESCHUDLE_YN")
*/
@property (readonly) MDSBoolean * _Nullable inApptReschudleYn __attribute__((swift_name("inApptReschudleYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_CTY_NM")
*/
@property (readonly) NSString * _Nullable inCtyNm __attribute__((swift_name("inCtyNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_HMPS_ADDR")
*/
@property (readonly) NSString * _Nullable inHmpsAddr __attribute__((swift_name("inHmpsAddr")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="inHopeMedEndDt")
*/
@property (readonly) NSString * _Nullable inHopeMedEndDt __attribute__((swift_name("inHopeMedEndDt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="inHopeMedStrDt")
*/
@property (readonly) NSString * _Nullable inHopeMedStrDt __attribute__((swift_name("inHopeMedStrDt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="inMedDate")
*/
@property (readonly) NSString * _Nullable inMedDate __attribute__((swift_name("inMedDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_MED_DEPT_CD")
*/
@property (readonly) NSString * _Nullable inMedDeptCd __attribute__((swift_name("inMedDeptCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_MED_SRV_CD")
*/
@property (readonly) NSString * _Nullable inMedSrvCd __attribute__((swift_name("inMedSrvCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_MEDR_STF_NO")
*/
@property (readonly) NSString * _Nullable inMedrStfNo __attribute__((swift_name("inMedrStfNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_MPD_YN")
*/
@property (readonly) MDSBoolean * _Nullable inMpdYn __attribute__((swift_name("inMpdYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_PHC_WEST")
*/
@property (readonly) NSString * _Nullable inPhcWest __attribute__((swift_name("inPhcWest")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_PHC_YN")
*/
@property (readonly) MDSBoolean * _Nullable inPhcYn __attribute__((swift_name("inPhcYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="refillFlag")
*/
@property (readonly) MDSBoolean * _Nullable refillFlag __attribute__((swift_name("refillFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestReason")
*/
@property (readonly) NSString * _Nullable requestReason __attribute__((swift_name("requestReason")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vaccinationFlag")
*/
@property (readonly) MDSBoolean * _Nullable vaccinationFlag __attribute__((swift_name("vaccinationFlag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppointmentRequestDto.Companion")))
@interface MDSAppointmentRequestDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAppointmentRequestDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticationRequest")))
@interface MDSAuthenticationRequest : MDSBase
- (instancetype)initWithPatientId:(NSString *)patientId password:(NSString *)password deviceId:(NSString *)deviceId regionCode:(NSString *)regionCode biometricEnabled:(NSString *)biometricEnabled activeBio:(NSString * _Nullable)activeBio resetPassword:(NSString * _Nullable)resetPassword retrySMS:(NSString * _Nullable)retrySMS __attribute__((swift_name("init(patientId:password:deviceId:regionCode:biometricEnabled:activeBio:resetPassword:retrySMS:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAuthenticationRequestCompanion *companion __attribute__((swift_name("companion")));
- (MDSAuthenticationRequest *)doCopyPatientId:(NSString *)patientId password:(NSString *)password deviceId:(NSString *)deviceId regionCode:(NSString *)regionCode biometricEnabled:(NSString *)biometricEnabled activeBio:(NSString * _Nullable)activeBio resetPassword:(NSString * _Nullable)resetPassword retrySMS:(NSString * _Nullable)retrySMS __attribute__((swift_name("doCopy(patientId:password:deviceId:regionCode:biometricEnabled:activeBio:resetPassword:retrySMS:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
@property (readonly) NSString * _Nullable activeBio __attribute__((swift_name("activeBio")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
@property (readonly) NSString *biometricEnabled __attribute__((swift_name("biometricEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
@property (readonly) NSString *deviceId __attribute__((swift_name("deviceId")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
@property (readonly) NSString *password __attribute__((swift_name("password")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
@property (readonly) NSString *patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
@property (readonly) NSString *regionCode __attribute__((swift_name("regionCode")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
@property (readonly) NSString * _Nullable resetPassword __attribute__((swift_name("resetPassword")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
@property (readonly) NSString * _Nullable retrySMS __attribute__((swift_name("retrySMS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticationRequest.Companion")))
@interface MDSAuthenticationRequestCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAuthenticationRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckNafathLoginDto")))
@interface MDSCheckNafathLoginDto : MDSBase
- (instancetype)initWithNationalID:(NSString * _Nullable)nationalID transferID:(NSString * _Nullable)transferID random:(NSString * _Nullable)random __attribute__((swift_name("init(nationalID:transferID:random:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSCheckNafathLoginDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSCheckNafathLoginDto *)doCopyNationalID:(NSString * _Nullable)nationalID transferID:(NSString * _Nullable)transferID random:(NSString * _Nullable)random __attribute__((swift_name("doCopy(nationalID:transferID:random:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nationalID")
*/
@property (readonly) NSString * _Nullable nationalID __attribute__((swift_name("nationalID")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="random")
*/
@property (readonly) NSString * _Nullable random __attribute__((swift_name("random")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="transferID")
*/
@property (readonly) NSString * _Nullable transferID __attribute__((swift_name("transferID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckNafathLoginDto.Companion")))
@interface MDSCheckNafathLoginDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSCheckNafathLoginDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckNationalIdDto")))
@interface MDSCheckNationalIdDto : MDSBase
- (instancetype)initWithNationalID:(NSString * _Nullable)nationalID deviceType:(NSString * _Nullable)deviceType __attribute__((swift_name("init(nationalID:deviceType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSCheckNationalIdDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSCheckNationalIdDto *)doCopyNationalID:(NSString * _Nullable)nationalID deviceType:(NSString * _Nullable)deviceType __attribute__((swift_name("doCopy(nationalID:deviceType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deviceType")
*/
@property (readonly) NSString * _Nullable deviceType __attribute__((swift_name("deviceType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nationalID")
*/
@property (readonly) NSString * _Nullable nationalID __attribute__((swift_name("nationalID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckNationalIdDto.Companion")))
@interface MDSCheckNationalIdDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSCheckNationalIdDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckVerifyCodeRequest")))
@interface MDSCheckVerifyCodeRequest : MDSBase
- (instancetype)initWithVerificationCode:(int32_t)verificationCode __attribute__((swift_name("init(verificationCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSCheckVerifyCodeRequestCompanion *companion __attribute__((swift_name("companion")));
- (MDSCheckVerifyCodeRequest *)doCopyVerificationCode:(int32_t)verificationCode __attribute__((swift_name("doCopy(verificationCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
@property (readonly) int32_t verificationCode __attribute__((swift_name("verificationCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckVerifyCodeRequest.Companion")))
@interface MDSCheckVerifyCodeRequestCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSCheckVerifyCodeRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HealthStatusDto")))
@interface MDSHealthStatusDto : MDSBase
- (instancetype)initWithHealthStatusType:(NSString * _Nullable)healthStatusType messageId:(NSString * _Nullable)messageId hospitalCode:(NSString * _Nullable)hospitalCode internalHospitalCode:(NSString * _Nullable)internalHospitalCode patientSector:(NSString * _Nullable)patientSector medicalDate:(NSString * _Nullable)medicalDate medicalReservationDateTime:(NSString * _Nullable)medicalReservationDateTime medicalDepartmentCode:(NSString * _Nullable)medicalDepartmentCode medicalStaffNumber:(NSString * _Nullable)medicalStaffNumber orderYN:(MDSBoolean * _Nullable)orderYN orderId:(MDSInt * _Nullable)orderId ordersDate:(NSString * _Nullable)ordersDate ordersCode:(NSString * _Nullable)ordersCode orderName:(NSString * _Nullable)orderName patientOrdersSfYn:(NSString * _Nullable)patientOrdersSfYn patientOrdersComment:(NSString * _Nullable)patientOrdersComment patientHealthImprovement:(NSString * _Nullable)patientHealthImprovement patientHealthComment:(NSString * _Nullable)patientHealthComment __attribute__((swift_name("init(healthStatusType:messageId:hospitalCode:internalHospitalCode:patientSector:medicalDate:medicalReservationDateTime:medicalDepartmentCode:medicalStaffNumber:orderYN:orderId:ordersDate:ordersCode:orderName:patientOrdersSfYn:patientOrdersComment:patientHealthImprovement:patientHealthComment:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSHealthStatusDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSHealthStatusDto *)doCopyHealthStatusType:(NSString * _Nullable)healthStatusType messageId:(NSString * _Nullable)messageId hospitalCode:(NSString * _Nullable)hospitalCode internalHospitalCode:(NSString * _Nullable)internalHospitalCode patientSector:(NSString * _Nullable)patientSector medicalDate:(NSString * _Nullable)medicalDate medicalReservationDateTime:(NSString * _Nullable)medicalReservationDateTime medicalDepartmentCode:(NSString * _Nullable)medicalDepartmentCode medicalStaffNumber:(NSString * _Nullable)medicalStaffNumber orderYN:(MDSBoolean * _Nullable)orderYN orderId:(MDSInt * _Nullable)orderId ordersDate:(NSString * _Nullable)ordersDate ordersCode:(NSString * _Nullable)ordersCode orderName:(NSString * _Nullable)orderName patientOrdersSfYn:(NSString * _Nullable)patientOrdersSfYn patientOrdersComment:(NSString * _Nullable)patientOrdersComment patientHealthImprovement:(NSString * _Nullable)patientHealthImprovement patientHealthComment:(NSString * _Nullable)patientHealthComment __attribute__((swift_name("doCopy(healthStatusType:messageId:hospitalCode:internalHospitalCode:patientSector:medicalDate:medicalReservationDateTime:medicalDepartmentCode:medicalStaffNumber:orderYN:orderId:ordersDate:ordersCode:orderName:patientOrdersSfYn:patientOrdersComment:patientHealthImprovement:patientHealthComment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="healthStatusType")
*/
@property (readonly) NSString * _Nullable healthStatusType __attribute__((swift_name("healthStatusType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="internalHospitalCode")
*/
@property (readonly) NSString * _Nullable internalHospitalCode __attribute__((swift_name("internalHospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalDate")
*/
@property (readonly) NSString * _Nullable medicalDate __attribute__((swift_name("medicalDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalDepartmentCode")
*/
@property (readonly) NSString * _Nullable medicalDepartmentCode __attribute__((swift_name("medicalDepartmentCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalReservationDateTime")
*/
@property (readonly) NSString * _Nullable medicalReservationDateTime __attribute__((swift_name("medicalReservationDateTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalStaffNumber")
*/
@property (readonly) NSString * _Nullable medicalStaffNumber __attribute__((swift_name("medicalStaffNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="messageId")
*/
@property (readonly) NSString * _Nullable messageId __attribute__((swift_name("messageId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderId")
*/
@property (readonly) MDSInt * _Nullable orderId __attribute__((swift_name("orderId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderName")
*/
@property (readonly) NSString * _Nullable orderName __attribute__((swift_name("orderName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderYN")
*/
@property (readonly) MDSBoolean * _Nullable orderYN __attribute__((swift_name("orderYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ordersCode")
*/
@property (readonly) NSString * _Nullable ordersCode __attribute__((swift_name("ordersCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ordersDate")
*/
@property (readonly) NSString * _Nullable ordersDate __attribute__((swift_name("ordersDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientHealthComment")
*/
@property (readonly) NSString * _Nullable patientHealthComment __attribute__((swift_name("patientHealthComment")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientHealthImprovement")
*/
@property (readonly) NSString * _Nullable patientHealthImprovement __attribute__((swift_name("patientHealthImprovement")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientOrdersComment")
*/
@property (readonly) NSString * _Nullable patientOrdersComment __attribute__((swift_name("patientOrdersComment")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientOrdersSfYn")
*/
@property (readonly) NSString * _Nullable patientOrdersSfYn __attribute__((swift_name("patientOrdersSfYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientSector")
*/
@property (readonly) NSString * _Nullable patientSector __attribute__((swift_name("patientSector")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HealthStatusDto.Companion")))
@interface MDSHealthStatusDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSHealthStatusDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageLinks")))
@interface MDSImageLinks : MDSBase
- (instancetype)initWithColoredImage:(NSString * _Nullable)coloredImage whiteImage:(NSString * _Nullable)whiteImage arabicLink:(NSString * _Nullable)arabicLink englishLink:(NSString * _Nullable)englishLink __attribute__((swift_name("init(coloredImage:whiteImage:arabicLink:englishLink:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSImageLinksCompanion *companion __attribute__((swift_name("companion")));
- (MDSImageLinks *)doCopyColoredImage:(NSString * _Nullable)coloredImage whiteImage:(NSString * _Nullable)whiteImage arabicLink:(NSString * _Nullable)arabicLink englishLink:(NSString * _Nullable)englishLink __attribute__((swift_name("doCopy(coloredImage:whiteImage:arabicLink:englishLink:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicLink")
*/
@property (readonly) NSString * _Nullable arabicLink __attribute__((swift_name("arabicLink")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="coloredImage")
*/
@property (readonly) NSString * _Nullable coloredImage __attribute__((swift_name("coloredImage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishLink")
*/
@property (readonly) NSString * _Nullable englishLink __attribute__((swift_name("englishLink")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="whiteImage")
*/
@property (readonly) NSString * _Nullable whiteImage __attribute__((swift_name("whiteImage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageLinks.Companion")))
@interface MDSImageLinksCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSImageLinksCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModifyAppointmentDto")))
@interface MDSModifyAppointmentDto : MDSBase
- (instancetype)initWithHospitalCode:(NSString * _Nullable)hospitalCode fromDate:(NSString * _Nullable)fromDate toDate:(NSString * _Nullable)toDate requestReason:(NSString * _Nullable)requestReason amPmMarker:(NSString * _Nullable)amPmMarker in_MED_SRV_CD:(NSString * _Nullable)in_MED_SRV_CD in_MEDR_STF_NO:(NSString * _Nullable)in_MEDR_STF_NO in_REQ_APPT_YN:(MDSBoolean * _Nullable)in_REQ_APPT_YN in_PRTL_MED_WAIT_ID:(NSString * _Nullable)in_PRTL_MED_WAIT_ID __attribute__((swift_name("init(hospitalCode:fromDate:toDate:requestReason:amPmMarker:in_MED_SRV_CD:in_MEDR_STF_NO:in_REQ_APPT_YN:in_PRTL_MED_WAIT_ID:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSModifyAppointmentDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSModifyAppointmentDto *)doCopyHospitalCode:(NSString * _Nullable)hospitalCode fromDate:(NSString * _Nullable)fromDate toDate:(NSString * _Nullable)toDate requestReason:(NSString * _Nullable)requestReason amPmMarker:(NSString * _Nullable)amPmMarker in_MED_SRV_CD:(NSString * _Nullable)in_MED_SRV_CD in_MEDR_STF_NO:(NSString * _Nullable)in_MEDR_STF_NO in_REQ_APPT_YN:(MDSBoolean * _Nullable)in_REQ_APPT_YN in_PRTL_MED_WAIT_ID:(NSString * _Nullable)in_PRTL_MED_WAIT_ID __attribute__((swift_name("doCopy(hospitalCode:fromDate:toDate:requestReason:amPmMarker:in_MED_SRV_CD:in_MEDR_STF_NO:in_REQ_APPT_YN:in_PRTL_MED_WAIT_ID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="amPmMarker")
*/
@property (readonly) NSString * _Nullable amPmMarker __attribute__((swift_name("amPmMarker")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fromDate")
*/
@property (readonly) NSString * _Nullable fromDate __attribute__((swift_name("fromDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_MEDR_STF_NO")
*/
@property (readonly) NSString * _Nullable in_MEDR_STF_NO __attribute__((swift_name("in_MEDR_STF_NO")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_MED_SRV_CD")
*/
@property (readonly) NSString * _Nullable in_MED_SRV_CD __attribute__((swift_name("in_MED_SRV_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_PRTL_MED_WAIT_ID")
*/
@property (readonly) NSString * _Nullable in_PRTL_MED_WAIT_ID __attribute__((swift_name("in_PRTL_MED_WAIT_ID")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_REQ_APPT_YN")
*/
@property (readonly) MDSBoolean * _Nullable in_REQ_APPT_YN __attribute__((swift_name("in_REQ_APPT_YN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestReason")
*/
@property (readonly) NSString * _Nullable requestReason __attribute__((swift_name("requestReason")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="toDate")
*/
@property (readonly) NSString * _Nullable toDate __attribute__((swift_name("toDate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModifyAppointmentDto.Companion")))
@interface MDSModifyAppointmentDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSModifyAppointmentDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NafathLoginDto")))
@interface MDSNafathLoginDto : MDSBase
- (instancetype)initWithNationalID:(NSString * _Nullable)nationalID __attribute__((swift_name("init(nationalID:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSNafathLoginDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSNafathLoginDto *)doCopyNationalID:(NSString * _Nullable)nationalID __attribute__((swift_name("doCopy(nationalID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nationalID")
*/
@property (readonly) NSString * _Nullable nationalID __attribute__((swift_name("nationalID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NafathLoginDto.Companion")))
@interface MDSNafathLoginDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSNafathLoginDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PatientInfoDto")))
@interface MDSPatientInfoDto : MDSBase
- (instancetype)initWithNationalID:(NSString * _Nullable)nationalID regionCode:(NSString * _Nullable)regionCode deviceType:(NSString * _Nullable)deviceType __attribute__((swift_name("init(nationalID:regionCode:deviceType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSPatientInfoDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSPatientInfoDto *)doCopyNationalID:(NSString * _Nullable)nationalID regionCode:(NSString * _Nullable)regionCode deviceType:(NSString * _Nullable)deviceType __attribute__((swift_name("doCopy(nationalID:regionCode:deviceType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deviceType")
*/
@property (readonly) NSString * _Nullable deviceType __attribute__((swift_name("deviceType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nationalID")
*/
@property (readonly) NSString * _Nullable nationalID __attribute__((swift_name("nationalID")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="regionCode")
*/
@property (readonly) NSString * _Nullable regionCode __attribute__((swift_name("regionCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PatientInfoDto.Companion")))
@interface MDSPatientInfoDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSPatientInfoDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RefillData")))
@interface MDSRefillData : MDSBase
- (instancetype)initWithHspiTpCd:(NSString * _Nullable)hspiTpCd hspTpCd:(NSString * _Nullable)hspTpCd connOrdId:(NSString * _Nullable)connOrdId ordCd:(NSString * _Nullable)ordCd ordNm:(NSString * _Nullable)ordNm ordDt:(NSString * _Nullable)ordDt __attribute__((swift_name("init(hspiTpCd:hspTpCd:connOrdId:ordCd:ordNm:ordDt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSRefillDataCompanion *companion __attribute__((swift_name("companion")));
- (MDSRefillData *)doCopyHspiTpCd:(NSString * _Nullable)hspiTpCd hspTpCd:(NSString * _Nullable)hspTpCd connOrdId:(NSString * _Nullable)connOrdId ordCd:(NSString * _Nullable)ordCd ordNm:(NSString * _Nullable)ordNm ordDt:(NSString * _Nullable)ordDt __attribute__((swift_name("doCopy(hspiTpCd:hspTpCd:connOrdId:ordCd:ordNm:ordDt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="conn_ORD_ID")
*/
@property (readonly) NSString * _Nullable connOrdId __attribute__((swift_name("connOrdId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hsp_TP_CD")
*/
@property (readonly) NSString * _Nullable hspTpCd __attribute__((swift_name("hspTpCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hspi_TP_CD")
*/
@property (readonly) NSString * _Nullable hspiTpCd __attribute__((swift_name("hspiTpCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ord_CD")
*/
@property (readonly) NSString * _Nullable ordCd __attribute__((swift_name("ordCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ord_DT")
*/
@property (readonly) NSString * _Nullable ordDt __attribute__((swift_name("ordDt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ord_NM")
*/
@property (readonly) NSString * _Nullable ordNm __attribute__((swift_name("ordNm")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RefillData.Companion")))
@interface MDSRefillDataCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSRefillDataCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RefillDto")))
@interface MDSRefillDto : MDSBase
- (instancetype)initWithRefillData:(NSArray<MDSRefillData *> * _Nullable)refillData connOrdId:(NSString * _Nullable)connOrdId hmpsAddr:(NSString * _Nullable)hmpsAddr phcWest:(NSString * _Nullable)phcWest mtelNo:(NSString * _Nullable)mtelNo medRmk:(NSString * _Nullable)medRmk addr:(NSString * _Nullable)addr ctyNm:(NSString * _Nullable)ctyNm __attribute__((swift_name("init(refillData:connOrdId:hmpsAddr:phcWest:mtelNo:medRmk:addr:ctyNm:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSRefillDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSRefillDto *)doCopyRefillData:(NSArray<MDSRefillData *> * _Nullable)refillData connOrdId:(NSString * _Nullable)connOrdId hmpsAddr:(NSString * _Nullable)hmpsAddr phcWest:(NSString * _Nullable)phcWest mtelNo:(NSString * _Nullable)mtelNo medRmk:(NSString * _Nullable)medRmk addr:(NSString * _Nullable)addr ctyNm:(NSString * _Nullable)ctyNm __attribute__((swift_name("doCopy(refillData:connOrdId:hmpsAddr:phcWest:mtelNo:medRmk:addr:ctyNm:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="addr")
*/
@property (readonly) NSString * _Nullable addr __attribute__((swift_name("addr")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="conn_ORD_ID")
*/
@property (readonly) NSString * _Nullable connOrdId __attribute__((swift_name("connOrdId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cty_NM")
*/
@property (readonly) NSString * _Nullable ctyNm __attribute__((swift_name("ctyNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hmps_ADDR")
*/
@property (readonly) NSString * _Nullable hmpsAddr __attribute__((swift_name("hmpsAddr")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="med_RMK")
*/
@property (readonly) NSString * _Nullable medRmk __attribute__((swift_name("medRmk")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mtel_NO")
*/
@property (readonly) NSString * _Nullable mtelNo __attribute__((swift_name("mtelNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="phc_WEST")
*/
@property (readonly) NSString * _Nullable phcWest __attribute__((swift_name("phcWest")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="refillData")
*/
@property (readonly) NSArray<MDSRefillData *> * _Nullable refillData __attribute__((swift_name("refillData")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RefillDto.Companion")))
@interface MDSRefillDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSRefillDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestCDDto")))
@interface MDSRequestCDDto : MDSBase
- (instancetype)initWithPactId:(NSString * _Nullable)pactId pactTypeId:(NSString * _Nullable)pactTypeId hospitalCode:(NSString * _Nullable)hospitalCode innerHospitalTypeCode:(NSString * _Nullable)innerHospitalTypeCode examCode:(NSString * _Nullable)examCode __attribute__((swift_name("init(pactId:pactTypeId:hospitalCode:innerHospitalTypeCode:examCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSRequestCDDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSRequestCDDto *)doCopyPactId:(NSString * _Nullable)pactId pactTypeId:(NSString * _Nullable)pactTypeId hospitalCode:(NSString * _Nullable)hospitalCode innerHospitalTypeCode:(NSString * _Nullable)innerHospitalTypeCode examCode:(NSString * _Nullable)examCode __attribute__((swift_name("doCopy(pactId:pactTypeId:hospitalCode:innerHospitalTypeCode:examCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
@property (readonly) NSString * _Nullable examCode __attribute__((swift_name("examCode")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
@property (readonly) NSString * _Nullable innerHospitalTypeCode __attribute__((swift_name("innerHospitalTypeCode")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
@property (readonly) NSString * _Nullable pactId __attribute__((swift_name("pactId")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
@property (readonly) NSString * _Nullable pactTypeId __attribute__((swift_name("pactTypeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestCDDto.Companion")))
@interface MDSRequestCDDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSRequestCDDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestUpdateNBCDto")))
@interface MDSRequestUpdateNBCDto : MDSBase
- (instancetype)initWithRecordId:(NSString * _Nullable)recordId nationality:(NSString * _Nullable)nationality englishFirstName:(NSString * _Nullable)englishFirstName englishFatherName:(NSString * _Nullable)englishFatherName englishGrandfatherName:(NSString * _Nullable)englishGrandfatherName englishFamilyName:(NSString * _Nullable)englishFamilyName gender:(NSString * _Nullable)gender birthDate:(NSString * _Nullable)birthDate fullName:(NSString * _Nullable)fullName arabicFirstName:(NSString * _Nullable)arabicFirstName arabicFatherName:(NSString * _Nullable)arabicFatherName arabicGrandfatherName:(NSString * _Nullable)arabicGrandfatherName arabicFamilyName:(NSString * _Nullable)arabicFamilyName jobTitle:(NSString * _Nullable)jobTitle jobInfoBadgeNo:(NSString * _Nullable)jobInfoBadgeNo jobInfoDepartment:(NSString * _Nullable)jobInfoDepartment addressCity:(NSString * _Nullable)addressCity addressDistrict:(NSString * _Nullable)addressDistrict addressProvince:(NSString * _Nullable)addressProvince workPhone:(NSString * _Nullable)workPhone mobile:(NSString * _Nullable)mobile mobileNumber:(NSString * _Nullable)mobileNumber email:(NSString * _Nullable)email oudCurrentDesc:(NSString * _Nullable)oudCurrentDesc eligibilityType:(NSString * _Nullable)eligibilityType jobType:(NSString * _Nullable)jobType jobInfoSANG:(NSString * _Nullable)jobInfoSANG jobInfoRank:(NSString * _Nullable)jobInfoRank recordBattalion:(NSString * _Nullable)recordBattalion contactERInfoName:(NSString * _Nullable)contactERInfoName idNbcUpdate:(NSString * _Nullable)idNbcUpdate nameNbcUpdate:(NSString * _Nullable)nameNbcUpdate mrnNbcUpdate:(NSString * _Nullable)mrnNbcUpdate expireDateNBC:(NSString * _Nullable)expireDateNBC regionCode:(NSString * _Nullable)regionCode primaryHealthCare:(NSString * _Nullable)primaryHealthCare eregion:(NSString * _Nullable)eregion idBcAttachmentName:(NSString * _Nullable)idBcAttachmentName __attribute__((swift_name("init(recordId:nationality:englishFirstName:englishFatherName:englishGrandfatherName:englishFamilyName:gender:birthDate:fullName:arabicFirstName:arabicFatherName:arabicGrandfatherName:arabicFamilyName:jobTitle:jobInfoBadgeNo:jobInfoDepartment:addressCity:addressDistrict:addressProvince:workPhone:mobile:mobileNumber:email:oudCurrentDesc:eligibilityType:jobType:jobInfoSANG:jobInfoRank:recordBattalion:contactERInfoName:idNbcUpdate:nameNbcUpdate:mrnNbcUpdate:expireDateNBC:regionCode:primaryHealthCare:eregion:idBcAttachmentName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSRequestUpdateNBCDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSRequestUpdateNBCDto *)doCopyRecordId:(NSString * _Nullable)recordId nationality:(NSString * _Nullable)nationality englishFirstName:(NSString * _Nullable)englishFirstName englishFatherName:(NSString * _Nullable)englishFatherName englishGrandfatherName:(NSString * _Nullable)englishGrandfatherName englishFamilyName:(NSString * _Nullable)englishFamilyName gender:(NSString * _Nullable)gender birthDate:(NSString * _Nullable)birthDate fullName:(NSString * _Nullable)fullName arabicFirstName:(NSString * _Nullable)arabicFirstName arabicFatherName:(NSString * _Nullable)arabicFatherName arabicGrandfatherName:(NSString * _Nullable)arabicGrandfatherName arabicFamilyName:(NSString * _Nullable)arabicFamilyName jobTitle:(NSString * _Nullable)jobTitle jobInfoBadgeNo:(NSString * _Nullable)jobInfoBadgeNo jobInfoDepartment:(NSString * _Nullable)jobInfoDepartment addressCity:(NSString * _Nullable)addressCity addressDistrict:(NSString * _Nullable)addressDistrict addressProvince:(NSString * _Nullable)addressProvince workPhone:(NSString * _Nullable)workPhone mobile:(NSString * _Nullable)mobile mobileNumber:(NSString * _Nullable)mobileNumber email:(NSString * _Nullable)email oudCurrentDesc:(NSString * _Nullable)oudCurrentDesc eligibilityType:(NSString * _Nullable)eligibilityType jobType:(NSString * _Nullable)jobType jobInfoSANG:(NSString * _Nullable)jobInfoSANG jobInfoRank:(NSString * _Nullable)jobInfoRank recordBattalion:(NSString * _Nullable)recordBattalion contactERInfoName:(NSString * _Nullable)contactERInfoName idNbcUpdate:(NSString * _Nullable)idNbcUpdate nameNbcUpdate:(NSString * _Nullable)nameNbcUpdate mrnNbcUpdate:(NSString * _Nullable)mrnNbcUpdate expireDateNBC:(NSString * _Nullable)expireDateNBC regionCode:(NSString * _Nullable)regionCode primaryHealthCare:(NSString * _Nullable)primaryHealthCare eregion:(NSString * _Nullable)eregion idBcAttachmentName:(NSString * _Nullable)idBcAttachmentName __attribute__((swift_name("doCopy(recordId:nationality:englishFirstName:englishFatherName:englishGrandfatherName:englishFamilyName:gender:birthDate:fullName:arabicFirstName:arabicFatherName:arabicGrandfatherName:arabicFamilyName:jobTitle:jobInfoBadgeNo:jobInfoDepartment:addressCity:addressDistrict:addressProvince:workPhone:mobile:mobileNumber:email:oudCurrentDesc:eligibilityType:jobType:jobInfoSANG:jobInfoRank:recordBattalion:contactERInfoName:idNbcUpdate:nameNbcUpdate:mrnNbcUpdate:expireDateNBC:regionCode:primaryHealthCare:eregion:idBcAttachmentName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="addressCity")
*/
@property (readonly) NSString * _Nullable addressCity __attribute__((swift_name("addressCity")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="addressDistrict")
*/
@property (readonly) NSString * _Nullable addressDistrict __attribute__((swift_name("addressDistrict")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="addressProvince")
*/
@property (readonly) NSString * _Nullable addressProvince __attribute__((swift_name("addressProvince")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicFamilyName")
*/
@property (readonly) NSString * _Nullable arabicFamilyName __attribute__((swift_name("arabicFamilyName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicFatherName")
*/
@property (readonly) NSString * _Nullable arabicFatherName __attribute__((swift_name("arabicFatherName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicFirstName")
*/
@property (readonly) NSString * _Nullable arabicFirstName __attribute__((swift_name("arabicFirstName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicGrandfatherName")
*/
@property (readonly) NSString * _Nullable arabicGrandfatherName __attribute__((swift_name("arabicGrandfatherName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="birthDate")
*/
@property (readonly) NSString * _Nullable birthDate __attribute__((swift_name("birthDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="contactERInfoName")
*/
@property (readonly) NSString * _Nullable contactERInfoName __attribute__((swift_name("contactERInfoName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="eligibilityType")
*/
@property (readonly) NSString * _Nullable eligibilityType __attribute__((swift_name("eligibilityType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishFamilyName")
*/
@property (readonly) NSString * _Nullable englishFamilyName __attribute__((swift_name("englishFamilyName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishFatherName")
*/
@property (readonly) NSString * _Nullable englishFatherName __attribute__((swift_name("englishFatherName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishFirstName")
*/
@property (readonly) NSString * _Nullable englishFirstName __attribute__((swift_name("englishFirstName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishGrandfatherName")
*/
@property (readonly) NSString * _Nullable englishGrandfatherName __attribute__((swift_name("englishGrandfatherName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="eregion")
*/
@property (readonly) NSString * _Nullable eregion __attribute__((swift_name("eregion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expireDateNBC")
*/
@property (readonly) NSString * _Nullable expireDateNBC __attribute__((swift_name("expireDateNBC")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fullName")
*/
@property (readonly) NSString * _Nullable fullName __attribute__((swift_name("fullName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="gender")
*/
@property (readonly) NSString * _Nullable gender __attribute__((swift_name("gender")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idBcAttachmentName")
*/
@property (readonly) NSString * _Nullable idBcAttachmentName __attribute__((swift_name("idBcAttachmentName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idNbcUpdate")
*/
@property (readonly) NSString * _Nullable idNbcUpdate __attribute__((swift_name("idNbcUpdate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="jobInfoBadgeNo")
*/
@property (readonly) NSString * _Nullable jobInfoBadgeNo __attribute__((swift_name("jobInfoBadgeNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="jobInfoDepartment")
*/
@property (readonly) NSString * _Nullable jobInfoDepartment __attribute__((swift_name("jobInfoDepartment")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="jobInfoRank")
*/
@property (readonly) NSString * _Nullable jobInfoRank __attribute__((swift_name("jobInfoRank")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="jobInfoSANG")
*/
@property (readonly) NSString * _Nullable jobInfoSANG __attribute__((swift_name("jobInfoSANG")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="jobTitle")
*/
@property (readonly) NSString * _Nullable jobTitle __attribute__((swift_name("jobTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="jobType")
*/
@property (readonly) NSString * _Nullable jobType __attribute__((swift_name("jobType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mobile")
*/
@property (readonly) NSString * _Nullable mobile __attribute__((swift_name("mobile")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mobileNumber")
*/
@property (readonly) NSString * _Nullable mobileNumber __attribute__((swift_name("mobileNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mrnNbcUpdate")
*/
@property (readonly) NSString * _Nullable mrnNbcUpdate __attribute__((swift_name("mrnNbcUpdate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nameNbcUpdate")
*/
@property (readonly) NSString * _Nullable nameNbcUpdate __attribute__((swift_name("nameNbcUpdate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nationality")
*/
@property (readonly) NSString * _Nullable nationality __attribute__((swift_name("nationality")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="oudCurrentDesc")
*/
@property (readonly) NSString * _Nullable oudCurrentDesc __attribute__((swift_name("oudCurrentDesc")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="primaryHealthCare")
*/
@property (readonly) NSString * _Nullable primaryHealthCare __attribute__((swift_name("primaryHealthCare")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="recordBattalion")
*/
@property (readonly) NSString * _Nullable recordBattalion __attribute__((swift_name("recordBattalion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="recordId")
*/
@property (readonly) NSString * _Nullable recordId __attribute__((swift_name("recordId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="regionCode")
*/
@property (readonly) NSString * _Nullable regionCode __attribute__((swift_name("regionCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="workPhone")
*/
@property (readonly) NSString * _Nullable workPhone __attribute__((swift_name("workPhone")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestUpdateNBCDto.Companion")))
@interface MDSRequestUpdateNBCDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSRequestUpdateNBCDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RescheduleAppointmentDto")))
@interface MDSRescheduleAppointmentDto : MDSBase
- (instancetype)initWithOrderId:(NSString * _Nullable)orderId visitId:(NSString * _Nullable)visitId hospitalCode:(NSString * _Nullable)hospitalCode rsvTHRP_SID:(NSString * _Nullable)rsvTHRP_SID hspi_TP_CD:(NSString * _Nullable)hspi_TP_CD med_DEPT_CD:(NSString * _Nullable)med_DEPT_CD exm_CD:(NSString * _Nullable)exm_CD room_TP_CD:(NSString * _Nullable)room_TP_CD schd_RSV_SEQ:(NSString * _Nullable)schd_RSV_SEQ rehab_DATE:(NSString * _Nullable)rehab_DATE ord_GRP_CD:(NSString * _Nullable)ord_GRP_CD stf_NO:(NSString * _Nullable)stf_NO ord_CTG_CD:(NSString * _Nullable)ord_CTG_CD rsv_DTM:(NSString * _Nullable)rsv_DTM exm_NM:(NSString * _Nullable)exm_NM __attribute__((swift_name("init(orderId:visitId:hospitalCode:rsvTHRP_SID:hspi_TP_CD:med_DEPT_CD:exm_CD:room_TP_CD:schd_RSV_SEQ:rehab_DATE:ord_GRP_CD:stf_NO:ord_CTG_CD:rsv_DTM:exm_NM:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSRescheduleAppointmentDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSRescheduleAppointmentDto *)doCopyOrderId:(NSString * _Nullable)orderId visitId:(NSString * _Nullable)visitId hospitalCode:(NSString * _Nullable)hospitalCode rsvTHRP_SID:(NSString * _Nullable)rsvTHRP_SID hspi_TP_CD:(NSString * _Nullable)hspi_TP_CD med_DEPT_CD:(NSString * _Nullable)med_DEPT_CD exm_CD:(NSString * _Nullable)exm_CD room_TP_CD:(NSString * _Nullable)room_TP_CD schd_RSV_SEQ:(NSString * _Nullable)schd_RSV_SEQ rehab_DATE:(NSString * _Nullable)rehab_DATE ord_GRP_CD:(NSString * _Nullable)ord_GRP_CD stf_NO:(NSString * _Nullable)stf_NO ord_CTG_CD:(NSString * _Nullable)ord_CTG_CD rsv_DTM:(NSString * _Nullable)rsv_DTM exm_NM:(NSString * _Nullable)exm_NM __attribute__((swift_name("doCopy(orderId:visitId:hospitalCode:rsvTHRP_SID:hspi_TP_CD:med_DEPT_CD:exm_CD:room_TP_CD:schd_RSV_SEQ:rehab_DATE:ord_GRP_CD:stf_NO:ord_CTG_CD:rsv_DTM:exm_NM:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="exm_CD")
*/
@property (readonly) NSString * _Nullable exm_CD __attribute__((swift_name("exm_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="exm_NM")
*/
@property (readonly) NSString * _Nullable exm_NM __attribute__((swift_name("exm_NM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hspi_TP_CD")
*/
@property (readonly) NSString * _Nullable hspi_TP_CD __attribute__((swift_name("hspi_TP_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="med_DEPT_CD")
*/
@property (readonly) NSString * _Nullable med_DEPT_CD __attribute__((swift_name("med_DEPT_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ord_CTG_CD")
*/
@property (readonly) NSString * _Nullable ord_CTG_CD __attribute__((swift_name("ord_CTG_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ord_GRP_CD")
*/
@property (readonly) NSString * _Nullable ord_GRP_CD __attribute__((swift_name("ord_GRP_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderId")
*/
@property (readonly) NSString * _Nullable orderId __attribute__((swift_name("orderId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rehab_DATE")
*/
@property (readonly) NSString * _Nullable rehab_DATE __attribute__((swift_name("rehab_DATE")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="room_TP_CD")
*/
@property (readonly) NSString * _Nullable room_TP_CD __attribute__((swift_name("room_TP_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rsv_THRP_SID")
*/
@property (readonly) NSString * _Nullable rsvTHRP_SID __attribute__((swift_name("rsvTHRP_SID")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rsv_DTM")
*/
@property (readonly) NSString * _Nullable rsv_DTM __attribute__((swift_name("rsv_DTM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="schd_RSV_SEQ")
*/
@property (readonly) NSString * _Nullable schd_RSV_SEQ __attribute__((swift_name("schd_RSV_SEQ")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="stf_NO")
*/
@property (readonly) NSString * _Nullable stf_NO __attribute__((swift_name("stf_NO")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="visitId")
*/
@property (readonly) NSString * _Nullable visitId __attribute__((swift_name("visitId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RescheduleAppointmentDto.Companion")))
@interface MDSRescheduleAppointmentDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSRescheduleAppointmentDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResetPasswordRequest")))
@interface MDSResetPasswordRequest : MDSBase
- (instancetype)initWithPatientId:(NSString * _Nullable)patientId regionCode:(NSString * _Nullable)regionCode newPassword:(NSString * _Nullable)newPassword __attribute__((swift_name("init(patientId:regionCode:newPassword:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSResetPasswordRequestCompanion *companion __attribute__((swift_name("companion")));
- (MDSResetPasswordRequest *)doCopyPatientId:(NSString * _Nullable)patientId regionCode:(NSString * _Nullable)regionCode newPassword:(NSString * _Nullable)newPassword __attribute__((swift_name("doCopy(patientId:regionCode:newPassword:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="newPassword")
*/
@property (getter=doNewPassword) NSString * _Nullable newPassword __attribute__((swift_name("newPassword")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="regionCode")
*/
@property NSString * _Nullable regionCode __attribute__((swift_name("regionCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResetPasswordRequest.Companion")))
@interface MDSResetPasswordRequestCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSResetPasswordRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RetrieveMedicalNumberRequest")))
@interface MDSRetrieveMedicalNumberRequest : MDSBase
- (instancetype)initWithNationalId:(NSString * _Nullable)nationalId regionCode:(NSString * _Nullable)regionCode __attribute__((swift_name("init(nationalId:regionCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSRetrieveMedicalNumberRequestCompanion *companion __attribute__((swift_name("companion")));
- (MDSRetrieveMedicalNumberRequest *)doCopyNationalId:(NSString * _Nullable)nationalId regionCode:(NSString * _Nullable)regionCode __attribute__((swift_name("doCopy(nationalId:regionCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nationalId")
*/
@property NSString * _Nullable nationalId __attribute__((swift_name("nationalId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="regionCode")
*/
@property NSString * _Nullable regionCode __attribute__((swift_name("regionCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RetrieveMedicalNumberRequest.Companion")))
@interface MDSRetrieveMedicalNumberRequestCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSRetrieveMedicalNumberRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendDoctorMessageDto")))
@interface MDSSendDoctorMessageDto : MDSBase
- (instancetype)initWithMessage:(NSString * _Nullable)message pactId:(NSString * _Nullable)pactId doctorEmail:(NSString * _Nullable)doctorEmail medDeptCd:(NSString * _Nullable)medDeptCd icd10Cd:(NSString * _Nullable)icd10Cd medrStfNo:(NSString * _Nullable)medrStfNo __attribute__((swift_name("init(message:pactId:doctorEmail:medDeptCd:icd10Cd:medrStfNo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSSendDoctorMessageDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSSendDoctorMessageDto *)doCopyMessage:(NSString * _Nullable)message pactId:(NSString * _Nullable)pactId doctorEmail:(NSString * _Nullable)doctorEmail medDeptCd:(NSString * _Nullable)medDeptCd icd10Cd:(NSString * _Nullable)icd10Cd medrStfNo:(NSString * _Nullable)medrStfNo __attribute__((swift_name("doCopy(message:pactId:doctorEmail:medDeptCd:icd10Cd:medrStfNo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="doctorEmail")
*/
@property (readonly) NSString * _Nullable doctorEmail __attribute__((swift_name("doctorEmail")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="icd10_CD")
*/
@property (readonly) NSString * _Nullable icd10Cd __attribute__((swift_name("icd10Cd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="med_DEPT_CD")
*/
@property (readonly) NSString * _Nullable medDeptCd __attribute__((swift_name("medDeptCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medr_STF_NO")
*/
@property (readonly) NSString * _Nullable medrStfNo __attribute__((swift_name("medrStfNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pactId")
*/
@property (readonly) NSString * _Nullable pactId __attribute__((swift_name("pactId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendDoctorMessageDto.Companion")))
@interface MDSSendDoctorMessageDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSSendDoctorMessageDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendMyHealthEmailDto")))
@interface MDSSendMyHealthEmailDto : MDSBase
- (instancetype)initWithMessage:(NSString * _Nullable)message healthData:(NSString * _Nullable)healthData dateTime:(NSString * _Nullable)dateTime value:(NSString * _Nullable)value __attribute__((swift_name("init(message:healthData:dateTime:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSSendMyHealthEmailDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSSendMyHealthEmailDto *)doCopyMessage:(NSString * _Nullable)message healthData:(NSString * _Nullable)healthData dateTime:(NSString * _Nullable)dateTime value:(NSString * _Nullable)value __attribute__((swift_name("doCopy(message:healthData:dateTime:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dateTime")
*/
@property (readonly) NSString * _Nullable dateTime __attribute__((swift_name("dateTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="healthData")
*/
@property (readonly) NSString * _Nullable healthData __attribute__((swift_name("healthData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="value")
*/
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendMyHealthEmailDto.Companion")))
@interface MDSSendMyHealthEmailDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSSendMyHealthEmailDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendVerificationCodeRequest")))
@interface MDSSendVerificationCodeRequest : MDSBase
- (instancetype)initWithPatientId:(NSString * _Nullable)patientId regionCode:(NSString * _Nullable)regionCode __attribute__((swift_name("init(patientId:regionCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSSendVerificationCodeRequestCompanion *companion __attribute__((swift_name("companion")));
- (MDSSendVerificationCodeRequest *)doCopyPatientId:(NSString * _Nullable)patientId regionCode:(NSString * _Nullable)regionCode __attribute__((swift_name("doCopy(patientId:regionCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="regionCode")
*/
@property NSString * _Nullable regionCode __attribute__((swift_name("regionCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendVerificationCodeRequest.Companion")))
@interface MDSSendVerificationCodeRequestCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSSendVerificationCodeRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubmitMedicalReportDto")))
@interface MDSSubmitMedicalReportDto : MDSBase
- (instancetype)initWithReasonId:(NSString * _Nullable)reasonId pactId:(NSString * _Nullable)pactId hospitalCode:(NSString * _Nullable)hospitalCode hspi_TP_CD:(NSString * _Nullable)hspi_TP_CD pact_TP_CD:(NSString * _Nullable)pact_TP_CD in_HSP_NM:(NSString * _Nullable)in_HSP_NM in_TEXT:(NSString * _Nullable)in_TEXT mdfm_CLS_DTL_CD:(NSString * _Nullable)mdfm_CLS_DTL_CD __attribute__((swift_name("init(reasonId:pactId:hospitalCode:hspi_TP_CD:pact_TP_CD:in_HSP_NM:in_TEXT:mdfm_CLS_DTL_CD:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSSubmitMedicalReportDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSSubmitMedicalReportDto *)doCopyReasonId:(NSString * _Nullable)reasonId pactId:(NSString * _Nullable)pactId hospitalCode:(NSString * _Nullable)hospitalCode hspi_TP_CD:(NSString * _Nullable)hspi_TP_CD pact_TP_CD:(NSString * _Nullable)pact_TP_CD in_HSP_NM:(NSString * _Nullable)in_HSP_NM in_TEXT:(NSString * _Nullable)in_TEXT mdfm_CLS_DTL_CD:(NSString * _Nullable)mdfm_CLS_DTL_CD __attribute__((swift_name("doCopy(reasonId:pactId:hospitalCode:hspi_TP_CD:pact_TP_CD:in_HSP_NM:in_TEXT:mdfm_CLS_DTL_CD:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hspi_TP_CD")
*/
@property (readonly) NSString * _Nullable hspi_TP_CD __attribute__((swift_name("hspi_TP_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_HSP_NM")
*/
@property (readonly) NSString * _Nullable in_HSP_NM __attribute__((swift_name("in_HSP_NM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_TEXT")
*/
@property (readonly) NSString * _Nullable in_TEXT __attribute__((swift_name("in_TEXT")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mdfm_CLS_DTL_CD")
*/
@property (readonly) NSString * _Nullable mdfm_CLS_DTL_CD __attribute__((swift_name("mdfm_CLS_DTL_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pactId")
*/
@property (readonly) NSString * _Nullable pactId __attribute__((swift_name("pactId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pact_TP_CD")
*/
@property (readonly) NSString * _Nullable pact_TP_CD __attribute__((swift_name("pact_TP_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reasonId")
*/
@property (readonly) NSString * _Nullable reasonId __attribute__((swift_name("reasonId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubmitMedicalReportDto.Companion")))
@interface MDSSubmitMedicalReportDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSSubmitMedicalReportDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubmitSurveyDto")))
@interface MDSSubmitSurveyDto : MDSBase
- (instancetype)initWithAnswers:(NSString * _Nullable)answers pactId:(NSString * _Nullable)pactId __attribute__((swift_name("init(answers:pactId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSSubmitSurveyDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSSubmitSurveyDto *)doCopyAnswers:(NSString * _Nullable)answers pactId:(NSString * _Nullable)pactId __attribute__((swift_name("doCopy(answers:pactId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="answers")
*/
@property (readonly) NSString * _Nullable answers __attribute__((swift_name("answers")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pactId")
*/
@property (readonly) NSString * _Nullable pactId __attribute__((swift_name("pactId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubmitSurveyDto.Companion")))
@interface MDSSubmitSurveyDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSSubmitSurveyDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuggestionFeatureRequest")))
@interface MDSSuggestionFeatureRequest : MDSBase
- (instancetype)initWithSuggestionMessage:(NSString * _Nullable)suggestionMessage patientId:(NSString * _Nullable)patientId patientEmail:(NSString * _Nullable)patientEmail deviceType:(NSString * _Nullable)deviceType regionCode:(NSString * _Nullable)regionCode __attribute__((swift_name("init(suggestionMessage:patientId:patientEmail:deviceType:regionCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSSuggestionFeatureRequestCompanion *companion __attribute__((swift_name("companion")));
- (MDSSuggestionFeatureRequest *)doCopySuggestionMessage:(NSString * _Nullable)suggestionMessage patientId:(NSString * _Nullable)patientId patientEmail:(NSString * _Nullable)patientEmail deviceType:(NSString * _Nullable)deviceType regionCode:(NSString * _Nullable)regionCode __attribute__((swift_name("doCopy(suggestionMessage:patientId:patientEmail:deviceType:regionCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deviceType")
*/
@property NSString * _Nullable deviceType __attribute__((swift_name("deviceType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientEmail")
*/
@property NSString * _Nullable patientEmail __attribute__((swift_name("patientEmail")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="regionCode")
*/
@property NSString * _Nullable regionCode __attribute__((swift_name("regionCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="suggestionMessage")
*/
@property NSString * _Nullable suggestionMessage __attribute__((swift_name("suggestionMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuggestionFeatureRequest.Companion")))
@interface MDSSuggestionFeatureRequestCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSSuggestionFeatureRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateGrantAccessDto")))
@interface MDSUpdateGrantAccessDto : MDSBase
- (instancetype)initWithDeleteFlag:(MDSBoolean * _Nullable)deleteFlag grantId:(MDSLong * _Nullable)grantId expiryDate:(NSString * _Nullable)expiryDate __attribute__((swift_name("init(deleteFlag:grantId:expiryDate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSUpdateGrantAccessDtoCompanion *companion __attribute__((swift_name("companion")));
- (MDSUpdateGrantAccessDto *)doCopyDeleteFlag:(MDSBoolean * _Nullable)deleteFlag grantId:(MDSLong * _Nullable)grantId expiryDate:(NSString * _Nullable)expiryDate __attribute__((swift_name("doCopy(deleteFlag:grantId:expiryDate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deleteFlag")
*/
@property (readonly) MDSBoolean * _Nullable deleteFlag __attribute__((swift_name("deleteFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expiryDate")
*/
@property (readonly) NSString * _Nullable expiryDate __attribute__((swift_name("expiryDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="grantId")
*/
@property (readonly) MDSLong * _Nullable grantId __attribute__((swift_name("grantId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateGrantAccessDto.Companion")))
@interface MDSUpdateGrantAccessDtoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSUpdateGrantAccessDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdatePatientProfileInfoRequest")))
@interface MDSUpdatePatientProfileInfoRequest : MDSBase
- (instancetype)initWithEmail:(NSString * _Nullable)email mobileNumber:(NSString * _Nullable)mobileNumber basicAddress:(NSString * _Nullable)basicAddress detailedAddress:(NSString * _Nullable)detailedAddress patientPicture:(MDSPart * _Nullable)patientPicture __attribute__((swift_name("init(email:mobileNumber:basicAddress:detailedAddress:patientPicture:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSUpdatePatientProfileInfoRequestCompanion *companion __attribute__((swift_name("companion")));
- (MDSUpdatePatientProfileInfoRequest *)doCopyEmail:(NSString * _Nullable)email mobileNumber:(NSString * _Nullable)mobileNumber basicAddress:(NSString * _Nullable)basicAddress detailedAddress:(NSString * _Nullable)detailedAddress patientPicture:(MDSPart * _Nullable)patientPicture __attribute__((swift_name("doCopy(email:mobileNumber:basicAddress:detailedAddress:patientPicture:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="basicAddress")
*/
@property NSString * _Nullable basicAddress __attribute__((swift_name("basicAddress")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="detailedAddress")
*/
@property NSString * _Nullable detailedAddress __attribute__((swift_name("detailedAddress")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mobileNumber")
*/
@property NSString * _Nullable mobileNumber __attribute__((swift_name("mobileNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientPicture")
*/
@property MDSPart * _Nullable patientPicture __attribute__((swift_name("patientPicture")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdatePatientProfileInfoRequest.Companion")))
@interface MDSUpdatePatientProfileInfoRequestCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSUpdatePatientProfileInfoRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdminSurveyStatusResponse")))
@interface MDSAdminSurveyStatusResponse : MDSBase
- (instancetype)initWithQuestions:(NSDictionary<NSString *, MDSQuestionDetail *> * _Nullable)questions answers:(NSArray<MDSAnswer *> * _Nullable)answers admSrvYSubYn:(NSString * _Nullable)admSrvYSubYn __attribute__((swift_name("init(questions:answers:admSrvYSubYn:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAdminSurveyStatusResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSAdminSurveyStatusResponse *)doCopyQuestions:(NSDictionary<NSString *, MDSQuestionDetail *> * _Nullable)questions answers:(NSArray<MDSAnswer *> * _Nullable)answers admSrvYSubYn:(NSString * _Nullable)admSrvYSubYn __attribute__((swift_name("doCopy(questions:answers:admSrvYSubYn:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="adm_SRVY_SUB_YN")
*/
@property (readonly) NSString * _Nullable admSrvYSubYn __attribute__((swift_name("admSrvYSubYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="answers")
*/
@property (readonly) NSArray<MDSAnswer *> * _Nullable answers __attribute__((swift_name("answers")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="questions")
*/
@property (readonly) NSDictionary<NSString *, MDSQuestionDetail *> * _Nullable questions __attribute__((swift_name("questions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdminSurveyStatusResponse.Companion")))
@interface MDSAdminSurveyStatusResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAdminSurveyStatusResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdmissionStatusResponse")))
@interface MDSAdmissionStatusResponse : MDSBase
- (instancetype)initWithPactId:(NSString * _Nullable)pactId admittedYn:(NSString * _Nullable)admittedYn __attribute__((swift_name("init(pactId:admittedYn:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAdmissionStatusResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSAdmissionStatusResponse *)doCopyPactId:(NSString * _Nullable)pactId admittedYn:(NSString * _Nullable)admittedYn __attribute__((swift_name("doCopy(pactId:admittedYn:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="admitted_YN")
*/
@property (readonly) NSString * _Nullable admittedYn __attribute__((swift_name("admittedYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pactId")
*/
@property (readonly) NSString * _Nullable pactId __attribute__((swift_name("pactId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdmissionStatusResponse.Companion")))
@interface MDSAdmissionStatusResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAdmissionStatusResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Allergy")))
@interface MDSAllergy : MDSBase
- (instancetype)initWithAllergyCode:(NSString * _Nullable)allergyCode allergyName:(NSString * _Nullable)allergyName commonCodeName:(NSString * _Nullable)commonCodeName briefingDate:(NSString * _Nullable)briefingDate foodAllergyName:(NSString * _Nullable)foodAllergyName hospitalName:(NSString * _Nullable)hospitalName hospitalCode:(NSString * _Nullable)hospitalCode __attribute__((swift_name("init(allergyCode:allergyName:commonCodeName:briefingDate:foodAllergyName:hospitalName:hospitalCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAllergyCompanion *companion __attribute__((swift_name("companion")));
- (MDSAllergy *)doCopyAllergyCode:(NSString * _Nullable)allergyCode allergyName:(NSString * _Nullable)allergyName commonCodeName:(NSString * _Nullable)commonCodeName briefingDate:(NSString * _Nullable)briefingDate foodAllergyName:(NSString * _Nullable)foodAllergyName hospitalName:(NSString * _Nullable)hospitalName hospitalCode:(NSString * _Nullable)hospitalCode __attribute__((swift_name("doCopy(allergyCode:allergyName:commonCodeName:briefingDate:foodAllergyName:hospitalName:hospitalCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="allergyCode")
*/
@property NSString * _Nullable allergyCode __attribute__((swift_name("allergyCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="allergyName")
*/
@property NSString * _Nullable allergyName __attribute__((swift_name("allergyName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="briefingDate")
*/
@property NSString * _Nullable briefingDate __attribute__((swift_name("briefingDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="commonCodeName")
*/
@property NSString * _Nullable commonCodeName __attribute__((swift_name("commonCodeName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="foodAllergyName")
*/
@property NSString * _Nullable foodAllergyName __attribute__((swift_name("foodAllergyName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalName")
*/
@property NSString * _Nullable hospitalName __attribute__((swift_name("hospitalName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Allergy.Companion")))
@interface MDSAllergyCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAllergyCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Answer")))
@interface MDSAnswer : MDSBase
- (instancetype)initWithAnswerId:(NSString * _Nullable)answerId questionId:(NSString * _Nullable)questionId __attribute__((swift_name("init(answerId:questionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAnswerCompanion *companion __attribute__((swift_name("companion")));
- (MDSAnswer *)doCopyAnswerId:(NSString * _Nullable)answerId questionId:(NSString * _Nullable)questionId __attribute__((swift_name("doCopy(answerId:questionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="answerId")
*/
@property (readonly) NSString * _Nullable answerId __attribute__((swift_name("answerId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="questionId")
*/
@property (readonly) NSString * _Nullable questionId __attribute__((swift_name("questionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Answer.Companion")))
@interface MDSAnswerCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAnswerCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppointmentCancellationReason")))
@interface MDSAppointmentCancellationReason : MDSBase
- (instancetype)initWithId:(NSString * _Nullable)id englishReason:(NSString * _Nullable)englishReason arabicReason:(NSString * _Nullable)arabicReason __attribute__((swift_name("init(id:englishReason:arabicReason:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAppointmentCancellationReasonCompanion *companion __attribute__((swift_name("companion")));
- (MDSAppointmentCancellationReason *)doCopyId:(NSString * _Nullable)id englishReason:(NSString * _Nullable)englishReason arabicReason:(NSString * _Nullable)arabicReason __attribute__((swift_name("doCopy(id:englishReason:arabicReason:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicReason")
*/
@property (readonly) NSString * _Nullable arabicReason __attribute__((swift_name("arabicReason")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishReason")
*/
@property (readonly) NSString * _Nullable englishReason __attribute__((swift_name("englishReason")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppointmentCancellationReason.Companion")))
@interface MDSAppointmentCancellationReasonCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAppointmentCancellationReasonCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppointmentCheckTypes")))
@interface MDSAppointmentCheckTypes : MDSKotlinEnum<MDSAppointmentCheckTypes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MDSAppointmentCheckTypes *employee __attribute__((swift_name("employee")));
@property (class, readonly) MDSAppointmentCheckTypes *phcPcp __attribute__((swift_name("phcPcp")));
+ (MDSKotlinArray<MDSAppointmentCheckTypes *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MDSAppointmentCheckTypes *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppointmentDetails")))
@interface MDSAppointmentDetails : MDSBase
- (instancetype)initWithAppointmentConfirmationDateTime:(NSString * _Nullable)appointmentConfirmationDateTime patientName:(NSString * _Nullable)patientName monthName:(NSString * _Nullable)monthName dayDate:(NSString * _Nullable)dayDate time:(NSString * _Nullable)time appointmentTypeCode:(NSString * _Nullable)appointmentTypeCode appointmentRescheduleFlag:(NSString * _Nullable)appointmentRescheduleFlag arbLocation:(NSString * _Nullable)arbLocation cancellationByClinicFlag:(NSString * _Nullable)cancellationByClinicFlag cancellationByPatientFlag:(NSString * _Nullable)cancellationByPatientFlag hijriDate:(NSString * _Nullable)hijriDate doctorName:(NSString * _Nullable)doctorName employeeClinicFlag:(NSString * _Nullable)employeeClinicFlag examinationCode:(NSString * _Nullable)examinationCode expectedMedicalEndDate:(NSString * _Nullable)expectedMedicalEndDate expectedMedicalStartDate:(NSString * _Nullable)expectedMedicalStartDate hospitalServiceTypeCode:(NSString * _Nullable)hospitalServiceTypeCode hospitalCode:(NSString * _Nullable)hospitalCode localDoctorName:(NSString * _Nullable)localDoctorName localMedicalDepartmentName:(NSString * _Nullable)localMedicalDepartmentName localMedicalServiceName:(NSString * _Nullable)localMedicalServiceName location:(NSString * _Nullable)location medicalStaffNumber:(NSString * _Nullable)medicalStaffNumber medicalAmPmTypeCode:(NSString * _Nullable)medicalAmPmTypeCode medicalDepartmentCode:(NSString * _Nullable)medicalDepartmentCode medicalDepartmentName:(NSString * _Nullable)medicalDepartmentName medicalServiceCode:(NSString * _Nullable)medicalServiceCode medicalServiceLatitude:(NSString * _Nullable)medicalServiceLatitude medicalServiceLongitude:(NSString * _Nullable)medicalServiceLongitude medicalServiceName:(NSString * _Nullable)medicalServiceName orderCategoryCode:(NSString * _Nullable)orderCategoryCode orderGroupCode:(NSString * _Nullable)orderGroupCode orderId:(NSString * _Nullable)orderId patientDepartmentTypeCode:(NSString * _Nullable)patientDepartmentTypeCode partialMedicalWaitingId:(NSString * _Nullable)partialMedicalWaitingId patientDirectFlag:(NSString * _Nullable)patientDirectFlag patientId:(NSString * _Nullable)patientId rehabilitationRescheduleFlag:(NSString * _Nullable)rehabilitationRescheduleFlag roomTypeCode:(NSString * _Nullable)roomTypeCode reservationTherapySid:(NSString * _Nullable)reservationTherapySid scheduleProgressStatusCode:(NSString * _Nullable)scheduleProgressStatusCode scheduleReservationSequence:(NSString * _Nullable)scheduleReservationSequence specialRescheduleFlag:(NSString * _Nullable)specialRescheduleFlag dayName:(NSString * _Nullable)dayName hospitalType:(NSString * _Nullable)hospitalType medicalServiceLink:(NSString * _Nullable)medicalServiceLink arabicDayName:(NSString * _Nullable)arabicDayName cancellationProgressFlag:(NSString * _Nullable)cancellationProgressFlag patientRequestFlag:(NSString * _Nullable)patientRequestFlag pcpYN:(NSString * _Nullable)pcpYN rehbMedDeptCd:(NSString * _Nullable)rehbMedDeptCd __attribute__((swift_name("init(appointmentConfirmationDateTime:patientName:monthName:dayDate:time:appointmentTypeCode:appointmentRescheduleFlag:arbLocation:cancellationByClinicFlag:cancellationByPatientFlag:hijriDate:doctorName:employeeClinicFlag:examinationCode:expectedMedicalEndDate:expectedMedicalStartDate:hospitalServiceTypeCode:hospitalCode:localDoctorName:localMedicalDepartmentName:localMedicalServiceName:location:medicalStaffNumber:medicalAmPmTypeCode:medicalDepartmentCode:medicalDepartmentName:medicalServiceCode:medicalServiceLatitude:medicalServiceLongitude:medicalServiceName:orderCategoryCode:orderGroupCode:orderId:patientDepartmentTypeCode:partialMedicalWaitingId:patientDirectFlag:patientId:rehabilitationRescheduleFlag:roomTypeCode:reservationTherapySid:scheduleProgressStatusCode:scheduleReservationSequence:specialRescheduleFlag:dayName:hospitalType:medicalServiceLink:arabicDayName:cancellationProgressFlag:patientRequestFlag:pcpYN:rehbMedDeptCd:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAppointmentDetailsCompanion *companion __attribute__((swift_name("companion")));
- (MDSAppointmentDetails *)doCopyAppointmentConfirmationDateTime:(NSString * _Nullable)appointmentConfirmationDateTime patientName:(NSString * _Nullable)patientName monthName:(NSString * _Nullable)monthName dayDate:(NSString * _Nullable)dayDate time:(NSString * _Nullable)time appointmentTypeCode:(NSString * _Nullable)appointmentTypeCode appointmentRescheduleFlag:(NSString * _Nullable)appointmentRescheduleFlag arbLocation:(NSString * _Nullable)arbLocation cancellationByClinicFlag:(NSString * _Nullable)cancellationByClinicFlag cancellationByPatientFlag:(NSString * _Nullable)cancellationByPatientFlag hijriDate:(NSString * _Nullable)hijriDate doctorName:(NSString * _Nullable)doctorName employeeClinicFlag:(NSString * _Nullable)employeeClinicFlag examinationCode:(NSString * _Nullable)examinationCode expectedMedicalEndDate:(NSString * _Nullable)expectedMedicalEndDate expectedMedicalStartDate:(NSString * _Nullable)expectedMedicalStartDate hospitalServiceTypeCode:(NSString * _Nullable)hospitalServiceTypeCode hospitalCode:(NSString * _Nullable)hospitalCode localDoctorName:(NSString * _Nullable)localDoctorName localMedicalDepartmentName:(NSString * _Nullable)localMedicalDepartmentName localMedicalServiceName:(NSString * _Nullable)localMedicalServiceName location:(NSString * _Nullable)location medicalStaffNumber:(NSString * _Nullable)medicalStaffNumber medicalAmPmTypeCode:(NSString * _Nullable)medicalAmPmTypeCode medicalDepartmentCode:(NSString * _Nullable)medicalDepartmentCode medicalDepartmentName:(NSString * _Nullable)medicalDepartmentName medicalServiceCode:(NSString * _Nullable)medicalServiceCode medicalServiceLatitude:(NSString * _Nullable)medicalServiceLatitude medicalServiceLongitude:(NSString * _Nullable)medicalServiceLongitude medicalServiceName:(NSString * _Nullable)medicalServiceName orderCategoryCode:(NSString * _Nullable)orderCategoryCode orderGroupCode:(NSString * _Nullable)orderGroupCode orderId:(NSString * _Nullable)orderId patientDepartmentTypeCode:(NSString * _Nullable)patientDepartmentTypeCode partialMedicalWaitingId:(NSString * _Nullable)partialMedicalWaitingId patientDirectFlag:(NSString * _Nullable)patientDirectFlag patientId:(NSString * _Nullable)patientId rehabilitationRescheduleFlag:(NSString * _Nullable)rehabilitationRescheduleFlag roomTypeCode:(NSString * _Nullable)roomTypeCode reservationTherapySid:(NSString * _Nullable)reservationTherapySid scheduleProgressStatusCode:(NSString * _Nullable)scheduleProgressStatusCode scheduleReservationSequence:(NSString * _Nullable)scheduleReservationSequence specialRescheduleFlag:(NSString * _Nullable)specialRescheduleFlag dayName:(NSString * _Nullable)dayName hospitalType:(NSString * _Nullable)hospitalType medicalServiceLink:(NSString * _Nullable)medicalServiceLink arabicDayName:(NSString * _Nullable)arabicDayName cancellationProgressFlag:(NSString * _Nullable)cancellationProgressFlag patientRequestFlag:(NSString * _Nullable)patientRequestFlag pcpYN:(NSString * _Nullable)pcpYN rehbMedDeptCd:(NSString * _Nullable)rehbMedDeptCd __attribute__((swift_name("doCopy(appointmentConfirmationDateTime:patientName:monthName:dayDate:time:appointmentTypeCode:appointmentRescheduleFlag:arbLocation:cancellationByClinicFlag:cancellationByPatientFlag:hijriDate:doctorName:employeeClinicFlag:examinationCode:expectedMedicalEndDate:expectedMedicalStartDate:hospitalServiceTypeCode:hospitalCode:localDoctorName:localMedicalDepartmentName:localMedicalServiceName:location:medicalStaffNumber:medicalAmPmTypeCode:medicalDepartmentCode:medicalDepartmentName:medicalServiceCode:medicalServiceLatitude:medicalServiceLongitude:medicalServiceName:orderCategoryCode:orderGroupCode:orderId:patientDepartmentTypeCode:partialMedicalWaitingId:patientDirectFlag:patientId:rehabilitationRescheduleFlag:roomTypeCode:reservationTherapySid:scheduleProgressStatusCode:scheduleReservationSequence:specialRescheduleFlag:dayName:hospitalType:medicalServiceLink:arabicDayName:cancellationProgressFlag:patientRequestFlag:pcpYN:rehbMedDeptCd:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appointmentConfirmationDateTime")
*/
@property (readonly) NSString * _Nullable appointmentConfirmationDateTime __attribute__((swift_name("appointmentConfirmationDateTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appointmentRescheduleFlag")
*/
@property (readonly) NSString * _Nullable appointmentRescheduleFlag __attribute__((swift_name("appointmentRescheduleFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appointmentTypeCode")
*/
@property (readonly) NSString * _Nullable appointmentTypeCode __attribute__((swift_name("appointmentTypeCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicDayName")
*/
@property (readonly) NSString * _Nullable arabicDayName __attribute__((swift_name("arabicDayName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arbLocation")
*/
@property (readonly) NSString * _Nullable arbLocation __attribute__((swift_name("arbLocation")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cancellationByClinicFlag")
*/
@property (readonly) NSString * _Nullable cancellationByClinicFlag __attribute__((swift_name("cancellationByClinicFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cancellationByPatientFlag")
*/
@property (readonly) NSString * _Nullable cancellationByPatientFlag __attribute__((swift_name("cancellationByPatientFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cancellationProgressFlag")
*/
@property (readonly) NSString * _Nullable cancellationProgressFlag __attribute__((swift_name("cancellationProgressFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dayDate")
*/
@property (readonly) NSString * _Nullable dayDate __attribute__((swift_name("dayDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dayName")
*/
@property (readonly) NSString * _Nullable dayName __attribute__((swift_name("dayName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="doctorName")
*/
@property (readonly) NSString * _Nullable doctorName __attribute__((swift_name("doctorName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="employeeClinicFlag")
*/
@property (readonly) NSString * _Nullable employeeClinicFlag __attribute__((swift_name("employeeClinicFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="examinationCode")
*/
@property (readonly) NSString * _Nullable examinationCode __attribute__((swift_name("examinationCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expectedMedicalEndDate")
*/
@property (readonly) NSString * _Nullable expectedMedicalEndDate __attribute__((swift_name("expectedMedicalEndDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expectedMedicalStartDate")
*/
@property (readonly) NSString * _Nullable expectedMedicalStartDate __attribute__((swift_name("expectedMedicalStartDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hijriDate")
*/
@property (readonly) NSString * _Nullable hijriDate __attribute__((swift_name("hijriDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalServiceTypeCode")
*/
@property (readonly) NSString * _Nullable hospitalServiceTypeCode __attribute__((swift_name("hospitalServiceTypeCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalType")
*/
@property (readonly) NSString * _Nullable hospitalType __attribute__((swift_name("hospitalType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="localDoctorName")
*/
@property (readonly) NSString * _Nullable localDoctorName __attribute__((swift_name("localDoctorName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="localMedicalDepartmentName")
*/
@property (readonly) NSString * _Nullable localMedicalDepartmentName __attribute__((swift_name("localMedicalDepartmentName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="localMedicalServiceName")
*/
@property (readonly) NSString * _Nullable localMedicalServiceName __attribute__((swift_name("localMedicalServiceName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="location")
*/
@property (readonly) NSString * _Nullable location __attribute__((swift_name("location")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalAmPmTypeCode")
*/
@property (readonly) NSString * _Nullable medicalAmPmTypeCode __attribute__((swift_name("medicalAmPmTypeCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalDepartmentCode")
*/
@property (readonly) NSString * _Nullable medicalDepartmentCode __attribute__((swift_name("medicalDepartmentCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalDepartmentName")
*/
@property (readonly) NSString * _Nullable medicalDepartmentName __attribute__((swift_name("medicalDepartmentName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalServiceCode")
*/
@property (readonly) NSString * _Nullable medicalServiceCode __attribute__((swift_name("medicalServiceCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalServiceLatitude")
*/
@property (readonly) NSString * _Nullable medicalServiceLatitude __attribute__((swift_name("medicalServiceLatitude")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalServiceLink")
*/
@property (readonly) NSString * _Nullable medicalServiceLink __attribute__((swift_name("medicalServiceLink")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalServiceLongitude")
*/
@property (readonly) NSString * _Nullable medicalServiceLongitude __attribute__((swift_name("medicalServiceLongitude")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalServiceName")
*/
@property (readonly) NSString * _Nullable medicalServiceName __attribute__((swift_name("medicalServiceName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalStaffNumber")
*/
@property (readonly) NSString * _Nullable medicalStaffNumber __attribute__((swift_name("medicalStaffNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="monthName")
*/
@property (readonly) NSString * _Nullable monthName __attribute__((swift_name("monthName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderCategoryCode")
*/
@property (readonly) NSString * _Nullable orderCategoryCode __attribute__((swift_name("orderCategoryCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderGroupCode")
*/
@property (readonly) NSString * _Nullable orderGroupCode __attribute__((swift_name("orderGroupCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderId")
*/
@property (readonly) NSString * _Nullable orderId __attribute__((swift_name("orderId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="partialMedicalWaitingId")
*/
@property (readonly) NSString * _Nullable partialMedicalWaitingId __attribute__((swift_name("partialMedicalWaitingId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientDepartmentTypeCode")
*/
@property (readonly) NSString * _Nullable patientDepartmentTypeCode __attribute__((swift_name("patientDepartmentTypeCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientDirectFlag")
*/
@property (readonly) NSString * _Nullable patientDirectFlag __attribute__((swift_name("patientDirectFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property (readonly) NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientName")
*/
@property (readonly) NSString * _Nullable patientName __attribute__((swift_name("patientName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientRequestFlag")
*/
@property (readonly) NSString * _Nullable patientRequestFlag __attribute__((swift_name("patientRequestFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pcp_YN")
*/
@property (readonly) NSString * _Nullable pcpYN __attribute__((swift_name("pcpYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rehabilitationRescheduleFlag")
*/
@property (readonly) NSString * _Nullable rehabilitationRescheduleFlag __attribute__((swift_name("rehabilitationRescheduleFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rehb_MED_DEPT_CD")
*/
@property (readonly) NSString * _Nullable rehbMedDeptCd __attribute__((swift_name("rehbMedDeptCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reservationTherapySid")
*/
@property (readonly) NSString * _Nullable reservationTherapySid __attribute__((swift_name("reservationTherapySid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="roomTypeCode")
*/
@property (readonly) NSString * _Nullable roomTypeCode __attribute__((swift_name("roomTypeCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="scheduleProgressStatusCode")
*/
@property (readonly) NSString * _Nullable scheduleProgressStatusCode __attribute__((swift_name("scheduleProgressStatusCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="scheduleReservationSequence")
*/
@property (readonly) NSString * _Nullable scheduleReservationSequence __attribute__((swift_name("scheduleReservationSequence")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="specialRescheduleFlag")
*/
@property (readonly) NSString * _Nullable specialRescheduleFlag __attribute__((swift_name("specialRescheduleFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="time")
*/
@property (readonly) NSString * _Nullable time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppointmentDetails.Companion")))
@interface MDSAppointmentDetailsCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAppointmentDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppointmentRequest")))
@interface MDSAppointmentRequest : MDSBase
- (instancetype)initWithCancellationRemarkContent:(NSString * _Nullable)cancellationRemarkContent etceteraRemarkContent:(NSString * _Nullable)etceteraRemarkContent hopeMedicalTreatmentEndDate:(NSString * _Nullable)hopeMedicalTreatmentEndDate hopeMedicalTreatmentStartDate:(NSString * _Nullable)hopeMedicalTreatmentStartDate hospitalCode:(NSString * _Nullable)hospitalCode arabicServiceName:(NSString * _Nullable)arabicServiceName medicalTreatmentTypeCode:(NSString * _Nullable)medicalTreatmentTypeCode medicalTreatmentServiceCode:(NSString * _Nullable)medicalTreatmentServiceCode englishServiceName:(NSString * _Nullable)englishServiceName patientServicesDepartmentTypeCode:(NSString * _Nullable)patientServicesDepartmentTypeCode medicalTreatmentWaitID:(NSString * _Nullable)medicalTreatmentWaitID patientId:(NSString * _Nullable)patientId requestDateTime:(NSString * _Nullable)requestDateTime scheduleProgressStatusCode:(NSString * _Nullable)scheduleProgressStatusCode medicalDepartmentName:(NSString * _Nullable)medicalDepartmentName __attribute__((swift_name("init(cancellationRemarkContent:etceteraRemarkContent:hopeMedicalTreatmentEndDate:hopeMedicalTreatmentStartDate:hospitalCode:arabicServiceName:medicalTreatmentTypeCode:medicalTreatmentServiceCode:englishServiceName:patientServicesDepartmentTypeCode:medicalTreatmentWaitID:patientId:requestDateTime:scheduleProgressStatusCode:medicalDepartmentName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAppointmentRequestCompanion *companion __attribute__((swift_name("companion")));
- (MDSAppointmentRequest *)doCopyCancellationRemarkContent:(NSString * _Nullable)cancellationRemarkContent etceteraRemarkContent:(NSString * _Nullable)etceteraRemarkContent hopeMedicalTreatmentEndDate:(NSString * _Nullable)hopeMedicalTreatmentEndDate hopeMedicalTreatmentStartDate:(NSString * _Nullable)hopeMedicalTreatmentStartDate hospitalCode:(NSString * _Nullable)hospitalCode arabicServiceName:(NSString * _Nullable)arabicServiceName medicalTreatmentTypeCode:(NSString * _Nullable)medicalTreatmentTypeCode medicalTreatmentServiceCode:(NSString * _Nullable)medicalTreatmentServiceCode englishServiceName:(NSString * _Nullable)englishServiceName patientServicesDepartmentTypeCode:(NSString * _Nullable)patientServicesDepartmentTypeCode medicalTreatmentWaitID:(NSString * _Nullable)medicalTreatmentWaitID patientId:(NSString * _Nullable)patientId requestDateTime:(NSString * _Nullable)requestDateTime scheduleProgressStatusCode:(NSString * _Nullable)scheduleProgressStatusCode medicalDepartmentName:(NSString * _Nullable)medicalDepartmentName __attribute__((swift_name("doCopy(cancellationRemarkContent:etceteraRemarkContent:hopeMedicalTreatmentEndDate:hopeMedicalTreatmentStartDate:hospitalCode:arabicServiceName:medicalTreatmentTypeCode:medicalTreatmentServiceCode:englishServiceName:patientServicesDepartmentTypeCode:medicalTreatmentWaitID:patientId:requestDateTime:scheduleProgressStatusCode:medicalDepartmentName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicServiceName")
*/
@property NSString * _Nullable arabicServiceName __attribute__((swift_name("arabicServiceName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cancellationRemarkContent")
*/
@property NSString * _Nullable cancellationRemarkContent __attribute__((swift_name("cancellationRemarkContent")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishServiceName")
*/
@property NSString * _Nullable englishServiceName __attribute__((swift_name("englishServiceName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="etceteraRemarkContent")
*/
@property NSString * _Nullable etceteraRemarkContent __attribute__((swift_name("etceteraRemarkContent")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hopeMedicalTreatmentEndDate")
*/
@property NSString * _Nullable hopeMedicalTreatmentEndDate __attribute__((swift_name("hopeMedicalTreatmentEndDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hopeMedicalTreatmentStartDate")
*/
@property NSString * _Nullable hopeMedicalTreatmentStartDate __attribute__((swift_name("hopeMedicalTreatmentStartDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalDepartmentName")
*/
@property NSString * _Nullable medicalDepartmentName __attribute__((swift_name("medicalDepartmentName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalTreatmentServiceCode")
*/
@property NSString * _Nullable medicalTreatmentServiceCode __attribute__((swift_name("medicalTreatmentServiceCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="amPmMarker")
*/
@property NSString * _Nullable medicalTreatmentTypeCode __attribute__((swift_name("medicalTreatmentTypeCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalTreatmentWaitID")
*/
@property NSString * _Nullable medicalTreatmentWaitID __attribute__((swift_name("medicalTreatmentWaitID")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientServicesDepartmentTypeCode")
*/
@property NSString * _Nullable patientServicesDepartmentTypeCode __attribute__((swift_name("patientServicesDepartmentTypeCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestDateTime")
*/
@property NSString * _Nullable requestDateTime __attribute__((swift_name("requestDateTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="scheduleProgressStatusCode")
*/
@property NSString * _Nullable scheduleProgressStatusCode __attribute__((swift_name("scheduleProgressStatusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppointmentRequest.Companion")))
@interface MDSAppointmentRequestCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAppointmentRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppointmentServicesTypes")))
@interface MDSAppointmentServicesTypes : MDSKotlinEnum<MDSAppointmentServicesTypes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MDSAppointmentServicesTypes *none __attribute__((swift_name("none")));
@property (class, readonly) MDSAppointmentServicesTypes *pcp __attribute__((swift_name("pcp")));
@property (class, readonly) MDSAppointmentServicesTypes *bc __attribute__((swift_name("bc")));
@property (class, readonly) MDSAppointmentServicesTypes *phc __attribute__((swift_name("phc")));
@property (class, readonly) MDSAppointmentServicesTypes *emp __attribute__((swift_name("emp")));
@property (class, readonly) MDSAppointmentServicesTypes *std __attribute__((swift_name("std")));
+ (MDSKotlinArray<MDSAppointmentServicesTypes *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MDSAppointmentServicesTypes *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppointmentTypes")))
@interface MDSAppointmentTypes : MDSKotlinEnum<MDSAppointmentTypes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MDSAppointmentTypes *normal __attribute__((swift_name("normal")));
@property (class, readonly) MDSAppointmentTypes *dental __attribute__((swift_name("dental")));
@property (class, readonly) MDSAppointmentTypes *vCare __attribute__((swift_name("vCare")));
@property (class, readonly) MDSAppointmentTypes *covid19 __attribute__((swift_name("covid19")));
+ (MDSKotlinArray<MDSAppointmentTypes *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MDSAppointmentTypes *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppointmentsAvailableDate")))
@interface MDSAppointmentsAvailableDate : MDSBase
- (instancetype)initWithHspTpCd:(NSString * _Nullable)hspTpCd medDTM:(NSString * _Nullable)medDTM __attribute__((swift_name("init(hspTpCd:medDTM:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAppointmentsAvailableDateCompanion *companion __attribute__((swift_name("companion")));
- (MDSAppointmentsAvailableDate *)doCopyHspTpCd:(NSString * _Nullable)hspTpCd medDTM:(NSString * _Nullable)medDTM __attribute__((swift_name("doCopy(hspTpCd:medDTM:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property NSString * _Nullable hspTpCd __attribute__((swift_name("hspTpCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medDateTime")
*/
@property NSString * _Nullable medDTM __attribute__((swift_name("medDTM")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppointmentsAvailableDate.Companion")))
@interface MDSAppointmentsAvailableDateCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAppointmentsAvailableDateCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticationResponse")))
@interface MDSAuthenticationResponse : MDSBase
- (instancetype)initWithToken:(NSString * _Nullable)token lastTwoDigits:(NSString * _Nullable)lastTwoDigits type:(NSString * _Nullable)type title:(NSString * _Nullable)title status:(MDSInt * _Nullable)status detail:(NSString * _Nullable)detail instance:(NSString * _Nullable)instance errorMessage:(NSString * _Nullable)errorMessage exceptionTime:(NSString * _Nullable)exceptionTime __attribute__((swift_name("init(token:lastTwoDigits:type:title:status:detail:instance:errorMessage:exceptionTime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAuthenticationResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSAuthenticationResponse *)doCopyToken:(NSString * _Nullable)token lastTwoDigits:(NSString * _Nullable)lastTwoDigits type:(NSString * _Nullable)type title:(NSString * _Nullable)title status:(MDSInt * _Nullable)status detail:(NSString * _Nullable)detail instance:(NSString * _Nullable)instance errorMessage:(NSString * _Nullable)errorMessage exceptionTime:(NSString * _Nullable)exceptionTime __attribute__((swift_name("doCopy(token:lastTwoDigits:type:title:status:detail:instance:errorMessage:exceptionTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="detail")
*/
@property NSString * _Nullable detail __attribute__((swift_name("detail")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="errorMessage")
*/
@property NSString * _Nullable errorMessage __attribute__((swift_name("errorMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="exceptionTime")
*/
@property NSString * _Nullable exceptionTime __attribute__((swift_name("exceptionTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="instance")
*/
@property NSString * _Nullable instance __attribute__((swift_name("instance")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lastTwoDigits")
*/
@property NSString * _Nullable lastTwoDigits __attribute__((swift_name("lastTwoDigits")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property MDSInt * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token")
*/
@property NSString * _Nullable token __attribute__((swift_name("token")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticationResponse.Companion")))
@interface MDSAuthenticationResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAuthenticationResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AvailablePhysicianResponse")))
@interface MDSAvailablePhysicianResponse : MDSBase
- (instancetype)initWithHospitalCode:(NSString * _Nullable)hospitalCode hospitalName:(NSString * _Nullable)hospitalName doctorId:(NSString * _Nullable)doctorId doctorName:(NSString * _Nullable)doctorName medSrvCd:(NSString * _Nullable)medSrvCd medDeptCd:(NSString * _Nullable)medDeptCd medSrvExplCnte:(NSString * _Nullable)medSrvExplCnte medSevPclrCnte:(NSString * _Nullable)medSevPclrCnte bcYn:(NSString * _Nullable)bcYn lclStfNm:(NSString * _Nullable)lclStfNm medDeptNm:(NSString * _Nullable)medDeptNm psYn:(NSString * _Nullable)psYn mpYn:(NSString * _Nullable)mpYn medSrvNm:(NSString * _Nullable)medSrvNm __attribute__((swift_name("init(hospitalCode:hospitalName:doctorId:doctorName:medSrvCd:medDeptCd:medSrvExplCnte:medSevPclrCnte:bcYn:lclStfNm:medDeptNm:psYn:mpYn:medSrvNm:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSAvailablePhysicianResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSAvailablePhysicianResponse *)doCopyHospitalCode:(NSString * _Nullable)hospitalCode hospitalName:(NSString * _Nullable)hospitalName doctorId:(NSString * _Nullable)doctorId doctorName:(NSString * _Nullable)doctorName medSrvCd:(NSString * _Nullable)medSrvCd medDeptCd:(NSString * _Nullable)medDeptCd medSrvExplCnte:(NSString * _Nullable)medSrvExplCnte medSevPclrCnte:(NSString * _Nullable)medSevPclrCnte bcYn:(NSString * _Nullable)bcYn lclStfNm:(NSString * _Nullable)lclStfNm medDeptNm:(NSString * _Nullable)medDeptNm psYn:(NSString * _Nullable)psYn mpYn:(NSString * _Nullable)mpYn medSrvNm:(NSString * _Nullable)medSrvNm __attribute__((swift_name("doCopy(hospitalCode:hospitalName:doctorId:doctorName:medSrvCd:medDeptCd:medSrvExplCnte:medSevPclrCnte:bcYn:lclStfNm:medDeptNm:psYn:mpYn:medSrvNm:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bc_YN")
*/
@property (readonly) NSString * _Nullable bcYn __attribute__((swift_name("bcYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="doctorId")
*/
@property (readonly) NSString * _Nullable doctorId __attribute__((swift_name("doctorId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="doctorName")
*/
@property (readonly) NSString * _Nullable doctorName __attribute__((swift_name("doctorName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalName")
*/
@property (readonly) NSString * _Nullable hospitalName __attribute__((swift_name("hospitalName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lcl_STF_NM")
*/
@property (readonly) NSString * _Nullable lclStfNm __attribute__((swift_name("lclStfNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="med_DEPT_CD")
*/
@property (readonly) NSString * _Nullable medDeptCd __attribute__((swift_name("medDeptCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="med_DEPT_NM")
*/
@property (readonly) NSString * _Nullable medDeptNm __attribute__((swift_name("medDeptNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="med_SEV_PCLR_CNTE")
*/
@property (readonly) NSString * _Nullable medSevPclrCnte __attribute__((swift_name("medSevPclrCnte")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="med_SRV_CD")
*/
@property (readonly) NSString * _Nullable medSrvCd __attribute__((swift_name("medSrvCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="med_SRV_EXPL_CNTE")
*/
@property (readonly) NSString * _Nullable medSrvExplCnte __attribute__((swift_name("medSrvExplCnte")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="med_SRV_NM")
*/
@property (readonly) NSString * _Nullable medSrvNm __attribute__((swift_name("medSrvNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mp_YN")
*/
@property (readonly) NSString * _Nullable mpYn __attribute__((swift_name("mpYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ps_YN")
*/
@property (readonly) NSString * _Nullable psYn __attribute__((swift_name("psYn")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AvailablePhysicianResponse.Companion")))
@interface MDSAvailablePhysicianResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSAvailablePhysicianResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BodyInfoPeriod")))
@interface MDSBodyInfoPeriod : MDSBase
- (instancetype)initWithBodyInfoId:(MDSInt * _Nullable)bodyInfoId patientId:(NSString * _Nullable)patientId itemCode:(NSString * _Nullable)itemCode itemValue:(NSString * _Nullable)itemValue registrationDateTime:(NSString * _Nullable)registrationDateTime deletionDateTime:(NSString * _Nullable)deletionDateTime diastolicBloodPressure:(NSString * _Nullable)diastolicBloodPressure bodyMass:(NSString * _Nullable)bodyMass entryTP:(NSString * _Nullable)entryTP __attribute__((swift_name("init(bodyInfoId:patientId:itemCode:itemValue:registrationDateTime:deletionDateTime:diastolicBloodPressure:bodyMass:entryTP:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSBodyInfoPeriodCompanion *companion __attribute__((swift_name("companion")));
- (MDSBodyInfoPeriod *)doCopyBodyInfoId:(MDSInt * _Nullable)bodyInfoId patientId:(NSString * _Nullable)patientId itemCode:(NSString * _Nullable)itemCode itemValue:(NSString * _Nullable)itemValue registrationDateTime:(NSString * _Nullable)registrationDateTime deletionDateTime:(NSString * _Nullable)deletionDateTime diastolicBloodPressure:(NSString * _Nullable)diastolicBloodPressure bodyMass:(NSString * _Nullable)bodyMass entryTP:(NSString * _Nullable)entryTP __attribute__((swift_name("doCopy(bodyInfoId:patientId:itemCode:itemValue:registrationDateTime:deletionDateTime:diastolicBloodPressure:bodyMass:entryTP:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bodyInfoId")
*/
@property (readonly) MDSInt * _Nullable bodyInfoId __attribute__((swift_name("bodyInfoId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bodyMass")
*/
@property (readonly) NSString * _Nullable bodyMass __attribute__((swift_name("bodyMass")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deletionDateTime")
*/
@property (readonly) NSString * _Nullable deletionDateTime __attribute__((swift_name("deletionDateTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="diastolicBloodPressure")
*/
@property (readonly) NSString * _Nullable diastolicBloodPressure __attribute__((swift_name("diastolicBloodPressure")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="entry_TP")
*/
@property (readonly) NSString * _Nullable entryTP __attribute__((swift_name("entryTP")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="itemCode")
*/
@property (readonly) NSString * _Nullable itemCode __attribute__((swift_name("itemCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="itemValue")
*/
@property (readonly) NSString * _Nullable itemValue __attribute__((swift_name("itemValue")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property (readonly) NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="registrationDateTime")
*/
@property (readonly) NSString * _Nullable registrationDateTime __attribute__((swift_name("registrationDateTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BodyInfoPeriod.Companion")))
@interface MDSBodyInfoPeriodCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSBodyInfoPeriodCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BodyInfoPeriod2")))
@interface MDSBodyInfoPeriod2 : MDSBase
- (instancetype)initWithPatientId:(NSString * _Nullable)patientId itemCode:(NSString * _Nullable)itemCode itemValue:(NSString * _Nullable)itemValue registrationDateTime:(NSString * _Nullable)registrationDateTime deletionDateTime:(NSString * _Nullable)deletionDateTime lbdyINFID:(MDSDouble * _Nullable)lbdyINFID blsgMSMTCD:(NSString * _Nullable)blsgMSMTCD blprsMSMTCD:(NSString * _Nullable)blprsMSMTCD entryTP:(NSString * _Nullable)entryTP __attribute__((swift_name("init(patientId:itemCode:itemValue:registrationDateTime:deletionDateTime:lbdyINFID:blsgMSMTCD:blprsMSMTCD:entryTP:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSBodyInfoPeriod2Companion *companion __attribute__((swift_name("companion")));
- (MDSBodyInfoPeriod2 *)doCopyPatientId:(NSString * _Nullable)patientId itemCode:(NSString * _Nullable)itemCode itemValue:(NSString * _Nullable)itemValue registrationDateTime:(NSString * _Nullable)registrationDateTime deletionDateTime:(NSString * _Nullable)deletionDateTime lbdyINFID:(MDSDouble * _Nullable)lbdyINFID blsgMSMTCD:(NSString * _Nullable)blsgMSMTCD blprsMSMTCD:(NSString * _Nullable)blprsMSMTCD entryTP:(NSString * _Nullable)entryTP __attribute__((swift_name("doCopy(patientId:itemCode:itemValue:registrationDateTime:deletionDateTime:lbdyINFID:blsgMSMTCD:blprsMSMTCD:entryTP:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blprs_MSMT_CD")
*/
@property (readonly) NSString * _Nullable blprsMSMTCD __attribute__((swift_name("blprsMSMTCD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blsg_MSMT_CD")
*/
@property (readonly) NSString * _Nullable blsgMSMTCD __attribute__((swift_name("blsgMSMTCD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deletionDateTime")
*/
@property (readonly) NSString * _Nullable deletionDateTime __attribute__((swift_name("deletionDateTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="entry_TP")
*/
@property (readonly) NSString * _Nullable entryTP __attribute__((swift_name("entryTP")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="itemCode")
*/
@property (readonly) NSString * _Nullable itemCode __attribute__((swift_name("itemCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="itemValue")
*/
@property (readonly) NSString * _Nullable itemValue __attribute__((swift_name("itemValue")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lbdy_INF_ID")
*/
@property (readonly) MDSDouble * _Nullable lbdyINFID __attribute__((swift_name("lbdyINFID")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property (readonly) NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="registrationDateTime")
*/
@property (readonly) NSString * _Nullable registrationDateTime __attribute__((swift_name("registrationDateTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BodyInfoPeriod2.Companion")))
@interface MDSBodyInfoPeriod2Companion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSBodyInfoPeriod2Companion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CdStatusItem")))
@interface MDSCdStatusItem : MDSBase
- (instancetype)initWithRequestNumber:(MDSInt * _Nullable)requestNumber requestStatus:(NSString * _Nullable)requestStatus __attribute__((swift_name("init(requestNumber:requestStatus:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSCdStatusItemCompanion *companion __attribute__((swift_name("companion")));
- (MDSCdStatusItem *)doCopyRequestNumber:(MDSInt * _Nullable)requestNumber requestStatus:(NSString * _Nullable)requestStatus __attribute__((swift_name("doCopy(requestNumber:requestStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestNumber")
*/
@property MDSInt * _Nullable requestNumber __attribute__((swift_name("requestNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestStatus")
*/
@property NSString * _Nullable requestStatus __attribute__((swift_name("requestStatus")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CdStatusItem.Companion")))
@interface MDSCdStatusItemCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSCdStatusItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckNafathLoginResponse")))
@interface MDSCheckNafathLoginResponse : MDSBase
- (instancetype)initWithStatus:(NSString * _Nullable)status errorCode:(NSString * _Nullable)errorCode personId:(NSString * _Nullable)personId message:(NSString * _Nullable)message personInfoResponse:(MDSPersonInfoResponse * _Nullable)personInfoResponse __attribute__((swift_name("init(status:errorCode:personId:message:personInfoResponse:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSCheckNafathLoginResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSCheckNafathLoginResponse *)doCopyStatus:(NSString * _Nullable)status errorCode:(NSString * _Nullable)errorCode personId:(NSString * _Nullable)personId message:(NSString * _Nullable)message personInfoResponse:(MDSPersonInfoResponse * _Nullable)personInfoResponse __attribute__((swift_name("doCopy(status:errorCode:personId:message:personInfoResponse:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="errorCode")
*/
@property (readonly) NSString * _Nullable errorCode __attribute__((swift_name("errorCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="personId")
*/
@property (readonly) NSString * _Nullable personId __attribute__((swift_name("personId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="personInfoResponse")
*/
@property (readonly) MDSPersonInfoResponse * _Nullable personInfoResponse __attribute__((swift_name("personInfoResponse")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckNafathLoginResponse.Companion")))
@interface MDSCheckNafathLoginResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSCheckNafathLoginResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckNationalIdResponse")))
@interface MDSCheckNationalIdResponse : MDSBase
- (instancetype)initWithExist:(NSString * _Nullable)exist sso:(NSString * _Nullable)sso result:(NSArray<MDSNafathResultItem *> * _Nullable)result message:(NSString * _Nullable)message token:(NSString * _Nullable)token __attribute__((swift_name("init(exist:sso:result:message:token:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSCheckNationalIdResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSCheckNationalIdResponse *)doCopyExist:(NSString * _Nullable)exist sso:(NSString * _Nullable)sso result:(NSArray<MDSNafathResultItem *> * _Nullable)result message:(NSString * _Nullable)message token:(NSString * _Nullable)token __attribute__((swift_name("doCopy(exist:sso:result:message:token:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="exist")
*/
@property (readonly) NSString * _Nullable exist __attribute__((swift_name("exist")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="result")
*/
@property (readonly) NSArray<MDSNafathResultItem *> * _Nullable result __attribute__((swift_name("result")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sso")
*/
@property (readonly) NSString * _Nullable sso __attribute__((swift_name("sso")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token")
*/
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckNationalIdResponse.Companion")))
@interface MDSCheckNationalIdResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSCheckNationalIdResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckReportResults")))
@interface MDSCheckReportResults : MDSBase
- (instancetype)initWithPendingSurvey:(NSString * _Nullable)pendingSurvey completeSurvey:(NSString * _Nullable)completeSurvey message:(NSString * _Nullable)message __attribute__((swift_name("init(pendingSurvey:completeSurvey:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSCheckReportResultsCompanion *companion __attribute__((swift_name("companion")));
- (MDSCheckReportResults *)doCopyPendingSurvey:(NSString * _Nullable)pendingSurvey completeSurvey:(NSString * _Nullable)completeSurvey message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(pendingSurvey:completeSurvey:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="completeSurvey")
*/
@property (readonly) NSString * _Nullable completeSurvey __attribute__((swift_name("completeSurvey")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pendingSurvey")
*/
@property (readonly) NSString * _Nullable pendingSurvey __attribute__((swift_name("pendingSurvey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckReportResults.Companion")))
@interface MDSCheckReportResultsCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSCheckReportResultsCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckTherapyResponse")))
@interface MDSCheckTherapyResponse : MDSBase
- (instancetype)initWithTotal:(MDSInt * _Nullable)total reservationDateTime:(NSString * _Nullable)reservationDateTime nextVisitType:(NSString * _Nullable)nextVisitType __attribute__((swift_name("init(total:reservationDateTime:nextVisitType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSCheckTherapyResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSCheckTherapyResponse *)doCopyTotal:(MDSInt * _Nullable)total reservationDateTime:(NSString * _Nullable)reservationDateTime nextVisitType:(NSString * _Nullable)nextVisitType __attribute__((swift_name("doCopy(total:reservationDateTime:nextVisitType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nextVisitType")
*/
@property NSString * _Nullable nextVisitType __attribute__((swift_name("nextVisitType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reservationDateTime")
*/
@property NSString * _Nullable reservationDateTime __attribute__((swift_name("reservationDateTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="total")
*/
@property MDSInt * _Nullable total __attribute__((swift_name("total")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckTherapyResponse.Companion")))
@interface MDSCheckTherapyResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSCheckTherapyResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrentDrugs")))
@interface MDSCurrentDrugs : MDSBase
- (instancetype)initWithOrderCode:(NSString * _Nullable)orderCode orderName:(NSString * _Nullable)orderName hospitalCode:(NSString * _Nullable)hospitalCode connectedOrderId:(NSString * _Nullable)connectedOrderId patientId:(NSString * _Nullable)patientId patientName:(NSString * _Nullable)patientName orderDate:(NSString * _Nullable)orderDate orderId:(NSString * _Nullable)orderId orderGuide:(NSString * _Nullable)orderGuide medicationDescription:(NSString * _Nullable)medicationDescription engMedicationDescription:(NSString * _Nullable)engMedicationDescription kpemMedicationDescription:(NSString * _Nullable)kpemMedicationDescription guideAndDosageExplanation:(NSString * _Nullable)guideAndDosageExplanation arabicGuideAndDosageExplanation:(NSString * _Nullable)arabicGuideAndDosageExplanation orderDuration:(NSString * _Nullable)orderDuration administrationDosage:(NSString * _Nullable)administrationDosage prescriptionNote:(NSString * _Nullable)prescriptionNote dosageExample:(NSString * _Nullable)dosageExample usageExplanation:(NSString * _Nullable)usageExplanation dateHijri:(NSString * _Nullable)dateHijri hospitalName:(NSString * _Nullable)hospitalName arabicHospitalMessage:(NSString * _Nullable)arabicHospitalMessage englishMessage:(NSString * _Nullable)englishMessage arabicMessage:(NSString * _Nullable)arabicMessage __attribute__((swift_name("init(orderCode:orderName:hospitalCode:connectedOrderId:patientId:patientName:orderDate:orderId:orderGuide:medicationDescription:engMedicationDescription:kpemMedicationDescription:guideAndDosageExplanation:arabicGuideAndDosageExplanation:orderDuration:administrationDosage:prescriptionNote:dosageExample:usageExplanation:dateHijri:hospitalName:arabicHospitalMessage:englishMessage:arabicMessage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSCurrentDrugsCompanion *companion __attribute__((swift_name("companion")));
- (MDSCurrentDrugs *)doCopyOrderCode:(NSString * _Nullable)orderCode orderName:(NSString * _Nullable)orderName hospitalCode:(NSString * _Nullable)hospitalCode connectedOrderId:(NSString * _Nullable)connectedOrderId patientId:(NSString * _Nullable)patientId patientName:(NSString * _Nullable)patientName orderDate:(NSString * _Nullable)orderDate orderId:(NSString * _Nullable)orderId orderGuide:(NSString * _Nullable)orderGuide medicationDescription:(NSString * _Nullable)medicationDescription engMedicationDescription:(NSString * _Nullable)engMedicationDescription kpemMedicationDescription:(NSString * _Nullable)kpemMedicationDescription guideAndDosageExplanation:(NSString * _Nullable)guideAndDosageExplanation arabicGuideAndDosageExplanation:(NSString * _Nullable)arabicGuideAndDosageExplanation orderDuration:(NSString * _Nullable)orderDuration administrationDosage:(NSString * _Nullable)administrationDosage prescriptionNote:(NSString * _Nullable)prescriptionNote dosageExample:(NSString * _Nullable)dosageExample usageExplanation:(NSString * _Nullable)usageExplanation dateHijri:(NSString * _Nullable)dateHijri hospitalName:(NSString * _Nullable)hospitalName arabicHospitalMessage:(NSString * _Nullable)arabicHospitalMessage englishMessage:(NSString * _Nullable)englishMessage arabicMessage:(NSString * _Nullable)arabicMessage __attribute__((swift_name("doCopy(orderCode:orderName:hospitalCode:connectedOrderId:patientId:patientName:orderDate:orderId:orderGuide:medicationDescription:engMedicationDescription:kpemMedicationDescription:guideAndDosageExplanation:arabicGuideAndDosageExplanation:orderDuration:administrationDosage:prescriptionNote:dosageExample:usageExplanation:dateHijri:hospitalName:arabicHospitalMessage:englishMessage:arabicMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="administrationDosage")
*/
@property (readonly) NSString * _Nullable administrationDosage __attribute__((swift_name("administrationDosage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicGuideAndDosageExplanation")
*/
@property (readonly) NSString * _Nullable arabicGuideAndDosageExplanation __attribute__((swift_name("arabicGuideAndDosageExplanation")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicHospitalMessage")
*/
@property (readonly) NSString * _Nullable arabicHospitalMessage __attribute__((swift_name("arabicHospitalMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicMessage")
*/
@property (readonly) NSString * _Nullable arabicMessage __attribute__((swift_name("arabicMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="connectedOrderId")
*/
@property (readonly) NSString * _Nullable connectedOrderId __attribute__((swift_name("connectedOrderId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dateHijri")
*/
@property (readonly) NSString * _Nullable dateHijri __attribute__((swift_name("dateHijri")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dosageExample")
*/
@property (readonly) NSString * _Nullable dosageExample __attribute__((swift_name("dosageExample")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="engMedicationDescription")
*/
@property (readonly) NSString * _Nullable engMedicationDescription __attribute__((swift_name("engMedicationDescription")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishMessage")
*/
@property (readonly) NSString * _Nullable englishMessage __attribute__((swift_name("englishMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="guideAndDosageExplanation")
*/
@property (readonly) NSString * _Nullable guideAndDosageExplanation __attribute__((swift_name("guideAndDosageExplanation")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalName")
*/
@property (readonly) NSString * _Nullable hospitalName __attribute__((swift_name("hospitalName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="kpemMedicationDescription")
*/
@property (readonly) NSString * _Nullable kpemMedicationDescription __attribute__((swift_name("kpemMedicationDescription")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicationDescription")
*/
@property (readonly) NSString * _Nullable medicationDescription __attribute__((swift_name("medicationDescription")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderCode")
*/
@property (readonly) NSString * _Nullable orderCode __attribute__((swift_name("orderCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderDate")
*/
@property (readonly) NSString * _Nullable orderDate __attribute__((swift_name("orderDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderDuration")
*/
@property (readonly) NSString * _Nullable orderDuration __attribute__((swift_name("orderDuration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderGuide")
*/
@property (readonly) NSString * _Nullable orderGuide __attribute__((swift_name("orderGuide")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderId")
*/
@property (readonly) NSString * _Nullable orderId __attribute__((swift_name("orderId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderName")
*/
@property (readonly) NSString * _Nullable orderName __attribute__((swift_name("orderName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property (readonly) NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientName")
*/
@property (readonly) NSString * _Nullable patientName __attribute__((swift_name("patientName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="prescriptionNote")
*/
@property (readonly) NSString * _Nullable prescriptionNote __attribute__((swift_name("prescriptionNote")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="usageExplanation")
*/
@property (readonly) NSString * _Nullable usageExplanation __attribute__((swift_name("usageExplanation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrentDrugs.Companion")))
@interface MDSCurrentDrugsCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSCurrentDrugsCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateItem")))
@interface MDSDateItem : MDSBase
- (instancetype)initWithDate:(NSString * _Nullable)date times:(MDSKotlinArray<NSString *> * _Nullable)times slots:(MDSKotlinArray<MDSSlot *> * _Nullable)slots dayNo:(MDSInt * _Nullable)dayNo dayName:(NSString * _Nullable)dayName __attribute__((swift_name("init(date:times:slots:dayNo:dayName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDateItemCompanion *companion __attribute__((swift_name("companion")));
- (MDSDateItem *)doCopyDate:(NSString * _Nullable)date times:(MDSKotlinArray<NSString *> * _Nullable)times slots:(MDSKotlinArray<MDSSlot *> * _Nullable)slots dayNo:(MDSInt * _Nullable)dayNo dayName:(NSString * _Nullable)dayName __attribute__((swift_name("doCopy(date:times:slots:dayNo:dayName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)doInitDayNoNameLocale:(NSString *)locale __attribute__((swift_name("doInitDayNoName(locale:)")));
- (void)doInitTimesLocale:(NSString *)locale __attribute__((swift_name("doInitTimes(locale:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dates")
*/
@property (readonly) NSString * _Nullable date __attribute__((swift_name("date")));
@property NSString * _Nullable dayName __attribute__((swift_name("dayName")));
@property MDSInt * _Nullable dayNo __attribute__((swift_name("dayNo")));
@property MDSKotlinArray<MDSSlot *> * _Nullable slots __attribute__((swift_name("slots")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="times")
*/
@property MDSKotlinArray<NSString *> * _Nullable times __attribute__((swift_name("times")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateItem.Companion")))
@interface MDSDateItemCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDateItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DependentItem")))
@interface MDSDependentItem : MDSBase
- (instancetype)initWithEnterprisePatientId:(NSString * _Nullable)enterprisePatientId patientId:(NSString * _Nullable)patientId regionCode:(NSString * _Nullable)regionCode patientName:(NSString * _Nullable)patientName birthDay:(NSString * _Nullable)birthDay subRelationTypeName:(NSString * _Nullable)subRelationTypeName gender:(NSString * _Nullable)gender __attribute__((swift_name("init(enterprisePatientId:patientId:regionCode:patientName:birthDay:subRelationTypeName:gender:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDependentItemCompanion *companion __attribute__((swift_name("companion")));
- (MDSDependentItem *)doCopyEnterprisePatientId:(NSString * _Nullable)enterprisePatientId patientId:(NSString * _Nullable)patientId regionCode:(NSString * _Nullable)regionCode patientName:(NSString * _Nullable)patientName birthDay:(NSString * _Nullable)birthDay subRelationTypeName:(NSString * _Nullable)subRelationTypeName gender:(NSString * _Nullable)gender __attribute__((swift_name("doCopy(enterprisePatientId:patientId:regionCode:patientName:birthDay:subRelationTypeName:gender:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="birthDay")
*/
@property (readonly) NSString * _Nullable birthDay __attribute__((swift_name("birthDay")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enterprisePatientId")
*/
@property (readonly) NSString * _Nullable enterprisePatientId __attribute__((swift_name("enterprisePatientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="gender")
*/
@property (readonly) NSString * _Nullable gender __attribute__((swift_name("gender")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property (readonly) NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientName")
*/
@property (readonly) NSString * _Nullable patientName __attribute__((swift_name("patientName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="regionCode")
*/
@property (readonly) NSString * _Nullable regionCode __attribute__((swift_name("regionCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="subRelationTypeName")
*/
@property (readonly) NSString * _Nullable subRelationTypeName __attribute__((swift_name("subRelationTypeName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DependentItem.Companion")))
@interface MDSDependentItemCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDependentItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoctorEntry")))
@interface MDSDoctorEntry : MDSBase
- (instancetype)initWithSlot:(MDSKotlinArray<MDSDateItem *> * _Nullable)slot medrStfNo:(NSString * _Nullable)medrStfNo lclStfNm:(NSString * _Nullable)lclStfNm drNm:(NSString * _Nullable)drNm dates:(MDSKotlinArray<MDSMonthDates *> * _Nullable)dates monthsList:(MDSKotlinArray<NSString *> * _Nullable)monthsList selectedDate:(MDSDateItem * _Nullable)selectedDate selectedSlot:(MDSSlot * _Nullable)selectedSlot __attribute__((swift_name("init(slot:medrStfNo:lclStfNm:drNm:dates:monthsList:selectedDate:selectedSlot:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDoctorEntryCompanion *companion __attribute__((swift_name("companion")));
- (MDSDoctorEntry *)doCopySlot:(MDSKotlinArray<MDSDateItem *> * _Nullable)slot medrStfNo:(NSString * _Nullable)medrStfNo lclStfNm:(NSString * _Nullable)lclStfNm drNm:(NSString * _Nullable)drNm dates:(MDSKotlinArray<MDSMonthDates *> * _Nullable)dates monthsList:(MDSKotlinArray<NSString *> * _Nullable)monthsList selectedDate:(MDSDateItem * _Nullable)selectedDate selectedSlot:(MDSSlot * _Nullable)selectedSlot __attribute__((swift_name("doCopy(slot:medrStfNo:lclStfNm:drNm:dates:monthsList:selectedDate:selectedSlot:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MDSKotlinArray<MDSMonthDates *> * _Nullable dates __attribute__((swift_name("dates")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="doctorName")
*/
@property (readonly) NSString * _Nullable drNm __attribute__((swift_name("drNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicDoctorName")
*/
@property (readonly) NSString * _Nullable lclStfNm __attribute__((swift_name("lclStfNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalStaffNumber")
*/
@property (readonly) NSString * _Nullable medrStfNo __attribute__((swift_name("medrStfNo")));
@property MDSKotlinArray<NSString *> * _Nullable monthsList __attribute__((swift_name("monthsList")));
@property MDSDateItem * _Nullable selectedDate __attribute__((swift_name("selectedDate")));
@property MDSSlot * _Nullable selectedSlot __attribute__((swift_name("selectedSlot")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="slot")
*/
@property (readonly) MDSKotlinArray<MDSDateItem *> * _Nullable slot __attribute__((swift_name("slot")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoctorEntry.Companion")))
@interface MDSDoctorEntryCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDoctorEntryCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Eligibility")))
@interface MDSEligibility : MDSBase
- (instancetype)initWithValidYn:(NSString * _Nullable)validYn pseClsCd:(NSString * _Nullable)pseClsCd apyEndDt:(NSString * _Nullable)apyEndDt pmeClsCd:(NSString * _Nullable)pmeClsCd apyStrDt:(NSString * _Nullable)apyStrDt rmkCnte:(NSString * _Nullable)rmkCnte dtrl1Nm:(NSString * _Nullable)dtrl1Nm __attribute__((swift_name("init(validYn:pseClsCd:apyEndDt:pmeClsCd:apyStrDt:rmkCnte:dtrl1Nm:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSEligibilityCompanion *companion __attribute__((swift_name("companion")));
- (MDSEligibility *)doCopyValidYn:(NSString * _Nullable)validYn pseClsCd:(NSString * _Nullable)pseClsCd apyEndDt:(NSString * _Nullable)apyEndDt pmeClsCd:(NSString * _Nullable)pmeClsCd apyStrDt:(NSString * _Nullable)apyStrDt rmkCnte:(NSString * _Nullable)rmkCnte dtrl1Nm:(NSString * _Nullable)dtrl1Nm __attribute__((swift_name("doCopy(validYn:pseClsCd:apyEndDt:pmeClsCd:apyStrDt:rmkCnte:dtrl1Nm:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apy_END_DT")
*/
@property (readonly) NSString * _Nullable apyEndDt __attribute__((swift_name("apyEndDt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apy_STR_DT")
*/
@property (readonly) NSString * _Nullable apyStrDt __attribute__((swift_name("apyStrDt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dtrl1_NM")
*/
@property (readonly) NSString * _Nullable dtrl1Nm __attribute__((swift_name("dtrl1Nm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pme_CLS_CD")
*/
@property (readonly) NSString * _Nullable pmeClsCd __attribute__((swift_name("pmeClsCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pse_CLS_CD")
*/
@property (readonly) NSString * _Nullable pseClsCd __attribute__((swift_name("pseClsCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rmk_CNTE")
*/
@property (readonly) NSString * _Nullable rmkCnte __attribute__((swift_name("rmkCnte")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="validYn")
*/
@property (readonly) NSString * _Nullable validYn __attribute__((swift_name("validYn")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Eligibility.Companion")))
@interface MDSEligibilityCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSEligibilityCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EligibilityApiResponse")))
@interface MDSEligibilityApiResponse : MDSBase
- (instancetype)initWithPcp:(NSArray<MDSEligibilityItem *> * _Nullable)pcp bc:(NSArray<MDSEligibilityItem *> * _Nullable)bc phc:(NSArray<MDSEligibilityItem *> * _Nullable)phc emp:(NSArray<MDSEligibilityItem *> * _Nullable)emp std:(NSArray<MDSEligibilityItem *> * _Nullable)std __attribute__((swift_name("init(pcp:bc:phc:emp:std:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSEligibilityApiResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSEligibilityApiResponse *)doCopyPcp:(NSArray<MDSEligibilityItem *> * _Nullable)pcp bc:(NSArray<MDSEligibilityItem *> * _Nullable)bc phc:(NSArray<MDSEligibilityItem *> * _Nullable)phc emp:(NSArray<MDSEligibilityItem *> * _Nullable)emp std:(NSArray<MDSEligibilityItem *> * _Nullable)std __attribute__((swift_name("doCopy(pcp:bc:phc:emp:std:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bc")
*/
@property (readonly) NSArray<MDSEligibilityItem *> * _Nullable bc __attribute__((swift_name("bc")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="emp")
*/
@property (readonly) NSArray<MDSEligibilityItem *> * _Nullable emp __attribute__((swift_name("emp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pcp")
*/
@property (readonly) NSArray<MDSEligibilityItem *> * _Nullable pcp __attribute__((swift_name("pcp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="phc")
*/
@property (readonly) NSArray<MDSEligibilityItem *> * _Nullable phc __attribute__((swift_name("phc")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="std")
*/
@property (readonly) NSArray<MDSEligibilityItem *> * _Nullable std __attribute__((swift_name("std")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EligibilityApiResponse.Companion")))
@interface MDSEligibilityApiResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSEligibilityApiResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EligibilityItem")))
@interface MDSEligibilityItem : MDSBase
- (instancetype)initWithHospitalCode:(NSString * _Nullable)hospitalCode count:(MDSInt * _Nullable)count doctorName:(NSString * _Nullable)doctorName bcYN:(NSString * _Nullable)bcYN apyENDDT:(NSString * _Nullable)apyENDDT expiredYN:(NSString * _Nullable)expiredYN employeeYN:(NSString * _Nullable)employeeYN phcYN:(NSString * _Nullable)phcYN bigCAPACITYYN:(NSString * _Nullable)bigCAPACITYYN directYN:(MDSBoolean * _Nullable)directYN empCENTRAL:(NSString * _Nullable)empCENTRAL hcscmessage:(NSString * _Nullable)hcscmessage studentYN:(NSString * _Nullable)studentYN lclPTNM:(NSString * _Nullable)lclPTNM qfVALID:(NSString * _Nullable)qfVALID lclSTFNM:(NSString * _Nullable)lclSTFNM elgINFO:(NSString * _Nullable)elgINFO reqBLOCK:(MDSBoolean * _Nullable)reqBLOCK cancelREQQN:(MDSInt * _Nullable)cancelREQQN bcDIRECT:(NSString * _Nullable)bcDIRECT empYN:(NSString * _Nullable)empYN pendingREQ:(MDSInt * _Nullable)pendingREQ phcHSP:(NSString * _Nullable)phcHSP mfhYN:(NSString * _Nullable)mfhYN __attribute__((swift_name("init(hospitalCode:count:doctorName:bcYN:apyENDDT:expiredYN:employeeYN:phcYN:bigCAPACITYYN:directYN:empCENTRAL:hcscmessage:studentYN:lclPTNM:qfVALID:lclSTFNM:elgINFO:reqBLOCK:cancelREQQN:bcDIRECT:empYN:pendingREQ:phcHSP:mfhYN:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSEligibilityItemCompanion *companion __attribute__((swift_name("companion")));
- (MDSEligibilityItem *)doCopyHospitalCode:(NSString * _Nullable)hospitalCode count:(MDSInt * _Nullable)count doctorName:(NSString * _Nullable)doctorName bcYN:(NSString * _Nullable)bcYN apyENDDT:(NSString * _Nullable)apyENDDT expiredYN:(NSString * _Nullable)expiredYN employeeYN:(NSString * _Nullable)employeeYN phcYN:(NSString * _Nullable)phcYN bigCAPACITYYN:(NSString * _Nullable)bigCAPACITYYN directYN:(MDSBoolean * _Nullable)directYN empCENTRAL:(NSString * _Nullable)empCENTRAL hcscmessage:(NSString * _Nullable)hcscmessage studentYN:(NSString * _Nullable)studentYN lclPTNM:(NSString * _Nullable)lclPTNM qfVALID:(NSString * _Nullable)qfVALID lclSTFNM:(NSString * _Nullable)lclSTFNM elgINFO:(NSString * _Nullable)elgINFO reqBLOCK:(MDSBoolean * _Nullable)reqBLOCK cancelREQQN:(MDSInt * _Nullable)cancelREQQN bcDIRECT:(NSString * _Nullable)bcDIRECT empYN:(NSString * _Nullable)empYN pendingREQ:(MDSInt * _Nullable)pendingREQ phcHSP:(NSString * _Nullable)phcHSP mfhYN:(NSString * _Nullable)mfhYN __attribute__((swift_name("doCopy(hospitalCode:count:doctorName:bcYN:apyENDDT:expiredYN:employeeYN:phcYN:bigCAPACITYYN:directYN:empCENTRAL:hcscmessage:studentYN:lclPTNM:qfVALID:lclSTFNM:elgINFO:reqBLOCK:cancelREQQN:bcDIRECT:empYN:pendingREQ:phcHSP:mfhYN:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apy_END_DT")
*/
@property (readonly) NSString * _Nullable apyENDDT __attribute__((swift_name("apyENDDT")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bc_DIRECT")
*/
@property (readonly) NSString * _Nullable bcDIRECT __attribute__((swift_name("bcDIRECT")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bc_YN")
*/
@property (readonly) NSString * _Nullable bcYN __attribute__((swift_name("bcYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="big_CAPICITY_YN")
*/
@property (readonly) NSString * _Nullable bigCAPACITYYN __attribute__((swift_name("bigCAPACITYYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cancel_REQ_YN")
*/
@property (readonly) MDSInt * _Nullable cancelREQQN __attribute__((swift_name("cancelREQQN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="count")
*/
@property (readonly) MDSInt * _Nullable count __attribute__((swift_name("count")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="direct_YN")
*/
@property (readonly) MDSBoolean * _Nullable directYN __attribute__((swift_name("directYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="doctorName")
*/
@property (readonly) NSString * _Nullable doctorName __attribute__((swift_name("doctorName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="elg_INFO")
*/
@property (readonly) NSString * _Nullable elgINFO __attribute__((swift_name("elgINFO")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="emp_CENTRAL")
*/
@property (readonly) NSString * _Nullable empCENTRAL __attribute__((swift_name("empCENTRAL")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="emp_YN")
*/
@property (readonly) NSString * _Nullable empYN __attribute__((swift_name("empYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="employee_YN")
*/
@property (readonly) NSString * _Nullable employeeYN __attribute__((swift_name("employeeYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expired_YN")
*/
@property (readonly) NSString * _Nullable expiredYN __attribute__((swift_name("expiredYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hcscmessage")
*/
@property (readonly) NSString * _Nullable hcscmessage __attribute__((swift_name("hcscmessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lcl_PT_NM")
*/
@property (readonly) NSString * _Nullable lclPTNM __attribute__((swift_name("lclPTNM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lcl_STF_NM")
*/
@property (readonly) NSString * _Nullable lclSTFNM __attribute__((swift_name("lclSTFNM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mfh_YN")
*/
@property (readonly) NSString * _Nullable mfhYN __attribute__((swift_name("mfhYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pending_REQ")
*/
@property (readonly) MDSInt * _Nullable pendingREQ __attribute__((swift_name("pendingREQ")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="phc_HSP")
*/
@property (readonly) NSString * _Nullable phcHSP __attribute__((swift_name("phcHSP")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="phc_YN")
*/
@property (readonly) NSString * _Nullable phcYN __attribute__((swift_name("phcYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="qf_VALID")
*/
@property (readonly) NSString * _Nullable qfVALID __attribute__((swift_name("qfVALID")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="req_BLOCK")
*/
@property (readonly) MDSBoolean * _Nullable reqBLOCK __attribute__((swift_name("reqBLOCK")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="student_YN")
*/
@property (readonly) NSString * _Nullable studentYN __attribute__((swift_name("studentYN")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EligibilityItem.Companion")))
@interface MDSEligibilityItemCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSEligibilityItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EligibilityListResponse")))
@interface MDSEligibilityListResponse : MDSBase
- (instancetype)initWithResult:(NSArray<MDSEligibility *> * _Nullable)result updateNotBc:(NSArray<MDSUpdateNotBc *> * _Nullable)updateNotBc primaryHealthCareHospitalCode:(NSString * _Nullable)primaryHealthCareHospitalCode __attribute__((swift_name("init(result:updateNotBc:primaryHealthCareHospitalCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSEligibilityListResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSEligibilityListResponse *)doCopyResult:(NSArray<MDSEligibility *> * _Nullable)result updateNotBc:(NSArray<MDSUpdateNotBc *> * _Nullable)updateNotBc primaryHealthCareHospitalCode:(NSString * _Nullable)primaryHealthCareHospitalCode __attribute__((swift_name("doCopy(result:updateNotBc:primaryHealthCareHospitalCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="primaryHealthCareHospitalCode")
*/
@property (readonly) NSString * _Nullable primaryHealthCareHospitalCode __attribute__((swift_name("primaryHealthCareHospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="result")
*/
@property (readonly) NSArray<MDSEligibility *> * _Nullable result __attribute__((swift_name("result")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="updateNotBc")
*/
@property (readonly) NSArray<MDSUpdateNotBc *> * _Nullable updateNotBc __attribute__((swift_name("updateNotBc")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EligibilityListResponse.Companion")))
@interface MDSEligibilityListResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSEligibilityListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EligibilityResponse")))
@interface MDSEligibilityResponse : MDSBase
- (instancetype)initWithItems:(MDSKotlinArray<MDSEligibilityResult *> * _Nullable)items __attribute__((swift_name("init(items:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSEligibilityResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSEligibilityResponse *)doCopyItems:(MDSKotlinArray<MDSEligibilityResult *> * _Nullable)items __attribute__((swift_name("doCopy(items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)doInitData:(MDSEligibilityApiResponse * _Nullable)data __attribute__((swift_name("doInit(data:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MDSKotlinArray<MDSEligibilityResult *> * _Nullable items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EligibilityResponse.Companion")))
@interface MDSEligibilityResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSEligibilityResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EligibilityResult")))
@interface MDSEligibilityResult : MDSBase
- (instancetype)initWithServiceType:(MDSAppointmentServicesTypes * _Nullable)serviceType isEligible:(MDSBoolean * _Nullable)isEligible serviceNameEn:(NSString * _Nullable)serviceNameEn serviceNameAr:(NSString * _Nullable)serviceNameAr eligibilityItem:(MDSEligibilityItem * _Nullable)eligibilityItem __attribute__((swift_name("init(serviceType:isEligible:serviceNameEn:serviceNameAr:eligibilityItem:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSEligibilityResultCompanion *companion __attribute__((swift_name("companion")));
- (MDSEligibilityResult *)doCopyServiceType:(MDSAppointmentServicesTypes * _Nullable)serviceType isEligible:(MDSBoolean * _Nullable)isEligible serviceNameEn:(NSString * _Nullable)serviceNameEn serviceNameAr:(NSString * _Nullable)serviceNameAr eligibilityItem:(MDSEligibilityItem * _Nullable)eligibilityItem __attribute__((swift_name("doCopy(serviceType:isEligible:serviceNameEn:serviceNameAr:eligibilityItem:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MDSEligibilityItem * _Nullable eligibilityItem __attribute__((swift_name("eligibilityItem")));
@property MDSBoolean * _Nullable isEligible __attribute__((swift_name("isEligible")));
@property NSString * _Nullable serviceNameAr __attribute__((swift_name("serviceNameAr")));
@property NSString * _Nullable serviceNameEn __attribute__((swift_name("serviceNameEn")));
@property MDSAppointmentServicesTypes * _Nullable serviceType __attribute__((swift_name("serviceType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EligibilityResult.Companion")))
@interface MDSEligibilityResultCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSEligibilityResultCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmrItem")))
@interface MDSEmrItem : MDSBase
- (instancetype)initWithHeight:(MDSInt * _Nullable)height weight:(MDSInt * _Nullable)weight bmi:(MDSDouble * _Nullable)bmi bmiDetails:(NSString * _Nullable)bmiDetails allergyList:(NSArray<MDSAllergy *> * _Nullable)allergyList __attribute__((swift_name("init(height:weight:bmi:bmiDetails:allergyList:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSEmrItemCompanion *companion __attribute__((swift_name("companion")));
- (MDSEmrItem *)doCopyHeight:(MDSInt * _Nullable)height weight:(MDSInt * _Nullable)weight bmi:(MDSDouble * _Nullable)bmi bmiDetails:(NSString * _Nullable)bmiDetails allergyList:(NSArray<MDSAllergy *> * _Nullable)allergyList __attribute__((swift_name("doCopy(height:weight:bmi:bmiDetails:allergyList:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="allergyList")
*/
@property NSArray<MDSAllergy *> * _Nullable allergyList __attribute__((swift_name("allergyList")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bmi")
*/
@property MDSDouble * _Nullable bmi __attribute__((swift_name("bmi")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bmiDetails")
*/
@property NSString * _Nullable bmiDetails __attribute__((swift_name("bmiDetails")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="height")
*/
@property MDSInt * _Nullable height __attribute__((swift_name("height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="weight")
*/
@property MDSInt * _Nullable weight __attribute__((swift_name("weight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmrItem.Companion")))
@interface MDSEmrItemCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSEmrItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExerciseDaily")))
@interface MDSExerciseDaily : MDSBase
- (instancetype)initWithExerciseId:(MDSDouble * _Nullable)exerciseId patientId:(NSString * _Nullable)patientId registrationDate:(NSString * _Nullable)registrationDate exerciseDate:(NSString * _Nullable)exerciseDate exerciseStartingHour:(MDSDouble * _Nullable)exerciseStartingHour codeName:(NSString * _Nullable)codeName orderNumber:(NSString * _Nullable)orderNumber exrcCD:(NSString * _Nullable)exrcCD exrcREQRM:(MDSDouble * _Nullable)exrcREQRM whlCNSMCAL:(MDSDouble * _Nullable)whlCNSMCAL dtrl1NM:(NSString * _Nullable)dtrl1NM dtrl2NM:(NSString * _Nullable)dtrl2NM dtrl3NM:(NSString * _Nullable)dtrl3NM __attribute__((swift_name("init(exerciseId:patientId:registrationDate:exerciseDate:exerciseStartingHour:codeName:orderNumber:exrcCD:exrcREQRM:whlCNSMCAL:dtrl1NM:dtrl2NM:dtrl3NM:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSExerciseDailyCompanion *companion __attribute__((swift_name("companion")));
- (MDSExerciseDaily *)doCopyExerciseId:(MDSDouble * _Nullable)exerciseId patientId:(NSString * _Nullable)patientId registrationDate:(NSString * _Nullable)registrationDate exerciseDate:(NSString * _Nullable)exerciseDate exerciseStartingHour:(MDSDouble * _Nullable)exerciseStartingHour codeName:(NSString * _Nullable)codeName orderNumber:(NSString * _Nullable)orderNumber exrcCD:(NSString * _Nullable)exrcCD exrcREQRM:(MDSDouble * _Nullable)exrcREQRM whlCNSMCAL:(MDSDouble * _Nullable)whlCNSMCAL dtrl1NM:(NSString * _Nullable)dtrl1NM dtrl2NM:(NSString * _Nullable)dtrl2NM dtrl3NM:(NSString * _Nullable)dtrl3NM __attribute__((swift_name("doCopy(exerciseId:patientId:registrationDate:exerciseDate:exerciseStartingHour:codeName:orderNumber:exrcCD:exrcREQRM:whlCNSMCAL:dtrl1NM:dtrl2NM:dtrl3NM:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="codeName")
*/
@property (readonly) NSString * _Nullable codeName __attribute__((swift_name("codeName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dtrl1_NM")
*/
@property (readonly) NSString * _Nullable dtrl1NM __attribute__((swift_name("dtrl1NM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dtrl2_NM")
*/
@property (readonly) NSString * _Nullable dtrl2NM __attribute__((swift_name("dtrl2NM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dtrl3_NM")
*/
@property (readonly) NSString * _Nullable dtrl3NM __attribute__((swift_name("dtrl3NM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="exerciseDate")
*/
@property (readonly) NSString * _Nullable exerciseDate __attribute__((swift_name("exerciseDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="exerciseId")
*/
@property (readonly) MDSDouble * _Nullable exerciseId __attribute__((swift_name("exerciseId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="exerciseStartingHour")
*/
@property (readonly) MDSDouble * _Nullable exerciseStartingHour __attribute__((swift_name("exerciseStartingHour")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="exrc_CD")
*/
@property (readonly) NSString * _Nullable exrcCD __attribute__((swift_name("exrcCD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="exrc_REQR_MI")
*/
@property (readonly) MDSDouble * _Nullable exrcREQRM __attribute__((swift_name("exrcREQRM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderNumber")
*/
@property (readonly) NSString * _Nullable orderNumber __attribute__((swift_name("orderNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property (readonly) NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="registrationDate")
*/
@property (readonly) NSString * _Nullable registrationDate __attribute__((swift_name("registrationDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="whl_CNSM_CAL")
*/
@property (readonly) MDSDouble * _Nullable whlCNSMCAL __attribute__((swift_name("whlCNSMCAL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExerciseDaily.Companion")))
@interface MDSExerciseDailyCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSExerciseDailyCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExerciseItem")))
@interface MDSExerciseItem : MDSBase
- (instancetype)initWithCommonCodeName:(NSString * _Nullable)commonCodeName __attribute__((swift_name("init(commonCodeName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSExerciseItemCompanion *companion __attribute__((swift_name("companion")));
- (MDSExerciseItem *)doCopyCommonCodeName:(NSString * _Nullable)commonCodeName __attribute__((swift_name("doCopy(commonCodeName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="commonCodeName")
*/
@property (readonly) NSString * _Nullable commonCodeName __attribute__((swift_name("commonCodeName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExerciseItem.Companion")))
@interface MDSExerciseItemCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSExerciseItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExercisesPeriod")))
@interface MDSExercisesPeriod : MDSBase
- (instancetype)initWithExerciseDate:(NSString * _Nullable)exerciseDate calories:(MDSDouble * _Nullable)calories __attribute__((swift_name("init(exerciseDate:calories:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSExercisesPeriodCompanion *companion __attribute__((swift_name("companion")));
- (MDSExercisesPeriod *)doCopyExerciseDate:(NSString * _Nullable)exerciseDate calories:(MDSDouble * _Nullable)calories __attribute__((swift_name("doCopy(exerciseDate:calories:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="calories")
*/
@property MDSDouble * _Nullable calories __attribute__((swift_name("calories")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="exerciseDate")
*/
@property NSString * _Nullable exerciseDate __attribute__((swift_name("exerciseDate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExercisesPeriod.Companion")))
@interface MDSExercisesPeriodCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSExercisesPeriodCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeedbackResult")))
@interface MDSFeedbackResult : MDSBase
- (instancetype)initWithResults:(NSArray<id> * _Nullable)results totalCount:(MDSInt * _Nullable)totalCount totalElements:(MDSInt * _Nullable)totalElements totalPages:(MDSInt * _Nullable)totalPages __attribute__((swift_name("init(results:totalCount:totalElements:totalPages:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSFeedbackResultCompanion *companion __attribute__((swift_name("companion")));
- (MDSFeedbackResult *)doCopyResults:(NSArray<id> * _Nullable)results totalCount:(MDSInt * _Nullable)totalCount totalElements:(MDSInt * _Nullable)totalElements totalPages:(MDSInt * _Nullable)totalPages __attribute__((swift_name("doCopy(results:totalCount:totalElements:totalPages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="results")
*/
@property NSArray<id> * _Nullable results __attribute__((swift_name("results")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="totalCount")
*/
@property MDSInt * _Nullable totalCount __attribute__((swift_name("totalCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="totalElements")
*/
@property MDSInt * _Nullable totalElements __attribute__((swift_name("totalElements")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="totalPages")
*/
@property MDSInt * _Nullable totalPages __attribute__((swift_name("totalPages")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeedbackResult.Companion")))
@interface MDSFeedbackResultCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSFeedbackResultCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HealthCareResult")))
@interface MDSHealthCareResult : MDSBase
- (instancetype)initWithHospitalCode:(NSString * _Nullable)hospitalCode message:(NSString * _Nullable)message ptReqYN:(NSString * _Nullable)ptReqYN schdPrgrStsCd:(NSString * _Nullable)schdPrgrStsCd apcnDTM:(NSString * _Nullable)apcnDTM aprvRsnCnte:(NSString * _Nullable)aprvRsnCnte apcnRmkCnte:(NSString * _Nullable)apcnRmkCnte appopTpCd:(NSString * _Nullable)appopTpCd reqDtmHijri:(NSString * _Nullable)reqDtmHijri __attribute__((swift_name("init(hospitalCode:message:ptReqYN:schdPrgrStsCd:apcnDTM:aprvRsnCnte:apcnRmkCnte:appopTpCd:reqDtmHijri:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSHealthCareResultCompanion *companion __attribute__((swift_name("companion")));
- (MDSHealthCareResult *)doCopyHospitalCode:(NSString * _Nullable)hospitalCode message:(NSString * _Nullable)message ptReqYN:(NSString * _Nullable)ptReqYN schdPrgrStsCd:(NSString * _Nullable)schdPrgrStsCd apcnDTM:(NSString * _Nullable)apcnDTM aprvRsnCnte:(NSString * _Nullable)aprvRsnCnte apcnRmkCnte:(NSString * _Nullable)apcnRmkCnte appopTpCd:(NSString * _Nullable)appopTpCd reqDtmHijri:(NSString * _Nullable)reqDtmHijri __attribute__((swift_name("doCopy(hospitalCode:message:ptReqYN:schdPrgrStsCd:apcnDTM:aprvRsnCnte:apcnRmkCnte:appopTpCd:reqDtmHijri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apcn_DTM")
*/
@property (readonly) NSString * _Nullable apcnDTM __attribute__((swift_name("apcnDTM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apcn_RMK_CNTE")
*/
@property (readonly) NSString * _Nullable apcnRmkCnte __attribute__((swift_name("apcnRmkCnte")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appop_TP_CD")
*/
@property (readonly) NSString * _Nullable appopTpCd __attribute__((swift_name("appopTpCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="aprv_RSN_CNTE")
*/
@property (readonly) NSString * _Nullable aprvRsnCnte __attribute__((swift_name("aprvRsnCnte")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pt_REQ_YN")
*/
@property (readonly) NSString * _Nullable ptReqYN __attribute__((swift_name("ptReqYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="req_DTM_HIJRI")
*/
@property (readonly) NSString * _Nullable reqDtmHijri __attribute__((swift_name("reqDtmHijri")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="schd_PRGR_STS_CD")
*/
@property (readonly) NSString * _Nullable schdPrgrStsCd __attribute__((swift_name("schdPrgrStsCd")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HealthCareResult.Companion")))
@interface MDSHealthCareResultCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSHealthCareResultCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HealthStatusAfterVisitResponse")))
@interface MDSHealthStatusAfterVisitResponse : MDSBase
- (instancetype)initWithMessageId:(NSString * _Nullable)messageId orderId:(NSString * _Nullable)orderId patientOrdersSfYn:(NSString * _Nullable)patientOrdersSfYn patientOrdersComment:(NSString * _Nullable)patientOrdersComment patientHealthImprovement:(NSString * _Nullable)patientHealthImprovement patientHealthComment:(NSString * _Nullable)patientHealthComment __attribute__((swift_name("init(messageId:orderId:patientOrdersSfYn:patientOrdersComment:patientHealthImprovement:patientHealthComment:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSHealthStatusAfterVisitResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSHealthStatusAfterVisitResponse *)doCopyMessageId:(NSString * _Nullable)messageId orderId:(NSString * _Nullable)orderId patientOrdersSfYn:(NSString * _Nullable)patientOrdersSfYn patientOrdersComment:(NSString * _Nullable)patientOrdersComment patientHealthImprovement:(NSString * _Nullable)patientHealthImprovement patientHealthComment:(NSString * _Nullable)patientHealthComment __attribute__((swift_name("doCopy(messageId:orderId:patientOrdersSfYn:patientOrdersComment:patientHealthImprovement:patientHealthComment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="messageId")
*/
@property (readonly) NSString * _Nullable messageId __attribute__((swift_name("messageId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderId")
*/
@property (readonly) NSString * _Nullable orderId __attribute__((swift_name("orderId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientHealthComment")
*/
@property (readonly) NSString * _Nullable patientHealthComment __attribute__((swift_name("patientHealthComment")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientHealthImprovement")
*/
@property (readonly) NSString * _Nullable patientHealthImprovement __attribute__((swift_name("patientHealthImprovement")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientOrdersComment")
*/
@property (readonly) NSString * _Nullable patientOrdersComment __attribute__((swift_name("patientOrdersComment")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientOrdersSfYn")
*/
@property (readonly) NSString * _Nullable patientOrdersSfYn __attribute__((swift_name("patientOrdersSfYn")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HealthStatusAfterVisitResponse.Companion")))
@interface MDSHealthStatusAfterVisitResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSHealthStatusAfterVisitResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeHealthResponse")))
@interface MDSHomeHealthResponse : MDSBase
- (instancetype)initWithHealthCareResults:(MDSKotlinArray<MDSHealthCareResult *> * _Nullable)healthCareResults ptReqYN:(MDSBoolean * _Nullable)ptReqYN vaccinYN:(MDSBoolean * _Nullable)vaccinYN stophhcYN:(MDSBoolean * _Nullable)stophhcYN medsupplyYN:(MDSBoolean * _Nullable)medsupplyYN ssYN:(MDSBoolean * _Nullable)ssYN nrsrvYN:(MDSBoolean * _Nullable)nrsrvYN postvisitYN:(MDSBoolean * _Nullable)postvisitYN mdvisitYN:(MDSBoolean * _Nullable)mdvisitYN contupdateYN:(MDSBoolean * _Nullable)contupdateYN otherYN:(MDSBoolean * _Nullable)otherYN preapplabYN:(MDSBoolean * _Nullable)preapplabYN vrmdvisitYN:(MDSBoolean * _Nullable)vrmdvisitYN medicalYN:(MDSBoolean * _Nullable)medicalYN dietYN:(MDSBoolean * _Nullable)dietYN medicationYN:(MDSBoolean * _Nullable)medicationYN otsrvYN:(MDSBoolean * _Nullable)otsrvYN wondcareYN:(MDSBoolean * _Nullable)wondcareYN rtsrvYN:(MDSBoolean * _Nullable)rtsrvYN __attribute__((swift_name("init(healthCareResults:ptReqYN:vaccinYN:stophhcYN:medsupplyYN:ssYN:nrsrvYN:postvisitYN:mdvisitYN:contupdateYN:otherYN:preapplabYN:vrmdvisitYN:medicalYN:dietYN:medicationYN:otsrvYN:wondcareYN:rtsrvYN:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSHomeHealthResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSHomeHealthResponse *)doCopyHealthCareResults:(MDSKotlinArray<MDSHealthCareResult *> * _Nullable)healthCareResults ptReqYN:(MDSBoolean * _Nullable)ptReqYN vaccinYN:(MDSBoolean * _Nullable)vaccinYN stophhcYN:(MDSBoolean * _Nullable)stophhcYN medsupplyYN:(MDSBoolean * _Nullable)medsupplyYN ssYN:(MDSBoolean * _Nullable)ssYN nrsrvYN:(MDSBoolean * _Nullable)nrsrvYN postvisitYN:(MDSBoolean * _Nullable)postvisitYN mdvisitYN:(MDSBoolean * _Nullable)mdvisitYN contupdateYN:(MDSBoolean * _Nullable)contupdateYN otherYN:(MDSBoolean * _Nullable)otherYN preapplabYN:(MDSBoolean * _Nullable)preapplabYN vrmdvisitYN:(MDSBoolean * _Nullable)vrmdvisitYN medicalYN:(MDSBoolean * _Nullable)medicalYN dietYN:(MDSBoolean * _Nullable)dietYN medicationYN:(MDSBoolean * _Nullable)medicationYN otsrvYN:(MDSBoolean * _Nullable)otsrvYN wondcareYN:(MDSBoolean * _Nullable)wondcareYN rtsrvYN:(MDSBoolean * _Nullable)rtsrvYN __attribute__((swift_name("doCopy(healthCareResults:ptReqYN:vaccinYN:stophhcYN:medsupplyYN:ssYN:nrsrvYN:postvisitYN:mdvisitYN:contupdateYN:otherYN:preapplabYN:vrmdvisitYN:medicalYN:dietYN:medicationYN:otsrvYN:wondcareYN:rtsrvYN:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="contupdate_YN")
*/
@property (readonly) MDSBoolean * _Nullable contupdateYN __attribute__((swift_name("contupdateYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="diet_YN")
*/
@property (readonly) MDSBoolean * _Nullable dietYN __attribute__((swift_name("dietYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="healthCareResults")
*/
@property (readonly) MDSKotlinArray<MDSHealthCareResult *> * _Nullable healthCareResults __attribute__((swift_name("healthCareResults")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mdvisit_YN")
*/
@property (readonly) MDSBoolean * _Nullable mdvisitYN __attribute__((swift_name("mdvisitYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medical_YN")
*/
@property (readonly) MDSBoolean * _Nullable medicalYN __attribute__((swift_name("medicalYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medication_YN")
*/
@property (readonly) MDSBoolean * _Nullable medicationYN __attribute__((swift_name("medicationYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medsupply_YN")
*/
@property (readonly) MDSBoolean * _Nullable medsupplyYN __attribute__((swift_name("medsupplyYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nrsrv_YN")
*/
@property (readonly) MDSBoolean * _Nullable nrsrvYN __attribute__((swift_name("nrsrvYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="other_YN")
*/
@property (readonly) MDSBoolean * _Nullable otherYN __attribute__((swift_name("otherYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="otsrv_YN")
*/
@property (readonly) MDSBoolean * _Nullable otsrvYN __attribute__((swift_name("otsrvYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="postvisit_YN")
*/
@property (readonly) MDSBoolean * _Nullable postvisitYN __attribute__((swift_name("postvisitYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="preapplab_YN")
*/
@property (readonly) MDSBoolean * _Nullable preapplabYN __attribute__((swift_name("preapplabYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pt_REQ_YN")
*/
@property (readonly) MDSBoolean * _Nullable ptReqYN __attribute__((swift_name("ptReqYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rtsrv_YN")
*/
@property (readonly) MDSBoolean * _Nullable rtsrvYN __attribute__((swift_name("rtsrvYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ss_YN")
*/
@property (readonly) MDSBoolean * _Nullable ssYN __attribute__((swift_name("ssYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="stophhc_YN")
*/
@property (readonly) MDSBoolean * _Nullable stophhcYN __attribute__((swift_name("stophhcYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vaccin_YN")
*/
@property (readonly) MDSBoolean * _Nullable vaccinYN __attribute__((swift_name("vaccinYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vrmdvisit_YN")
*/
@property (readonly) MDSBoolean * _Nullable vrmdvisitYN __attribute__((swift_name("vrmdvisitYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="wondcare_YN")
*/
@property (readonly) MDSBoolean * _Nullable wondcareYN __attribute__((swift_name("wondcareYN")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeHealthResponse.Companion")))
@interface MDSHomeHealthResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSHomeHealthResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeSupplyOrder")))
@interface MDSHomeSupplyOrder : MDSBase
- (instancetype)initWithHospitalCode:(NSString * _Nullable)hospitalCode orderDate:(NSString * _Nullable)orderDate hijriDate:(NSString * _Nullable)hijriDate itemName:(NSString * _Nullable)itemName totalQuantity:(MDSInt * _Nullable)totalQuantity releaseStatus:(NSString * _Nullable)releaseStatus releaseStatusArabic:(NSString * _Nullable)releaseStatusArabic __attribute__((swift_name("init(hospitalCode:orderDate:hijriDate:itemName:totalQuantity:releaseStatus:releaseStatusArabic:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSHomeSupplyOrderCompanion *companion __attribute__((swift_name("companion")));
- (MDSHomeSupplyOrder *)doCopyHospitalCode:(NSString * _Nullable)hospitalCode orderDate:(NSString * _Nullable)orderDate hijriDate:(NSString * _Nullable)hijriDate itemName:(NSString * _Nullable)itemName totalQuantity:(MDSInt * _Nullable)totalQuantity releaseStatus:(NSString * _Nullable)releaseStatus releaseStatusArabic:(NSString * _Nullable)releaseStatusArabic __attribute__((swift_name("doCopy(hospitalCode:orderDate:hijriDate:itemName:totalQuantity:releaseStatus:releaseStatusArabic:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hijriDate")
*/
@property (readonly) NSString * _Nullable hijriDate __attribute__((swift_name("hijriDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="itemName")
*/
@property (readonly) NSString * _Nullable itemName __attribute__((swift_name("itemName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderDate")
*/
@property (readonly) NSString * _Nullable orderDate __attribute__((swift_name("orderDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="releaseStatus")
*/
@property (readonly) NSString * _Nullable releaseStatus __attribute__((swift_name("releaseStatus")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="releaseStatusArabic")
*/
@property (readonly) NSString * _Nullable releaseStatusArabic __attribute__((swift_name("releaseStatusArabic")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="totalQuantity")
*/
@property (readonly) MDSInt * _Nullable totalQuantity __attribute__((swift_name("totalQuantity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeSupplyOrder.Companion")))
@interface MDSHomeSupplyOrderCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSHomeSupplyOrderCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Hospital")))
@interface MDSHospital : MDSBase
- (instancetype)initWithArabicHospitalName:(NSString * _Nullable)arabicHospitalName englishHospitalName:(NSString * _Nullable)englishHospitalName hospitalCode:(NSString * _Nullable)hospitalCode hospitalClinics:(NSArray<MDSHospitalClinic *> * _Nullable)hospitalClinics __attribute__((swift_name("init(arabicHospitalName:englishHospitalName:hospitalCode:hospitalClinics:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSHospitalCompanion *companion __attribute__((swift_name("companion")));
- (MDSHospital *)doCopyArabicHospitalName:(NSString * _Nullable)arabicHospitalName englishHospitalName:(NSString * _Nullable)englishHospitalName hospitalCode:(NSString * _Nullable)hospitalCode hospitalClinics:(NSArray<MDSHospitalClinic *> * _Nullable)hospitalClinics __attribute__((swift_name("doCopy(arabicHospitalName:englishHospitalName:hospitalCode:hospitalClinics:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicHospitalName")
*/
@property (readonly) NSString * _Nullable arabicHospitalName __attribute__((swift_name("arabicHospitalName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishHospitalName")
*/
@property (readonly) NSString * _Nullable englishHospitalName __attribute__((swift_name("englishHospitalName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalClinics")
*/
@property (readonly) NSArray<MDSHospitalClinic *> * _Nullable hospitalClinics __attribute__((swift_name("hospitalClinics")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Hospital.Companion")))
@interface MDSHospitalCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSHospitalCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HospitalClinic")))
@interface MDSHospitalClinic : MDSBase
- (instancetype)initWithMedSrvCd:(NSString * _Nullable)medSrvCd pcpYn:(NSString * _Nullable)pcpYn ppReqYn:(NSString * _Nullable)ppReqYn refillYn:(NSString * _Nullable)refillYn lclSrvNm:(NSString * _Nullable)lclSrvNm medSrvNm:(NSString * _Nullable)medSrvNm __attribute__((swift_name("init(medSrvCd:pcpYn:ppReqYn:refillYn:lclSrvNm:medSrvNm:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSHospitalClinicCompanion *companion __attribute__((swift_name("companion")));
- (MDSHospitalClinic *)doCopyMedSrvCd:(NSString * _Nullable)medSrvCd pcpYn:(NSString * _Nullable)pcpYn ppReqYn:(NSString * _Nullable)ppReqYn refillYn:(NSString * _Nullable)refillYn lclSrvNm:(NSString * _Nullable)lclSrvNm medSrvNm:(NSString * _Nullable)medSrvNm __attribute__((swift_name("doCopy(medSrvCd:pcpYn:ppReqYn:refillYn:lclSrvNm:medSrvNm:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lcl_SRV_NM")
*/
@property (readonly) NSString * _Nullable lclSrvNm __attribute__((swift_name("lclSrvNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="med_SRV_CD")
*/
@property (readonly) NSString * _Nullable medSrvCd __attribute__((swift_name("medSrvCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="med_SRV_NM")
*/
@property (readonly) NSString * _Nullable medSrvNm __attribute__((swift_name("medSrvNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pcp_YN")
*/
@property (readonly) NSString * _Nullable pcpYn __attribute__((swift_name("pcpYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pp_REQ_YN")
*/
@property (readonly) NSString * _Nullable ppReqYn __attribute__((swift_name("ppReqYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="refill_YN")
*/
@property (readonly) NSString * _Nullable refillYn __attribute__((swift_name("refillYn")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HospitalClinic.Companion")))
@interface MDSHospitalClinicCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSHospitalClinicCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HospitalInfo")))
@interface MDSHospitalInfo : MDSBase
- (instancetype)initWithHospitalCode:(NSString * _Nullable)hospitalCode hospitalName:(NSString * _Nullable)hospitalName arabicHospitalName:(NSString * _Nullable)arabicHospitalName __attribute__((swift_name("init(hospitalCode:hospitalName:arabicHospitalName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSHospitalInfoCompanion *companion __attribute__((swift_name("companion")));
- (MDSHospitalInfo *)doCopyHospitalCode:(NSString * _Nullable)hospitalCode hospitalName:(NSString * _Nullable)hospitalName arabicHospitalName:(NSString * _Nullable)arabicHospitalName __attribute__((swift_name("doCopy(hospitalCode:hospitalName:arabicHospitalName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicHospitalName")
*/
@property (readonly) NSString * _Nullable arabicHospitalName __attribute__((swift_name("arabicHospitalName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalName")
*/
@property (readonly) NSString * _Nullable hospitalName __attribute__((swift_name("hospitalName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HospitalInfo.Companion")))
@interface MDSHospitalInfoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSHospitalInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HospitalItem")))
@interface MDSHospitalItem : MDSBase
- (instancetype)initWithHospitalCode:(NSString * _Nullable)hospitalCode hospitalEnglishName:(NSString * _Nullable)hospitalEnglishName hospitalArabicName:(NSString * _Nullable)hospitalArabicName __attribute__((swift_name("init(hospitalCode:hospitalEnglishName:hospitalArabicName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSHospitalItemCompanion *companion __attribute__((swift_name("companion")));
- (MDSHospitalItem *)doCopyHospitalCode:(NSString * _Nullable)hospitalCode hospitalEnglishName:(NSString * _Nullable)hospitalEnglishName hospitalArabicName:(NSString * _Nullable)hospitalArabicName __attribute__((swift_name("doCopy(hospitalCode:hospitalEnglishName:hospitalArabicName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString * _Nullable)getHospitalNameLang:(NSString *)lang __attribute__((swift_name("getHospitalName(lang:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalArabicName")
*/
@property NSString * _Nullable hospitalArabicName __attribute__((swift_name("hospitalArabicName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalEnglishName")
*/
@property NSString * _Nullable hospitalEnglishName __attribute__((swift_name("hospitalEnglishName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HospitalItem.Companion")))
@interface MDSHospitalItemCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSHospitalItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HospitalNafathItem")))
@interface MDSHospitalNafathItem : MDSBase
- (instancetype)initWithHospitalCode:(NSString * _Nullable)hospitalCode hospitalName:(NSString * _Nullable)hospitalName localHospitalName:(NSString * _Nullable)localHospitalName __attribute__((swift_name("init(hospitalCode:hospitalName:localHospitalName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSHospitalNafathItemCompanion *companion __attribute__((swift_name("companion")));
- (MDSHospitalNafathItem *)doCopyHospitalCode:(NSString * _Nullable)hospitalCode hospitalName:(NSString * _Nullable)hospitalName localHospitalName:(NSString * _Nullable)localHospitalName __attribute__((swift_name("doCopy(hospitalCode:hospitalName:localHospitalName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalName")
*/
@property (readonly) NSString * _Nullable hospitalName __attribute__((swift_name("hospitalName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="localHospitalName")
*/
@property (readonly) NSString * _Nullable localHospitalName __attribute__((swift_name("localHospitalName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HospitalNafathItem.Companion")))
@interface MDSHospitalNafathItemCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSHospitalNafathItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("TestResultRoot")))
@interface MDSTestResultRoot : MDSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MDSTestResultRootCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)getHospitalCode1 __attribute__((swift_name("getHospitalCode1()")));
- (void)setValuesHospitalName:(NSString *)hospitalName patientName:(NSString *)patientName __attribute__((swift_name("setValues(hospitalName:patientName:)")));
@property NSString * _Nullable hospitalName __attribute__((swift_name("hospitalName")));
@property NSString * _Nullable patientName __attribute__((swift_name("patientName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LaboratoryFilteredItem")))
@interface MDSLaboratoryFilteredItem : MDSTestResultRoot
- (instancetype)initWithHijriBRFG_DTM:(NSString * _Nullable)hijriBRFG_DTM resultReportingDate:(NSString * _Nullable)resultReportingDate hospitalCode:(NSString * _Nullable)hospitalCode testClassificationName:(NSString * _Nullable)testClassificationName testClassificationArabicName:(NSString * _Nullable)testClassificationArabicName results:(MDSKotlinArray<MDSLaboratoryResult *> * _Nullable)results __attribute__((swift_name("init(hijriBRFG_DTM:resultReportingDate:hospitalCode:testClassificationName:testClassificationArabicName:results:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MDSLaboratoryFilteredItemCompanion *companion __attribute__((swift_name("companion")));
- (MDSLaboratoryFilteredItem *)doCopyHijriBRFG_DTM:(NSString * _Nullable)hijriBRFG_DTM resultReportingDate:(NSString * _Nullable)resultReportingDate hospitalCode:(NSString * _Nullable)hospitalCode testClassificationName:(NSString * _Nullable)testClassificationName testClassificationArabicName:(NSString * _Nullable)testClassificationArabicName results:(MDSKotlinArray<MDSLaboratoryResult *> * _Nullable)results __attribute__((swift_name("doCopy(hijriBRFG_DTM:resultReportingDate:hospitalCode:testClassificationName:testClassificationArabicName:results:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString *)getHospitalCode1 __attribute__((swift_name("getHospitalCode1()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable hijriBRFG_DTM __attribute__((swift_name("hijriBRFG_DTM")));
@property NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));
@property NSString * _Nullable resultReportingDate __attribute__((swift_name("resultReportingDate")));
@property MDSKotlinArray<MDSLaboratoryResult *> * _Nullable results __attribute__((swift_name("results")));
@property NSString * _Nullable testClassificationArabicName __attribute__((swift_name("testClassificationArabicName")));
@property NSString * _Nullable testClassificationName __attribute__((swift_name("testClassificationName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LaboratoryFilteredItem.Companion")))
@interface MDSLaboratoryFilteredItemCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSLaboratoryFilteredItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LaboratoryItem")))
@interface MDSLaboratoryItem : MDSTestResultRoot
- (instancetype)initWithDateOfReceipt:(NSString * _Nullable)dateOfReceipt resultReportingDate:(NSString * _Nullable)resultReportingDate count:(NSString * _Nullable)count resultType:(NSString * _Nullable)resultType testItemName:(NSString * _Nullable)testItemName inspectionItemCode:(NSString * _Nullable)inspectionItemCode testResults:(NSString * _Nullable)testResults resultRemarks:(NSString * _Nullable)resultRemarks testResultUnit:(NSString * _Nullable)testResultUnit hospitalCode:(NSString * _Nullable)hospitalCode testClassificationCode:(NSString * _Nullable)testClassificationCode testClassificationName:(NSString * _Nullable)testClassificationName testClassificationArabicName:(NSString * _Nullable)testClassificationArabicName orderDate:(NSString * _Nullable)orderDate slipName:(NSString * _Nullable)slipName pactId:(NSString * _Nullable)pactId dateOfMostRecentInspection:(NSString * _Nullable)dateOfMostRecentInspection recentTestResults:(NSString * _Nullable)recentTestResults referenceValue:(NSString * _Nullable)referenceValue testResultStatus:(NSString * _Nullable)testResultStatus listingOrder:(MDSInt * _Nullable)listingOrder inspectionResultInquiry:(MDSInt * _Nullable)inspectionResultInquiry specimenName:(NSString * _Nullable)specimenName sampleNumber:(NSString * _Nullable)sampleNumber regionCode:(NSString * _Nullable)regionCode pthl_NO:(NSString * _Nullable)pthl_NO hijriBRFG_DTM:(NSString * _Nullable)hijriBRFG_DTM group_COND:(NSString * _Nullable)group_COND acpt_DTM2:(NSString * _Nullable)acpt_DTM2 __attribute__((swift_name("init(dateOfReceipt:resultReportingDate:count:resultType:testItemName:inspectionItemCode:testResults:resultRemarks:testResultUnit:hospitalCode:testClassificationCode:testClassificationName:testClassificationArabicName:orderDate:slipName:pactId:dateOfMostRecentInspection:recentTestResults:referenceValue:testResultStatus:listingOrder:inspectionResultInquiry:specimenName:sampleNumber:regionCode:pthl_NO:hijriBRFG_DTM:group_COND:acpt_DTM2:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MDSLaboratoryItemCompanion *companion __attribute__((swift_name("companion")));
- (MDSLaboratoryItem *)doCopyDateOfReceipt:(NSString * _Nullable)dateOfReceipt resultReportingDate:(NSString * _Nullable)resultReportingDate count:(NSString * _Nullable)count resultType:(NSString * _Nullable)resultType testItemName:(NSString * _Nullable)testItemName inspectionItemCode:(NSString * _Nullable)inspectionItemCode testResults:(NSString * _Nullable)testResults resultRemarks:(NSString * _Nullable)resultRemarks testResultUnit:(NSString * _Nullable)testResultUnit hospitalCode:(NSString * _Nullable)hospitalCode testClassificationCode:(NSString * _Nullable)testClassificationCode testClassificationName:(NSString * _Nullable)testClassificationName testClassificationArabicName:(NSString * _Nullable)testClassificationArabicName orderDate:(NSString * _Nullable)orderDate slipName:(NSString * _Nullable)slipName pactId:(NSString * _Nullable)pactId dateOfMostRecentInspection:(NSString * _Nullable)dateOfMostRecentInspection recentTestResults:(NSString * _Nullable)recentTestResults referenceValue:(NSString * _Nullable)referenceValue testResultStatus:(NSString * _Nullable)testResultStatus listingOrder:(MDSInt * _Nullable)listingOrder inspectionResultInquiry:(MDSInt * _Nullable)inspectionResultInquiry specimenName:(NSString * _Nullable)specimenName sampleNumber:(NSString * _Nullable)sampleNumber regionCode:(NSString * _Nullable)regionCode pthl_NO:(NSString * _Nullable)pthl_NO hijriBRFG_DTM:(NSString * _Nullable)hijriBRFG_DTM group_COND:(NSString * _Nullable)group_COND acpt_DTM2:(NSString * _Nullable)acpt_DTM2 __attribute__((swift_name("doCopy(dateOfReceipt:resultReportingDate:count:resultType:testItemName:inspectionItemCode:testResults:resultRemarks:testResultUnit:hospitalCode:testClassificationCode:testClassificationName:testClassificationArabicName:orderDate:slipName:pactId:dateOfMostRecentInspection:recentTestResults:referenceValue:testResultStatus:listingOrder:inspectionResultInquiry:specimenName:sampleNumber:regionCode:pthl_NO:hijriBRFG_DTM:group_COND:acpt_DTM2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString *)getHospitalCode1 __attribute__((swift_name("getHospitalCode1()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="acpt_DTM2")
*/
@property NSString * _Nullable acpt_DTM2 __attribute__((swift_name("acpt_DTM2")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="count")
*/
@property NSString * _Nullable count __attribute__((swift_name("count")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dateOfMostRecentInspection")
*/
@property NSString * _Nullable dateOfMostRecentInspection __attribute__((swift_name("dateOfMostRecentInspection")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dateOfReceipt")
*/
@property NSString * _Nullable dateOfReceipt __attribute__((swift_name("dateOfReceipt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="group_COND")
*/
@property NSString * _Nullable group_COND __attribute__((swift_name("group_COND")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hijriBRFG_DTM")
*/
@property NSString * _Nullable hijriBRFG_DTM __attribute__((swift_name("hijriBRFG_DTM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="inspectionItemCode")
*/
@property NSString * _Nullable inspectionItemCode __attribute__((swift_name("inspectionItemCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="inspectionResultInquiry")
*/
@property MDSInt * _Nullable inspectionResultInquiry __attribute__((swift_name("inspectionResultInquiry")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="listingOrder")
*/
@property MDSInt * _Nullable listingOrder __attribute__((swift_name("listingOrder")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderDate")
*/
@property NSString * _Nullable orderDate __attribute__((swift_name("orderDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pactId")
*/
@property NSString * _Nullable pactId __attribute__((swift_name("pactId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pthl_NO")
*/
@property NSString * _Nullable pthl_NO __attribute__((swift_name("pthl_NO")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="recentTestResults")
*/
@property NSString * _Nullable recentTestResults __attribute__((swift_name("recentTestResults")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="referenceValue")
*/
@property NSString * _Nullable referenceValue __attribute__((swift_name("referenceValue")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="regionCode")
*/
@property NSString * _Nullable regionCode __attribute__((swift_name("regionCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="resultRemarks")
*/
@property NSString * _Nullable resultRemarks __attribute__((swift_name("resultRemarks")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="resultReportingDate")
*/
@property NSString * _Nullable resultReportingDate __attribute__((swift_name("resultReportingDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="resultType")
*/
@property NSString * _Nullable resultType __attribute__((swift_name("resultType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sampleNumber")
*/
@property NSString * _Nullable sampleNumber __attribute__((swift_name("sampleNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="slipName")
*/
@property NSString * _Nullable slipName __attribute__((swift_name("slipName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="specimenName")
*/
@property NSString * _Nullable specimenName __attribute__((swift_name("specimenName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="testClassificationArabicName")
*/
@property NSString * _Nullable testClassificationArabicName __attribute__((swift_name("testClassificationArabicName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="testClassificationCode")
*/
@property NSString * _Nullable testClassificationCode __attribute__((swift_name("testClassificationCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="testClassificationName")
*/
@property NSString * _Nullable testClassificationName __attribute__((swift_name("testClassificationName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="testItemName")
*/
@property NSString * _Nullable testItemName __attribute__((swift_name("testItemName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="testResultStatus")
*/
@property NSString * _Nullable testResultStatus __attribute__((swift_name("testResultStatus")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="testResultUnit")
*/
@property NSString * _Nullable testResultUnit __attribute__((swift_name("testResultUnit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="testResults")
*/
@property NSString * _Nullable testResults __attribute__((swift_name("testResults")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LaboratoryItem.Companion")))
@interface MDSLaboratoryItemCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSLaboratoryItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LaboratoryResult")))
@interface MDSLaboratoryResult : MDSBase
- (instancetype)initWithTestItemName:(NSString * _Nullable)testItemName referenceValue:(NSString * _Nullable)referenceValue testResults:(NSString * _Nullable)testResults __attribute__((swift_name("init(testItemName:referenceValue:testResults:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSLaboratoryResultCompanion *companion __attribute__((swift_name("companion")));
- (MDSLaboratoryResult *)doCopyTestItemName:(NSString * _Nullable)testItemName referenceValue:(NSString * _Nullable)referenceValue testResults:(NSString * _Nullable)testResults __attribute__((swift_name("doCopy(testItemName:referenceValue:testResults:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable referenceValue __attribute__((swift_name("referenceValue")));
@property NSString * _Nullable testItemName __attribute__((swift_name("testItemName")));
@property NSString * _Nullable testResults __attribute__((swift_name("testResults")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LaboratoryResult.Companion")))
@interface MDSLaboratoryResultCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSLaboratoryResultCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LastVisit")))
@interface MDSLastVisit : MDSBase
- (instancetype)initWithLastVisitResult:(MDSLastVisitResult * _Nullable)lastVisitResult phy:(NSArray<MDSPhy *> * _Nullable)phy __attribute__((swift_name("init(lastVisitResult:phy:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSLastVisitCompanion *companion __attribute__((swift_name("companion")));
- (MDSLastVisit *)doCopyLastVisitResult:(MDSLastVisitResult * _Nullable)lastVisitResult phy:(NSArray<MDSPhy *> * _Nullable)phy __attribute__((swift_name("doCopy(lastVisitResult:phy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lastVisitResult")
*/
@property (readonly) MDSLastVisitResult * _Nullable lastVisitResult __attribute__((swift_name("lastVisitResult")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="phy")
*/
@property (readonly) NSArray<MDSPhy *> * _Nullable phy __attribute__((swift_name("phy")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LastVisit.Companion")))
@interface MDSLastVisitCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSLastVisitCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LastVisitResult")))
@interface MDSLastVisitResult : MDSBase
- (instancetype)initWithHospitalCode:(NSString * _Nullable)hospitalCode medDeptCd:(NSString * _Nullable)medDeptCd korSrnmNm:(NSString * _Nullable)korSrnmNm localDeptNm:(NSString * _Nullable)localDeptNm pactId:(NSString * _Nullable)pactId icd10Cd:(NSString * _Nullable)icd10Cd medrStfNo:(NSString * _Nullable)medrStfNo deptNm:(NSString * _Nullable)deptNm lclStfNm:(NSString * _Nullable)lclStfNm prevAskYn:(NSString * _Nullable)prevAskYn __attribute__((swift_name("init(hospitalCode:medDeptCd:korSrnmNm:localDeptNm:pactId:icd10Cd:medrStfNo:deptNm:lclStfNm:prevAskYn:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSLastVisitResultCompanion *companion __attribute__((swift_name("companion")));
- (MDSLastVisitResult *)doCopyHospitalCode:(NSString * _Nullable)hospitalCode medDeptCd:(NSString * _Nullable)medDeptCd korSrnmNm:(NSString * _Nullable)korSrnmNm localDeptNm:(NSString * _Nullable)localDeptNm pactId:(NSString * _Nullable)pactId icd10Cd:(NSString * _Nullable)icd10Cd medrStfNo:(NSString * _Nullable)medrStfNo deptNm:(NSString * _Nullable)deptNm lclStfNm:(NSString * _Nullable)lclStfNm prevAskYn:(NSString * _Nullable)prevAskYn __attribute__((swift_name("doCopy(hospitalCode:medDeptCd:korSrnmNm:localDeptNm:pactId:icd10Cd:medrStfNo:deptNm:lclStfNm:prevAskYn:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dept_NM")
*/
@property (readonly) NSString * _Nullable deptNm __attribute__((swift_name("deptNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="icd10_CD")
*/
@property (readonly) NSString * _Nullable icd10Cd __attribute__((swift_name("icd10Cd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="kor_SRNM_NM")
*/
@property (readonly) NSString * _Nullable korSrnmNm __attribute__((swift_name("korSrnmNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lcl_STF_NM")
*/
@property (readonly) NSString * _Nullable lclStfNm __attribute__((swift_name("lclStfNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="local_DEPT_NM")
*/
@property (readonly) NSString * _Nullable localDeptNm __attribute__((swift_name("localDeptNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="med_DEPT_CD")
*/
@property (readonly) NSString * _Nullable medDeptCd __attribute__((swift_name("medDeptCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medr_STF_NO")
*/
@property (readonly) NSString * _Nullable medrStfNo __attribute__((swift_name("medrStfNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pact_ID")
*/
@property (readonly) NSString * _Nullable pactId __attribute__((swift_name("pactId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="prev_ASK_YN")
*/
@property (readonly) NSString * _Nullable prevAskYn __attribute__((swift_name("prevAskYn")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LastVisitResult.Companion")))
@interface MDSLastVisitResultCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSLastVisitResultCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResponse")))
@interface MDSLoginResponse : MDSBase
- (instancetype)initWithId:(MDSLong * _Nullable)id patientId:(NSString * _Nullable)patientId patientName:(NSString * _Nullable)patientName arabicPatientName:(NSString * _Nullable)arabicPatientName SEC_RRN:(NSString * _Nullable)SEC_RRN mobileNumber:(NSString * _Nullable)mobileNumber password:(NSString * _Nullable)password C_PT_REL_TP_CD:(NSString * _Nullable)C_PT_REL_TP_CD enterprisePatientId:(NSString * _Nullable)enterprisePatientId isPasswordExist:(NSString * _Nullable)isPasswordExist END_PT_NO_YN:(NSString * _Nullable)END_PT_NO_YN __attribute__((swift_name("init(id:patientId:patientName:arabicPatientName:SEC_RRN:mobileNumber:password:C_PT_REL_TP_CD:enterprisePatientId:isPasswordExist:END_PT_NO_YN:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSLoginResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSLoginResponse *)doCopyId:(MDSLong * _Nullable)id patientId:(NSString * _Nullable)patientId patientName:(NSString * _Nullable)patientName arabicPatientName:(NSString * _Nullable)arabicPatientName SEC_RRN:(NSString * _Nullable)SEC_RRN mobileNumber:(NSString * _Nullable)mobileNumber password:(NSString * _Nullable)password C_PT_REL_TP_CD:(NSString * _Nullable)C_PT_REL_TP_CD enterprisePatientId:(NSString * _Nullable)enterprisePatientId isPasswordExist:(NSString * _Nullable)isPasswordExist END_PT_NO_YN:(NSString * _Nullable)END_PT_NO_YN __attribute__((swift_name("doCopy(id:patientId:patientName:arabicPatientName:SEC_RRN:mobileNumber:password:C_PT_REL_TP_CD:enterprisePatientId:isPasswordExist:END_PT_NO_YN:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable C_PT_REL_TP_CD __attribute__((swift_name("C_PT_REL_TP_CD")));
@property (readonly) NSString * _Nullable END_PT_NO_YN __attribute__((swift_name("END_PT_NO_YN")));
@property (readonly) NSString * _Nullable SEC_RRN __attribute__((swift_name("SEC_RRN")));
@property (readonly) NSString * _Nullable arabicPatientName __attribute__((swift_name("arabicPatientName")));
@property (readonly) NSString * _Nullable enterprisePatientId __attribute__((swift_name("enterprisePatientId")));
@property (readonly) MDSLong * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable isPasswordExist __attribute__((swift_name("isPasswordExist")));
@property (readonly) NSString * _Nullable mobileNumber __attribute__((swift_name("mobileNumber")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSString * _Nullable patientId __attribute__((swift_name("patientId")));
@property (readonly) NSString * _Nullable patientName __attribute__((swift_name("patientName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResponse.Companion")))
@interface MDSLoginResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSLoginResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MedicalReportResult")))
@interface MDSMedicalReportResult : MDSBase
- (instancetype)initWithDmamMessage:(NSString * _Nullable)dmamMessage message:(NSString * _Nullable)message result:(NSString * _Nullable)result __attribute__((swift_name("init(dmamMessage:message:result:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSMedicalReportResultCompanion *companion __attribute__((swift_name("companion")));
- (MDSMedicalReportResult *)doCopyDmamMessage:(NSString * _Nullable)dmamMessage message:(NSString * _Nullable)message result:(NSString * _Nullable)result __attribute__((swift_name("doCopy(dmamMessage:message:result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dmamMessage")
*/
@property (readonly) NSString * _Nullable dmamMessage __attribute__((swift_name("dmamMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="result")
*/
@property (readonly) NSString * _Nullable result __attribute__((swift_name("result")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MedicalReportResult.Companion")))
@interface MDSMedicalReportResultCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSMedicalReportResultCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MedicationReport")))
@interface MDSMedicationReport : MDSBase
- (instancetype)initWithPactId:(NSString * _Nullable)pactId medicationDate:(NSString * _Nullable)medicationDate hijriDate:(NSString * _Nullable)hijriDate mdfmClsDtlCdNm:(NSString * _Nullable)mdfmClsDtlCdNm mdrcId:(MDSInt * _Nullable)mdrcId mdfmClsDtlCd:(NSString * _Nullable)mdfmClsDtlCd mdfmClsDtlCdNmAr:(NSString * _Nullable)mdfmClsDtlCdNmAr __attribute__((swift_name("init(pactId:medicationDate:hijriDate:mdfmClsDtlCdNm:mdrcId:mdfmClsDtlCd:mdfmClsDtlCdNmAr:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSMedicationReportCompanion *companion __attribute__((swift_name("companion")));
- (MDSMedicationReport *)doCopyPactId:(NSString * _Nullable)pactId medicationDate:(NSString * _Nullable)medicationDate hijriDate:(NSString * _Nullable)hijriDate mdfmClsDtlCdNm:(NSString * _Nullable)mdfmClsDtlCdNm mdrcId:(MDSInt * _Nullable)mdrcId mdfmClsDtlCd:(NSString * _Nullable)mdfmClsDtlCd mdfmClsDtlCdNmAr:(NSString * _Nullable)mdfmClsDtlCdNmAr __attribute__((swift_name("doCopy(pactId:medicationDate:hijriDate:mdfmClsDtlCdNm:mdrcId:mdfmClsDtlCd:mdfmClsDtlCdNmAr:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hijriDate")
*/
@property (readonly) NSString * _Nullable hijriDate __attribute__((swift_name("hijriDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mdfm_CLS_DTL_CD")
*/
@property (readonly) NSString * _Nullable mdfmClsDtlCd __attribute__((swift_name("mdfmClsDtlCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mdfm_CLS_DTL_CD_NM")
*/
@property (readonly) NSString * _Nullable mdfmClsDtlCdNm __attribute__((swift_name("mdfmClsDtlCdNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mdfm_CLS_DTL_CD_NM_AR")
*/
@property (readonly) NSString * _Nullable mdfmClsDtlCdNmAr __attribute__((swift_name("mdfmClsDtlCdNmAr")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mdrc_ID")
*/
@property (readonly) MDSInt * _Nullable mdrcId __attribute__((swift_name("mdrcId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicationDate")
*/
@property (readonly) NSString * _Nullable medicationDate __attribute__((swift_name("medicationDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pactId")
*/
@property (readonly) NSString * _Nullable pactId __attribute__((swift_name("pactId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MedicationReport.Companion")))
@interface MDSMedicationReportCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSMedicationReportCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MonthDates")))
@interface MDSMonthDates : MDSBase
- (instancetype)initWithMonthYear:(NSString *)monthYear days:(MDSKotlinArray<MDSDateItem *> *)days __attribute__((swift_name("init(monthYear:days:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSMonthDatesCompanion *companion __attribute__((swift_name("companion")));
- (MDSMonthDates *)doCopyMonthYear:(NSString *)monthYear days:(MDSKotlinArray<MDSDateItem *> *)days __attribute__((swift_name("doCopy(monthYear:days:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSKotlinArray<MDSDateItem *> *days __attribute__((swift_name("days")));
@property (readonly) NSString *monthYear __attribute__((swift_name("monthYear")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MonthDates.Companion")))
@interface MDSMonthDatesCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSMonthDatesCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyReviewsResponse")))
@interface MDSMyReviewsResponse : MDSBase
- (instancetype)initWithReviews:(MDSKotlinArray<MDSReview *> * _Nullable)reviews totalAverage:(MDSDouble * _Nullable)totalAverage eachServiceAverage:(MDSDouble * _Nullable)eachServiceAverage __attribute__((swift_name("init(reviews:totalAverage:eachServiceAverage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSMyReviewsResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSMyReviewsResponse *)doCopyReviews:(MDSKotlinArray<MDSReview *> * _Nullable)reviews totalAverage:(MDSDouble * _Nullable)totalAverage eachServiceAverage:(MDSDouble * _Nullable)eachServiceAverage __attribute__((swift_name("doCopy(reviews:totalAverage:eachServiceAverage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSDouble * _Nullable eachServiceAverage __attribute__((swift_name("eachServiceAverage")));
@property (readonly) MDSKotlinArray<MDSReview *> * _Nullable reviews __attribute__((swift_name("reviews")));
@property (readonly) MDSDouble * _Nullable totalAverage __attribute__((swift_name("totalAverage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyReviewsResponse.Companion")))
@interface MDSMyReviewsResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSMyReviewsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NafathLoginResponse")))
@interface MDSNafathLoginResponse : MDSBase
- (instancetype)initWithTransferID:(NSString * _Nullable)transferID random:(NSString * _Nullable)random message:(NSString * _Nullable)message __attribute__((swift_name("init(transferID:random:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSNafathLoginResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSNafathLoginResponse *)doCopyTransferID:(NSString * _Nullable)transferID random:(NSString * _Nullable)random message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(transferID:random:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="random")
*/
@property (readonly) NSString * _Nullable random __attribute__((swift_name("random")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="transferID")
*/
@property (readonly) NSString * _Nullable transferID __attribute__((swift_name("transferID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NafathLoginResponse.Companion")))
@interface MDSNafathLoginResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSNafathLoginResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NafathResultItem")))
@interface MDSNafathResultItem : MDSBase
- (instancetype)initWithCommonCodeName:(NSString * _Nullable)commonCodeName enterprisePatientId:(NSString * _Nullable)enterprisePatientId existFlag:(NSString * _Nullable)existFlag arabicPatientName:(NSString * _Nullable)arabicPatientName regionCode:(NSString * _Nullable)regionCode englishPatientName:(NSString * _Nullable)englishPatientName patientId:(NSString * _Nullable)patientId mobileNumber:(NSString * _Nullable)mobileNumber __attribute__((swift_name("init(commonCodeName:enterprisePatientId:existFlag:arabicPatientName:regionCode:englishPatientName:patientId:mobileNumber:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSNafathResultItemCompanion *companion __attribute__((swift_name("companion")));
- (MDSNafathResultItem *)doCopyCommonCodeName:(NSString * _Nullable)commonCodeName enterprisePatientId:(NSString * _Nullable)enterprisePatientId existFlag:(NSString * _Nullable)existFlag arabicPatientName:(NSString * _Nullable)arabicPatientName regionCode:(NSString * _Nullable)regionCode englishPatientName:(NSString * _Nullable)englishPatientName patientId:(NSString * _Nullable)patientId mobileNumber:(NSString * _Nullable)mobileNumber __attribute__((swift_name("doCopy(commonCodeName:enterprisePatientId:existFlag:arabicPatientName:regionCode:englishPatientName:patientId:mobileNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicPatientName")
*/
@property (readonly) NSString * _Nullable arabicPatientName __attribute__((swift_name("arabicPatientName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="commonCodeName")
*/
@property (readonly) NSString * _Nullable commonCodeName __attribute__((swift_name("commonCodeName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishPatientName")
*/
@property (readonly) NSString * _Nullable englishPatientName __attribute__((swift_name("englishPatientName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enterprisePatientId")
*/
@property (readonly) NSString * _Nullable enterprisePatientId __attribute__((swift_name("enterprisePatientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="existFlag")
*/
@property (readonly) NSString * _Nullable existFlag __attribute__((swift_name("existFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mobileNumber")
*/
@property (readonly) NSString * _Nullable mobileNumber __attribute__((swift_name("mobileNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property (readonly) NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="regionCode")
*/
@property (readonly) NSString * _Nullable regionCode __attribute__((swift_name("regionCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NafathResultItem.Companion")))
@interface MDSNafathResultItemCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSNafathResultItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationItem")))
@interface MDSNotificationItem : MDSBase
- (instancetype)initWithNotificationId:(NSString * _Nullable)notificationId title:(NSString * _Nullable)title textMessage:(NSString * _Nullable)textMessage message:(NSString * _Nullable)message patientId:(NSString * _Nullable)patientId hijriDate:(NSString * _Nullable)hijriDate doDate:(NSString * _Nullable)doDate hospitalName:(NSString * _Nullable)hospitalName deleted:(MDSBoolean * _Nullable)deleted read:(MDSBoolean * _Nullable)read messageType:(NSString * _Nullable)messageType arabicRejectName:(NSString * _Nullable)arabicRejectName englishRejectName:(NSString * _Nullable)englishRejectName reject:(MDSBoolean * _Nullable)reject hopeMedEndDtHijri:(NSString * _Nullable)hopeMedEndDtHijri hopeMedStrDtHijri:(NSString * _Nullable)hopeMedStrDtHijri thrpTpNm:(NSString * _Nullable)thrpTpNm hopeMedEndDt:(NSString * _Nullable)hopeMedEndDt hopeMedStrDt:(NSString * _Nullable)hopeMedStrDt lclThrpTpNm:(NSString * _Nullable)lclThrpTpNm deptNm:(NSString * _Nullable)deptNm lclDeptNm:(NSString * _Nullable)lclDeptNm cnt:(NSString * _Nullable)cnt mdrcId:(MDSInt * _Nullable)mdrcId cntAr:(NSString * _Nullable)cntAr rflApbtStsCd:(NSString * _Nullable)rflApbtStsCd __attribute__((swift_name("init(notificationId:title:textMessage:message:patientId:hijriDate:doDate:hospitalName:deleted:read:messageType:arabicRejectName:englishRejectName:reject:hopeMedEndDtHijri:hopeMedStrDtHijri:thrpTpNm:hopeMedEndDt:hopeMedStrDt:lclThrpTpNm:deptNm:lclDeptNm:cnt:mdrcId:cntAr:rflApbtStsCd:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSNotificationItemCompanion *companion __attribute__((swift_name("companion")));
- (MDSNotificationItem *)doCopyNotificationId:(NSString * _Nullable)notificationId title:(NSString * _Nullable)title textMessage:(NSString * _Nullable)textMessage message:(NSString * _Nullable)message patientId:(NSString * _Nullable)patientId hijriDate:(NSString * _Nullable)hijriDate doDate:(NSString * _Nullable)doDate hospitalName:(NSString * _Nullable)hospitalName deleted:(MDSBoolean * _Nullable)deleted read:(MDSBoolean * _Nullable)read messageType:(NSString * _Nullable)messageType arabicRejectName:(NSString * _Nullable)arabicRejectName englishRejectName:(NSString * _Nullable)englishRejectName reject:(MDSBoolean * _Nullable)reject hopeMedEndDtHijri:(NSString * _Nullable)hopeMedEndDtHijri hopeMedStrDtHijri:(NSString * _Nullable)hopeMedStrDtHijri thrpTpNm:(NSString * _Nullable)thrpTpNm hopeMedEndDt:(NSString * _Nullable)hopeMedEndDt hopeMedStrDt:(NSString * _Nullable)hopeMedStrDt lclThrpTpNm:(NSString * _Nullable)lclThrpTpNm deptNm:(NSString * _Nullable)deptNm lclDeptNm:(NSString * _Nullable)lclDeptNm cnt:(NSString * _Nullable)cnt mdrcId:(MDSInt * _Nullable)mdrcId cntAr:(NSString * _Nullable)cntAr rflApbtStsCd:(NSString * _Nullable)rflApbtStsCd __attribute__((swift_name("doCopy(notificationId:title:textMessage:message:patientId:hijriDate:doDate:hospitalName:deleted:read:messageType:arabicRejectName:englishRejectName:reject:hopeMedEndDtHijri:hopeMedStrDtHijri:thrpTpNm:hopeMedEndDt:hopeMedStrDt:lclThrpTpNm:deptNm:lclDeptNm:cnt:mdrcId:cntAr:rflApbtStsCd:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicRejectName")
*/
@property (readonly) NSString * _Nullable arabicRejectName __attribute__((swift_name("arabicRejectName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cnt")
*/
@property (readonly) NSString * _Nullable cnt __attribute__((swift_name("cnt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cnt_AR")
*/
@property (readonly) NSString * _Nullable cntAr __attribute__((swift_name("cntAr")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deleted")
*/
@property (readonly) MDSBoolean * _Nullable deleted __attribute__((swift_name("deleted")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dept_NM")
*/
@property (readonly) NSString * _Nullable deptNm __attribute__((swift_name("deptNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="doDate")
*/
@property (readonly) NSString * _Nullable doDate __attribute__((swift_name("doDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishRejectName")
*/
@property (readonly) NSString * _Nullable englishRejectName __attribute__((swift_name("englishRejectName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hijriDate")
*/
@property (readonly) NSString * _Nullable hijriDate __attribute__((swift_name("hijriDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hope_MED_END_DT")
*/
@property (readonly) NSString * _Nullable hopeMedEndDt __attribute__((swift_name("hopeMedEndDt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hope_MED_END_DT_HIJRI")
*/
@property (readonly) NSString * _Nullable hopeMedEndDtHijri __attribute__((swift_name("hopeMedEndDtHijri")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hope_MED_STR_DT")
*/
@property (readonly) NSString * _Nullable hopeMedStrDt __attribute__((swift_name("hopeMedStrDt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hope_MED_STR_DT_HIJRI")
*/
@property (readonly) NSString * _Nullable hopeMedStrDtHijri __attribute__((swift_name("hopeMedStrDtHijri")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalName")
*/
@property (readonly) NSString * _Nullable hospitalName __attribute__((swift_name("hospitalName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lcl_DEPT_NM")
*/
@property (readonly) NSString * _Nullable lclDeptNm __attribute__((swift_name("lclDeptNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lcl_THRP_TP_NM")
*/
@property (readonly) NSString * _Nullable lclThrpTpNm __attribute__((swift_name("lclThrpTpNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mdrc_ID")
*/
@property (readonly) MDSInt * _Nullable mdrcId __attribute__((swift_name("mdrcId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="messageType")
*/
@property (readonly) NSString * _Nullable messageType __attribute__((swift_name("messageType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="notificationId")
*/
@property (readonly) NSString * _Nullable notificationId __attribute__((swift_name("notificationId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property (readonly) NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="read")
*/
@property (readonly) MDSBoolean * _Nullable read __attribute__((swift_name("read")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reject")
*/
@property (readonly) MDSBoolean * _Nullable reject __attribute__((swift_name("reject")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rfl_APBT_STS_CD")
*/
@property (readonly) NSString * _Nullable rflApbtStsCd __attribute__((swift_name("rflApbtStsCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="textMessage")
*/
@property (readonly) NSString * _Nullable textMessage __attribute__((swift_name("textMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thrp_TP_NM")
*/
@property (readonly) NSString * _Nullable thrpTpNm __attribute__((swift_name("thrpTpNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationItem.Companion")))
@interface MDSNotificationItemCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSNotificationItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationListResult")))
@interface MDSNotificationListResult : MDSBase
- (instancetype)initWithTotalCount:(MDSInt * _Nullable)totalCount totalPages:(MDSInt * _Nullable)totalPages totalElements:(MDSInt * _Nullable)totalElements unreadCount:(MDSInt * _Nullable)unreadCount results:(NSArray<MDSNotificationItem *> * _Nullable)results __attribute__((swift_name("init(totalCount:totalPages:totalElements:unreadCount:results:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSNotificationListResultCompanion *companion __attribute__((swift_name("companion")));
- (MDSNotificationListResult *)doCopyTotalCount:(MDSInt * _Nullable)totalCount totalPages:(MDSInt * _Nullable)totalPages totalElements:(MDSInt * _Nullable)totalElements unreadCount:(MDSInt * _Nullable)unreadCount results:(NSArray<MDSNotificationItem *> * _Nullable)results __attribute__((swift_name("doCopy(totalCount:totalPages:totalElements:unreadCount:results:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="results")
*/
@property (readonly) NSArray<MDSNotificationItem *> * _Nullable results __attribute__((swift_name("results")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="totalCount")
*/
@property (readonly) MDSInt * _Nullable totalCount __attribute__((swift_name("totalCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="totalElements")
*/
@property (readonly) MDSInt * _Nullable totalElements __attribute__((swift_name("totalElements")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="totalPages")
*/
@property (readonly) MDSInt * _Nullable totalPages __attribute__((swift_name("totalPages")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="unreadCount")
*/
@property (readonly) MDSInt * _Nullable unreadCount __attribute__((swift_name("unreadCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationListResult.Companion")))
@interface MDSNotificationListResultCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSNotificationListResultCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PHC")))
@interface MDSPHC : MDSBase
- (instancetype)initWithEnglishName:(NSString * _Nullable)englishName arabicName:(NSString * _Nullable)arabicName __attribute__((swift_name("init(englishName:arabicName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSPHCCompanion *companion __attribute__((swift_name("companion")));
- (MDSPHC *)doCopyEnglishName:(NSString * _Nullable)englishName arabicName:(NSString * _Nullable)arabicName __attribute__((swift_name("doCopy(englishName:arabicName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicName")
*/
@property NSString * _Nullable arabicName __attribute__((swift_name("arabicName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishName")
*/
@property NSString * _Nullable englishName __attribute__((swift_name("englishName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PHC.Companion")))
@interface MDSPHCCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSPHCCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PathologyItem")))
@interface MDSPathologyItem : MDSTestResultRoot
- (instancetype)initWithHospitalCode:(NSString * _Nullable)hospitalCode readingDate:(NSString * _Nullable)readingDate mainStemArea:(NSString * _Nullable)mainStemArea dateOfReceipt:(NSString * _Nullable)dateOfReceipt additionalResults:(NSString * _Nullable)additionalResults inspectionClassificationCode:(NSString * _Nullable)inspectionClassificationCode pactId:(NSString * _Nullable)pactId testClassificationName:(NSString * _Nullable)testClassificationName testClassificationArabicName:(NSString * _Nullable)testClassificationArabicName pathologyNumber:(NSString * _Nullable)pathologyNumber reading1:(NSString * _Nullable)reading1 reading2:(NSString * _Nullable)reading2 hijriDate:(NSString * _Nullable)hijriDate arabicTestClassificationName:(NSString * _Nullable)arabicTestClassificationName plex_PRGR_STS_CD:(NSString * _Nullable)plex_PRGR_STS_CD __attribute__((swift_name("init(hospitalCode:readingDate:mainStemArea:dateOfReceipt:additionalResults:inspectionClassificationCode:pactId:testClassificationName:testClassificationArabicName:pathologyNumber:reading1:reading2:hijriDate:arabicTestClassificationName:plex_PRGR_STS_CD:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MDSPathologyItemCompanion *companion __attribute__((swift_name("companion")));
- (MDSPathologyItem *)doCopyHospitalCode:(NSString * _Nullable)hospitalCode readingDate:(NSString * _Nullable)readingDate mainStemArea:(NSString * _Nullable)mainStemArea dateOfReceipt:(NSString * _Nullable)dateOfReceipt additionalResults:(NSString * _Nullable)additionalResults inspectionClassificationCode:(NSString * _Nullable)inspectionClassificationCode pactId:(NSString * _Nullable)pactId testClassificationName:(NSString * _Nullable)testClassificationName testClassificationArabicName:(NSString * _Nullable)testClassificationArabicName pathologyNumber:(NSString * _Nullable)pathologyNumber reading1:(NSString * _Nullable)reading1 reading2:(NSString * _Nullable)reading2 hijriDate:(NSString * _Nullable)hijriDate arabicTestClassificationName:(NSString * _Nullable)arabicTestClassificationName plex_PRGR_STS_CD:(NSString * _Nullable)plex_PRGR_STS_CD __attribute__((swift_name("doCopy(hospitalCode:readingDate:mainStemArea:dateOfReceipt:additionalResults:inspectionClassificationCode:pactId:testClassificationName:testClassificationArabicName:pathologyNumber:reading1:reading2:hijriDate:arabicTestClassificationName:plex_PRGR_STS_CD:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString *)getHospitalCode1 __attribute__((swift_name("getHospitalCode1()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="additionalResults")
*/
@property NSString * _Nullable additionalResults __attribute__((swift_name("additionalResults")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicTestClassificationName")
*/
@property NSString * _Nullable arabicTestClassificationName __attribute__((swift_name("arabicTestClassificationName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dateOfReceipt")
*/
@property NSString * _Nullable dateOfReceipt __attribute__((swift_name("dateOfReceipt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hijriDate")
*/
@property NSString * _Nullable hijriDate __attribute__((swift_name("hijriDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="inspectionClassificationCode")
*/
@property NSString * _Nullable inspectionClassificationCode __attribute__((swift_name("inspectionClassificationCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mainStemArea")
*/
@property NSString * _Nullable mainStemArea __attribute__((swift_name("mainStemArea")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pactId")
*/
@property NSString * _Nullable pactId __attribute__((swift_name("pactId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pathologyNumber")
*/
@property NSString * _Nullable pathologyNumber __attribute__((swift_name("pathologyNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="plex_PRGR_STS_CD")
*/
@property NSString * _Nullable plex_PRGR_STS_CD __attribute__((swift_name("plex_PRGR_STS_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reading1")
*/
@property NSString * _Nullable reading1 __attribute__((swift_name("reading1")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reading2")
*/
@property NSString * _Nullable reading2 __attribute__((swift_name("reading2")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="readingDate")
*/
@property NSString * _Nullable readingDate __attribute__((swift_name("readingDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="testClassificationArabicName")
*/
@property NSString * _Nullable testClassificationArabicName __attribute__((swift_name("testClassificationArabicName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="testClassificationName")
*/
@property NSString * _Nullable testClassificationName __attribute__((swift_name("testClassificationName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PathologyItem.Companion")))
@interface MDSPathologyItemCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSPathologyItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PatientAddressResponse")))
@interface MDSPatientAddressResponse : MDSBase
- (instancetype)initWithBasicAddress:(NSString * _Nullable)basicAddress detailsAddress:(NSString * _Nullable)detailsAddress __attribute__((swift_name("init(basicAddress:detailsAddress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSPatientAddressResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSPatientAddressResponse *)doCopyBasicAddress:(NSString * _Nullable)basicAddress detailsAddress:(NSString * _Nullable)detailsAddress __attribute__((swift_name("doCopy(basicAddress:detailsAddress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="basicAddress")
*/
@property NSString * _Nullable basicAddress __attribute__((swift_name("basicAddress")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="detailsAddress")
*/
@property NSString * _Nullable detailsAddress __attribute__((swift_name("detailsAddress")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PatientAddressResponse.Companion")))
@interface MDSPatientAddressResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSPatientAddressResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PatientCardItem")))
@interface MDSPatientCardItem : MDSBase
- (instancetype)initWithFirstText:(NSString * _Nullable)firstText secondText:(NSString * _Nullable)secondText __attribute__((swift_name("init(firstText:secondText:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSPatientCardItemCompanion *companion __attribute__((swift_name("companion")));
- (MDSPatientCardItem *)doCopyFirstText:(NSString * _Nullable)firstText secondText:(NSString * _Nullable)secondText __attribute__((swift_name("doCopy(firstText:secondText:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="firstText")
*/
@property NSString * _Nullable firstText __attribute__((swift_name("firstText")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="secondText")
*/
@property NSString * _Nullable secondText __attribute__((swift_name("secondText")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PatientCardItem.Companion")))
@interface MDSPatientCardItemCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSPatientCardItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PatientInfo")))
@interface MDSPatientInfo : MDSBase
- (instancetype)initWithPatientName:(NSString * _Nullable)patientName patientId:(NSString * _Nullable)patientId relativeTypeCode:(NSString * _Nullable)relativeTypeCode enterprisePatientId:(NSString * _Nullable)enterprisePatientId subRelativeTypeName:(NSString * _Nullable)subRelativeTypeName mainPatientNumber:(NSString * _Nullable)mainPatientNumber birthDate:(NSString * _Nullable)birthDate isDeleted:(NSString * _Nullable)isDeleted groupId:(NSString * _Nullable)groupId expiryDate:(NSString * _Nullable)expiryDate isExpired:(NSString * _Nullable)isExpired gender:(NSString * _Nullable)gender __attribute__((swift_name("init(patientName:patientId:relativeTypeCode:enterprisePatientId:subRelativeTypeName:mainPatientNumber:birthDate:isDeleted:groupId:expiryDate:isExpired:gender:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSPatientInfoCompanion *companion __attribute__((swift_name("companion")));
- (MDSPatientInfo *)doCopyPatientName:(NSString * _Nullable)patientName patientId:(NSString * _Nullable)patientId relativeTypeCode:(NSString * _Nullable)relativeTypeCode enterprisePatientId:(NSString * _Nullable)enterprisePatientId subRelativeTypeName:(NSString * _Nullable)subRelativeTypeName mainPatientNumber:(NSString * _Nullable)mainPatientNumber birthDate:(NSString * _Nullable)birthDate isDeleted:(NSString * _Nullable)isDeleted groupId:(NSString * _Nullable)groupId expiryDate:(NSString * _Nullable)expiryDate isExpired:(NSString * _Nullable)isExpired gender:(NSString * _Nullable)gender __attribute__((swift_name("doCopy(patientName:patientId:relativeTypeCode:enterprisePatientId:subRelativeTypeName:mainPatientNumber:birthDate:isDeleted:groupId:expiryDate:isExpired:gender:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="birthDate")
*/
@property (readonly) NSString * _Nullable birthDate __attribute__((swift_name("birthDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enterprisePatientId")
*/
@property (readonly) NSString * _Nullable enterprisePatientId __attribute__((swift_name("enterprisePatientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expiryDate")
*/
@property (readonly) NSString * _Nullable expiryDate __attribute__((swift_name("expiryDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="gender")
*/
@property (readonly) NSString * _Nullable gender __attribute__((swift_name("gender")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="groupId")
*/
@property (readonly) NSString * _Nullable groupId __attribute__((swift_name("groupId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="isDeleted")
*/
@property (readonly) NSString * _Nullable isDeleted __attribute__((swift_name("isDeleted")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="isExpired")
*/
@property (readonly) NSString * _Nullable isExpired __attribute__((swift_name("isExpired")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mainPatientNumber")
*/
@property (readonly) NSString * _Nullable mainPatientNumber __attribute__((swift_name("mainPatientNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property (readonly) NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientName")
*/
@property (readonly) NSString * _Nullable patientName __attribute__((swift_name("patientName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="relativeTypeCode")
*/
@property (readonly) NSString * _Nullable relativeTypeCode __attribute__((swift_name("relativeTypeCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="subRelativeTypeName")
*/
@property (readonly) NSString * _Nullable subRelativeTypeName __attribute__((swift_name("subRelativeTypeName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PatientInfo.Companion")))
@interface MDSPatientInfoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSPatientInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PatientProfileResponse")))
@interface MDSPatientProfileResponse : MDSBase
- (instancetype)initWithAbobTpCd:(NSString * _Nullable)abobTpCd adult:(MDSBoolean * _Nullable)adult age:(MDSInt * _Nullable)age arabicPatientName:(NSString * _Nullable)arabicPatientName asdDrStfNo:(NSString * _Nullable)asdDrStfNo askYourDoctor:(MDSBoolean * _Nullable)askYourDoctor baderYn:(NSString * _Nullable)baderYn birthday:(NSString * _Nullable)birthday cAbobTpCd:(NSString * _Nullable)cAbobTpCd cPtNm:(NSString * _Nullable)cPtNm cPtNo:(NSString * _Nullable)cPtNo cSexTpCd:(NSString * _Nullable)cSexTpCd disclaimerYn:(NSString * _Nullable)disclaimerYn dtlVipTpCd:(NSString * _Nullable)dtlVipTpCd dulaniYN:(MDSBoolean * _Nullable)dulaniYN edulinkar:(NSString * _Nullable)edulinkar edulinken:(NSString * _Nullable)edulinken empYn:(MDSInt * _Nullable)empYn englishPatientName:(NSString * _Nullable)englishPatientName enterprisePatientId:(NSString * _Nullable)enterprisePatientId gender:(NSString * _Nullable)gender grRead:(NSString * _Nullable)grRead groupRang:(NSString * _Nullable)groupRang hasRecord:(NSString * _Nullable)hasRecord hasVaccination:(MDSBoolean * _Nullable)hasVaccination hhcId:(MDSInt * _Nullable)hhcId hmAddrVerCtraCd:(NSString * _Nullable)hmAddrVerCtraCd hospitalBasicAddress:(NSString * _Nullable)hospitalBasicAddress hospitalCode:(NSString * _Nullable)hospitalCode hospitalDetailsAddress:(NSString * _Nullable)hospitalDetailsAddress hospitalPhoneNumber:(NSString * _Nullable)hospitalPhoneNumber imageId:(MDSInt * _Nullable)imageId isPasswordExists:(NSString * _Nullable)isPasswordExists mlngTpCd:(MDSInt * _Nullable)mlngTpCd mobileNumber:(NSString * _Nullable)mobileNumber notiOnYn:(NSString * _Nullable)notiOnYn ofTelNo:(NSString * _Nullable)ofTelNo painScore:(NSString * _Nullable)painScore password:(NSString * _Nullable)password patientEmail:(NSString * _Nullable)patientEmail patientId:(NSString * _Nullable)patientId perScore:(NSString * _Nullable)perScore secRrn:(NSString * _Nullable)secRrn stdYn:(MDSInt * _Nullable)stdYn surveyNyl:(NSString * _Nullable)surveyNyl teleERYN:(MDSBoolean * _Nullable)teleERYN testGr:(MDSInt * _Nullable)testGr tipInfo:(MDSKotlinArray<MDSTipInfo *> * _Nullable)tipInfo today:(NSString * _Nullable)today vipYn:(NSString * _Nullable)vipYn arabicRegionName:(NSString * _Nullable)arabicRegionName englishRegionName:(NSString * _Nullable)englishRegionName hospitalsList:(MDSKotlinArray<MDSHospitalItem *> * _Nullable)hospitalsList regionCode:(NSString * _Nullable)regionCode isSponsor:(BOOL)isSponsor backToParent:(BOOL)backToParent relatives:(MDSKotlinArray<MDSDependentItem *> * _Nullable)relatives __attribute__((swift_name("init(abobTpCd:adult:age:arabicPatientName:asdDrStfNo:askYourDoctor:baderYn:birthday:cAbobTpCd:cPtNm:cPtNo:cSexTpCd:disclaimerYn:dtlVipTpCd:dulaniYN:edulinkar:edulinken:empYn:englishPatientName:enterprisePatientId:gender:grRead:groupRang:hasRecord:hasVaccination:hhcId:hmAddrVerCtraCd:hospitalBasicAddress:hospitalCode:hospitalDetailsAddress:hospitalPhoneNumber:imageId:isPasswordExists:mlngTpCd:mobileNumber:notiOnYn:ofTelNo:painScore:password:patientEmail:patientId:perScore:secRrn:stdYn:surveyNyl:teleERYN:testGr:tipInfo:today:vipYn:arabicRegionName:englishRegionName:hospitalsList:regionCode:isSponsor:backToParent:relatives:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSPatientProfileResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSPatientProfileResponse *)doCopyAbobTpCd:(NSString * _Nullable)abobTpCd adult:(MDSBoolean * _Nullable)adult age:(MDSInt * _Nullable)age arabicPatientName:(NSString * _Nullable)arabicPatientName asdDrStfNo:(NSString * _Nullable)asdDrStfNo askYourDoctor:(MDSBoolean * _Nullable)askYourDoctor baderYn:(NSString * _Nullable)baderYn birthday:(NSString * _Nullable)birthday cAbobTpCd:(NSString * _Nullable)cAbobTpCd cPtNm:(NSString * _Nullable)cPtNm cPtNo:(NSString * _Nullable)cPtNo cSexTpCd:(NSString * _Nullable)cSexTpCd disclaimerYn:(NSString * _Nullable)disclaimerYn dtlVipTpCd:(NSString * _Nullable)dtlVipTpCd dulaniYN:(MDSBoolean * _Nullable)dulaniYN edulinkar:(NSString * _Nullable)edulinkar edulinken:(NSString * _Nullable)edulinken empYn:(MDSInt * _Nullable)empYn englishPatientName:(NSString * _Nullable)englishPatientName enterprisePatientId:(NSString * _Nullable)enterprisePatientId gender:(NSString * _Nullable)gender grRead:(NSString * _Nullable)grRead groupRang:(NSString * _Nullable)groupRang hasRecord:(NSString * _Nullable)hasRecord hasVaccination:(MDSBoolean * _Nullable)hasVaccination hhcId:(MDSInt * _Nullable)hhcId hmAddrVerCtraCd:(NSString * _Nullable)hmAddrVerCtraCd hospitalBasicAddress:(NSString * _Nullable)hospitalBasicAddress hospitalCode:(NSString * _Nullable)hospitalCode hospitalDetailsAddress:(NSString * _Nullable)hospitalDetailsAddress hospitalPhoneNumber:(NSString * _Nullable)hospitalPhoneNumber imageId:(MDSInt * _Nullable)imageId isPasswordExists:(NSString * _Nullable)isPasswordExists mlngTpCd:(MDSInt * _Nullable)mlngTpCd mobileNumber:(NSString * _Nullable)mobileNumber notiOnYn:(NSString * _Nullable)notiOnYn ofTelNo:(NSString * _Nullable)ofTelNo painScore:(NSString * _Nullable)painScore password:(NSString * _Nullable)password patientEmail:(NSString * _Nullable)patientEmail patientId:(NSString * _Nullable)patientId perScore:(NSString * _Nullable)perScore secRrn:(NSString * _Nullable)secRrn stdYn:(MDSInt * _Nullable)stdYn surveyNyl:(NSString * _Nullable)surveyNyl teleERYN:(MDSBoolean * _Nullable)teleERYN testGr:(MDSInt * _Nullable)testGr tipInfo:(MDSKotlinArray<MDSTipInfo *> * _Nullable)tipInfo today:(NSString * _Nullable)today vipYn:(NSString * _Nullable)vipYn arabicRegionName:(NSString * _Nullable)arabicRegionName englishRegionName:(NSString * _Nullable)englishRegionName hospitalsList:(MDSKotlinArray<MDSHospitalItem *> * _Nullable)hospitalsList regionCode:(NSString * _Nullable)regionCode isSponsor:(BOOL)isSponsor backToParent:(BOOL)backToParent relatives:(MDSKotlinArray<MDSDependentItem *> * _Nullable)relatives __attribute__((swift_name("doCopy(abobTpCd:adult:age:arabicPatientName:asdDrStfNo:askYourDoctor:baderYn:birthday:cAbobTpCd:cPtNm:cPtNo:cSexTpCd:disclaimerYn:dtlVipTpCd:dulaniYN:edulinkar:edulinken:empYn:englishPatientName:enterprisePatientId:gender:grRead:groupRang:hasRecord:hasVaccination:hhcId:hmAddrVerCtraCd:hospitalBasicAddress:hospitalCode:hospitalDetailsAddress:hospitalPhoneNumber:imageId:isPasswordExists:mlngTpCd:mobileNumber:notiOnYn:ofTelNo:painScore:password:patientEmail:patientId:perScore:secRrn:stdYn:surveyNyl:teleERYN:testGr:tipInfo:today:vipYn:arabicRegionName:englishRegionName:hospitalsList:regionCode:isSponsor:backToParent:relatives:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString * _Nullable)getPatientNameLang:(NSString *)lang __attribute__((swift_name("getPatientName(lang:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="abob_tp_cd")
*/
@property NSString * _Nullable abobTpCd __attribute__((swift_name("abobTpCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="adult")
*/
@property MDSBoolean * _Nullable adult __attribute__((swift_name("adult")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="age")
*/
@property MDSInt * _Nullable age __attribute__((swift_name("age")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicPatientName")
*/
@property NSString * _Nullable arabicPatientName __attribute__((swift_name("arabicPatientName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicRegionName")
*/
@property NSString * _Nullable arabicRegionName __attribute__((swift_name("arabicRegionName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="doctorId")
*/
@property NSString * _Nullable asdDrStfNo __attribute__((swift_name("asdDrStfNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="askYourDoctor")
*/
@property MDSBoolean * _Nullable askYourDoctor __attribute__((swift_name("askYourDoctor")));
@property BOOL backToParent __attribute__((swift_name("backToParent")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bader_yn")
*/
@property NSString * _Nullable baderYn __attribute__((swift_name("baderYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="birthday")
*/
@property NSString * _Nullable birthday __attribute__((swift_name("birthday")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="c_abob_tp_cd")
*/
@property NSString * _Nullable cAbobTpCd __attribute__((swift_name("cAbobTpCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="c_pt_nm")
*/
@property NSString * _Nullable cPtNm __attribute__((swift_name("cPtNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="c_pt_no")
*/
@property NSString * _Nullable cPtNo __attribute__((swift_name("cPtNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="c_sex_tp_cd")
*/
@property NSString * _Nullable cSexTpCd __attribute__((swift_name("cSexTpCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="disclaimer_yn")
*/
@property NSString * _Nullable disclaimerYn __attribute__((swift_name("disclaimerYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dtl_vip_tp_cd")
*/
@property NSString * _Nullable dtlVipTpCd __attribute__((swift_name("dtlVipTpCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dulani_YN")
*/
@property MDSBoolean * _Nullable dulaniYN __attribute__((swift_name("dulaniYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="edulinkar")
*/
@property NSString * _Nullable edulinkar __attribute__((swift_name("edulinkar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="edulinken")
*/
@property NSString * _Nullable edulinken __attribute__((swift_name("edulinken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="emp_yn")
*/
@property MDSInt * _Nullable empYn __attribute__((swift_name("empYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishPatientName")
*/
@property NSString * _Nullable englishPatientName __attribute__((swift_name("englishPatientName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishRegionName")
*/
@property NSString * _Nullable englishRegionName __attribute__((swift_name("englishRegionName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enterprisePatientId")
*/
@property NSString * _Nullable enterprisePatientId __attribute__((swift_name("enterprisePatientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="gender")
*/
@property NSString * _Nullable gender __attribute__((swift_name("gender")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="gr_read")
*/
@property NSString * _Nullable grRead __attribute__((swift_name("grRead")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="groupRang")
*/
@property NSString * _Nullable groupRang __attribute__((swift_name("groupRang")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hasRecord")
*/
@property NSString * _Nullable hasRecord __attribute__((swift_name("hasRecord")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hasVaccination")
*/
@property MDSBoolean * _Nullable hasVaccination __attribute__((swift_name("hasVaccination")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hhc_id")
*/
@property MDSInt * _Nullable hhcId __attribute__((swift_name("hhcId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hm_addr_ver_ctra_cd")
*/
@property NSString * _Nullable hmAddrVerCtraCd __attribute__((swift_name("hmAddrVerCtraCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalBasicAddress")
*/
@property NSString * _Nullable hospitalBasicAddress __attribute__((swift_name("hospitalBasicAddress")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalDetailsAddress")
*/
@property NSString * _Nullable hospitalDetailsAddress __attribute__((swift_name("hospitalDetailsAddress")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalPhoneNumber")
*/
@property NSString * _Nullable hospitalPhoneNumber __attribute__((swift_name("hospitalPhoneNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalsList")
*/
@property MDSKotlinArray<MDSHospitalItem *> * _Nullable hospitalsList __attribute__((swift_name("hospitalsList")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="imageId")
*/
@property MDSInt * _Nullable imageId __attribute__((swift_name("imageId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="isPasswordExists")
*/
@property NSString * _Nullable isPasswordExists __attribute__((swift_name("isPasswordExists")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sponsor")
*/
@property BOOL isSponsor __attribute__((swift_name("isSponsor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mlng_tp_cd")
*/
@property MDSInt * _Nullable mlngTpCd __attribute__((swift_name("mlngTpCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mobileNumber")
*/
@property NSString * _Nullable mobileNumber __attribute__((swift_name("mobileNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="noti_on_yn")
*/
@property NSString * _Nullable notiOnYn __attribute__((swift_name("notiOnYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="of_tel_no")
*/
@property NSString * _Nullable ofTelNo __attribute__((swift_name("ofTelNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pain_score")
*/
@property NSString * _Nullable painScore __attribute__((swift_name("painScore")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="password")
*/
@property NSString * _Nullable password __attribute__((swift_name("password")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientEmail")
*/
@property NSString * _Nullable patientEmail __attribute__((swift_name("patientEmail")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="per_score")
*/
@property NSString * _Nullable perScore __attribute__((swift_name("perScore")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="regionCode")
*/
@property NSString * _Nullable regionCode __attribute__((swift_name("regionCode")));
@property MDSKotlinArray<MDSDependentItem *> * _Nullable relatives __attribute__((swift_name("relatives")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sec_rrn")
*/
@property NSString * _Nullable secRrn __attribute__((swift_name("secRrn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="std_yn")
*/
@property MDSInt * _Nullable stdYn __attribute__((swift_name("stdYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="survey_nyl")
*/
@property NSString * _Nullable surveyNyl __attribute__((swift_name("surveyNyl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tele_ER_YN")
*/
@property MDSBoolean * _Nullable teleERYN __attribute__((swift_name("teleERYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="test_gr")
*/
@property MDSInt * _Nullable testGr __attribute__((swift_name("testGr")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tipInfo")
*/
@property MDSKotlinArray<MDSTipInfo *> * _Nullable tipInfo __attribute__((swift_name("tipInfo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="today")
*/
@property NSString * _Nullable today __attribute__((swift_name("today")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vip_yn")
*/
@property NSString * _Nullable vipYn __attribute__((swift_name("vipYn")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PatientProfileResponse.Companion")))
@interface MDSPatientProfileResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSPatientProfileResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PendingSurvey")))
@interface MDSPendingSurvey : MDSBase
- (instancetype)initWithServiceEvaluation:(MDSInt * _Nullable)serviceEvaluation patientId:(NSString * _Nullable)patientId regionCode:(NSString * _Nullable)regionCode visitDate:(NSString * _Nullable)visitDate visitHijriDate:(NSString * _Nullable)visitHijriDate cmtMessage:(NSString * _Nullable)cmtMessage surveyId:(MDSInt * _Nullable)surveyId arabicService:(NSString * _Nullable)arabicService englishService:(NSString * _Nullable)englishService __attribute__((swift_name("init(serviceEvaluation:patientId:regionCode:visitDate:visitHijriDate:cmtMessage:surveyId:arabicService:englishService:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSPendingSurveyCompanion *companion __attribute__((swift_name("companion")));
- (MDSPendingSurvey *)doCopyServiceEvaluation:(MDSInt * _Nullable)serviceEvaluation patientId:(NSString * _Nullable)patientId regionCode:(NSString * _Nullable)regionCode visitDate:(NSString * _Nullable)visitDate visitHijriDate:(NSString * _Nullable)visitHijriDate cmtMessage:(NSString * _Nullable)cmtMessage surveyId:(MDSInt * _Nullable)surveyId arabicService:(NSString * _Nullable)arabicService englishService:(NSString * _Nullable)englishService __attribute__((swift_name("doCopy(serviceEvaluation:patientId:regionCode:visitDate:visitHijriDate:cmtMessage:surveyId:arabicService:englishService:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicService")
*/
@property (readonly) NSString * _Nullable arabicService __attribute__((swift_name("arabicService")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cmtMessage")
*/
@property (readonly) NSString * _Nullable cmtMessage __attribute__((swift_name("cmtMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishService")
*/
@property (readonly) NSString * _Nullable englishService __attribute__((swift_name("englishService")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property (readonly) NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="regionCode")
*/
@property (readonly) NSString * _Nullable regionCode __attribute__((swift_name("regionCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="serviceEvaluation")
*/
@property (readonly) MDSInt * _Nullable serviceEvaluation __attribute__((swift_name("serviceEvaluation")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="surveyId")
*/
@property (readonly) MDSInt * _Nullable surveyId __attribute__((swift_name("surveyId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="visitDate")
*/
@property (readonly) NSString * _Nullable visitDate __attribute__((swift_name("visitDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="visitHijriDate")
*/
@property (readonly) NSString * _Nullable visitHijriDate __attribute__((swift_name("visitHijriDate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PendingSurvey.Companion")))
@interface MDSPendingSurveyCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSPendingSurveyCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PersonInfoResponse")))
@interface MDSPersonInfoResponse : MDSBase
- (instancetype)initWithMessage:(NSString * _Nullable)message result:(NSArray<MDSPersonResult *> * _Nullable)result __attribute__((swift_name("init(message:result:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSPersonInfoResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSPersonInfoResponse *)doCopyMessage:(NSString * _Nullable)message result:(NSArray<MDSPersonResult *> * _Nullable)result __attribute__((swift_name("doCopy(message:result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="result")
*/
@property (readonly) NSArray<MDSPersonResult *> * _Nullable result __attribute__((swift_name("result")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PersonInfoResponse.Companion")))
@interface MDSPersonInfoResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSPersonInfoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PersonResult")))
@interface MDSPersonResult : MDSBase
- (instancetype)initWithFirstNameAr:(NSString * _Nullable)firstNameAr fatherNameAr:(NSString * _Nullable)fatherNameAr grandFatherNameAr:(NSString * _Nullable)grandFatherNameAr familyNameAr:(NSString * _Nullable)familyNameAr firstNameEn:(NSString * _Nullable)firstNameEn fatherNameEn:(NSString * _Nullable)fatherNameEn grandFatherNameEn:(NSString * _Nullable)grandFatherNameEn familyNameEn:(NSString * _Nullable)familyNameEn birthCityAr:(NSString * _Nullable)birthCityAr birthDate:(NSString * _Nullable)birthDate age:(MDSInt * _Nullable)age sonOver23:(NSString * _Nullable)sonOver23 sexCode:(NSString * _Nullable)sexCode sexDescArabic:(NSString * _Nullable)sexDescArabic sexDescEnglish:(NSString * _Nullable)sexDescEnglish maritalStatusDescAr:(NSString * _Nullable)maritalStatusDescAr maritalStatusDescEn:(NSString * _Nullable)maritalStatusDescEn nationalityCode:(NSString * _Nullable)nationalityCode maritalStatusCode:(NSString * _Nullable)maritalStatusCode cityNameAr:(NSString * _Nullable)cityNameAr cityNameEn:(NSString * _Nullable)cityNameEn districtAreaAr:(NSString * _Nullable)districtAreaAr districtAreaEn:(NSString * _Nullable)districtAreaEn zipCode:(NSString * _Nullable)zipCode unitNumber:(NSString * _Nullable)unitNumber additionalNumber:(NSString * _Nullable)additionalNumber buildingNumber:(NSString * _Nullable)buildingNumber streetNameAr:(NSString * _Nullable)streetNameAr streetNameEn:(NSString * _Nullable)streetNameEn hospitalsList:(NSArray<MDSHospitalNafathItem *> * _Nullable)hospitalsList idexpirationDate:(NSString * _Nullable)idexpirationDate __attribute__((swift_name("init(firstNameAr:fatherNameAr:grandFatherNameAr:familyNameAr:firstNameEn:fatherNameEn:grandFatherNameEn:familyNameEn:birthCityAr:birthDate:age:sonOver23:sexCode:sexDescArabic:sexDescEnglish:maritalStatusDescAr:maritalStatusDescEn:nationalityCode:maritalStatusCode:cityNameAr:cityNameEn:districtAreaAr:districtAreaEn:zipCode:unitNumber:additionalNumber:buildingNumber:streetNameAr:streetNameEn:hospitalsList:idexpirationDate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSPersonResultCompanion *companion __attribute__((swift_name("companion")));
- (MDSPersonResult *)doCopyFirstNameAr:(NSString * _Nullable)firstNameAr fatherNameAr:(NSString * _Nullable)fatherNameAr grandFatherNameAr:(NSString * _Nullable)grandFatherNameAr familyNameAr:(NSString * _Nullable)familyNameAr firstNameEn:(NSString * _Nullable)firstNameEn fatherNameEn:(NSString * _Nullable)fatherNameEn grandFatherNameEn:(NSString * _Nullable)grandFatherNameEn familyNameEn:(NSString * _Nullable)familyNameEn birthCityAr:(NSString * _Nullable)birthCityAr birthDate:(NSString * _Nullable)birthDate age:(MDSInt * _Nullable)age sonOver23:(NSString * _Nullable)sonOver23 sexCode:(NSString * _Nullable)sexCode sexDescArabic:(NSString * _Nullable)sexDescArabic sexDescEnglish:(NSString * _Nullable)sexDescEnglish maritalStatusDescAr:(NSString * _Nullable)maritalStatusDescAr maritalStatusDescEn:(NSString * _Nullable)maritalStatusDescEn nationalityCode:(NSString * _Nullable)nationalityCode maritalStatusCode:(NSString * _Nullable)maritalStatusCode cityNameAr:(NSString * _Nullable)cityNameAr cityNameEn:(NSString * _Nullable)cityNameEn districtAreaAr:(NSString * _Nullable)districtAreaAr districtAreaEn:(NSString * _Nullable)districtAreaEn zipCode:(NSString * _Nullable)zipCode unitNumber:(NSString * _Nullable)unitNumber additionalNumber:(NSString * _Nullable)additionalNumber buildingNumber:(NSString * _Nullable)buildingNumber streetNameAr:(NSString * _Nullable)streetNameAr streetNameEn:(NSString * _Nullable)streetNameEn hospitalsList:(NSArray<MDSHospitalNafathItem *> * _Nullable)hospitalsList idexpirationDate:(NSString * _Nullable)idexpirationDate __attribute__((swift_name("doCopy(firstNameAr:fatherNameAr:grandFatherNameAr:familyNameAr:firstNameEn:fatherNameEn:grandFatherNameEn:familyNameEn:birthCityAr:birthDate:age:sonOver23:sexCode:sexDescArabic:sexDescEnglish:maritalStatusDescAr:maritalStatusDescEn:nationalityCode:maritalStatusCode:cityNameAr:cityNameEn:districtAreaAr:districtAreaEn:zipCode:unitNumber:additionalNumber:buildingNumber:streetNameAr:streetNameEn:hospitalsList:idexpirationDate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="additionalNumber")
*/
@property (readonly) NSString * _Nullable additionalNumber __attribute__((swift_name("additionalNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="age")
*/
@property (readonly) MDSInt * _Nullable age __attribute__((swift_name("age")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="birthCityAr")
*/
@property (readonly) NSString * _Nullable birthCityAr __attribute__((swift_name("birthCityAr")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="birthDate")
*/
@property (readonly) NSString * _Nullable birthDate __attribute__((swift_name("birthDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="buildingNumber")
*/
@property (readonly) NSString * _Nullable buildingNumber __attribute__((swift_name("buildingNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cityNameAr")
*/
@property (readonly) NSString * _Nullable cityNameAr __attribute__((swift_name("cityNameAr")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cityNameEn")
*/
@property (readonly) NSString * _Nullable cityNameEn __attribute__((swift_name("cityNameEn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="districtAreaAr")
*/
@property (readonly) NSString * _Nullable districtAreaAr __attribute__((swift_name("districtAreaAr")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="districtAreaEn")
*/
@property (readonly) NSString * _Nullable districtAreaEn __attribute__((swift_name("districtAreaEn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="familyNameAr")
*/
@property (readonly) NSString * _Nullable familyNameAr __attribute__((swift_name("familyNameAr")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="familyNameEn")
*/
@property (readonly) NSString * _Nullable familyNameEn __attribute__((swift_name("familyNameEn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fatherNameAr")
*/
@property (readonly) NSString * _Nullable fatherNameAr __attribute__((swift_name("fatherNameAr")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fatherNameEn")
*/
@property (readonly) NSString * _Nullable fatherNameEn __attribute__((swift_name("fatherNameEn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="firstNameAr")
*/
@property (readonly) NSString * _Nullable firstNameAr __attribute__((swift_name("firstNameAr")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="firstNameEn")
*/
@property (readonly) NSString * _Nullable firstNameEn __attribute__((swift_name("firstNameEn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="grandFatherNameAr")
*/
@property (readonly) NSString * _Nullable grandFatherNameAr __attribute__((swift_name("grandFatherNameAr")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="grandFatherNameEn")
*/
@property (readonly) NSString * _Nullable grandFatherNameEn __attribute__((swift_name("grandFatherNameEn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalsList")
*/
@property (readonly) NSArray<MDSHospitalNafathItem *> * _Nullable hospitalsList __attribute__((swift_name("hospitalsList")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idexpirationDate")
*/
@property (readonly) NSString * _Nullable idexpirationDate __attribute__((swift_name("idexpirationDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="maritalStatusCode")
*/
@property (readonly) NSString * _Nullable maritalStatusCode __attribute__((swift_name("maritalStatusCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="maritalStatusDescAr")
*/
@property (readonly) NSString * _Nullable maritalStatusDescAr __attribute__((swift_name("maritalStatusDescAr")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="maritalStatusDescEn")
*/
@property (readonly) NSString * _Nullable maritalStatusDescEn __attribute__((swift_name("maritalStatusDescEn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nationalityCode")
*/
@property (readonly) NSString * _Nullable nationalityCode __attribute__((swift_name("nationalityCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sexCode")
*/
@property (readonly) NSString * _Nullable sexCode __attribute__((swift_name("sexCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sexDescArabic")
*/
@property (readonly) NSString * _Nullable sexDescArabic __attribute__((swift_name("sexDescArabic")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sexDescEnglish")
*/
@property (readonly) NSString * _Nullable sexDescEnglish __attribute__((swift_name("sexDescEnglish")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sonOver23")
*/
@property (readonly) NSString * _Nullable sonOver23 __attribute__((swift_name("sonOver23")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="streetNameAr")
*/
@property (readonly) NSString * _Nullable streetNameAr __attribute__((swift_name("streetNameAr")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="streetNameEn")
*/
@property (readonly) NSString * _Nullable streetNameEn __attribute__((swift_name("streetNameEn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="unitNumber")
*/
@property (readonly) NSString * _Nullable unitNumber __attribute__((swift_name("unitNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="zipCode")
*/
@property (readonly) NSString * _Nullable zipCode __attribute__((swift_name("zipCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PersonResult.Companion")))
@interface MDSPersonResultCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSPersonResultCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Phy")))
@interface MDSPhy : MDSBase
- (instancetype)initWithStaffNo:(NSString * _Nullable)staffNo staffName:(NSString * _Nullable)staffName departmentCode:(NSString * _Nullable)departmentCode departmentName:(NSString * _Nullable)departmentName email:(NSString * _Nullable)email lclStfNm:(NSString * _Nullable)lclStfNm sid:(NSString * _Nullable)sid __attribute__((swift_name("init(staffNo:staffName:departmentCode:departmentName:email:lclStfNm:sid:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSPhyCompanion *companion __attribute__((swift_name("companion")));
- (MDSPhy *)doCopyStaffNo:(NSString * _Nullable)staffNo staffName:(NSString * _Nullable)staffName departmentCode:(NSString * _Nullable)departmentCode departmentName:(NSString * _Nullable)departmentName email:(NSString * _Nullable)email lclStfNm:(NSString * _Nullable)lclStfNm sid:(NSString * _Nullable)sid __attribute__((swift_name("doCopy(staffNo:staffName:departmentCode:departmentName:email:lclStfNm:sid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="departmentCode")
*/
@property (readonly) NSString * _Nullable departmentCode __attribute__((swift_name("departmentCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="departmentName")
*/
@property (readonly) NSString * _Nullable departmentName __attribute__((swift_name("departmentName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lcl_STF_NM")
*/
@property (readonly) NSString * _Nullable lclStfNm __attribute__((swift_name("lclStfNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sid")
*/
@property (readonly) NSString * _Nullable sid __attribute__((swift_name("sid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="staffName")
*/
@property (readonly) NSString * _Nullable staffName __attribute__((swift_name("staffName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="staffNo")
*/
@property (readonly) NSString * _Nullable staffNo __attribute__((swift_name("staffNo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Phy.Companion")))
@interface MDSPhyCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSPhyCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferredTime")))
@interface MDSPreferredTime : MDSBase
- (instancetype)initWithNameEn:(NSString *)nameEn nameAr:(NSString *)nameAr code:(NSString *)code __attribute__((swift_name("init(nameEn:nameAr:code:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSPreferredTimeCompanion *companion __attribute__((swift_name("companion")));
- (MDSPreferredTime *)doCopyNameEn:(NSString *)nameEn nameAr:(NSString *)nameAr code:(NSString *)code __attribute__((swift_name("doCopy(nameEn:nameAr:code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *nameAr __attribute__((swift_name("nameAr")));
@property (readonly) NSString *nameEn __attribute__((swift_name("nameEn")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferredTime.Companion")))
@interface MDSPreferredTimeCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSPreferredTimeCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrescriptionResponse")))
@interface MDSPrescriptionResponse : MDSBase
- (instancetype)initWithResults:(MDSKotlinArray<MDSPrescriptionResult *> * _Nullable)results pdfFileBase64:(NSString * _Nullable)pdfFileBase64 __attribute__((swift_name("init(results:pdfFileBase64:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSPrescriptionResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSPrescriptionResponse *)doCopyResults:(MDSKotlinArray<MDSPrescriptionResult *> * _Nullable)results pdfFileBase64:(NSString * _Nullable)pdfFileBase64 __attribute__((swift_name("doCopy(results:pdfFileBase64:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pdfFile")
*/
@property (readonly) NSString * _Nullable pdfFileBase64 __attribute__((swift_name("pdfFileBase64")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="results")
*/
@property MDSKotlinArray<MDSPrescriptionResult *> * _Nullable results __attribute__((swift_name("results")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrescriptionResponse.Companion")))
@interface MDSPrescriptionResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSPrescriptionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrescriptionResult")))
@interface MDSPrescriptionResult : MDSBase
- (instancetype)initWithHsp_NM:(NSString * _Nullable)hsp_NM lcl_HSP_NM:(NSString * _Nullable)lcl_HSP_NM date_HIJRI:(NSString * _Nullable)date_HIJRI pt_NM:(NSString * _Nullable)pt_NM ordID:(NSString * _Nullable)ordID ord_DT:(NSString * _Nullable)ord_DT pactTypeCode:(NSString * _Nullable)pactTypeCode englishMessage:(NSString * _Nullable)englishMessage arabicMessage:(NSString * _Nullable)arabicMessage pt_NO:(NSString * _Nullable)pt_NO hsp_TP_CD:(NSString * _Nullable)hsp_TP_CD lcl_AMD_DSG_CNTE:(NSString * _Nullable)lcl_AMD_DSG_CNTE tkmd_GUID_AMD_DSG_CNTE:(NSString * _Nullable)tkmd_GUID_AMD_DSG_CNTE rfl_RM_NOTM:(MDSDouble * _Nullable)rfl_RM_NOTM eng_MDPR_NM:(NSString * _Nullable)eng_MDPR_NM ord_NM:(NSString * _Nullable)ord_NM ord_CD:(NSString * _Nullable)ord_CD amd_DSG_CNTE:(NSString * _Nullable)amd_DSG_CNTE th3_USG_EXPL:(NSString * _Nullable)th3_USG_EXPL ams_ORD_STS_CD:(NSString * _Nullable)ams_ORD_STS_CD th1_USG_EXPL:(NSString * _Nullable)th1_USG_EXPL ord_DURATION:(NSString * _Nullable)ord_DURATION lcl_AMD_PRD_TQTY_CNTE:(NSString * _Nullable)lcl_AMD_PRD_TQTY_CNTE tkmd_GUID_AMD_PRD_TQTY_CNTE:(NSString * _Nullable)tkmd_GUID_AMD_PRD_TQTY_CNTE items:(MDSKotlinArray<MDSPrescriptionResult *> * _Nullable)items __attribute__((swift_name("init(hsp_NM:lcl_HSP_NM:date_HIJRI:pt_NM:ordID:ord_DT:pactTypeCode:englishMessage:arabicMessage:pt_NO:hsp_TP_CD:lcl_AMD_DSG_CNTE:tkmd_GUID_AMD_DSG_CNTE:rfl_RM_NOTM:eng_MDPR_NM:ord_NM:ord_CD:amd_DSG_CNTE:th3_USG_EXPL:ams_ORD_STS_CD:th1_USG_EXPL:ord_DURATION:lcl_AMD_PRD_TQTY_CNTE:tkmd_GUID_AMD_PRD_TQTY_CNTE:items:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSPrescriptionResultCompanion *companion __attribute__((swift_name("companion")));
- (MDSPrescriptionResult *)doCopyHsp_NM:(NSString * _Nullable)hsp_NM lcl_HSP_NM:(NSString * _Nullable)lcl_HSP_NM date_HIJRI:(NSString * _Nullable)date_HIJRI pt_NM:(NSString * _Nullable)pt_NM ordID:(NSString * _Nullable)ordID ord_DT:(NSString * _Nullable)ord_DT pactTypeCode:(NSString * _Nullable)pactTypeCode englishMessage:(NSString * _Nullable)englishMessage arabicMessage:(NSString * _Nullable)arabicMessage pt_NO:(NSString * _Nullable)pt_NO hsp_TP_CD:(NSString * _Nullable)hsp_TP_CD lcl_AMD_DSG_CNTE:(NSString * _Nullable)lcl_AMD_DSG_CNTE tkmd_GUID_AMD_DSG_CNTE:(NSString * _Nullable)tkmd_GUID_AMD_DSG_CNTE rfl_RM_NOTM:(MDSDouble * _Nullable)rfl_RM_NOTM eng_MDPR_NM:(NSString * _Nullable)eng_MDPR_NM ord_NM:(NSString * _Nullable)ord_NM ord_CD:(NSString * _Nullable)ord_CD amd_DSG_CNTE:(NSString * _Nullable)amd_DSG_CNTE th3_USG_EXPL:(NSString * _Nullable)th3_USG_EXPL ams_ORD_STS_CD:(NSString * _Nullable)ams_ORD_STS_CD th1_USG_EXPL:(NSString * _Nullable)th1_USG_EXPL ord_DURATION:(NSString * _Nullable)ord_DURATION lcl_AMD_PRD_TQTY_CNTE:(NSString * _Nullable)lcl_AMD_PRD_TQTY_CNTE tkmd_GUID_AMD_PRD_TQTY_CNTE:(NSString * _Nullable)tkmd_GUID_AMD_PRD_TQTY_CNTE items:(MDSKotlinArray<MDSPrescriptionResult *> * _Nullable)items __attribute__((swift_name("doCopy(hsp_NM:lcl_HSP_NM:date_HIJRI:pt_NM:ordID:ord_DT:pactTypeCode:englishMessage:arabicMessage:pt_NO:hsp_TP_CD:lcl_AMD_DSG_CNTE:tkmd_GUID_AMD_DSG_CNTE:rfl_RM_NOTM:eng_MDPR_NM:ord_NM:ord_CD:amd_DSG_CNTE:th3_USG_EXPL:ams_ORD_STS_CD:th1_USG_EXPL:ord_DURATION:lcl_AMD_PRD_TQTY_CNTE:tkmd_GUID_AMD_PRD_TQTY_CNTE:items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="amd_DSG_CNTE")
*/
@property (readonly) NSString * _Nullable amd_DSG_CNTE __attribute__((swift_name("amd_DSG_CNTE")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ams_ORD_STS_CD")
*/
@property (readonly) NSString * _Nullable ams_ORD_STS_CD __attribute__((swift_name("ams_ORD_STS_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicMessage")
*/
@property (readonly) NSString * _Nullable arabicMessage __attribute__((swift_name("arabicMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date_HIJRI")
*/
@property (readonly) NSString * _Nullable date_HIJRI __attribute__((swift_name("date_HIJRI")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="eng_MDPR_NM")
*/
@property (readonly) NSString * _Nullable eng_MDPR_NM __attribute__((swift_name("eng_MDPR_NM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishMessage")
*/
@property (readonly) NSString * _Nullable englishMessage __attribute__((swift_name("englishMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hsp_NM")
*/
@property (readonly) NSString * _Nullable hsp_NM __attribute__((swift_name("hsp_NM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hsp_TP_CD")
*/
@property (readonly) NSString * _Nullable hsp_TP_CD __attribute__((swift_name("hsp_TP_CD")));
@property MDSKotlinArray<MDSPrescriptionResult *> * _Nullable items __attribute__((swift_name("items")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lcl_AMD_DSG_CNTE")
*/
@property (readonly) NSString * _Nullable lcl_AMD_DSG_CNTE __attribute__((swift_name("lcl_AMD_DSG_CNTE")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lcl_AMD_PRD_TQTY_CNTE")
*/
@property (readonly) NSString * _Nullable lcl_AMD_PRD_TQTY_CNTE __attribute__((swift_name("lcl_AMD_PRD_TQTY_CNTE")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lcl_HSP_NM")
*/
@property (readonly) NSString * _Nullable lcl_HSP_NM __attribute__((swift_name("lcl_HSP_NM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ord_ID")
*/
@property (readonly) NSString * _Nullable ordID __attribute__((swift_name("ordID")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ord_CD")
*/
@property (readonly) NSString * _Nullable ord_CD __attribute__((swift_name("ord_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ord_DT")
*/
@property (readonly) NSString * _Nullable ord_DT __attribute__((swift_name("ord_DT")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ord_DURATION")
*/
@property (readonly) NSString * _Nullable ord_DURATION __attribute__((swift_name("ord_DURATION")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ord_NM")
*/
@property (readonly) NSString * _Nullable ord_NM __attribute__((swift_name("ord_NM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pactTypeCode")
*/
@property (readonly) NSString * _Nullable pactTypeCode __attribute__((swift_name("pactTypeCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pt_NM")
*/
@property (readonly) NSString * _Nullable pt_NM __attribute__((swift_name("pt_NM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pt_NO")
*/
@property (readonly) NSString * _Nullable pt_NO __attribute__((swift_name("pt_NO")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rfl_RM_NOTM")
*/
@property (readonly) MDSDouble * _Nullable rfl_RM_NOTM __attribute__((swift_name("rfl_RM_NOTM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="th1_USG_EXPL")
*/
@property (readonly) NSString * _Nullable th1_USG_EXPL __attribute__((swift_name("th1_USG_EXPL")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="th3_USG_EXPL")
*/
@property (readonly) NSString * _Nullable th3_USG_EXPL __attribute__((swift_name("th3_USG_EXPL")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tkmd_GUID_AMD_DSG_CNTE")
*/
@property (readonly) NSString * _Nullable tkmd_GUID_AMD_DSG_CNTE __attribute__((swift_name("tkmd_GUID_AMD_DSG_CNTE")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tkmd_GUID_AMD_PRD_TQTY_CNTE")
*/
@property (readonly) NSString * _Nullable tkmd_GUID_AMD_PRD_TQTY_CNTE __attribute__((swift_name("tkmd_GUID_AMD_PRD_TQTY_CNTE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrescriptionResult.Companion")))
@interface MDSPrescriptionResultCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSPrescriptionResultCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Promotion")))
@interface MDSPromotion : MDSBase
- (instancetype)initWithArabicLink:(NSString * _Nullable)arabicLink englishLink:(NSString * _Nullable)englishLink name:(NSString * _Nullable)name __attribute__((swift_name("init(arabicLink:englishLink:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSPromotionCompanion *companion __attribute__((swift_name("companion")));
- (MDSPromotion *)doCopyArabicLink:(NSString * _Nullable)arabicLink englishLink:(NSString * _Nullable)englishLink name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(arabicLink:englishLink:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicLink")
*/
@property (readonly) NSString * _Nullable arabicLink __attribute__((swift_name("arabicLink")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishLink")
*/
@property (readonly) NSString * _Nullable englishLink __attribute__((swift_name("englishLink")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Promotion.Companion")))
@interface MDSPromotionCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSPromotionCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuestionDetail")))
@interface MDSQuestionDetail : MDSBase
- (instancetype)initWithQuestion:(NSString * _Nullable)question answer:(NSArray<NSString *> * _Nullable)answer questionType:(NSString * _Nullable)questionType __attribute__((swift_name("init(question:answer:questionType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSQuestionDetailCompanion *companion __attribute__((swift_name("companion")));
- (MDSQuestionDetail *)doCopyQuestion:(NSString * _Nullable)question answer:(NSArray<NSString *> * _Nullable)answer questionType:(NSString * _Nullable)questionType __attribute__((swift_name("doCopy(question:answer:questionType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="answer")
*/
@property (readonly) NSArray<NSString *> * _Nullable answer __attribute__((swift_name("answer")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="question")
*/
@property (readonly) NSString * _Nullable question __attribute__((swift_name("question")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="questionType")
*/
@property (readonly) NSString * _Nullable questionType __attribute__((swift_name("questionType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuestionDetail.Companion")))
@interface MDSQuestionDetailCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSQuestionDetailCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RadiologyItem")))
@interface MDSRadiologyItem : MDSTestResultRoot
- (instancetype)initWithCodeName:(NSString * _Nullable)codeName arabicCodeName:(NSString * _Nullable)arabicCodeName conclusion:(NSString * _Nullable)conclusion executionDate:(NSString * _Nullable)executionDate inspectionStatusCode:(NSString * _Nullable)inspectionStatusCode inspectionStatusName:(NSString * _Nullable)inspectionStatusName hospitalCode:(NSString * _Nullable)hospitalCode reportDate:(NSString * _Nullable)reportDate inspectionItemCode:(NSString * _Nullable)inspectionItemCode packId:(NSString * _Nullable)packId packTypeCode:(NSString * _Nullable)packTypeCode hijriDate:(NSString * _Nullable)hijriDate accs_ID:(NSString * _Nullable)accs_ID hspi_TP_CD:(NSString * _Nullable)hspi_TP_CD spcm_PTHL_NO:(NSString * _Nullable)spcm_PTHL_NO iptn_EXPL:(NSString * _Nullable)iptn_EXPL exam_GUBN:(NSString * _Nullable)exam_GUBN zfpurlweb:(NSString * _Nullable)zfpurlweb zfpurl:(NSString * _Nullable)zfpurl __attribute__((swift_name("init(codeName:arabicCodeName:conclusion:executionDate:inspectionStatusCode:inspectionStatusName:hospitalCode:reportDate:inspectionItemCode:packId:packTypeCode:hijriDate:accs_ID:hspi_TP_CD:spcm_PTHL_NO:iptn_EXPL:exam_GUBN:zfpurlweb:zfpurl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MDSRadiologyItemCompanion *companion __attribute__((swift_name("companion")));
- (MDSRadiologyItem *)doCopyCodeName:(NSString * _Nullable)codeName arabicCodeName:(NSString * _Nullable)arabicCodeName conclusion:(NSString * _Nullable)conclusion executionDate:(NSString * _Nullable)executionDate inspectionStatusCode:(NSString * _Nullable)inspectionStatusCode inspectionStatusName:(NSString * _Nullable)inspectionStatusName hospitalCode:(NSString * _Nullable)hospitalCode reportDate:(NSString * _Nullable)reportDate inspectionItemCode:(NSString * _Nullable)inspectionItemCode packId:(NSString * _Nullable)packId packTypeCode:(NSString * _Nullable)packTypeCode hijriDate:(NSString * _Nullable)hijriDate accs_ID:(NSString * _Nullable)accs_ID hspi_TP_CD:(NSString * _Nullable)hspi_TP_CD spcm_PTHL_NO:(NSString * _Nullable)spcm_PTHL_NO iptn_EXPL:(NSString * _Nullable)iptn_EXPL exam_GUBN:(NSString * _Nullable)exam_GUBN zfpurlweb:(NSString * _Nullable)zfpurlweb zfpurl:(NSString * _Nullable)zfpurl __attribute__((swift_name("doCopy(codeName:arabicCodeName:conclusion:executionDate:inspectionStatusCode:inspectionStatusName:hospitalCode:reportDate:inspectionItemCode:packId:packTypeCode:hijriDate:accs_ID:hspi_TP_CD:spcm_PTHL_NO:iptn_EXPL:exam_GUBN:zfpurlweb:zfpurl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString *)getHospitalCode1 __attribute__((swift_name("getHospitalCode1()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="accs_ID")
*/
@property NSString * _Nullable accs_ID __attribute__((swift_name("accs_ID")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicCodeName")
*/
@property NSString * _Nullable arabicCodeName __attribute__((swift_name("arabicCodeName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="codeName")
*/
@property NSString * _Nullable codeName __attribute__((swift_name("codeName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="conclusion")
*/
@property NSString * _Nullable conclusion __attribute__((swift_name("conclusion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="exam_GUBN")
*/
@property NSString * _Nullable exam_GUBN __attribute__((swift_name("exam_GUBN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="executionDate")
*/
@property NSString * _Nullable executionDate __attribute__((swift_name("executionDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hijriDate")
*/
@property NSString * _Nullable hijriDate __attribute__((swift_name("hijriDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hspi_TP_CD")
*/
@property NSString * _Nullable hspi_TP_CD __attribute__((swift_name("hspi_TP_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="inspectionItemCode")
*/
@property NSString * _Nullable inspectionItemCode __attribute__((swift_name("inspectionItemCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="inspectionStatusCode")
*/
@property NSString * _Nullable inspectionStatusCode __attribute__((swift_name("inspectionStatusCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="inspectionStatusName")
*/
@property NSString * _Nullable inspectionStatusName __attribute__((swift_name("inspectionStatusName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="iptn_EXPL")
*/
@property NSString * _Nullable iptn_EXPL __attribute__((swift_name("iptn_EXPL")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="packId")
*/
@property NSString * _Nullable packId __attribute__((swift_name("packId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="packTypeCode")
*/
@property NSString * _Nullable packTypeCode __attribute__((swift_name("packTypeCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reportDate")
*/
@property NSString * _Nullable reportDate __attribute__((swift_name("reportDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="spcm_PTHL_NO")
*/
@property NSString * _Nullable spcm_PTHL_NO __attribute__((swift_name("spcm_PTHL_NO")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="zfpurl")
*/
@property NSString * _Nullable zfpurl __attribute__((swift_name("zfpurl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="zfpurlweb")
*/
@property NSString * _Nullable zfpurlweb __attribute__((swift_name("zfpurlweb")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RadiologyItem.Companion")))
@interface MDSRadiologyItemCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSRadiologyItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RefillMedicationItem")))
@interface MDSRefillMedicationItem : MDSBase
- (instancetype)initWithEnglishMessage:(NSString * _Nullable)englishMessage arabicMessage:(NSString * _Nullable)arabicMessage hspiTpCd:(NSString * _Nullable)hspiTpCd th3UsgExpl:(NSString * _Nullable)th3UsgExpl amdDsgCnte:(NSString * _Nullable)amdDsgCnte ordNm:(NSString * _Nullable)ordNm th1UsgExpl:(NSString * _Nullable)th1UsgExpl ordDuration:(NSString * _Nullable)ordDuration ptNm:(NSString * _Nullable)ptNm ordDt:(NSString * _Nullable)ordDt lclPtNm:(NSString * _Nullable)lclPtNm hspTpCd:(NSString * _Nullable)hspTpCd tkmdGuidAmdDsgCnte:(NSString * _Nullable)tkmdGuidAmdDsgCnte lclAmdDsgCnte:(NSString * _Nullable)lclAmdDsgCnte hspNm:(NSString * _Nullable)hspNm dateHijri:(NSString * _Nullable)dateHijri lclHspNm:(NSString * _Nullable)lclHspNm ptNo:(NSString * _Nullable)ptNo connOrdId:(NSString * _Nullable)connOrdId totalDys:(NSString * _Nullable)totalDys tkmdGuidOrdNm:(NSString * _Nullable)tkmdGuidOrdNm engMdprNm:(NSString * _Nullable)engMdprNm korMdprNm:(NSString * _Nullable)korMdprNm prpdNotm:(NSString * _Nullable)prpdNotm ordCd:(NSString * _Nullable)ordCd kpemMdprNm:(NSString * _Nullable)kpemMdprNm ordId:(NSString * _Nullable)ordId __attribute__((swift_name("init(englishMessage:arabicMessage:hspiTpCd:th3UsgExpl:amdDsgCnte:ordNm:th1UsgExpl:ordDuration:ptNm:ordDt:lclPtNm:hspTpCd:tkmdGuidAmdDsgCnte:lclAmdDsgCnte:hspNm:dateHijri:lclHspNm:ptNo:connOrdId:totalDys:tkmdGuidOrdNm:engMdprNm:korMdprNm:prpdNotm:ordCd:kpemMdprNm:ordId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSRefillMedicationItemCompanion *companion __attribute__((swift_name("companion")));
- (MDSRefillMedicationItem *)doCopyEnglishMessage:(NSString * _Nullable)englishMessage arabicMessage:(NSString * _Nullable)arabicMessage hspiTpCd:(NSString * _Nullable)hspiTpCd th3UsgExpl:(NSString * _Nullable)th3UsgExpl amdDsgCnte:(NSString * _Nullable)amdDsgCnte ordNm:(NSString * _Nullable)ordNm th1UsgExpl:(NSString * _Nullable)th1UsgExpl ordDuration:(NSString * _Nullable)ordDuration ptNm:(NSString * _Nullable)ptNm ordDt:(NSString * _Nullable)ordDt lclPtNm:(NSString * _Nullable)lclPtNm hspTpCd:(NSString * _Nullable)hspTpCd tkmdGuidAmdDsgCnte:(NSString * _Nullable)tkmdGuidAmdDsgCnte lclAmdDsgCnte:(NSString * _Nullable)lclAmdDsgCnte hspNm:(NSString * _Nullable)hspNm dateHijri:(NSString * _Nullable)dateHijri lclHspNm:(NSString * _Nullable)lclHspNm ptNo:(NSString * _Nullable)ptNo connOrdId:(NSString * _Nullable)connOrdId totalDys:(NSString * _Nullable)totalDys tkmdGuidOrdNm:(NSString * _Nullable)tkmdGuidOrdNm engMdprNm:(NSString * _Nullable)engMdprNm korMdprNm:(NSString * _Nullable)korMdprNm prpdNotm:(NSString * _Nullable)prpdNotm ordCd:(NSString * _Nullable)ordCd kpemMdprNm:(NSString * _Nullable)kpemMdprNm ordId:(NSString * _Nullable)ordId __attribute__((swift_name("doCopy(englishMessage:arabicMessage:hspiTpCd:th3UsgExpl:amdDsgCnte:ordNm:th1UsgExpl:ordDuration:ptNm:ordDt:lclPtNm:hspTpCd:tkmdGuidAmdDsgCnte:lclAmdDsgCnte:hspNm:dateHijri:lclHspNm:ptNo:connOrdId:totalDys:tkmdGuidOrdNm:engMdprNm:korMdprNm:prpdNotm:ordCd:kpemMdprNm:ordId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="amd_DSG_CNTE")
*/
@property NSString * _Nullable amdDsgCnte __attribute__((swift_name("amdDsgCnte")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicMessage")
*/
@property NSString * _Nullable arabicMessage __attribute__((swift_name("arabicMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="conn_ORD_ID")
*/
@property NSString * _Nullable connOrdId __attribute__((swift_name("connOrdId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date_HIJRI")
*/
@property NSString * _Nullable dateHijri __attribute__((swift_name("dateHijri")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="eng_MDPR_NM")
*/
@property NSString * _Nullable engMdprNm __attribute__((swift_name("engMdprNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishMessage")
*/
@property NSString * _Nullable englishMessage __attribute__((swift_name("englishMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hsp_NM")
*/
@property NSString * _Nullable hspNm __attribute__((swift_name("hspNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hsp_TP_CD")
*/
@property NSString * _Nullable hspTpCd __attribute__((swift_name("hspTpCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hspi_TP_CD")
*/
@property NSString * _Nullable hspiTpCd __attribute__((swift_name("hspiTpCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="kor_MDPR_NM")
*/
@property NSString * _Nullable korMdprNm __attribute__((swift_name("korMdprNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="kpem_MDPR_NM")
*/
@property NSString * _Nullable kpemMdprNm __attribute__((swift_name("kpemMdprNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lcl_AMD_DSG_CNTE")
*/
@property NSString * _Nullable lclAmdDsgCnte __attribute__((swift_name("lclAmdDsgCnte")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lcl_HSP_NM")
*/
@property NSString * _Nullable lclHspNm __attribute__((swift_name("lclHspNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lcl_PT_NM")
*/
@property NSString * _Nullable lclPtNm __attribute__((swift_name("lclPtNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ord_CD")
*/
@property NSString * _Nullable ordCd __attribute__((swift_name("ordCd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ord_DT")
*/
@property NSString * _Nullable ordDt __attribute__((swift_name("ordDt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ord_DURATION")
*/
@property NSString * _Nullable ordDuration __attribute__((swift_name("ordDuration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ord_ID")
*/
@property NSString * _Nullable ordId __attribute__((swift_name("ordId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ord_NM")
*/
@property NSString * _Nullable ordNm __attribute__((swift_name("ordNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="prpd_NOTM")
*/
@property NSString * _Nullable prpdNotm __attribute__((swift_name("prpdNotm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pt_NM")
*/
@property NSString * _Nullable ptNm __attribute__((swift_name("ptNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pt_NO")
*/
@property NSString * _Nullable ptNo __attribute__((swift_name("ptNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="th1_USG_EXPL")
*/
@property NSString * _Nullable th1UsgExpl __attribute__((swift_name("th1UsgExpl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="th3_USG_EXPL")
*/
@property NSString * _Nullable th3UsgExpl __attribute__((swift_name("th3UsgExpl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tkmd_GUID_AMD_DSG_CNTE")
*/
@property NSString * _Nullable tkmdGuidAmdDsgCnte __attribute__((swift_name("tkmdGuidAmdDsgCnte")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tkmd_GUID_ORD_NM")
*/
@property NSString * _Nullable tkmdGuidOrdNm __attribute__((swift_name("tkmdGuidOrdNm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="total_DYS")
*/
@property NSString * _Nullable totalDys __attribute__((swift_name("totalDys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RefillMedicationItem.Companion")))
@interface MDSRefillMedicationItemCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSRefillMedicationItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionResponse")))
@interface MDSRegionResponse : MDSBase
- (instancetype)initWithRegionCode:(NSString * _Nullable)regionCode regionNameEn:(NSString * _Nullable)regionNameEn regionNameAr:(NSString * _Nullable)regionNameAr __attribute__((swift_name("init(regionCode:regionNameEn:regionNameAr:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSRegionResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSRegionResponse *)doCopyRegionCode:(NSString * _Nullable)regionCode regionNameEn:(NSString * _Nullable)regionNameEn regionNameAr:(NSString * _Nullable)regionNameAr __attribute__((swift_name("doCopy(regionCode:regionNameEn:regionNameAr:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable regionCode __attribute__((swift_name("regionCode")));
@property (readonly) NSString * _Nullable regionNameAr __attribute__((swift_name("regionNameAr")));
@property (readonly) NSString * _Nullable regionNameEn __attribute__((swift_name("regionNameEn")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionResponse.Companion")))
@interface MDSRegionResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSRegionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationStatus")))
@interface MDSRegistrationStatus : MDSBase
- (instancetype)initWithMessage:(NSString * _Nullable)message alertFlag:(NSString * _Nullable)alertFlag showSurveyFlag:(NSString * _Nullable)showSurveyFlag url:(NSString * _Nullable)url __attribute__((swift_name("init(message:alertFlag:showSurveyFlag:url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSRegistrationStatusCompanion *companion __attribute__((swift_name("companion")));
- (MDSRegistrationStatus *)doCopyMessage:(NSString * _Nullable)message alertFlag:(NSString * _Nullable)alertFlag showSurveyFlag:(NSString * _Nullable)showSurveyFlag url:(NSString * _Nullable)url __attribute__((swift_name("doCopy(message:alertFlag:showSurveyFlag:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="alertFlag")
*/
@property (readonly) NSString * _Nullable alertFlag __attribute__((swift_name("alertFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="showSurveyFlag")
*/
@property (readonly) NSString * _Nullable showSurveyFlag __attribute__((swift_name("showSurveyFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationStatus.Companion")))
@interface MDSRegistrationStatusCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSRegistrationStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReportReason")))
@interface MDSReportReason : MDSBase
- (instancetype)initWithReasonId:(NSString * _Nullable)reasonId arabicReason:(NSString * _Nullable)arabicReason englishReason:(NSString * _Nullable)englishReason reportId:(NSString * _Nullable)reportId __attribute__((swift_name("init(reasonId:arabicReason:englishReason:reportId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSReportReasonCompanion *companion __attribute__((swift_name("companion")));
- (MDSReportReason *)doCopyReasonId:(NSString * _Nullable)reasonId arabicReason:(NSString * _Nullable)arabicReason englishReason:(NSString * _Nullable)englishReason reportId:(NSString * _Nullable)reportId __attribute__((swift_name("doCopy(reasonId:arabicReason:englishReason:reportId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicReason")
*/
@property (readonly) NSString * _Nullable arabicReason __attribute__((swift_name("arabicReason")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishReason")
*/
@property (readonly) NSString * _Nullable englishReason __attribute__((swift_name("englishReason")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reasonId")
*/
@property (readonly) NSString * _Nullable reasonId __attribute__((swift_name("reasonId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reportId")
*/
@property (readonly) NSString * _Nullable reportId __attribute__((swift_name("reportId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReportReason.Companion")))
@interface MDSReportReasonCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSReportReasonCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestStatusResults")))
@interface MDSRequestStatusResults : MDSBase
- (instancetype)initWithRecSTS_CD:(NSString * _Nullable)recSTS_CD recDTM:(NSString * _Nullable)recDTM recID:(MDSInt * _Nullable)recID dateHIJRI:(NSString * _Nullable)dateHIJRI reportENG:(NSString * _Nullable)reportENG reasonAR:(NSString * _Nullable)reasonAR reasonEN:(NSString * _Nullable)reasonEN visitDATE:(NSString * _Nullable)visitDATE reportAR:(NSString * _Nullable)reportAR mdfm_CLS_DTL_CD:(NSString * _Nullable)mdfm_CLS_DTL_CD dateHIJRI_REC_DTM:(NSString * _Nullable)dateHIJRI_REC_DTM rej_CNTE:(NSString * _Nullable)rej_CNTE __attribute__((swift_name("init(recSTS_CD:recDTM:recID:dateHIJRI:reportENG:reasonAR:reasonEN:visitDATE:reportAR:mdfm_CLS_DTL_CD:dateHIJRI_REC_DTM:rej_CNTE:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSRequestStatusResultsCompanion *companion __attribute__((swift_name("companion")));
- (MDSRequestStatusResults *)doCopyRecSTS_CD:(NSString * _Nullable)recSTS_CD recDTM:(NSString * _Nullable)recDTM recID:(MDSInt * _Nullable)recID dateHIJRI:(NSString * _Nullable)dateHIJRI reportENG:(NSString * _Nullable)reportENG reasonAR:(NSString * _Nullable)reasonAR reasonEN:(NSString * _Nullable)reasonEN visitDATE:(NSString * _Nullable)visitDATE reportAR:(NSString * _Nullable)reportAR mdfm_CLS_DTL_CD:(NSString * _Nullable)mdfm_CLS_DTL_CD dateHIJRI_REC_DTM:(NSString * _Nullable)dateHIJRI_REC_DTM rej_CNTE:(NSString * _Nullable)rej_CNTE __attribute__((swift_name("doCopy(recSTS_CD:recDTM:recID:dateHIJRI:reportENG:reasonAR:reasonEN:visitDATE:reportAR:mdfm_CLS_DTL_CD:dateHIJRI_REC_DTM:rej_CNTE:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date_HIJRI")
*/
@property (readonly) NSString * _Nullable dateHIJRI __attribute__((swift_name("dateHIJRI")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date_HIJRI_REC_DTM")
*/
@property (readonly) NSString * _Nullable dateHIJRI_REC_DTM __attribute__((swift_name("dateHIJRI_REC_DTM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mdfm_CLS_DTL_CD")
*/
@property (readonly) NSString * _Nullable mdfm_CLS_DTL_CD __attribute__((swift_name("mdfm_CLS_DTL_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reason_AR")
*/
@property (readonly) NSString * _Nullable reasonAR __attribute__((swift_name("reasonAR")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reason_EN")
*/
@property (readonly) NSString * _Nullable reasonEN __attribute__((swift_name("reasonEN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rec_DTM")
*/
@property (readonly) NSString * _Nullable recDTM __attribute__((swift_name("recDTM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rec_ID")
*/
@property (readonly) MDSInt * _Nullable recID __attribute__((swift_name("recID")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rec_STS_CD")
*/
@property (readonly) NSString * _Nullable recSTS_CD __attribute__((swift_name("recSTS_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rej_CNTE")
*/
@property (readonly) NSString * _Nullable rej_CNTE __attribute__((swift_name("rej_CNTE")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="report_AR")
*/
@property (readonly) NSString * _Nullable reportAR __attribute__((swift_name("reportAR")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="report_ENG")
*/
@property (readonly) NSString * _Nullable reportENG __attribute__((swift_name("reportENG")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="visit_DATE")
*/
@property (readonly) NSString * _Nullable visitDATE __attribute__((swift_name("visitDATE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestStatusResults.Companion")))
@interface MDSRequestStatusResultsCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSRequestStatusResultsCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Response")))
@interface MDSResponse<T> : MDSBase
- (instancetype)initWithStatusCode:(int32_t)statusCode statusDescription:(NSString * _Nullable)statusDescription data:(T _Nullable)data __attribute__((swift_name("init(statusCode:statusDescription:data:)"))) __attribute__((objc_designated_initializer));
- (MDSResponse<T> *)doCopyStatusCode:(int32_t)statusCode statusDescription:(NSString * _Nullable)statusDescription data:(T _Nullable)data __attribute__((swift_name("doCopy(statusCode:statusDescription:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property T _Nullable data __attribute__((swift_name("data")));
@property int32_t statusCode __attribute__((swift_name("statusCode")));
@property NSString * _Nullable statusDescription __attribute__((swift_name("statusDescription")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseIOS")))
@interface MDSResponseIOS : MDSBase
- (instancetype)initWithStatusCode:(int32_t)statusCode statusDescription:(NSString * _Nullable)statusDescription data:(id _Nullable)data __attribute__((swift_name("init(statusCode:statusDescription:data:)"))) __attribute__((objc_designated_initializer));
- (MDSResponseIOS *)doCopyStatusCode:(int32_t)statusCode statusDescription:(NSString * _Nullable)statusDescription data:(id _Nullable)data __attribute__((swift_name("doCopy(statusCode:statusDescription:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property id _Nullable data __attribute__((swift_name("data")));
@property int32_t statusCode __attribute__((swift_name("statusCode")));
@property NSString * _Nullable statusDescription __attribute__((swift_name("statusDescription")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Result")))
@interface MDSResult : MDSBase
- (instancetype)initWithArabicFeedbackType:(NSString * _Nullable)arabicFeedbackType compLOCATION:(NSString * _Nullable)compLOCATION deleted:(MDSBoolean * _Nullable)deleted email:(NSString * _Nullable)email feedbackDate:(NSString * _Nullable)feedbackDate feedbackId:(MDSInt * _Nullable)feedbackId feedbackMessage:(NSString * _Nullable)feedbackMessage feedbackType:(NSString * _Nullable)feedbackType hijriDate:(NSString * _Nullable)hijriDate locationOTHER:(NSString * _Nullable)locationOTHER applicationPageName:(NSString * _Nullable)applicationPageName __attribute__((swift_name("init(arabicFeedbackType:compLOCATION:deleted:email:feedbackDate:feedbackId:feedbackMessage:feedbackType:hijriDate:locationOTHER:applicationPageName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSResultCompanion *companion __attribute__((swift_name("companion")));
- (MDSResult *)doCopyArabicFeedbackType:(NSString * _Nullable)arabicFeedbackType compLOCATION:(NSString * _Nullable)compLOCATION deleted:(MDSBoolean * _Nullable)deleted email:(NSString * _Nullable)email feedbackDate:(NSString * _Nullable)feedbackDate feedbackId:(MDSInt * _Nullable)feedbackId feedbackMessage:(NSString * _Nullable)feedbackMessage feedbackType:(NSString * _Nullable)feedbackType hijriDate:(NSString * _Nullable)hijriDate locationOTHER:(NSString * _Nullable)locationOTHER applicationPageName:(NSString * _Nullable)applicationPageName __attribute__((swift_name("doCopy(arabicFeedbackType:compLOCATION:deleted:email:feedbackDate:feedbackId:feedbackMessage:feedbackType:hijriDate:locationOTHER:applicationPageName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="applicationPageName")
*/
@property NSString * _Nullable applicationPageName __attribute__((swift_name("applicationPageName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicFeedbackType")
*/
@property NSString * _Nullable arabicFeedbackType __attribute__((swift_name("arabicFeedbackType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="comp_LOCATION")
*/
@property NSString * _Nullable compLOCATION __attribute__((swift_name("compLOCATION")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deleted")
*/
@property MDSBoolean * _Nullable deleted __attribute__((swift_name("deleted")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="feedbackDate")
*/
@property NSString * _Nullable feedbackDate __attribute__((swift_name("feedbackDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="feedbackId")
*/
@property MDSInt * _Nullable feedbackId __attribute__((swift_name("feedbackId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="feedbackMessage")
*/
@property NSString * _Nullable feedbackMessage __attribute__((swift_name("feedbackMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="feedbackType")
*/
@property NSString * _Nullable feedbackType __attribute__((swift_name("feedbackType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hijriDate")
*/
@property NSString * _Nullable hijriDate __attribute__((swift_name("hijriDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="location_OTHER")
*/
@property NSString * _Nullable locationOTHER __attribute__((swift_name("locationOTHER")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Result.Companion")))
@interface MDSResultCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSResultCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Review")))
@interface MDSReview : MDSBase
- (instancetype)initWithMessage:(NSString * _Nullable)message arabicService:(NSString * _Nullable)arabicService englishService:(NSString * _Nullable)englishService visitDate:(NSString * _Nullable)visitDate submitDate:(NSString * _Nullable)submitDate servicesEvaluation:(MDSInt * _Nullable)servicesEvaluation patientId:(NSString * _Nullable)patientId regionCode:(NSString * _Nullable)regionCode visitHijriDate:(NSString * _Nullable)visitHijriDate __attribute__((swift_name("init(message:arabicService:englishService:visitDate:submitDate:servicesEvaluation:patientId:regionCode:visitHijriDate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSReviewCompanion *companion __attribute__((swift_name("companion")));
- (MDSReview *)doCopyMessage:(NSString * _Nullable)message arabicService:(NSString * _Nullable)arabicService englishService:(NSString * _Nullable)englishService visitDate:(NSString * _Nullable)visitDate submitDate:(NSString * _Nullable)submitDate servicesEvaluation:(MDSInt * _Nullable)servicesEvaluation patientId:(NSString * _Nullable)patientId regionCode:(NSString * _Nullable)regionCode visitHijriDate:(NSString * _Nullable)visitHijriDate __attribute__((swift_name("doCopy(message:arabicService:englishService:visitDate:submitDate:servicesEvaluation:patientId:regionCode:visitHijriDate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable arabicService __attribute__((swift_name("arabicService")));
@property (readonly) NSString * _Nullable englishService __attribute__((swift_name("englishService")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) NSString * _Nullable patientId __attribute__((swift_name("patientId")));
@property (readonly) NSString * _Nullable regionCode __attribute__((swift_name("regionCode")));
@property (readonly) MDSInt * _Nullable servicesEvaluation __attribute__((swift_name("servicesEvaluation")));
@property (readonly) NSString * _Nullable submitDate __attribute__((swift_name("submitDate")));
@property (readonly) NSString * _Nullable visitDate __attribute__((swift_name("visitDate")));
@property (readonly) NSString * _Nullable visitHijriDate __attribute__((swift_name("visitHijriDate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Review.Companion")))
@interface MDSReviewCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSReviewCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SANGInfo")))
@interface MDSSANGInfo : MDSBase
- (instancetype)initWithMessage:(NSString * _Nullable)message sangFlag:(MDSBoolean * _Nullable)sangFlag nationalityDescription:(NSString * _Nullable)nationalityDescription mobile:(NSString * _Nullable)mobile sangRegionCode:(NSString * _Nullable)sangRegionCode nationalId:(NSString * _Nullable)nationalId generalNumber:(NSString * _Nullable)generalNumber firstName:(NSString * _Nullable)firstName secondName:(NSString * _Nullable)secondName thirdName:(NSString * _Nullable)thirdName familyName:(NSString * _Nullable)familyName birthDate:(NSString * _Nullable)birthDate genderType:(NSString * _Nullable)genderType nationality:(NSString * _Nullable)nationality maritalStatus:(NSString * _Nullable)maritalStatus jobType:(NSString * _Nullable)jobType ertDescription:(NSString * _Nullable)ertDescription oudCurrentDesc:(NSString * _Nullable)oudCurrentDesc quarter:(NSString * _Nullable)quarter city:(NSString * _Nullable)city oudCity:(NSString * _Nullable)oudCity telephoneWork:(NSString * _Nullable)telephoneWork telephoneHome:(NSString * _Nullable)telephoneHome firstRelatedFullName:(NSString * _Nullable)firstRelatedFullName firstRelatedMobile:(NSString * _Nullable)firstRelatedMobile firstRelatedRelationship:(NSString * _Nullable)firstRelatedRelationship secondRelatedFullName:(NSString * _Nullable)secondRelatedFullName secondRelatedMobile:(NSString * _Nullable)secondRelatedMobile secondRelatedRelationship:(NSString * _Nullable)secondRelatedRelationship eregion:(NSString * _Nullable)eregion __attribute__((swift_name("init(message:sangFlag:nationalityDescription:mobile:sangRegionCode:nationalId:generalNumber:firstName:secondName:thirdName:familyName:birthDate:genderType:nationality:maritalStatus:jobType:ertDescription:oudCurrentDesc:quarter:city:oudCity:telephoneWork:telephoneHome:firstRelatedFullName:firstRelatedMobile:firstRelatedRelationship:secondRelatedFullName:secondRelatedMobile:secondRelatedRelationship:eregion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSSANGInfoCompanion *companion __attribute__((swift_name("companion")));
- (MDSSANGInfo *)doCopyMessage:(NSString * _Nullable)message sangFlag:(MDSBoolean * _Nullable)sangFlag nationalityDescription:(NSString * _Nullable)nationalityDescription mobile:(NSString * _Nullable)mobile sangRegionCode:(NSString * _Nullable)sangRegionCode nationalId:(NSString * _Nullable)nationalId generalNumber:(NSString * _Nullable)generalNumber firstName:(NSString * _Nullable)firstName secondName:(NSString * _Nullable)secondName thirdName:(NSString * _Nullable)thirdName familyName:(NSString * _Nullable)familyName birthDate:(NSString * _Nullable)birthDate genderType:(NSString * _Nullable)genderType nationality:(NSString * _Nullable)nationality maritalStatus:(NSString * _Nullable)maritalStatus jobType:(NSString * _Nullable)jobType ertDescription:(NSString * _Nullable)ertDescription oudCurrentDesc:(NSString * _Nullable)oudCurrentDesc quarter:(NSString * _Nullable)quarter city:(NSString * _Nullable)city oudCity:(NSString * _Nullable)oudCity telephoneWork:(NSString * _Nullable)telephoneWork telephoneHome:(NSString * _Nullable)telephoneHome firstRelatedFullName:(NSString * _Nullable)firstRelatedFullName firstRelatedMobile:(NSString * _Nullable)firstRelatedMobile firstRelatedRelationship:(NSString * _Nullable)firstRelatedRelationship secondRelatedFullName:(NSString * _Nullable)secondRelatedFullName secondRelatedMobile:(NSString * _Nullable)secondRelatedMobile secondRelatedRelationship:(NSString * _Nullable)secondRelatedRelationship eregion:(NSString * _Nullable)eregion __attribute__((swift_name("doCopy(message:sangFlag:nationalityDescription:mobile:sangRegionCode:nationalId:generalNumber:firstName:secondName:thirdName:familyName:birthDate:genderType:nationality:maritalStatus:jobType:ertDescription:oudCurrentDesc:quarter:city:oudCity:telephoneWork:telephoneHome:firstRelatedFullName:firstRelatedMobile:firstRelatedRelationship:secondRelatedFullName:secondRelatedMobile:secondRelatedRelationship:eregion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="birthDate")
*/
@property (readonly) NSString * _Nullable birthDate __attribute__((swift_name("birthDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="city")
*/
@property (readonly) NSString * _Nullable city __attribute__((swift_name("city")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="eregion")
*/
@property (readonly) NSString * _Nullable eregion __attribute__((swift_name("eregion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ertDescription")
*/
@property (readonly) NSString * _Nullable ertDescription __attribute__((swift_name("ertDescription")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="familyName")
*/
@property (readonly) NSString * _Nullable familyName __attribute__((swift_name("familyName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="firstName")
*/
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="firstRelatedFullName")
*/
@property (readonly) NSString * _Nullable firstRelatedFullName __attribute__((swift_name("firstRelatedFullName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="firstRelatedMobile")
*/
@property (readonly) NSString * _Nullable firstRelatedMobile __attribute__((swift_name("firstRelatedMobile")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="firstRelatedRelationship")
*/
@property (readonly) NSString * _Nullable firstRelatedRelationship __attribute__((swift_name("firstRelatedRelationship")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="genderType")
*/
@property (readonly) NSString * _Nullable genderType __attribute__((swift_name("genderType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="generalNumber")
*/
@property (readonly) NSString * _Nullable generalNumber __attribute__((swift_name("generalNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="jobType")
*/
@property (readonly) NSString * _Nullable jobType __attribute__((swift_name("jobType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="maritalStatus")
*/
@property (readonly) NSString * _Nullable maritalStatus __attribute__((swift_name("maritalStatus")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mobile")
*/
@property (readonly) NSString * _Nullable mobile __attribute__((swift_name("mobile")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nationalId")
*/
@property (readonly) NSString * _Nullable nationalId __attribute__((swift_name("nationalId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nationality")
*/
@property (readonly) NSString * _Nullable nationality __attribute__((swift_name("nationality")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nationalityDescription")
*/
@property (readonly) NSString * _Nullable nationalityDescription __attribute__((swift_name("nationalityDescription")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="oudCity")
*/
@property (readonly) NSString * _Nullable oudCity __attribute__((swift_name("oudCity")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="oudCurrentDesc")
*/
@property (readonly) NSString * _Nullable oudCurrentDesc __attribute__((swift_name("oudCurrentDesc")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="quarter")
*/
@property (readonly) NSString * _Nullable quarter __attribute__((swift_name("quarter")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sangFlag")
*/
@property (readonly) MDSBoolean * _Nullable sangFlag __attribute__((swift_name("sangFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sangRegionCode")
*/
@property (readonly) NSString * _Nullable sangRegionCode __attribute__((swift_name("sangRegionCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="secondName")
*/
@property (readonly) NSString * _Nullable secondName __attribute__((swift_name("secondName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="secondRelatedFullName")
*/
@property (readonly) NSString * _Nullable secondRelatedFullName __attribute__((swift_name("secondRelatedFullName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="secondRelatedMobile")
*/
@property (readonly) NSString * _Nullable secondRelatedMobile __attribute__((swift_name("secondRelatedMobile")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="secondRelatedRelationship")
*/
@property (readonly) NSString * _Nullable secondRelatedRelationship __attribute__((swift_name("secondRelatedRelationship")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="telephoneHome")
*/
@property (readonly) NSString * _Nullable telephoneHome __attribute__((swift_name("telephoneHome")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="telephoneWork")
*/
@property (readonly) NSString * _Nullable telephoneWork __attribute__((swift_name("telephoneWork")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thirdName")
*/
@property (readonly) NSString * _Nullable thirdName __attribute__((swift_name("thirdName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SANGInfo.Companion")))
@interface MDSSANGInfoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSSANGInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Slot")))
@interface MDSSlot : MDSBase
- (instancetype)initWithSlot24:(NSString * _Nullable)slot24 slot12:(NSString * _Nullable)slot12 __attribute__((swift_name("init(slot24:slot12:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSSlotCompanion *companion __attribute__((swift_name("companion")));
- (MDSSlot *)doCopySlot24:(NSString * _Nullable)slot24 slot12:(NSString * _Nullable)slot12 __attribute__((swift_name("doCopy(slot24:slot12:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable slot12 __attribute__((swift_name("slot12")));
@property (readonly) NSString * _Nullable slot24 __attribute__((swift_name("slot24")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Slot.Companion")))
@interface MDSSlotCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSSlotCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpecialClinicItem")))
@interface MDSSpecialClinicItem : MDSTestResultRoot
- (instancetype)initWithReadingNumber:(NSString * _Nullable)readingNumber reportDate:(NSString * _Nullable)reportDate testItemName:(NSString * _Nullable)testItemName conclusion:(NSString * _Nullable)conclusion executionDate:(NSString * _Nullable)executionDate testStatusCode:(NSString * _Nullable)testStatusCode testStatusName:(NSString * _Nullable)testStatusName hospitalCode:(NSString * _Nullable)hospitalCode image:(NSString * _Nullable)image numberOfReadingSheets:(NSString * _Nullable)numberOfReadingSheets readingPaperNumber:(NSString * _Nullable)readingPaperNumber noteUrl:(NSString * _Nullable)noteUrl inspectionItemCode:(NSString * _Nullable)inspectionItemCode orderDate:(NSString * _Nullable)orderDate pactId:(NSString * _Nullable)pactId hijriDate:(NSString * _Nullable)hijriDate save_STF_NO:(NSString * _Nullable)save_STF_NO rslt_URL_ADDR:(NSString * _Nullable)rslt_URL_ADDR save_STF_NM:(NSString * _Nullable)save_STF_NM pacs_IMG_IPTN_YN:(NSString * _Nullable)pacs_IMG_IPTN_YN report:(NSString * _Nullable)report report_YN:(NSString * _Nullable)report_YN __attribute__((swift_name("init(readingNumber:reportDate:testItemName:conclusion:executionDate:testStatusCode:testStatusName:hospitalCode:image:numberOfReadingSheets:readingPaperNumber:noteUrl:inspectionItemCode:orderDate:pactId:hijriDate:save_STF_NO:rslt_URL_ADDR:save_STF_NM:pacs_IMG_IPTN_YN:report:report_YN:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MDSSpecialClinicItemCompanion *companion __attribute__((swift_name("companion")));
- (MDSSpecialClinicItem *)doCopyReadingNumber:(NSString * _Nullable)readingNumber reportDate:(NSString * _Nullable)reportDate testItemName:(NSString * _Nullable)testItemName conclusion:(NSString * _Nullable)conclusion executionDate:(NSString * _Nullable)executionDate testStatusCode:(NSString * _Nullable)testStatusCode testStatusName:(NSString * _Nullable)testStatusName hospitalCode:(NSString * _Nullable)hospitalCode image:(NSString * _Nullable)image numberOfReadingSheets:(NSString * _Nullable)numberOfReadingSheets readingPaperNumber:(NSString * _Nullable)readingPaperNumber noteUrl:(NSString * _Nullable)noteUrl inspectionItemCode:(NSString * _Nullable)inspectionItemCode orderDate:(NSString * _Nullable)orderDate pactId:(NSString * _Nullable)pactId hijriDate:(NSString * _Nullable)hijriDate save_STF_NO:(NSString * _Nullable)save_STF_NO rslt_URL_ADDR:(NSString * _Nullable)rslt_URL_ADDR save_STF_NM:(NSString * _Nullable)save_STF_NM pacs_IMG_IPTN_YN:(NSString * _Nullable)pacs_IMG_IPTN_YN report:(NSString * _Nullable)report report_YN:(NSString * _Nullable)report_YN __attribute__((swift_name("doCopy(readingNumber:reportDate:testItemName:conclusion:executionDate:testStatusCode:testStatusName:hospitalCode:image:numberOfReadingSheets:readingPaperNumber:noteUrl:inspectionItemCode:orderDate:pactId:hijriDate:save_STF_NO:rslt_URL_ADDR:save_STF_NM:pacs_IMG_IPTN_YN:report:report_YN:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString *)getHospitalCode1 __attribute__((swift_name("getHospitalCode1()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="conclusion")
*/
@property NSString * _Nullable conclusion __attribute__((swift_name("conclusion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="executionDate")
*/
@property NSString * _Nullable executionDate __attribute__((swift_name("executionDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hijriDate")
*/
@property NSString * _Nullable hijriDate __attribute__((swift_name("hijriDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image")
*/
@property NSString * _Nullable image __attribute__((swift_name("image")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="inspectionItemCode")
*/
@property NSString * _Nullable inspectionItemCode __attribute__((swift_name("inspectionItemCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="noteUrl")
*/
@property NSString * _Nullable noteUrl __attribute__((swift_name("noteUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="numberOfReadingSheets")
*/
@property NSString * _Nullable numberOfReadingSheets __attribute__((swift_name("numberOfReadingSheets")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderDate")
*/
@property NSString * _Nullable orderDate __attribute__((swift_name("orderDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pacs_IMG_IPTN_YN")
*/
@property NSString * _Nullable pacs_IMG_IPTN_YN __attribute__((swift_name("pacs_IMG_IPTN_YN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pactId")
*/
@property NSString * _Nullable pactId __attribute__((swift_name("pactId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="readingNumber")
*/
@property NSString * _Nullable readingNumber __attribute__((swift_name("readingNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="readingPaperNumber")
*/
@property NSString * _Nullable readingPaperNumber __attribute__((swift_name("readingPaperNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="report")
*/
@property NSString * _Nullable report __attribute__((swift_name("report")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reportDate")
*/
@property NSString * _Nullable reportDate __attribute__((swift_name("reportDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="report_YN")
*/
@property NSString * _Nullable report_YN __attribute__((swift_name("report_YN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rslt_URL_ADDR")
*/
@property NSString * _Nullable rslt_URL_ADDR __attribute__((swift_name("rslt_URL_ADDR")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="save_STF_NM")
*/
@property NSString * _Nullable save_STF_NM __attribute__((swift_name("save_STF_NM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="save_STF_NO")
*/
@property NSString * _Nullable save_STF_NO __attribute__((swift_name("save_STF_NO")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="testItemName")
*/
@property NSString * _Nullable testItemName __attribute__((swift_name("testItemName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="testStatusCode")
*/
@property NSString * _Nullable testStatusCode __attribute__((swift_name("testStatusCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="testStatusName")
*/
@property NSString * _Nullable testStatusName __attribute__((swift_name("testStatusName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpecialClinicItem.Companion")))
@interface MDSSpecialClinicItemCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSSpecialClinicItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusResponse")))
@interface MDSStatusResponse : MDSBase
- (instancetype)initWithStatus:(NSString * _Nullable)status arabicMessage:(NSString * _Nullable)arabicMessage englishMessage:(NSString * _Nullable)englishMessage invalidMessage:(NSString * _Nullable)invalidMessage __attribute__((swift_name("init(status:arabicMessage:englishMessage:invalidMessage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSStatusResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSStatusResponse *)doCopyStatus:(NSString * _Nullable)status arabicMessage:(NSString * _Nullable)arabicMessage englishMessage:(NSString * _Nullable)englishMessage invalidMessage:(NSString * _Nullable)invalidMessage __attribute__((swift_name("doCopy(status:arabicMessage:englishMessage:invalidMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable arabicMessage __attribute__((swift_name("arabicMessage")));
@property (readonly) NSString * _Nullable englishMessage __attribute__((swift_name("englishMessage")));
@property (readonly) NSString * _Nullable invalidMessage __attribute__((swift_name("invalidMessage")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusResponse.Companion")))
@interface MDSStatusResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSStatusResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SurveyData")))
@interface MDSSurveyData : MDSBase
- (instancetype)initWithSurvey1:(NSString * _Nullable)survey1 survey2:(NSString * _Nullable)survey2 survey1Note:(MDSBoolean * _Nullable)survey1Note __attribute__((swift_name("init(survey1:survey2:survey1Note:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSSurveyDataCompanion *companion __attribute__((swift_name("companion")));
- (MDSSurveyData *)doCopySurvey1:(NSString * _Nullable)survey1 survey2:(NSString * _Nullable)survey2 survey1Note:(MDSBoolean * _Nullable)survey1Note __attribute__((swift_name("doCopy(survey1:survey2:survey1Note:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="survey1")
*/
@property (readonly) NSString * _Nullable survey1 __attribute__((swift_name("survey1")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="survey1Note")
*/
@property (readonly) MDSBoolean * _Nullable survey1Note __attribute__((swift_name("survey1Note")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="survey2")
*/
@property (readonly) NSString * _Nullable survey2 __attribute__((swift_name("survey2")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SurveyData.Companion")))
@interface MDSSurveyDataCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSSurveyDataCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SurveyServicesResponse")))
@interface MDSSurveyServicesResponse : MDSBase
- (instancetype)initWithId:(int32_t)id englishService:(NSString * _Nullable)englishService arabicService:(NSString * _Nullable)arabicService __attribute__((swift_name("init(id:englishService:arabicService:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSSurveyServicesResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSSurveyServicesResponse *)doCopyId:(int32_t)id englishService:(NSString * _Nullable)englishService arabicService:(NSString * _Nullable)arabicService __attribute__((swift_name("doCopy(id:englishService:arabicService:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable arabicService __attribute__((swift_name("arabicService")));
@property (readonly) NSString * _Nullable englishService __attribute__((swift_name("englishService")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SurveyServicesResponse.Companion")))
@interface MDSSurveyServicesResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSSurveyServicesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeleER")))
@interface MDSTeleER : MDSBase
- (instancetype)initWithMessage:(NSString * _Nullable)message endTime:(NSString * _Nullable)endTime ioErrMsg:(NSString * _Nullable)ioErrMsg strTime:(NSString * _Nullable)strTime ioErrYn:(NSString * _Nullable)ioErrYn showIcon:(NSString * _Nullable)showIcon showAppIcon:(NSString * _Nullable)showAppIcon __attribute__((swift_name("init(message:endTime:ioErrMsg:strTime:ioErrYn:showIcon:showAppIcon:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSTeleERCompanion *companion __attribute__((swift_name("companion")));
- (MDSTeleER *)doCopyMessage:(NSString * _Nullable)message endTime:(NSString * _Nullable)endTime ioErrMsg:(NSString * _Nullable)ioErrMsg strTime:(NSString * _Nullable)strTime ioErrYn:(NSString * _Nullable)ioErrYn showIcon:(NSString * _Nullable)showIcon showAppIcon:(NSString * _Nullable)showAppIcon __attribute__((swift_name("doCopy(message:endTime:ioErrMsg:strTime:ioErrYn:showIcon:showAppIcon:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="end_TIME")
*/
@property (readonly) NSString * _Nullable endTime __attribute__((swift_name("endTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="io_ERRMSG")
*/
@property (readonly) NSString * _Nullable ioErrMsg __attribute__((swift_name("ioErrMsg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="io_ERRYN")
*/
@property (readonly) NSString * _Nullable ioErrYn __attribute__((swift_name("ioErrYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="show_APP_ICON")
*/
@property (readonly) NSString * _Nullable showAppIcon __attribute__((swift_name("showAppIcon")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="show_ICON")
*/
@property (readonly) NSString * _Nullable showIcon __attribute__((swift_name("showIcon")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="str_TIME")
*/
@property (readonly) NSString * _Nullable strTime __attribute__((swift_name("strTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeleER.Companion")))
@interface MDSTeleERCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSTeleERCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestResultRoot.Companion")))
@interface MDSTestResultRootCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSTestResultRootCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MDSKotlinArray<id<MDSKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TipInfo")))
@interface MDSTipInfo : MDSBase
- (instancetype)initWithArabicMessage:(NSString * _Nullable)arabicMessage arabicTipType:(NSString * _Nullable)arabicTipType id:(MDSInt * _Nullable)id message:(NSString * _Nullable)message messageType:(NSString * _Nullable)messageType tipEndedDate:(NSString * _Nullable)tipEndedDate tipType:(NSString * _Nullable)tipType __attribute__((swift_name("init(arabicMessage:arabicTipType:id:message:messageType:tipEndedDate:tipType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSTipInfoCompanion *companion __attribute__((swift_name("companion")));
- (MDSTipInfo *)doCopyArabicMessage:(NSString * _Nullable)arabicMessage arabicTipType:(NSString * _Nullable)arabicTipType id:(MDSInt * _Nullable)id message:(NSString * _Nullable)message messageType:(NSString * _Nullable)messageType tipEndedDate:(NSString * _Nullable)tipEndedDate tipType:(NSString * _Nullable)tipType __attribute__((swift_name("doCopy(arabicMessage:arabicTipType:id:message:messageType:tipEndedDate:tipType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicMessage")
*/
@property NSString * _Nullable arabicMessage __attribute__((swift_name("arabicMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicTipType")
*/
@property NSString * _Nullable arabicTipType __attribute__((swift_name("arabicTipType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property MDSInt * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="messageType")
*/
@property NSString * _Nullable messageType __attribute__((swift_name("messageType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tipEndedDate")
*/
@property NSString * _Nullable tipEndedDate __attribute__((swift_name("tipEndedDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tipType")
*/
@property NSString * _Nullable tipType __attribute__((swift_name("tipType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TipInfo.Companion")))
@interface MDSTipInfoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSTipInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TipInfoResponse")))
@interface MDSTipInfoResponse : MDSBase
- (instancetype)initWithId:(MDSLong * _Nullable)id tipEndedDate:(NSString * _Nullable)tipEndedDate message:(NSString * _Nullable)message arabicMessage:(NSString * _Nullable)arabicMessage messageType:(NSString * _Nullable)messageType tipType:(NSString * _Nullable)tipType __attribute__((swift_name("init(id:tipEndedDate:message:arabicMessage:messageType:tipType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(MDSLong * _Nullable)id tipEndedDate:(NSString * _Nullable)tipEndedDate message:(NSString * _Nullable)message arabicMessage:(NSString * _Nullable)arabicMessage messageType:(NSString * _Nullable)messageType tipType:(NSString * _Nullable)tipType arabicTipType:(NSString * _Nullable)arabicTipType __attribute__((swift_name("init(id:tipEndedDate:message:arabicMessage:messageType:tipType:arabicTipType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSTipInfoResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSTipInfoResponse *)doCopyId:(MDSLong * _Nullable)id tipEndedDate:(NSString * _Nullable)tipEndedDate message:(NSString * _Nullable)message arabicMessage:(NSString * _Nullable)arabicMessage messageType:(NSString * _Nullable)messageType tipType:(NSString * _Nullable)tipType arabicTipType:(NSString * _Nullable)arabicTipType __attribute__((swift_name("doCopy(id:tipEndedDate:message:arabicMessage:messageType:tipType:arabicTipType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable arabicMessage __attribute__((swift_name("arabicMessage")));
@property NSString * _Nullable arabicTipType __attribute__((swift_name("arabicTipType")));
@property MDSLong * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable message __attribute__((swift_name("message")));
@property NSString * _Nullable messageType __attribute__((swift_name("messageType")));
@property NSString * _Nullable tipEndedDate __attribute__((swift_name("tipEndedDate")));
@property NSString * _Nullable tipType __attribute__((swift_name("tipType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TipInfoResponse.Companion")))
@interface MDSTipInfoResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSTipInfoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenResponse")))
@interface MDSTokenResponse : MDSBase
- (instancetype)initWithToken:(NSString * _Nullable)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSTokenResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSTokenResponse *)doCopyToken:(NSString * _Nullable)token __attribute__((swift_name("doCopy(token:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token")
*/
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenResponse.Companion")))
@interface MDSTokenResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSTokenResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateNotBc")))
@interface MDSUpdateNotBc : MDSBase
- (instancetype)initWithApyEndDt:(NSString * _Nullable)apyEndDt elgType:(NSString * _Nullable)elgType __attribute__((swift_name("init(apyEndDt:elgType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSUpdateNotBcCompanion *companion __attribute__((swift_name("companion")));
- (MDSUpdateNotBc *)doCopyApyEndDt:(NSString * _Nullable)apyEndDt elgType:(NSString * _Nullable)elgType __attribute__((swift_name("doCopy(apyEndDt:elgType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apy_END_DT")
*/
@property (readonly) NSString * _Nullable apyEndDt __attribute__((swift_name("apyEndDt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="elg_TYPE")
*/
@property (readonly) NSString * _Nullable elgType __attribute__((swift_name("elgType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateNotBc.Companion")))
@interface MDSUpdateNotBcCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSUpdateNotBcCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VCareService")))
@interface MDSVCareService : MDSBase
- (instancetype)initWithArabicDisclaimer:(NSString * _Nullable)arabicDisclaimer endTime:(NSString * _Nullable)endTime serviceBrief:(NSString * _Nullable)serviceBrief englishDisclaimer:(NSString * _Nullable)englishDisclaimer hospitalName:(NSString * _Nullable)hospitalName hospitalCode:(NSString * _Nullable)hospitalCode arabicHospitalName:(NSString * _Nullable)arabicHospitalName serviceName:(NSString * _Nullable)serviceName serviceCode:(NSString * _Nullable)serviceCode startTime:(NSString * _Nullable)startTime allowYN:(NSString * _Nullable)allowYN __attribute__((swift_name("init(arabicDisclaimer:endTime:serviceBrief:englishDisclaimer:hospitalName:hospitalCode:arabicHospitalName:serviceName:serviceCode:startTime:allowYN:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSVCareServiceCompanion *companion __attribute__((swift_name("companion")));
- (MDSVCareService *)doCopyArabicDisclaimer:(NSString * _Nullable)arabicDisclaimer endTime:(NSString * _Nullable)endTime serviceBrief:(NSString * _Nullable)serviceBrief englishDisclaimer:(NSString * _Nullable)englishDisclaimer hospitalName:(NSString * _Nullable)hospitalName hospitalCode:(NSString * _Nullable)hospitalCode arabicHospitalName:(NSString * _Nullable)arabicHospitalName serviceName:(NSString * _Nullable)serviceName serviceCode:(NSString * _Nullable)serviceCode startTime:(NSString * _Nullable)startTime allowYN:(NSString * _Nullable)allowYN __attribute__((swift_name("doCopy(arabicDisclaimer:endTime:serviceBrief:englishDisclaimer:hospitalName:hospitalCode:arabicHospitalName:serviceName:serviceCode:startTime:allowYN:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="allow_YN")
*/
@property (readonly) NSString * _Nullable allowYN __attribute__((swift_name("allowYN")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicDisclaimer")
*/
@property (readonly) NSString * _Nullable arabicDisclaimer __attribute__((swift_name("arabicDisclaimer")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicHospitalName")
*/
@property (readonly) NSString * _Nullable arabicHospitalName __attribute__((swift_name("arabicHospitalName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="endTime")
*/
@property (readonly) NSString * _Nullable endTime __attribute__((swift_name("endTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishDisclaimer")
*/
@property (readonly) NSString * _Nullable englishDisclaimer __attribute__((swift_name("englishDisclaimer")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalName")
*/
@property (readonly) NSString * _Nullable hospitalName __attribute__((swift_name("hospitalName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="serviceBrief")
*/
@property (readonly) NSString * _Nullable serviceBrief __attribute__((swift_name("serviceBrief")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="serviceCode")
*/
@property (readonly) NSString * _Nullable serviceCode __attribute__((swift_name("serviceCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="serviceName")
*/
@property (readonly) NSString * _Nullable serviceName __attribute__((swift_name("serviceName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="startTime")
*/
@property (readonly) NSString * _Nullable startTime __attribute__((swift_name("startTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VCareService.Companion")))
@interface MDSVCareServiceCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSVCareServiceCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Vaccianation")))
@interface MDSVaccianation : MDSBase
- (instancetype)initWithPatientNo:(NSString * _Nullable)patientNo categoryCode:(NSString * _Nullable)categoryCode vaccineCode:(NSString * _Nullable)vaccineCode vaccineName:(NSString * _Nullable)vaccineName degreeSequence:(MDSInt * _Nullable)degreeSequence adultchildTypeCode:(NSString * _Nullable)adultchildTypeCode vaccineEnglishName:(NSString * _Nullable)vaccineEnglishName vaccineArabicName:(NSString * _Nullable)vaccineArabicName otherHosIncludeFlag:(NSString * _Nullable)otherHosIncludeFlag numberOfVaccinationTimes:(MDSDouble * _Nullable)numberOfVaccinationTimes cells:(MDSKotlinArray<MDSInt *> * _Nullable)cells __attribute__((swift_name("init(patientNo:categoryCode:vaccineCode:vaccineName:degreeSequence:adultchildTypeCode:vaccineEnglishName:vaccineArabicName:otherHosIncludeFlag:numberOfVaccinationTimes:cells:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSVaccianationCompanion *companion __attribute__((swift_name("companion")));
- (MDSVaccianation *)doCopyPatientNo:(NSString * _Nullable)patientNo categoryCode:(NSString * _Nullable)categoryCode vaccineCode:(NSString * _Nullable)vaccineCode vaccineName:(NSString * _Nullable)vaccineName degreeSequence:(MDSInt * _Nullable)degreeSequence adultchildTypeCode:(NSString * _Nullable)adultchildTypeCode vaccineEnglishName:(NSString * _Nullable)vaccineEnglishName vaccineArabicName:(NSString * _Nullable)vaccineArabicName otherHosIncludeFlag:(NSString * _Nullable)otherHosIncludeFlag numberOfVaccinationTimes:(MDSDouble * _Nullable)numberOfVaccinationTimes cells:(MDSKotlinArray<MDSInt *> * _Nullable)cells __attribute__((swift_name("doCopy(patientNo:categoryCode:vaccineCode:vaccineName:degreeSequence:adultchildTypeCode:vaccineEnglishName:vaccineArabicName:otherHosIncludeFlag:numberOfVaccinationTimes:cells:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="adultchildTypeCode")
*/
@property NSString * _Nullable adultchildTypeCode __attribute__((swift_name("adultchildTypeCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="categoryCode")
*/
@property NSString * _Nullable categoryCode __attribute__((swift_name("categoryCode")));
@property MDSKotlinArray<MDSInt *> * _Nullable cells __attribute__((swift_name("cells")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="degreeSequence")
*/
@property MDSInt * _Nullable degreeSequence __attribute__((swift_name("degreeSequence")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="numberOfVaccinationTimes")
*/
@property MDSDouble * _Nullable numberOfVaccinationTimes __attribute__((swift_name("numberOfVaccinationTimes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="otherHosIncludeFlag")
*/
@property NSString * _Nullable otherHosIncludeFlag __attribute__((swift_name("otherHosIncludeFlag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientNo")
*/
@property NSString * _Nullable patientNo __attribute__((swift_name("patientNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vaccineArabicName")
*/
@property NSString * _Nullable vaccineArabicName __attribute__((swift_name("vaccineArabicName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vaccineCode")
*/
@property NSString * _Nullable vaccineCode __attribute__((swift_name("vaccineCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vaccineEnglishName")
*/
@property NSString * _Nullable vaccineEnglishName __attribute__((swift_name("vaccineEnglishName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vaccineName")
*/
@property NSString * _Nullable vaccineName __attribute__((swift_name("vaccineName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Vaccianation.Companion")))
@interface MDSVaccianationCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSVaccianationCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VaccineReminder")))
@interface MDSVaccineReminder : MDSBase
- (instancetype)initWithAlarmDate:(NSString * _Nullable)alarmDate vaccineName:(NSString * _Nullable)vaccineName englishVaccineAge:(NSString * _Nullable)englishVaccineAge vaccineAge:(NSString * _Nullable)vaccineAge vaccineDate:(NSString * _Nullable)vaccineDate patientId:(NSString * _Nullable)patientId patientName:(NSString * _Nullable)patientName arabicPatientName:(NSString * _Nullable)arabicPatientName __attribute__((swift_name("init(alarmDate:vaccineName:englishVaccineAge:vaccineAge:vaccineDate:patientId:patientName:arabicPatientName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSVaccineReminderCompanion *companion __attribute__((swift_name("companion")));
- (MDSVaccineReminder *)doCopyAlarmDate:(NSString * _Nullable)alarmDate vaccineName:(NSString * _Nullable)vaccineName englishVaccineAge:(NSString * _Nullable)englishVaccineAge vaccineAge:(NSString * _Nullable)vaccineAge vaccineDate:(NSString * _Nullable)vaccineDate patientId:(NSString * _Nullable)patientId patientName:(NSString * _Nullable)patientName arabicPatientName:(NSString * _Nullable)arabicPatientName __attribute__((swift_name("doCopy(alarmDate:vaccineName:englishVaccineAge:vaccineAge:vaccineDate:patientId:patientName:arabicPatientName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="alarmDate")
*/
@property (readonly) NSString * _Nullable alarmDate __attribute__((swift_name("alarmDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicPatientName")
*/
@property (readonly) NSString * _Nullable arabicPatientName __attribute__((swift_name("arabicPatientName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishVaccineAge")
*/
@property (readonly) NSString * _Nullable englishVaccineAge __attribute__((swift_name("englishVaccineAge")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property (readonly) NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientName")
*/
@property (readonly) NSString * _Nullable patientName __attribute__((swift_name("patientName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vaccineAge")
*/
@property (readonly) NSString * _Nullable vaccineAge __attribute__((swift_name("vaccineAge")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vaccineDate")
*/
@property (readonly) NSString * _Nullable vaccineDate __attribute__((swift_name("vaccineDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vaccineName")
*/
@property (readonly) NSString * _Nullable vaccineName __attribute__((swift_name("vaccineName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VaccineReminder.Companion")))
@interface MDSVaccineReminderCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSVaccineReminderCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VirtualCareDepartment")))
@interface MDSVirtualCareDepartment : MDSBase
- (instancetype)initWithHospitalCode:(NSString * _Nullable)hospitalCode innerHospitalCode:(NSString * _Nullable)innerHospitalCode hospitalName:(NSString * _Nullable)hospitalName med_SRV_CD:(NSString * _Nullable)med_SRV_CD pse_CLS_CD:(NSString * _Nullable)pse_CLS_CD med_DEPT_CD:(NSString * _Nullable)med_DEPT_CD med_DEPT_NM:(NSString * _Nullable)med_DEPT_NM __attribute__((swift_name("init(hospitalCode:innerHospitalCode:hospitalName:med_SRV_CD:pse_CLS_CD:med_DEPT_CD:med_DEPT_NM:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSVirtualCareDepartmentCompanion *companion __attribute__((swift_name("companion")));
- (MDSVirtualCareDepartment *)doCopyHospitalCode:(NSString * _Nullable)hospitalCode innerHospitalCode:(NSString * _Nullable)innerHospitalCode hospitalName:(NSString * _Nullable)hospitalName med_SRV_CD:(NSString * _Nullable)med_SRV_CD pse_CLS_CD:(NSString * _Nullable)pse_CLS_CD med_DEPT_CD:(NSString * _Nullable)med_DEPT_CD med_DEPT_NM:(NSString * _Nullable)med_DEPT_NM __attribute__((swift_name("doCopy(hospitalCode:innerHospitalCode:hospitalName:med_SRV_CD:pse_CLS_CD:med_DEPT_CD:med_DEPT_NM:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalName")
*/
@property (readonly) NSString * _Nullable hospitalName __attribute__((swift_name("hospitalName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="innerHospitalCode")
*/
@property (readonly) NSString * _Nullable innerHospitalCode __attribute__((swift_name("innerHospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="med_DEPT_CD")
*/
@property (readonly) NSString * _Nullable med_DEPT_CD __attribute__((swift_name("med_DEPT_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="med_DEPT_NM")
*/
@property (readonly) NSString * _Nullable med_DEPT_NM __attribute__((swift_name("med_DEPT_NM")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="med_SRV_CD")
*/
@property (readonly) NSString * _Nullable med_SRV_CD __attribute__((swift_name("med_SRV_CD")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pse_CLS_CD")
*/
@property (readonly) NSString * _Nullable pse_CLS_CD __attribute__((swift_name("pse_CLS_CD")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VirtualCareDepartment.Companion")))
@interface MDSVirtualCareDepartmentCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSVirtualCareDepartmentCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visit")))
@interface MDSVisit : MDSBase
- (instancetype)initWithPactId:(NSString * _Nullable)pactId patientId:(NSString * _Nullable)patientId hospitalCode:(NSString * _Nullable)hospitalCode hospitalSubTypeCode:(NSString * _Nullable)hospitalSubTypeCode patientName:(NSString * _Nullable)patientName patientSection:(NSString * _Nullable)patientSection medicalDate:(NSString * _Nullable)medicalDate medicalDateTime:(NSString * _Nullable)medicalDateTime medicalReservationDateTime:(NSString * _Nullable)medicalReservationDateTime departmentName:(NSString * _Nullable)departmentName localDepartmentName:(NSString * _Nullable)localDepartmentName localStaffName:(NSString * _Nullable)localStaffName medicalDepartmentCode:(NSString * _Nullable)medicalDepartmentCode korStaffHealthClinicName:(NSString * _Nullable)korStaffHealthClinicName medicalStaffNumber:(NSString * _Nullable)medicalStaffNumber icd10Code:(NSString * _Nullable)icd10Code korCodeName:(NSString * _Nullable)korCodeName englishCodeName:(NSString * _Nullable)englishCodeName medicalYesNo:(NSString * _Nullable)medicalYesNo dischargeDate:(NSString * _Nullable)dischargeDate dischargeDateTime:(NSString * _Nullable)dischargeDateTime wdDepartmentCode:(NSString * _Nullable)wdDepartmentCode operationDiagnosisName:(NSString * _Nullable)operationDiagnosisName operationDate:(NSString * _Nullable)operationDate medicationCount:(NSString * _Nullable)medicationCount visitId:(NSString * _Nullable)visitId requestYesNo:(NSString * _Nullable)requestYesNo colorContent:(NSString * _Nullable)colorContent prescriptionLinkYesNo:(NSString * _Nullable)prescriptionLinkYesNo reportYesNo:(NSString * _Nullable)reportYesNo dischargeYesNo:(NSString * _Nullable)dischargeYesNo prescriptionYesNo:(NSString * _Nullable)prescriptionYesNo labYesNo:(NSString * _Nullable)labYesNo prescriptionOutpatientYesNo:(NSString * _Nullable)prescriptionOutpatientYesNo visitLessThan30DaysYesNo:(NSString * _Nullable)visitLessThan30DaysYesNo serviceName:(NSString * _Nullable)serviceName arabicServiceName:(NSString * _Nullable)arabicServiceName hijriDate:(NSString * _Nullable)hijriDate dischargeDateHijri:(NSString * _Nullable)dischargeDateHijri laboratoryLinkYn:(NSString * _Nullable)laboratoryLinkYn radiologyLinkYn:(NSString * _Nullable)radiologyLinkYn functionalYn:(NSString * _Nullable)functionalYn pathologyLinkYn:(NSString * _Nullable)pathologyLinkYn __attribute__((swift_name("init(pactId:patientId:hospitalCode:hospitalSubTypeCode:patientName:patientSection:medicalDate:medicalDateTime:medicalReservationDateTime:departmentName:localDepartmentName:localStaffName:medicalDepartmentCode:korStaffHealthClinicName:medicalStaffNumber:icd10Code:korCodeName:englishCodeName:medicalYesNo:dischargeDate:dischargeDateTime:wdDepartmentCode:operationDiagnosisName:operationDate:medicationCount:visitId:requestYesNo:colorContent:prescriptionLinkYesNo:reportYesNo:dischargeYesNo:prescriptionYesNo:labYesNo:prescriptionOutpatientYesNo:visitLessThan30DaysYesNo:serviceName:arabicServiceName:hijriDate:dischargeDateHijri:laboratoryLinkYn:radiologyLinkYn:functionalYn:pathologyLinkYn:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSVisitCompanion *companion __attribute__((swift_name("companion")));
- (MDSVisit *)doCopyPactId:(NSString * _Nullable)pactId patientId:(NSString * _Nullable)patientId hospitalCode:(NSString * _Nullable)hospitalCode hospitalSubTypeCode:(NSString * _Nullable)hospitalSubTypeCode patientName:(NSString * _Nullable)patientName patientSection:(NSString * _Nullable)patientSection medicalDate:(NSString * _Nullable)medicalDate medicalDateTime:(NSString * _Nullable)medicalDateTime medicalReservationDateTime:(NSString * _Nullable)medicalReservationDateTime departmentName:(NSString * _Nullable)departmentName localDepartmentName:(NSString * _Nullable)localDepartmentName localStaffName:(NSString * _Nullable)localStaffName medicalDepartmentCode:(NSString * _Nullable)medicalDepartmentCode korStaffHealthClinicName:(NSString * _Nullable)korStaffHealthClinicName medicalStaffNumber:(NSString * _Nullable)medicalStaffNumber icd10Code:(NSString * _Nullable)icd10Code korCodeName:(NSString * _Nullable)korCodeName englishCodeName:(NSString * _Nullable)englishCodeName medicalYesNo:(NSString * _Nullable)medicalYesNo dischargeDate:(NSString * _Nullable)dischargeDate dischargeDateTime:(NSString * _Nullable)dischargeDateTime wdDepartmentCode:(NSString * _Nullable)wdDepartmentCode operationDiagnosisName:(NSString * _Nullable)operationDiagnosisName operationDate:(NSString * _Nullable)operationDate medicationCount:(NSString * _Nullable)medicationCount visitId:(NSString * _Nullable)visitId requestYesNo:(NSString * _Nullable)requestYesNo colorContent:(NSString * _Nullable)colorContent prescriptionLinkYesNo:(NSString * _Nullable)prescriptionLinkYesNo reportYesNo:(NSString * _Nullable)reportYesNo dischargeYesNo:(NSString * _Nullable)dischargeYesNo prescriptionYesNo:(NSString * _Nullable)prescriptionYesNo labYesNo:(NSString * _Nullable)labYesNo prescriptionOutpatientYesNo:(NSString * _Nullable)prescriptionOutpatientYesNo visitLessThan30DaysYesNo:(NSString * _Nullable)visitLessThan30DaysYesNo serviceName:(NSString * _Nullable)serviceName arabicServiceName:(NSString * _Nullable)arabicServiceName hijriDate:(NSString * _Nullable)hijriDate dischargeDateHijri:(NSString * _Nullable)dischargeDateHijri laboratoryLinkYn:(NSString * _Nullable)laboratoryLinkYn radiologyLinkYn:(NSString * _Nullable)radiologyLinkYn functionalYn:(NSString * _Nullable)functionalYn pathologyLinkYn:(NSString * _Nullable)pathologyLinkYn __attribute__((swift_name("doCopy(pactId:patientId:hospitalCode:hospitalSubTypeCode:patientName:patientSection:medicalDate:medicalDateTime:medicalReservationDateTime:departmentName:localDepartmentName:localStaffName:medicalDepartmentCode:korStaffHealthClinicName:medicalStaffNumber:icd10Code:korCodeName:englishCodeName:medicalYesNo:dischargeDate:dischargeDateTime:wdDepartmentCode:operationDiagnosisName:operationDate:medicationCount:visitId:requestYesNo:colorContent:prescriptionLinkYesNo:reportYesNo:dischargeYesNo:prescriptionYesNo:labYesNo:prescriptionOutpatientYesNo:visitLessThan30DaysYesNo:serviceName:arabicServiceName:hijriDate:dischargeDateHijri:laboratoryLinkYn:radiologyLinkYn:functionalYn:pathologyLinkYn:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="arabicServiceName")
*/
@property (readonly) NSString * _Nullable arabicServiceName __attribute__((swift_name("arabicServiceName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="colorContent")
*/
@property (readonly) NSString * _Nullable colorContent __attribute__((swift_name("colorContent")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="departmentName")
*/
@property (readonly) NSString * _Nullable departmentName __attribute__((swift_name("departmentName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dischargeDate")
*/
@property (readonly) NSString * _Nullable dischargeDate __attribute__((swift_name("dischargeDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dischargeDateHijri")
*/
@property (readonly) NSString * _Nullable dischargeDateHijri __attribute__((swift_name("dischargeDateHijri")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dischargeDateTime")
*/
@property (readonly) NSString * _Nullable dischargeDateTime __attribute__((swift_name("dischargeDateTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dischargeYesNo")
*/
@property (readonly) NSString * _Nullable dischargeYesNo __attribute__((swift_name("dischargeYesNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishCodeName")
*/
@property (readonly) NSString * _Nullable englishCodeName __attribute__((swift_name("englishCodeName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="functionalYn")
*/
@property (readonly) NSString * _Nullable functionalYn __attribute__((swift_name("functionalYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hijriDate")
*/
@property (readonly) NSString * _Nullable hijriDate __attribute__((swift_name("hijriDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalSubTypeCode")
*/
@property (readonly) NSString * _Nullable hospitalSubTypeCode __attribute__((swift_name("hospitalSubTypeCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="icd10Code")
*/
@property (readonly) NSString * _Nullable icd10Code __attribute__((swift_name("icd10Code")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="korCodeName")
*/
@property (readonly) NSString * _Nullable korCodeName __attribute__((swift_name("korCodeName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="korStaffHealthClinicName")
*/
@property (readonly) NSString * _Nullable korStaffHealthClinicName __attribute__((swift_name("korStaffHealthClinicName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="labYesNo")
*/
@property (readonly) NSString * _Nullable labYesNo __attribute__((swift_name("labYesNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="laboratoryLinkYn")
*/
@property (readonly) NSString * _Nullable laboratoryLinkYn __attribute__((swift_name("laboratoryLinkYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="localDepartmentName")
*/
@property (readonly) NSString * _Nullable localDepartmentName __attribute__((swift_name("localDepartmentName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="localStaffName")
*/
@property (readonly) NSString * _Nullable localStaffName __attribute__((swift_name("localStaffName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalDate")
*/
@property (readonly) NSString * _Nullable medicalDate __attribute__((swift_name("medicalDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalDateTime")
*/
@property (readonly) NSString * _Nullable medicalDateTime __attribute__((swift_name("medicalDateTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalDepartmentCode")
*/
@property (readonly) NSString * _Nullable medicalDepartmentCode __attribute__((swift_name("medicalDepartmentCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalReservationDateTime")
*/
@property (readonly) NSString * _Nullable medicalReservationDateTime __attribute__((swift_name("medicalReservationDateTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalStaffNumber")
*/
@property (readonly) NSString * _Nullable medicalStaffNumber __attribute__((swift_name("medicalStaffNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalYesNo")
*/
@property (readonly) NSString * _Nullable medicalYesNo __attribute__((swift_name("medicalYesNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicationCount")
*/
@property (readonly) NSString * _Nullable medicationCount __attribute__((swift_name("medicationCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="operationDate")
*/
@property (readonly) NSString * _Nullable operationDate __attribute__((swift_name("operationDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="operationDiagnosisName")
*/
@property (readonly) NSString * _Nullable operationDiagnosisName __attribute__((swift_name("operationDiagnosisName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pactId")
*/
@property (readonly) NSString * _Nullable pactId __attribute__((swift_name("pactId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pathologyLinkYn")
*/
@property (readonly) NSString * _Nullable pathologyLinkYn __attribute__((swift_name("pathologyLinkYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property (readonly) NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientName")
*/
@property (readonly) NSString * _Nullable patientName __attribute__((swift_name("patientName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientSection")
*/
@property (readonly) NSString * _Nullable patientSection __attribute__((swift_name("patientSection")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="prescriptionLinkYesNo")
*/
@property (readonly) NSString * _Nullable prescriptionLinkYesNo __attribute__((swift_name("prescriptionLinkYesNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="prescriptionOutpatientYesNo")
*/
@property (readonly) NSString * _Nullable prescriptionOutpatientYesNo __attribute__((swift_name("prescriptionOutpatientYesNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="prescriptionYesNo")
*/
@property (readonly) NSString * _Nullable prescriptionYesNo __attribute__((swift_name("prescriptionYesNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="radiologyLinkYn")
*/
@property (readonly) NSString * _Nullable radiologyLinkYn __attribute__((swift_name("radiologyLinkYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reportYesNo")
*/
@property (readonly) NSString * _Nullable reportYesNo __attribute__((swift_name("reportYesNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestYesNo")
*/
@property (readonly) NSString * _Nullable requestYesNo __attribute__((swift_name("requestYesNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="serviceName")
*/
@property (readonly) NSString * _Nullable serviceName __attribute__((swift_name("serviceName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="visitId")
*/
@property (readonly) NSString * _Nullable visitId __attribute__((swift_name("visitId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="visitLessThan30DaysYesNo")
*/
@property (readonly) NSString * _Nullable visitLessThan30DaysYesNo __attribute__((swift_name("visitLessThan30DaysYesNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="wdDepartmentCode")
*/
@property (readonly) NSString * _Nullable wdDepartmentCode __attribute__((swift_name("wdDepartmentCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visit.Companion")))
@interface MDSVisitCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSVisitCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VisitListResponse")))
@interface MDSVisitListResponse : MDSBase
- (instancetype)initWithErrorMessage:(NSString * _Nullable)errorMessage result:(NSArray<MDSVisit *> * _Nullable)result __attribute__((swift_name("init(errorMessage:result:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSVisitListResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSVisitListResponse *)doCopyErrorMessage:(NSString * _Nullable)errorMessage result:(NSArray<MDSVisit *> * _Nullable)result __attribute__((swift_name("doCopy(errorMessage:result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="errorMessage")
*/
@property (readonly) NSString * _Nullable errorMessage __attribute__((swift_name("errorMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="result")
*/
@property (readonly) NSArray<MDSVisit *> * _Nullable result __attribute__((swift_name("result")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VisitListResponse.Companion")))
@interface MDSVisitListResponseCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSVisitListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WearableInfo")))
@interface MDSWearableInfo : MDSBase
- (instancetype)initWithBodyInfoId:(MDSLong * _Nullable)bodyInfoId patientId:(NSString * _Nullable)patientId itemCode:(NSString * _Nullable)itemCode itemValue:(NSString * _Nullable)itemValue registrationDateTime:(NSString * _Nullable)registrationDateTime deletionDateTime:(NSString * _Nullable)deletionDateTime diastolicBloodPressure:(NSString * _Nullable)diastolicBloodPressure bodyMass:(NSString * _Nullable)bodyMass entryTP:(NSString * _Nullable)entryTP __attribute__((swift_name("init(bodyInfoId:patientId:itemCode:itemValue:registrationDateTime:deletionDateTime:diastolicBloodPressure:bodyMass:entryTP:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSWearableInfoCompanion *companion __attribute__((swift_name("companion")));
- (MDSWearableInfo *)doCopyBodyInfoId:(MDSLong * _Nullable)bodyInfoId patientId:(NSString * _Nullable)patientId itemCode:(NSString * _Nullable)itemCode itemValue:(NSString * _Nullable)itemValue registrationDateTime:(NSString * _Nullable)registrationDateTime deletionDateTime:(NSString * _Nullable)deletionDateTime diastolicBloodPressure:(NSString * _Nullable)diastolicBloodPressure bodyMass:(NSString * _Nullable)bodyMass entryTP:(NSString * _Nullable)entryTP __attribute__((swift_name("doCopy(bodyInfoId:patientId:itemCode:itemValue:registrationDateTime:deletionDateTime:diastolicBloodPressure:bodyMass:entryTP:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bodyInfoId")
*/
@property (readonly) MDSLong * _Nullable bodyInfoId __attribute__((swift_name("bodyInfoId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bodyMass")
*/
@property (readonly) NSString * _Nullable bodyMass __attribute__((swift_name("bodyMass")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deletionDateTime")
*/
@property (readonly) NSString * _Nullable deletionDateTime __attribute__((swift_name("deletionDateTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="diastolicBloodPressure")
*/
@property (readonly) NSString * _Nullable diastolicBloodPressure __attribute__((swift_name("diastolicBloodPressure")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="entry_TP")
*/
@property (readonly) NSString * _Nullable entryTP __attribute__((swift_name("entryTP")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="itemCode")
*/
@property (readonly) NSString * _Nullable itemCode __attribute__((swift_name("itemCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="itemValue")
*/
@property (readonly) NSString * _Nullable itemValue __attribute__((swift_name("itemValue")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property (readonly) NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="registrationDateTime")
*/
@property (readonly) NSString * _Nullable registrationDateTime __attribute__((swift_name("registrationDateTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WearableInfo.Companion")))
@interface MDSWearableInfoCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSWearableInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("visitHistory")))
@interface MDSvisitHistory : MDSBase
- (instancetype)initWithMessageId:(NSString * _Nullable)messageId patientId:(NSString * _Nullable)patientId hospitalCode:(NSString * _Nullable)hospitalCode hospitalSubCode:(NSString * _Nullable)hospitalSubCode patientName:(NSString * _Nullable)patientName patientArabicName:(NSString * _Nullable)patientArabicName patientSection:(NSString * _Nullable)patientSection medicationDate:(NSString * _Nullable)medicationDate medicationDay:(NSString * _Nullable)medicationDay medicationMonth:(NSString * _Nullable)medicationMonth medicalDate1:(NSString * _Nullable)medicalDate1 medicalReservationDateTime:(NSString * _Nullable)medicalReservationDateTime departmentName:(NSString * _Nullable)departmentName localDepartmentName:(NSString * _Nullable)localDepartmentName localStaffName:(NSString * _Nullable)localStaffName medicalDepartmentCode:(NSString * _Nullable)medicalDepartmentCode koreanStaffName:(NSString * _Nullable)koreanStaffName medicalStaffNumber:(NSString * _Nullable)medicalStaffNumber icd10Code:(NSString * _Nullable)icd10Code koreanCodeName:(NSString * _Nullable)koreanCodeName englishCodeName:(NSString * _Nullable)englishCodeName medicalYesNo:(NSString * _Nullable)medicalYesNo dischargeDate:(NSString * _Nullable)dischargeDate dischargeDate1:(NSString * _Nullable)dischargeDate1 wardDepartmentCode:(NSString * _Nullable)wardDepartmentCode operationDiagnosisName:(NSString * _Nullable)operationDiagnosisName operationDate:(NSString * _Nullable)operationDate medicationCount:(NSString * _Nullable)medicationCount visitId:(NSString * _Nullable)visitId requestYn:(NSString * _Nullable)requestYn colorContent:(NSString * _Nullable)colorContent prescriptionLinkYn:(NSString * _Nullable)prescriptionLinkYn reportYn:(NSString * _Nullable)reportYn dischargeYn:(NSString * _Nullable)dischargeYn precautionYn:(NSString * _Nullable)precautionYn labYn:(NSString * _Nullable)labYn precautionOutpatientYn:(NSString * _Nullable)precautionOutpatientYn visitLessThan30DaysYn:(NSString * _Nullable)visitLessThan30DaysYn serviceName:(NSString * _Nullable)serviceName localServiceName:(NSString * _Nullable)localServiceName hijriDate:(NSString * _Nullable)hijriDate dischargeDateHijri:(NSString * _Nullable)dischargeDateHijri laboratoryLinkYn:(NSString * _Nullable)laboratoryLinkYn radiologyLinkYn:(NSString * _Nullable)radiologyLinkYn functionalYn:(NSString * _Nullable)functionalYn pathologyLinkYn:(NSString * _Nullable)pathologyLinkYn homeSupplyYn:(NSString * _Nullable)homeSupplyYn __attribute__((swift_name("init(messageId:patientId:hospitalCode:hospitalSubCode:patientName:patientArabicName:patientSection:medicationDate:medicationDay:medicationMonth:medicalDate1:medicalReservationDateTime:departmentName:localDepartmentName:localStaffName:medicalDepartmentCode:koreanStaffName:medicalStaffNumber:icd10Code:koreanCodeName:englishCodeName:medicalYesNo:dischargeDate:dischargeDate1:wardDepartmentCode:operationDiagnosisName:operationDate:medicationCount:visitId:requestYn:colorContent:prescriptionLinkYn:reportYn:dischargeYn:precautionYn:labYn:precautionOutpatientYn:visitLessThan30DaysYn:serviceName:localServiceName:hijriDate:dischargeDateHijri:laboratoryLinkYn:radiologyLinkYn:functionalYn:pathologyLinkYn:homeSupplyYn:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSvisitHistoryCompanion *companion __attribute__((swift_name("companion")));
- (MDSvisitHistory *)doCopyMessageId:(NSString * _Nullable)messageId patientId:(NSString * _Nullable)patientId hospitalCode:(NSString * _Nullable)hospitalCode hospitalSubCode:(NSString * _Nullable)hospitalSubCode patientName:(NSString * _Nullable)patientName patientArabicName:(NSString * _Nullable)patientArabicName patientSection:(NSString * _Nullable)patientSection medicationDate:(NSString * _Nullable)medicationDate medicationDay:(NSString * _Nullable)medicationDay medicationMonth:(NSString * _Nullable)medicationMonth medicalDate1:(NSString * _Nullable)medicalDate1 medicalReservationDateTime:(NSString * _Nullable)medicalReservationDateTime departmentName:(NSString * _Nullable)departmentName localDepartmentName:(NSString * _Nullable)localDepartmentName localStaffName:(NSString * _Nullable)localStaffName medicalDepartmentCode:(NSString * _Nullable)medicalDepartmentCode koreanStaffName:(NSString * _Nullable)koreanStaffName medicalStaffNumber:(NSString * _Nullable)medicalStaffNumber icd10Code:(NSString * _Nullable)icd10Code koreanCodeName:(NSString * _Nullable)koreanCodeName englishCodeName:(NSString * _Nullable)englishCodeName medicalYesNo:(NSString * _Nullable)medicalYesNo dischargeDate:(NSString * _Nullable)dischargeDate dischargeDate1:(NSString * _Nullable)dischargeDate1 wardDepartmentCode:(NSString * _Nullable)wardDepartmentCode operationDiagnosisName:(NSString * _Nullable)operationDiagnosisName operationDate:(NSString * _Nullable)operationDate medicationCount:(NSString * _Nullable)medicationCount visitId:(NSString * _Nullable)visitId requestYn:(NSString * _Nullable)requestYn colorContent:(NSString * _Nullable)colorContent prescriptionLinkYn:(NSString * _Nullable)prescriptionLinkYn reportYn:(NSString * _Nullable)reportYn dischargeYn:(NSString * _Nullable)dischargeYn precautionYn:(NSString * _Nullable)precautionYn labYn:(NSString * _Nullable)labYn precautionOutpatientYn:(NSString * _Nullable)precautionOutpatientYn visitLessThan30DaysYn:(NSString * _Nullable)visitLessThan30DaysYn serviceName:(NSString * _Nullable)serviceName localServiceName:(NSString * _Nullable)localServiceName hijriDate:(NSString * _Nullable)hijriDate dischargeDateHijri:(NSString * _Nullable)dischargeDateHijri laboratoryLinkYn:(NSString * _Nullable)laboratoryLinkYn radiologyLinkYn:(NSString * _Nullable)radiologyLinkYn functionalYn:(NSString * _Nullable)functionalYn pathologyLinkYn:(NSString * _Nullable)pathologyLinkYn homeSupplyYn:(NSString * _Nullable)homeSupplyYn __attribute__((swift_name("doCopy(messageId:patientId:hospitalCode:hospitalSubCode:patientName:patientArabicName:patientSection:medicationDate:medicationDay:medicationMonth:medicalDate1:medicalReservationDateTime:departmentName:localDepartmentName:localStaffName:medicalDepartmentCode:koreanStaffName:medicalStaffNumber:icd10Code:koreanCodeName:englishCodeName:medicalYesNo:dischargeDate:dischargeDate1:wardDepartmentCode:operationDiagnosisName:operationDate:medicationCount:visitId:requestYn:colorContent:prescriptionLinkYn:reportYn:dischargeYn:precautionYn:labYn:precautionOutpatientYn:visitLessThan30DaysYn:serviceName:localServiceName:hijriDate:dischargeDateHijri:laboratoryLinkYn:radiologyLinkYn:functionalYn:pathologyLinkYn:homeSupplyYn:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="colorContent")
*/
@property (readonly) NSString * _Nullable colorContent __attribute__((swift_name("colorContent")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="departmentName")
*/
@property (readonly) NSString * _Nullable departmentName __attribute__((swift_name("departmentName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dischargeDate")
*/
@property (readonly) NSString * _Nullable dischargeDate __attribute__((swift_name("dischargeDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dischargeDate1")
*/
@property (readonly) NSString * _Nullable dischargeDate1 __attribute__((swift_name("dischargeDate1")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dischargeDateHijri")
*/
@property (readonly) NSString * _Nullable dischargeDateHijri __attribute__((swift_name("dischargeDateHijri")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dischargeYn")
*/
@property (readonly) NSString * _Nullable dischargeYn __attribute__((swift_name("dischargeYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="englishCodeName")
*/
@property (readonly) NSString * _Nullable englishCodeName __attribute__((swift_name("englishCodeName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="functionalYn")
*/
@property (readonly) NSString * _Nullable functionalYn __attribute__((swift_name("functionalYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hijriDate")
*/
@property (readonly) NSString * _Nullable hijriDate __attribute__((swift_name("hijriDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="homeSupplyYn")
*/
@property (readonly) NSString * _Nullable homeSupplyYn __attribute__((swift_name("homeSupplyYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalCode")
*/
@property (readonly) NSString * _Nullable hospitalCode __attribute__((swift_name("hospitalCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hospitalSubCode")
*/
@property (readonly) NSString * _Nullable hospitalSubCode __attribute__((swift_name("hospitalSubCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="icd10Code")
*/
@property (readonly) NSString * _Nullable icd10Code __attribute__((swift_name("icd10Code")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="koreanCodeName")
*/
@property (readonly) NSString * _Nullable koreanCodeName __attribute__((swift_name("koreanCodeName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="koreanStaffName")
*/
@property (readonly) NSString * _Nullable koreanStaffName __attribute__((swift_name("koreanStaffName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="labYn")
*/
@property (readonly) NSString * _Nullable labYn __attribute__((swift_name("labYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="laboratoryLinkYn")
*/
@property (readonly) NSString * _Nullable laboratoryLinkYn __attribute__((swift_name("laboratoryLinkYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="localDepartmentName")
*/
@property (readonly) NSString * _Nullable localDepartmentName __attribute__((swift_name("localDepartmentName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="localServiceName")
*/
@property (readonly) NSString * _Nullable localServiceName __attribute__((swift_name("localServiceName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="localStaffName")
*/
@property (readonly) NSString * _Nullable localStaffName __attribute__((swift_name("localStaffName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalDate1")
*/
@property (readonly) NSString * _Nullable medicalDate1 __attribute__((swift_name("medicalDate1")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalDepartmentCode")
*/
@property (readonly) NSString * _Nullable medicalDepartmentCode __attribute__((swift_name("medicalDepartmentCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalReservationDateTime")
*/
@property (readonly) NSString * _Nullable medicalReservationDateTime __attribute__((swift_name("medicalReservationDateTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalStaffNumber")
*/
@property (readonly) NSString * _Nullable medicalStaffNumber __attribute__((swift_name("medicalStaffNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicalYesNo")
*/
@property (readonly) NSString * _Nullable medicalYesNo __attribute__((swift_name("medicalYesNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicationCount")
*/
@property (readonly) NSString * _Nullable medicationCount __attribute__((swift_name("medicationCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicationDate")
*/
@property (readonly) NSString * _Nullable medicationDate __attribute__((swift_name("medicationDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicationDay")
*/
@property (readonly) NSString * _Nullable medicationDay __attribute__((swift_name("medicationDay")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="medicationMonth")
*/
@property (readonly) NSString * _Nullable medicationMonth __attribute__((swift_name("medicationMonth")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="messageId")
*/
@property (readonly) NSString * _Nullable messageId __attribute__((swift_name("messageId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="operationDate")
*/
@property (readonly) NSString * _Nullable operationDate __attribute__((swift_name("operationDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="operationDiagnosisName")
*/
@property (readonly) NSString * _Nullable operationDiagnosisName __attribute__((swift_name("operationDiagnosisName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pathologyLinkYn")
*/
@property (readonly) NSString * _Nullable pathologyLinkYn __attribute__((swift_name("pathologyLinkYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientArabicName")
*/
@property (readonly) NSString * _Nullable patientArabicName __attribute__((swift_name("patientArabicName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientId")
*/
@property (readonly) NSString * _Nullable patientId __attribute__((swift_name("patientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientName")
*/
@property (readonly) NSString * _Nullable patientName __attribute__((swift_name("patientName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="patientSection")
*/
@property (readonly) NSString * _Nullable patientSection __attribute__((swift_name("patientSection")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="precautionOutpatientYn")
*/
@property (readonly) NSString * _Nullable precautionOutpatientYn __attribute__((swift_name("precautionOutpatientYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="precautionYn")
*/
@property (readonly) NSString * _Nullable precautionYn __attribute__((swift_name("precautionYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="prescriptionLinkYn")
*/
@property (readonly) NSString * _Nullable prescriptionLinkYn __attribute__((swift_name("prescriptionLinkYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="radiologyLinkYn")
*/
@property (readonly) NSString * _Nullable radiologyLinkYn __attribute__((swift_name("radiologyLinkYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reportYn")
*/
@property (readonly) NSString * _Nullable reportYn __attribute__((swift_name("reportYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestYn")
*/
@property (readonly) NSString * _Nullable requestYn __attribute__((swift_name("requestYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="serviceName")
*/
@property (readonly) NSString * _Nullable serviceName __attribute__((swift_name("serviceName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="visitId")
*/
@property (readonly) NSString * _Nullable visitId __attribute__((swift_name("visitId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="visitLessThan30DaysYn")
*/
@property (readonly) NSString * _Nullable visitLessThan30DaysYn __attribute__((swift_name("visitLessThan30DaysYn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="wardDepartmentCode")
*/
@property (readonly) NSString * _Nullable wardDepartmentCode __attribute__((swift_name("wardDepartmentCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("visitHistory.Companion")))
@interface MDSvisitHistoryCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSvisitHistoryCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallBackTypes")))
@interface MDSCallBackTypes : MDSKotlinEnum<MDSCallBackTypes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MDSCallBackTypes *none __attribute__((swift_name("none")));
@property (class, readonly) MDSCallBackTypes *promotions __attribute__((swift_name("promotions")));
@property (class, readonly) MDSCallBackTypes *upcomingappointments __attribute__((swift_name("upcomingappointments")));
@property (class, readonly) MDSCallBackTypes *testresults __attribute__((swift_name("testresults")));
@property (class, readonly) MDSCallBackTypes *currentdrugs __attribute__((swift_name("currentdrugs")));
+ (MDSKotlinArray<MDSCallBackTypes *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MDSCallBackTypes *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("OnApiCalledCompleted")))
@protocol MDSOnApiCalledCompleted
@required
- (void)OnCompletedResponseType:(MDSCallBackTypes *)responseType response:(id _Nullable)response __attribute__((swift_name("OnCompleted(responseType:response:)")));
@end

@interface MDSMnghaDataSourceCompanion (Extensions)
- (MDSMnghaDataSource *)createServerType:(MDSServerType *)serverType withLog:(BOOL)withLog __attribute__((swift_name("create(serverType:withLog:)")));
@end

@interface MDSResponse (Extensions)
- (MDSResponse<MDSKotlinArray<MDSTestResultRoot *> *> *)updatePatientHospitalNamesApiLoader:(MDSApiCaller *)apiLoader __attribute__((swift_name("updatePatientHospitalNames(apiLoader:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MDSKotlinArray<T> : MDSBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MDSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MDSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface MDSKotlinArray (Extensions)
- (NSArray *)toGenericArray __attribute__((swift_name("toGenericArray()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface MDSKotlinPair<__covariant A, __covariant B> : MDSBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (MDSKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

@interface MDSKotlinPair (Extensions)
- (NSString *)getMonthYearLabelLocale:(NSString *)locale __attribute__((swift_name("getMonthYearLabel(locale:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalDateIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate")))
@interface MDSKotlinx_datetimeLocalDate : MDSBase <MDSKotlinComparable>
- (instancetype)initWithYear:(int32_t)year monthNumber:(int32_t)monthNumber dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:monthNumber:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year month:(MDSKotlinx_datetimeMonth *)month dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:month:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSKotlinx_datetimeLocalDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(MDSKotlinx_datetimeLocalDate *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int32_t)toEpochDays __attribute__((swift_name("toEpochDays()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) MDSKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) MDSKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

@interface MDSKotlinx_datetimeLocalDate (Extensions)
- (NSString *)formatDate __attribute__((swift_name("formatDate()")));
- (MDSKotlinPair<MDSInt *, NSString *> *)getDayNumberAndNameLocale:(NSString *)locale __attribute__((swift_name("getDayNumberAndName(locale:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppointmentKt")))
@interface MDSAppointmentKt : MDSBase
+ (MDSEligibilityResult *)checkAvailability:(NSArray<MDSEligibilityItem *> * _Nullable)receiver type:(MDSAppointmentServicesTypes *)type __attribute__((swift_name("checkAvailability(_:type:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonDataKt")))
@interface MDSCommonDataKt : MDSBase
+ (MDSKotlinPair<MDSBoolean *, NSString *> *)getApiDateFormatDay:(int32_t)day month:(int32_t)month year:(int32_t)year __attribute__((swift_name("getApiDateFormat(day:month:year:)")));
+ (MDSKotlinPair<MDSBoolean *, NSString *> *)getApiDateFormatDay:(int32_t)day month:(int32_t)month year:(int32_t)year hour:(int32_t)hour minutes:(int32_t)minutes __attribute__((swift_name("getApiDateFormat(day:month:year:hour:minutes:)")));
+ (MDSKotlinArray<MDSPreferredTime *> *)getPreferredTimes __attribute__((swift_name("getPreferredTimes()")));
+ (MDSKotlinArray<MDSQuestionSelfAssessment *> *)getQuestionSelfAssessment __attribute__((swift_name("getQuestionSelfAssessment()")));
+ (MDSResponse<MDSKotlinArray<MDSRegionResponse *> *> *)getRegions __attribute__((swift_name("getRegions()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateEXTKt")))
@interface MDSDateEXTKt : MDSBase
+ (MDSDateInfo *)getAllDateInfo:(NSString * _Nullable)receiver locale:(NSString *)locale __attribute__((swift_name("getAllDateInfo(_:locale:)")));
+ (NSString *)getAmPmFormat:(NSString *)receiver locale:(NSString *)locale __attribute__((swift_name("getAmPmFormat(_:locale:)")));
+ (NSString *)getLocaleMonth:(int32_t)receiver locale:(NSString *)locale __attribute__((swift_name("getLocaleMonth(_:locale:)")));
+ (MDSKotlinx_datetimeLocalDate *)parseCustomDate:(NSString *)receiver __attribute__((swift_name("parseCustomDate(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExerciseUtilKt")))
@interface MDSExerciseUtilKt : MDSBase
+ (double)calculateBodyMassWeight:(NSString *)weight height:(NSString *)height __attribute__((swift_name("calculateBodyMass(weight:height:)")));
+ (double)calculateCaloriesExerciseType:(MDSExerciseType *)exerciseType durationTime:(MDSDurationTime *)durationTime __attribute__((swift_name("calculateCalories(exerciseType:durationTime:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtKt")))
@interface MDSExtKt : MDSBase
+ (NSString *)toStringValue:(BOOL)receiver __attribute__((swift_name("toStringValue(_:)")));
+ (NSString *)toYN:(BOOL)receiver __attribute__((swift_name("toYN(_:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MDSKotlinThrowable : MDSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MDSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MDSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (MDSKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface MDSKotlinException : MDSKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MDSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MDSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface MDSKotlinRuntimeException : MDSKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MDSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MDSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MDSKotlinIllegalStateException : MDSKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MDSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MDSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface MDSKotlinCancellationException : MDSKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MDSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MDSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol MDSKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol MDSKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MDSKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MDSKotlinCoroutineContextElement> _Nullable)getKey:(id<MDSKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MDSKotlinCoroutineContext>)minusKeyKey:(id<MDSKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MDSKotlinCoroutineContext>)plusContext:(id<MDSKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface MDSKotlinByteArray : MDSBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MDSByte *(^)(MDSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MDSKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol MDSKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface MDSKtor_client_coreHttpClient : MDSBase <MDSKotlinx_coroutines_coreCoroutineScope, MDSKtor_ioCloseable>
- (instancetype)initWithEngine:(id<MDSKtor_client_coreHttpClientEngine>)engine userConfig:(MDSKtor_client_coreHttpClientConfig<MDSKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (MDSKtor_client_coreHttpClient *)configBlock:(void (^)(MDSKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<MDSKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MDSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<MDSKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MDSKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) MDSKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) MDSKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) MDSKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) MDSKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) MDSKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) MDSKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("Multiplatform_settingsSettings")))
@protocol MDSMultiplatform_settingsSettings
@required
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBoolean(key:defaultValue:)")));
- (MDSBoolean * _Nullable)getBooleanOrNullKey:(NSString *)key __attribute__((swift_name("getBooleanOrNull(key:)")));
- (double)getDoubleKey:(NSString *)key defaultValue:(double)defaultValue __attribute__((swift_name("getDouble(key:defaultValue:)")));
- (MDSDouble * _Nullable)getDoubleOrNullKey:(NSString *)key __attribute__((swift_name("getDoubleOrNull(key:)")));
- (float)getFloatKey:(NSString *)key defaultValue:(float)defaultValue __attribute__((swift_name("getFloat(key:defaultValue:)")));
- (MDSFloat * _Nullable)getFloatOrNullKey:(NSString *)key __attribute__((swift_name("getFloatOrNull(key:)")));
- (int32_t)getIntKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("getInt(key:defaultValue:)")));
- (MDSInt * _Nullable)getIntOrNullKey:(NSString *)key __attribute__((swift_name("getIntOrNull(key:)")));
- (int64_t)getLongKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("getLong(key:defaultValue:)")));
- (MDSLong * _Nullable)getLongOrNullKey:(NSString *)key __attribute__((swift_name("getLongOrNull(key:)")));
- (NSString *)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getString(key:defaultValue:)")));
- (NSString * _Nullable)getStringOrNullKey:(NSString *)key __attribute__((swift_name("getStringOrNull(key:)")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (void)putDoubleKey:(NSString *)key value:(double)value __attribute__((swift_name("putDouble(key:value:)")));
- (void)putFloatKey:(NSString *)key value:(float)value __attribute__((swift_name("putFloat(key:value:)")));
- (void)putIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("putInt(key:value:)")));
- (void)putLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("putLong(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
@property (readonly) NSSet<NSString *> *keys __attribute__((swift_name("keys")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MDSKotlinEnumCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MDSKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MDSKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MDSKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MDSKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MDSKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MDSKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MDSKotlinx_serialization_coreKSerializer <MDSKotlinx_serialization_coreSerializationStrategy, MDSKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MDSKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonth")))
@interface MDSKotlinx_datetimeMonth : MDSKotlinEnum<MDSKotlinx_datetimeMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MDSKotlinx_datetimeMonth *january __attribute__((swift_name("january")));
@property (class, readonly) MDSKotlinx_datetimeMonth *february __attribute__((swift_name("february")));
@property (class, readonly) MDSKotlinx_datetimeMonth *march __attribute__((swift_name("march")));
@property (class, readonly) MDSKotlinx_datetimeMonth *april __attribute__((swift_name("april")));
@property (class, readonly) MDSKotlinx_datetimeMonth *may __attribute__((swift_name("may")));
@property (class, readonly) MDSKotlinx_datetimeMonth *june __attribute__((swift_name("june")));
@property (class, readonly) MDSKotlinx_datetimeMonth *july __attribute__((swift_name("july")));
@property (class, readonly) MDSKotlinx_datetimeMonth *august __attribute__((swift_name("august")));
@property (class, readonly) MDSKotlinx_datetimeMonth *september __attribute__((swift_name("september")));
@property (class, readonly) MDSKotlinx_datetimeMonth *october __attribute__((swift_name("october")));
@property (class, readonly) MDSKotlinx_datetimeMonth *november __attribute__((swift_name("november")));
@property (class, readonly) MDSKotlinx_datetimeMonth *december __attribute__((swift_name("december")));
+ (MDSKotlinArray<MDSKotlinx_datetimeMonth *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate.Companion")))
@interface MDSKotlinx_datetimeLocalDateCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKotlinx_datetimeLocalDateCompanion *shared __attribute__((swift_name("shared")));
- (MDSKotlinx_datetimeLocalDate *)fromEpochDaysEpochDays:(int32_t)epochDays __attribute__((swift_name("fromEpochDays(epochDays:)")));
- (MDSKotlinx_datetimeLocalDate *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeek")))
@interface MDSKotlinx_datetimeDayOfWeek : MDSKotlinEnum<MDSKotlinx_datetimeDayOfWeek *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MDSKotlinx_datetimeDayOfWeek *monday __attribute__((swift_name("monday")));
@property (class, readonly) MDSKotlinx_datetimeDayOfWeek *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) MDSKotlinx_datetimeDayOfWeek *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) MDSKotlinx_datetimeDayOfWeek *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) MDSKotlinx_datetimeDayOfWeek *friday __attribute__((swift_name("friday")));
@property (class, readonly) MDSKotlinx_datetimeDayOfWeek *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) MDSKotlinx_datetimeDayOfWeek *sunday __attribute__((swift_name("sunday")));
+ (MDSKotlinArray<MDSKotlinx_datetimeDayOfWeek *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol MDSKotlinCoroutineContextElement <MDSKotlinCoroutineContext>
@required
@property (readonly) id<MDSKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol MDSKotlinCoroutineContextKey
@required
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface MDSKotlinByteIterator : MDSBase <MDSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MDSByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol MDSKtor_client_coreHttpClientEngine <MDSKotlinx_coroutines_coreCoroutineScope, MDSKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(MDSKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(MDSKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(MDSKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) MDSKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) MDSKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<MDSKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface MDSKtor_client_coreHttpClientEngineConfig : MDSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property MDSKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((deprecated("The [threadsCount] property is deprecated. The [Dispatchers.IO] is used by default.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface MDSKtor_client_coreHttpClientConfig<T> : MDSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MDSKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(MDSKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<MDSKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(MDSKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(MDSKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol MDSKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol MDSKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(MDSKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(MDSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(MDSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(MDSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(MDSKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey_:(MDSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key_:)")));
- (id)takeKey:(MDSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(MDSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<MDSKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface MDSKtor_eventsEvents : MDSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(MDSKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<MDSKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(MDSKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(MDSKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface MDSKtor_utilsPipeline<TSubject, TContext> : MDSBase
- (instancetype)initWithPhases:(MDSKotlinArray<MDSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(MDSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MDSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(MDSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(MDSKtor_utilsPipelinePhase *)reference phase:(MDSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(MDSKtor_utilsPipelinePhase *)reference phase:(MDSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(MDSKtor_utilsPipelinePhase *)phase block:(id<MDSKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<MDSKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(MDSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(MDSKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(MDSKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(MDSKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<MDSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<MDSKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface MDSKtor_client_coreHttpReceivePipeline : MDSKtor_utilsPipeline<MDSKtor_client_coreHttpResponse *, MDSKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MDSKotlinArray<MDSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(MDSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MDSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MDSKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface MDSKtor_client_coreHttpRequestPipeline : MDSKtor_utilsPipeline<id, MDSKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MDSKotlinArray<MDSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(MDSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MDSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MDSKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface MDSKtor_client_coreHttpResponsePipeline : MDSKtor_utilsPipeline<MDSKtor_client_coreHttpResponseContainer *, MDSKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MDSKotlinArray<MDSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(MDSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MDSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MDSKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface MDSKtor_client_coreHttpSendPipeline : MDSKtor_utilsPipeline<id, MDSKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MDSKotlinArray<MDSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(MDSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MDSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MDSKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MDSKotlinx_serialization_coreEncoder
@required
- (id<MDSKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MDSKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MDSKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<MDSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MDSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MDSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MDSKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<MDSKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MDSKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<MDSKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) MDSKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MDSKotlinx_serialization_coreDecoder
@required
- (id<MDSKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MDSKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MDSKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MDSKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MDSKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MDSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface MDSKtor_client_coreHttpRequestData : MDSBase
- (instancetype)initWithUrl:(MDSKtor_httpUrl *)url method:(MDSKtor_httpHttpMethod *)method headers:(id<MDSKtor_httpHeaders>)headers body:(MDSKtor_httpOutgoingContent *)body executionContext:(id<MDSKotlinx_coroutines_coreJob>)executionContext attributes:(id<MDSKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<MDSKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MDSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) MDSKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<MDSKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<MDSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) MDSKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) MDSKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface MDSKtor_client_coreHttpResponseData : MDSBase
- (instancetype)initWithStatusCode:(MDSKtor_httpHttpStatusCode *)statusCode requestTime:(MDSKtor_utilsGMTDate *)requestTime headers:(id<MDSKtor_httpHeaders>)headers version:(MDSKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<MDSKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<MDSKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<MDSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) MDSKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) MDSKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) MDSKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) MDSKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface MDSKotlinAbstractCoroutineContextElement : MDSBase <MDSKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<MDSKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<MDSKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol MDSKotlinContinuationInterceptor <MDSKotlinCoroutineContextElement>
@required
- (id<MDSKotlinContinuation>)interceptContinuationContinuation:(id<MDSKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<MDSKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface MDSKotlinx_coroutines_coreCoroutineDispatcher : MDSKotlinAbstractCoroutineContextElement <MDSKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<MDSKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MDSKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<MDSKotlinCoroutineContext>)context block:(id<MDSKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<MDSKotlinCoroutineContext>)context block:(id<MDSKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<MDSKotlinContinuation>)interceptContinuationContinuation:(id<MDSKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<MDSKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (MDSKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (MDSKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(MDSKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<MDSKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface MDSKtor_client_coreProxyConfig : MDSBase
- (instancetype)initWithUrl:(MDSKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol MDSKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(MDSKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) MDSKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface MDSKtor_utilsAttributeKey<T> : MDSBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface MDSKtor_eventsEventDefinition<T> : MDSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol MDSKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface MDSKtor_utilsPipelinePhase : MDSBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol MDSKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol MDSKotlinSuspendFunction2 <MDSKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface MDSKtor_client_coreHttpReceivePipelinePhases : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MDSKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) MDSKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) MDSKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol MDSKtor_httpHttpMessage
@required
@property (readonly) id<MDSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface MDSKtor_client_coreHttpResponse : MDSBase <MDSKtor_httpHttpMessage, MDSKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<MDSKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) MDSKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) MDSKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) MDSKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) MDSKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MDSKotlinUnit : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface MDSKtor_client_coreHttpRequestPipelinePhases : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MDSKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) MDSKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) MDSKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) MDSKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) MDSKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol MDSKtor_httpHttpMessageBuilder
@required
@property (readonly) MDSKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface MDSKtor_client_coreHttpRequestBuilder : MDSBase <MDSKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MDSKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (MDSKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<MDSKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<MDSKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<MDSKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (MDSKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(MDSKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (MDSKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(MDSKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(MDSKtor_httpURLBuilder *, MDSKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<MDSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property MDSKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<MDSKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) MDSKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property MDSKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) MDSKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface MDSKtor_client_coreHttpResponsePipelinePhases : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MDSKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) MDSKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) MDSKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) MDSKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) MDSKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface MDSKtor_client_coreHttpResponseContainer : MDSBase
- (instancetype)initWithExpectedType:(MDSKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (MDSKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(MDSKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface MDSKtor_client_coreHttpClientCall : MDSBase <MDSKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(MDSKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(MDSKtor_client_coreHttpClient *)client requestData:(MDSKtor_client_coreHttpRequestData *)requestData responseData:(MDSKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(MDSKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(MDSKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<MDSKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<MDSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) MDSKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<MDSKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<MDSKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property MDSKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface MDSKtor_client_coreHttpSendPipelinePhases : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MDSKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) MDSKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) MDSKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) MDSKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) MDSKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MDSKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MDSKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MDSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MDSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MDSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MDSKotlinx_serialization_coreSerializersModule : MDSBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<MDSKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MDSKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MDSKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MDSKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MDSKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MDSKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MDSKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MDSKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol MDSKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MDSKotlinx_serialization_coreSerialKind : MDSBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MDSKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MDSKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MDSKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MDSKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MDSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MDSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MDSKotlinNothing : MDSBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface MDSKtor_httpUrl : MDSBase
@property (class, readonly, getter=companion) MDSKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<MDSKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) MDSKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface MDSKtor_httpHttpMethod : MDSBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (MDSKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol MDSKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<MDSKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol MDSKtor_httpHeaders <MDSKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface MDSKtor_httpOutgoingContent : MDSBase
- (id _Nullable)getPropertyKey:(MDSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(MDSKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<MDSKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) MDSLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) MDSKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<MDSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) MDSKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol MDSKotlinx_coroutines_coreJob <MDSKotlinCoroutineContextElement>
@required
- (id<MDSKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<MDSKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(MDSKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (MDSKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<MDSKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(MDSKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<MDSKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(MDSKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<MDSKotlinx_coroutines_coreJob>)plusOther_:(id<MDSKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<MDSKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<MDSKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<MDSKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface MDSKtor_httpHttpStatusCode : MDSBase <MDSKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(MDSKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (MDSKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (MDSKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface MDSKtor_utilsGMTDate : MDSBase <MDSKotlinComparable>
@property (class, readonly, getter=companion) MDSKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(MDSKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (MDSKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(MDSKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(MDSKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) MDSKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) MDSKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface MDSKtor_httpHttpProtocolVersion : MDSBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (MDSKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol MDSKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<MDSKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface MDSKotlinAbstractCoroutineContextKey<B, E> : MDSBase <MDSKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<MDSKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<MDSKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface MDSKotlinx_coroutines_coreCoroutineDispatcherKey : MDSKotlinAbstractCoroutineContextKey<id<MDSKotlinContinuationInterceptor>, MDSKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<MDSKotlinCoroutineContextKey>)baseKey safeCast:(id<MDSKotlinCoroutineContextElement> _Nullable (^)(id<MDSKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol MDSKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol MDSKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(MDSKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(MDSLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(MDSKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(MDSLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(MDSKtor_ioChunkBuffer *)dst completionHandler:(void (^)(MDSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(MDSKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(MDSKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(MDSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(MDSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(MDSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(MDSBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(MDSByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(MDSDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(MDSFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(MDSKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(MDSKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(MDSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(MDSLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(MDSKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(MDSKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<MDSKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(MDSShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<MDSKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<MDSKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(MDSBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) MDSKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol MDSKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<MDSKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<MDSKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<MDSKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<MDSKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface MDSKtor_utilsStringValuesBuilderImpl : MDSBase <MDSKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<MDSKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<MDSKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<MDSKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<MDSKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) MDSMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface MDSKtor_httpHeadersBuilder : MDSKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<MDSKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface MDSKtor_client_coreHttpRequestBuilderCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface MDSKtor_httpURLBuilder : MDSBase
- (instancetype)initWithProtocol:(MDSKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<MDSKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (MDSKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<MDSKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<MDSKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property MDSKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface MDSKtor_utilsTypeInfo : MDSBase
- (instancetype)initWithType:(id<MDSKotlinKClass>)type reifiedType:(id<MDSKotlinKType>)reifiedType kotlinType:(id<MDSKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (MDSKtor_utilsTypeInfo *)doCopyType:(id<MDSKotlinKClass>)type reifiedType:(id<MDSKotlinKType>)reifiedType kotlinType:(id<MDSKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MDSKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<MDSKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<MDSKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface MDSKtor_client_coreHttpClientCallCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MDSKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol MDSKtor_client_coreHttpRequest <MDSKtor_httpHttpMessage, MDSKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<MDSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) MDSKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) MDSKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) MDSKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) MDSKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MDSKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MDSKotlinKClass>)kClass provider:(id<MDSKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MDSKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MDSKotlinKClass>)kClass serializer:(id<MDSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MDSKotlinKClass>)baseClass actualClass:(id<MDSKotlinKClass>)actualClass actualSerializer:(id<MDSKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MDSKotlinKClass>)baseClass defaultDeserializerProvider:(id<MDSKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MDSKotlinKClass>)baseClass defaultDeserializerProvider:(id<MDSKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<MDSKotlinKClass>)baseClass defaultSerializerProvider:(id<MDSKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MDSKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MDSKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol MDSKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol MDSKotlinKClass <MDSKotlinKDeclarationContainer, MDSKotlinKAnnotatedElement, MDSKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface MDSKtor_httpUrlCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol MDSKtor_httpParameters <MDSKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface MDSKtor_httpURLProtocol : MDSBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (MDSKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface MDSKtor_httpHttpMethodCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (MDSKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<MDSKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) MDSKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) MDSKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) MDSKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) MDSKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) MDSKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) MDSKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) MDSKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol MDSKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface MDSKtor_httpHeaderValueWithParameters : MDSBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<MDSKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<MDSKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface MDSKtor_httpContentType : MDSKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<MDSKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<MDSKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MDSKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(MDSKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (MDSKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (MDSKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol MDSKotlinx_coroutines_coreChildHandle <MDSKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(MDSKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<MDSKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol MDSKotlinx_coroutines_coreChildJob <MDSKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<MDSKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol MDSKotlinSequence
@required
- (id<MDSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol MDSKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) MDSKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<MDSKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(MDSKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<MDSKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol MDSKotlinx_coroutines_coreSelectClause0 <MDSKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface MDSKtor_httpHttpStatusCodeCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (MDSKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) MDSKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) MDSKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) MDSKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) MDSKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) MDSKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) MDSKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) MDSKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) MDSKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) MDSKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) MDSKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) MDSKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) MDSKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) MDSKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) MDSKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) MDSKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) MDSKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) MDSKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) MDSKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) MDSKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) MDSKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) MDSKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) MDSKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) MDSKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) MDSKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) MDSKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) MDSKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) MDSKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) MDSKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) MDSKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) MDSKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) MDSKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) MDSKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) MDSKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) MDSKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) MDSKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) MDSKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) MDSKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) MDSKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) MDSKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) MDSKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) MDSKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) MDSKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) MDSKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) MDSKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) MDSKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) MDSKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) MDSKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) MDSKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) MDSKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) MDSKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) MDSKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) MDSKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) MDSKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<MDSKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface MDSKtor_utilsGMTDateCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MDSKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface MDSKtor_utilsWeekDay : MDSKotlinEnum<MDSKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MDSKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MDSKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) MDSKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) MDSKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) MDSKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) MDSKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) MDSKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) MDSKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (MDSKotlinArray<MDSKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MDSKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface MDSKtor_utilsMonth : MDSKotlinEnum<MDSKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MDSKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MDSKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) MDSKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) MDSKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) MDSKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) MDSKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) MDSKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) MDSKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) MDSKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) MDSKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) MDSKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) MDSKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) MDSKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (MDSKotlinArray<MDSKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MDSKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface MDSKtor_httpHttpProtocolVersionCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (MDSKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (MDSKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) MDSKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) MDSKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) MDSKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) MDSKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) MDSKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface MDSKtor_ioMemory : MDSBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(MDSKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(MDSKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (MDSKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (MDSKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface MDSKtor_ioBuffer : MDSBase
- (instancetype)initWithMemory:(MDSKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) MDSKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (MDSKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(MDSKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) MDSKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface MDSKtor_ioChunkBuffer : MDSKtor_ioBuffer
- (instancetype)initWithMemory:(MDSKtor_ioMemory *)memory origin:(MDSKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<MDSKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
- (instancetype)initWithMemory:(MDSKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MDSKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (MDSKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (MDSKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<MDSKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) MDSKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) MDSKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface MDSKtor_ioInput : MDSBase <MDSKtor_ioCloseable>
- (instancetype)initWithHead:(MDSKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<MDSKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) MDSKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MDSKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(MDSKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int32_t)peekToBuffer:(MDSKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int64_t)peekToDestination:(MDSKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<MDSKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<MDSKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<MDSKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface MDSKtor_ioByteReadPacket : MDSKtor_ioInput
- (instancetype)initWithHead:(MDSKtor_ioChunkBuffer *)head pool:(id<MDSKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(MDSKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<MDSKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MDSKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (MDSKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MDSKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(MDSKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol MDSKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (MDSKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol MDSKotlinSuspendFunction1 <MDSKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol MDSKotlinAppendable
@required
- (id<MDSKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<MDSKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<MDSKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface MDSKtor_httpURLBuilderCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol MDSKtor_httpParametersBuilder <MDSKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((swift_name("KotlinKType")))
@protocol MDSKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<MDSKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<MDSKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface MDSKtor_httpURLProtocolCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (MDSKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) MDSKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) MDSKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) MDSKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) MDSKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) MDSKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, MDSKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface MDSKtor_httpHeaderValueParam : MDSBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (MDSKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface MDSKtor_httpHeaderValueWithParametersCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<MDSKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface MDSKtor_httpContentTypeCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (MDSKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) MDSKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol MDSKotlinx_coroutines_coreParentJob <MDSKotlinx_coroutines_coreJob>
@required
- (MDSKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol MDSKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<MDSKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<MDSKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface MDSKtor_utilsWeekDayCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (MDSKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (MDSKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface MDSKtor_utilsMonthCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (MDSKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (MDSKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface MDSKtor_ioMemoryCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MDSKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface MDSKtor_ioBufferCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MDSKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol MDSKtor_ioObjectPool <MDSKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface MDSKtor_ioChunkBufferCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MDSKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<MDSKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<MDSKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface MDSKtor_ioInputCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface MDSKtor_ioByteReadPacketCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MDSKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface MDSKotlinKTypeProjection : MDSBase
- (instancetype)initWithVariance:(MDSKotlinKVariance * _Nullable)variance type:(id<MDSKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (MDSKotlinKTypeProjection *)doCopyVariance:(MDSKotlinKVariance * _Nullable)variance type:(id<MDSKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MDSKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) MDSKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface MDSKotlinKVariance : MDSKotlinEnum<MDSKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MDSKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) MDSKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) MDSKotlinKVariance *out __attribute__((swift_name("out")));
+ (MDSKotlinArray<MDSKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MDSKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface MDSKotlinKTypeProjectionCompanion : MDSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MDSKotlinKTypeProjection *)contravariantType:(id<MDSKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MDSKotlinKTypeProjection *)covariantType:(id<MDSKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MDSKotlinKTypeProjection *)invariantType:(id<MDSKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) MDSKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
