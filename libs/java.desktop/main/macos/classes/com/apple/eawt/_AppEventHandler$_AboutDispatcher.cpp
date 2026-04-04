#include <com/apple/eawt/_AppEventHandler$_AboutDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_AppEventDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <java/awt/desktop/AboutEvent.h>
#include <java/awt/desktop/AboutHandler.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_AppEventDispatcher = ::com::apple::eawt::_AppEventHandler$_AppEventDispatcher;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $AboutEvent = ::java::awt::desktop::AboutEvent;
using $AboutHandler = ::java::awt::desktop::AboutHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

void _AppEventHandler$_AboutDispatcher::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$_AppEventHandler$_AppEventDispatcher::init$(this$0);
}

void _AppEventHandler$_AboutDispatcher::performDefaultAction($_AppEventHandler$_NativeEvent* event) {
	this->this$0->openCocoaAboutWindow();
}

void _AppEventHandler$_AboutDispatcher::performUsing($AboutHandler* handler, $_AppEventHandler$_NativeEvent* event) {
	$nc(handler)->handleAbout($$new($AboutEvent));
}

void _AppEventHandler$_AboutDispatcher::performUsing(Object$* handler, $_AppEventHandler$_NativeEvent* event) {
	this->performUsing($cast($AboutHandler, handler), event);
}

_AppEventHandler$_AboutDispatcher::_AppEventHandler$_AboutDispatcher() {
}

$Class* _AppEventHandler$_AboutDispatcher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_AboutDispatcher, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(_AppEventHandler$_AboutDispatcher, init$, void, $_AppEventHandler*)},
		{"performDefaultAction", "(Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, 0, $virtualMethod(_AppEventHandler$_AboutDispatcher, performDefaultAction, void, $_AppEventHandler$_NativeEvent*)},
		{"performUsing", "(Ljava/awt/desktop/AboutHandler;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, 0, $virtualMethod(_AppEventHandler$_AboutDispatcher, performUsing, void, $AboutHandler*, $_AppEventHandler$_NativeEvent*)},
		{"performUsing", "(Ljava/lang/Object;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(_AppEventHandler$_AboutDispatcher, performUsing, void, Object$*, $_AppEventHandler$_NativeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.eawt._AppEventHandler$_AboutDispatcher", "com.apple.eawt._AppEventHandler", "_AboutDispatcher", 0},
		{"com.apple.eawt._AppEventHandler$_AppEventDispatcher", "com.apple.eawt._AppEventHandler", "_AppEventDispatcher", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.eawt._AppEventHandler$_AboutDispatcher",
		"com.apple.eawt._AppEventHandler$_AppEventDispatcher",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/apple/eawt/_AppEventHandler$_AppEventDispatcher<Ljava/awt/desktop/AboutHandler;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.eawt._AppEventHandler"
	};
	$loadClass(_AppEventHandler$_AboutDispatcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(_AppEventHandler$_AboutDispatcher);
	});
	return class$;
}

$Class* _AppEventHandler$_AboutDispatcher::class$ = nullptr;

		} // eawt
	} // apple
} // com