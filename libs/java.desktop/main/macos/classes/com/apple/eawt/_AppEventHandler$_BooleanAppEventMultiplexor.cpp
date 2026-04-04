#include <com/apple/eawt/_AppEventHandler$_BooleanAppEventMultiplexor.h>
#include <com/apple/eawt/_AppEventHandler$_AppEventMultiplexor.h>
#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <jcpp.h>

#undef TRUE

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_AppEventMultiplexor = ::com::apple::eawt::_AppEventHandler$_AppEventMultiplexor;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

void _AppEventHandler$_BooleanAppEventMultiplexor::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$_AppEventHandler$_AppEventMultiplexor::init$(this$0);
}

void _AppEventHandler$_BooleanAppEventMultiplexor::performOnListener(Object$* listener, $_AppEventHandler$_NativeEvent* event) {
	$useLocalObjectStack();
	bool isTrue = $nc($Boolean::TRUE)->equals($($nc(event)->get(0)));
	$var($Object, e, createEvent(isTrue));
	if (isTrue) {
		performTrueEventOn(listener, e);
	} else {
		performFalseEventOn(listener, e);
	}
}

_AppEventHandler$_BooleanAppEventMultiplexor::_AppEventHandler$_BooleanAppEventMultiplexor() {
}

$Class* _AppEventHandler$_BooleanAppEventMultiplexor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_BooleanAppEventMultiplexor, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(_AppEventHandler$_BooleanAppEventMultiplexor, init$, void, $_AppEventHandler*)},
		{"createEvent", "(Z)Ljava/lang/Object;", "(Z)TE;", $ABSTRACT, $virtualMethod(_AppEventHandler$_BooleanAppEventMultiplexor, createEvent, $Object*, bool)},
		{"performFalseEventOn", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TL;TE;)V", $ABSTRACT, $virtualMethod(_AppEventHandler$_BooleanAppEventMultiplexor, performFalseEventOn, void, Object$*, Object$*)},
		{"performOnListener", "(Ljava/lang/Object;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", "(TL;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", 0, $virtualMethod(_AppEventHandler$_BooleanAppEventMultiplexor, performOnListener, void, Object$*, $_AppEventHandler$_NativeEvent*)},
		{"performTrueEventOn", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TL;TE;)V", $ABSTRACT, $virtualMethod(_AppEventHandler$_BooleanAppEventMultiplexor, performTrueEventOn, void, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor", "com.apple.eawt._AppEventHandler", "_BooleanAppEventMultiplexor", $ABSTRACT},
		{"com.apple.eawt._AppEventHandler$_AppEventMultiplexor", "com.apple.eawt._AppEventHandler", "_AppEventMultiplexor", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor",
		"com.apple.eawt._AppEventHandler$_AppEventMultiplexor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<L:Ljava/lang/Object;E:Ljava/lang/Object;>Lcom/apple/eawt/_AppEventHandler$_AppEventMultiplexor<TL;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.eawt._AppEventHandler"
	};
	$loadClass(_AppEventHandler$_BooleanAppEventMultiplexor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(_AppEventHandler$_BooleanAppEventMultiplexor);
	});
	return class$;
}

$Class* _AppEventHandler$_BooleanAppEventMultiplexor::class$ = nullptr;

		} // eawt
	} // apple
} // com