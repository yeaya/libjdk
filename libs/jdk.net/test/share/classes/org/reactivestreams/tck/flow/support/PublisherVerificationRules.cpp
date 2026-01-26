#include <org/reactivestreams/tck/flow/support/PublisherVerificationRules.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

$MethodInfo _PublisherVerificationRules_MethodInfo_[] = {
	{"optional_spec104_mustSignalOnErrorWhenFails", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, optional_spec104_mustSignalOnErrorWhenFails, void), "java.lang.Throwable"},
	{"optional_spec105_emptyStreamMustTerminateBySignallingOnComplete", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, optional_spec105_emptyStreamMustTerminateBySignallingOnComplete, void), "java.lang.Throwable"},
	{"optional_spec111_maySupportMultiSubscribe", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, optional_spec111_maySupportMultiSubscribe, void), "java.lang.Throwable"},
	{"optional_spec111_multicast_mustProduceTheSameElementsInTheSameSequenceToAllOfItsSubscribersWhenRequestingManyUpfront", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, optional_spec111_multicast_mustProduceTheSameElementsInTheSameSequenceToAllOfItsSubscribersWhenRequestingManyUpfront, void), "java.lang.Throwable"},
	{"optional_spec111_multicast_mustProduceTheSameElementsInTheSameSequenceToAllOfItsSubscribersWhenRequestingManyUpfrontAndCompleteAsExpected", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, optional_spec111_multicast_mustProduceTheSameElementsInTheSameSequenceToAllOfItsSubscribersWhenRequestingManyUpfrontAndCompleteAsExpected, void), "java.lang.Throwable"},
	{"optional_spec111_multicast_mustProduceTheSameElementsInTheSameSequenceToAllOfItsSubscribersWhenRequestingOneByOne", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, optional_spec111_multicast_mustProduceTheSameElementsInTheSameSequenceToAllOfItsSubscribersWhenRequestingOneByOne, void), "java.lang.Throwable"},
	{"optional_spec111_registeredSubscribersMustReceiveOnNextOrOnCompleteSignals", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, optional_spec111_registeredSubscribersMustReceiveOnNextOrOnCompleteSignals, void), "java.lang.Throwable"},
	{"optional_spec309_requestNegativeNumberMaySignalIllegalArgumentExceptionWithSpecificMessage", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, optional_spec309_requestNegativeNumberMaySignalIllegalArgumentExceptionWithSpecificMessage, void), "java.lang.Throwable"},
	{"required_createPublisher1MustProduceAStreamOfExactly1Element", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_createPublisher1MustProduceAStreamOfExactly1Element, void), "java.lang.Throwable"},
	{"required_createPublisher3MustProduceAStreamOfExactly3Elements", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_createPublisher3MustProduceAStreamOfExactly3Elements, void), "java.lang.Throwable"},
	{"required_spec101_subscriptionRequestMustResultInTheCorrectNumberOfProducedElements", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec101_subscriptionRequestMustResultInTheCorrectNumberOfProducedElements, void), "java.lang.Throwable"},
	{"required_spec102_maySignalLessThanRequestedAndTerminateSubscription", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec102_maySignalLessThanRequestedAndTerminateSubscription, void), "java.lang.Throwable"},
	{"required_spec105_mustSignalOnCompleteWhenFiniteStreamTerminates", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec105_mustSignalOnCompleteWhenFiniteStreamTerminates, void), "java.lang.Throwable"},
	{"required_spec107_mustNotEmitFurtherSignalsOnceOnCompleteHasBeenSignalled", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec107_mustNotEmitFurtherSignalsOnceOnCompleteHasBeenSignalled, void), "java.lang.Throwable"},
	{"required_spec109_mayRejectCallsToSubscribeIfPublisherIsUnableOrUnwillingToServeThemRejectionMustTriggerOnErrorAfterOnSubscribe", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec109_mayRejectCallsToSubscribeIfPublisherIsUnableOrUnwillingToServeThemRejectionMustTriggerOnErrorAfterOnSubscribe, void), "java.lang.Throwable"},
	{"required_spec109_mustIssueOnSubscribeForNonNullSubscriber", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec109_mustIssueOnSubscribeForNonNullSubscriber, void), "java.lang.Throwable"},
	{"required_spec109_subscribeThrowNPEOnNullSubscriber", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec109_subscribeThrowNPEOnNullSubscriber, void), "java.lang.Throwable"},
	{"required_spec302_mustAllowSynchronousRequestCallsFromOnNextAndOnSubscribe", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec302_mustAllowSynchronousRequestCallsFromOnNextAndOnSubscribe, void), "java.lang.Throwable"},
	{"required_spec303_mustNotAllowUnboundedRecursion", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec303_mustNotAllowUnboundedRecursion, void), "java.lang.Throwable"},
	{"required_spec306_afterSubscriptionIsCancelledRequestMustBeNops", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec306_afterSubscriptionIsCancelledRequestMustBeNops, void), "java.lang.Throwable"},
	{"required_spec307_afterSubscriptionIsCancelledAdditionalCancelationsMustBeNops", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec307_afterSubscriptionIsCancelledAdditionalCancelationsMustBeNops, void), "java.lang.Throwable"},
	{"required_spec309_requestNegativeNumberMustSignalIllegalArgumentException", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec309_requestNegativeNumberMustSignalIllegalArgumentException, void), "java.lang.Throwable"},
	{"required_spec309_requestZeroMustSignalIllegalArgumentException", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec309_requestZeroMustSignalIllegalArgumentException, void), "java.lang.Throwable"},
	{"required_spec312_cancelMustMakeThePublisherToEventuallyStopSignaling", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec312_cancelMustMakeThePublisherToEventuallyStopSignaling, void), "java.lang.Throwable"},
	{"required_spec313_cancelMustMakeThePublisherEventuallyDropAllReferencesToTheSubscriber", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec313_cancelMustMakeThePublisherEventuallyDropAllReferencesToTheSubscriber, void), "java.lang.Throwable"},
	{"required_spec317_mustNotSignalOnErrorWhenPendingAboveLongMaxValue", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec317_mustNotSignalOnErrorWhenPendingAboveLongMaxValue, void), "java.lang.Throwable"},
	{"required_spec317_mustSupportACumulativePendingElementCountUpToLongMaxValue", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec317_mustSupportACumulativePendingElementCountUpToLongMaxValue, void), "java.lang.Throwable"},
	{"required_spec317_mustSupportAPendingElementCountUpToLongMaxValue", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_spec317_mustSupportAPendingElementCountUpToLongMaxValue, void), "java.lang.Throwable"},
	{"required_validate_boundedDepthOfOnNextAndRequestRecursion", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_validate_boundedDepthOfOnNextAndRequestRecursion, void), "java.lang.Exception"},
	{"required_validate_maxElementsFromPublisher", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, required_validate_maxElementsFromPublisher, void), "java.lang.Exception"},
	{"stochastic_spec103_mustSignalOnMethodsSequentially", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, stochastic_spec103_mustSignalOnMethodsSequentially, void), "java.lang.Throwable"},
	{"untested_spec106_mustConsiderSubscriptionCancelledAfterOnErrorOrOnCompleteHasBeenCalled", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, untested_spec106_mustConsiderSubscriptionCancelledAfterOnErrorOrOnCompleteHasBeenCalled, void), "java.lang.Throwable"},
	{"untested_spec107_mustNotEmitFurtherSignalsOnceOnErrorHasBeenSignalled", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, untested_spec107_mustNotEmitFurtherSignalsOnceOnErrorHasBeenSignalled, void), "java.lang.Throwable"},
	{"untested_spec108_possiblyCanceledSubscriptionShouldNotReceiveOnErrorOrOnCompleteSignals", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, untested_spec108_possiblyCanceledSubscriptionShouldNotReceiveOnErrorOrOnCompleteSignals, void), "java.lang.Throwable"},
	{"untested_spec109_subscribeShouldNotThrowNonFatalThrowable", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, untested_spec109_subscribeShouldNotThrowNonFatalThrowable, void), "java.lang.Throwable"},
	{"untested_spec110_rejectASubscriptionRequestIfTheSameSubscriberSubscribesTwice", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, untested_spec110_rejectASubscriptionRequestIfTheSameSubscriberSubscribesTwice, void), "java.lang.Throwable"},
	{"untested_spec304_requestShouldNotPerformHeavyComputations", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, untested_spec304_requestShouldNotPerformHeavyComputations, void), "java.lang.Exception"},
	{"untested_spec305_cancelMustNotSynchronouslyPerformHeavyComputation", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PublisherVerificationRules, untested_spec305_cancelMustNotSynchronouslyPerformHeavyComputation, void), "java.lang.Exception"},
	{}
};

$ClassInfo _PublisherVerificationRules_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.reactivestreams.tck.flow.support.PublisherVerificationRules",
	nullptr,
	nullptr,
	nullptr,
	_PublisherVerificationRules_MethodInfo_
};

$Object* allocate$PublisherVerificationRules($Class* clazz) {
	return $of($alloc(PublisherVerificationRules));
}

$Class* PublisherVerificationRules::load$($String* name, bool initialize) {
	$loadClass(PublisherVerificationRules, name, initialize, &_PublisherVerificationRules_ClassInfo_, allocate$PublisherVerificationRules);
	return class$;
}

$Class* PublisherVerificationRules::class$ = nullptr;

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org