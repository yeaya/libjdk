#include <com/apple/eawt/_AppMiscHandlers.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppMiscHandlers_FieldInfo_[] = {
	{"isSuddenTerminationEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(_AppMiscHandlers, isSuddenTerminationEnabled)},
	{}
};

$MethodInfo __AppMiscHandlers_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(_AppMiscHandlers, init$, void)},
	{"disableSuddenTermination", "()V", nullptr, $STATIC, $staticMethod(_AppMiscHandlers, disableSuddenTermination, void)},
	{"enableSuddenTermination", "()V", nullptr, $STATIC, $staticMethod(_AppMiscHandlers, enableSuddenTermination, void)},
	{"isSuddenTerminationEnbaled", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(_AppMiscHandlers, isSuddenTerminationEnbaled, bool)},
	{"nativeDisableSuddenTermination", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(_AppMiscHandlers, nativeDisableSuddenTermination, void)},
	{"nativeEnableSuddenTermination", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(_AppMiscHandlers, nativeEnableSuddenTermination, void)},
	{"nativeOpenHelpViewer", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(_AppMiscHandlers, nativeOpenHelpViewer, void)},
	{"nativeRequestActivation", "(Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(_AppMiscHandlers, nativeRequestActivation, void, bool)},
	{"nativeRequestUserAttention", "(Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(_AppMiscHandlers, nativeRequestUserAttention, void, bool)},
	{"openHelpViewer", "()V", nullptr, $STATIC, $staticMethod(_AppMiscHandlers, openHelpViewer, void)},
	{"requestActivation", "(Z)V", nullptr, $STATIC, $staticMethod(_AppMiscHandlers, requestActivation, void, bool)},
	{"requestUserAttention", "(Z)V", nullptr, $STATIC, $staticMethod(_AppMiscHandlers, requestUserAttention, void, bool)},
	{}
};

#define _METHOD_INDEX_nativeDisableSuddenTermination 4
#define _METHOD_INDEX_nativeEnableSuddenTermination 5
#define _METHOD_INDEX_nativeOpenHelpViewer 6
#define _METHOD_INDEX_nativeRequestActivation 7
#define _METHOD_INDEX_nativeRequestUserAttention 8

$ClassInfo __AppMiscHandlers_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt._AppMiscHandlers",
	"java.lang.Object",
	nullptr,
	__AppMiscHandlers_FieldInfo_,
	__AppMiscHandlers_MethodInfo_
};

$Object* allocate$_AppMiscHandlers($Class* clazz) {
	return $of($alloc(_AppMiscHandlers));
}

bool _AppMiscHandlers::isSuddenTerminationEnabled = false;

void _AppMiscHandlers::init$() {
}

void _AppMiscHandlers::nativeOpenHelpViewer() {
	$init(_AppMiscHandlers);
	$prepareNativeStatic(_AppMiscHandlers, nativeOpenHelpViewer, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void _AppMiscHandlers::nativeRequestActivation(bool allWindows) {
	$init(_AppMiscHandlers);
	$prepareNativeStatic(_AppMiscHandlers, nativeRequestActivation, void, bool allWindows);
	$invokeNativeStatic(allWindows);
	$finishNativeStatic();
}

void _AppMiscHandlers::nativeRequestUserAttention(bool critical) {
	$init(_AppMiscHandlers);
	$prepareNativeStatic(_AppMiscHandlers, nativeRequestUserAttention, void, bool critical);
	$invokeNativeStatic(critical);
	$finishNativeStatic();
}

void _AppMiscHandlers::nativeEnableSuddenTermination() {
	$init(_AppMiscHandlers);
	$prepareNativeStatic(_AppMiscHandlers, nativeEnableSuddenTermination, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void _AppMiscHandlers::nativeDisableSuddenTermination() {
	$init(_AppMiscHandlers);
	$prepareNativeStatic(_AppMiscHandlers, nativeDisableSuddenTermination, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void _AppMiscHandlers::openHelpViewer() {
	nativeOpenHelpViewer();
}

void _AppMiscHandlers::requestActivation(bool allWindows) {
	nativeRequestActivation(allWindows);
}

void _AppMiscHandlers::requestUserAttention(bool critical) {
	nativeRequestUserAttention(critical);
}

void _AppMiscHandlers::enableSuddenTermination() {
	$init(_AppMiscHandlers);
	_AppMiscHandlers::isSuddenTerminationEnabled = true;
	nativeEnableSuddenTermination();
}

void _AppMiscHandlers::disableSuddenTermination() {
	$init(_AppMiscHandlers);
	_AppMiscHandlers::isSuddenTerminationEnabled = false;
	nativeDisableSuddenTermination();
}

bool _AppMiscHandlers::isSuddenTerminationEnbaled() {
	$init(_AppMiscHandlers);
	return _AppMiscHandlers::isSuddenTerminationEnabled;
}

_AppMiscHandlers::_AppMiscHandlers() {
}

$Class* _AppMiscHandlers::load$($String* name, bool initialize) {
	$loadClass(_AppMiscHandlers, name, initialize, &__AppMiscHandlers_ClassInfo_, allocate$_AppMiscHandlers);
	return class$;
}

$Class* _AppMiscHandlers::class$ = nullptr;

		} // eawt
	} // apple
} // com