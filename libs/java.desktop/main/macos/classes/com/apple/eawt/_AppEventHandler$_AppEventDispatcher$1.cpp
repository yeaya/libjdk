#include <com/apple/eawt/_AppEventHandler$_AppEventDispatcher$1.h>
#include <com/apple/eawt/_AppEventHandler$_AppEventDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <jcpp.h>

using $_AppEventHandler$_AppEventDispatcher = ::com::apple::eawt::_AppEventHandler$_AppEventDispatcher;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

void _AppEventHandler$_AppEventDispatcher$1::init$($_AppEventHandler$_AppEventDispatcher* this$1, Object$* val$localHandler, $_AppEventHandler$_NativeEvent* val$event) {
	$set(this, this$1, this$1);
	$set(this, val$localHandler, val$localHandler);
	$set(this, val$event, val$event);
}

void _AppEventHandler$_AppEventDispatcher$1::run() {
	this->this$1->performUsing(this->val$localHandler, this->val$event);
}

_AppEventHandler$_AppEventDispatcher$1::_AppEventHandler$_AppEventDispatcher$1() {
}

$Class* _AppEventHandler$_AppEventDispatcher$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/apple/eawt/_AppEventHandler$_AppEventDispatcher;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_AppEventDispatcher$1, this$1)},
		{"val$event", "Lcom/apple/eawt/_AppEventHandler$_NativeEvent;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_AppEventDispatcher$1, val$event)},
		{"val$localHandler", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_AppEventDispatcher$1, val$localHandler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/eawt/_AppEventHandler$_AppEventDispatcher;Ljava/lang/Object;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", "()V", 0, $method(_AppEventHandler$_AppEventDispatcher$1, init$, void, $_AppEventHandler$_AppEventDispatcher*, Object$*, $_AppEventHandler$_NativeEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(_AppEventHandler$_AppEventDispatcher$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.eawt._AppEventHandler$_AppEventDispatcher",
		"dispatch",
		"(Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.eawt._AppEventHandler$_AppEventDispatcher", "com.apple.eawt._AppEventHandler", "_AppEventDispatcher", $ABSTRACT},
		{"com.apple.eawt._AppEventHandler$_AppEventDispatcher$1", nullptr, nullptr, 0},
		{"com.apple.eawt._AppEventHandler$_NativeEvent", "com.apple.eawt._AppEventHandler", "_NativeEvent", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.eawt._AppEventHandler$_AppEventDispatcher$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.eawt._AppEventHandler"
	};
	$loadClass(_AppEventHandler$_AppEventDispatcher$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(_AppEventHandler$_AppEventDispatcher$1);
	});
	return class$;
}

$Class* _AppEventHandler$_AppEventDispatcher$1::class$ = nullptr;

		} // eawt
	} // apple
} // com