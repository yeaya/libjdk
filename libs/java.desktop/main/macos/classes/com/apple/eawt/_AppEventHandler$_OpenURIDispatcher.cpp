#include <com/apple/eawt/_AppEventHandler$_OpenURIDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <com/apple/eawt/_AppEventHandler$_QueuingAppEventDispatcher.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <java/awt/desktop/OpenURIEvent.h>
#include <java/awt/desktop/OpenURIHandler.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $_AppEventHandler$_QueuingAppEventDispatcher = ::com::apple::eawt::_AppEventHandler$_QueuingAppEventDispatcher;
using $OpenURIEvent = ::java::awt::desktop::OpenURIEvent;
using $OpenURIHandler = ::java::awt::desktop::OpenURIHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;

namespace com {
	namespace apple {
		namespace eawt {

void _AppEventHandler$_OpenURIDispatcher::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$_AppEventHandler$_QueuingAppEventDispatcher::init$(this$0);
}

void _AppEventHandler$_OpenURIDispatcher::performUsing($OpenURIHandler* handler, $_AppEventHandler$_NativeEvent* event) {
	$useLocalObjectStack();
	$var($String, urlString, $cast($String, $nc(event)->get(0)));
	try {
		$nc(handler)->openURI($$new($OpenURIEvent, $$new($URI, urlString)));
	} catch ($URISyntaxException& e) {
		$throwNew($RuntimeException, e);
	}
}

void _AppEventHandler$_OpenURIDispatcher::performUsing(Object$* handler, $_AppEventHandler$_NativeEvent* event) {
	this->performUsing($cast($OpenURIHandler, handler), event);
}

_AppEventHandler$_OpenURIDispatcher::_AppEventHandler$_OpenURIDispatcher() {
}

$Class* _AppEventHandler$_OpenURIDispatcher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_OpenURIDispatcher, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(_AppEventHandler$_OpenURIDispatcher, init$, void, $_AppEventHandler*)},
		{"performUsing", "(Ljava/awt/desktop/OpenURIHandler;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, 0, $virtualMethod(_AppEventHandler$_OpenURIDispatcher, performUsing, void, $OpenURIHandler*, $_AppEventHandler$_NativeEvent*)},
		{"performUsing", "(Ljava/lang/Object;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(_AppEventHandler$_OpenURIDispatcher, performUsing, void, Object$*, $_AppEventHandler$_NativeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.eawt._AppEventHandler$_OpenURIDispatcher", "com.apple.eawt._AppEventHandler", "_OpenURIDispatcher", 0},
		{"com.apple.eawt._AppEventHandler$_QueuingAppEventDispatcher", "com.apple.eawt._AppEventHandler", "_QueuingAppEventDispatcher", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.eawt._AppEventHandler$_OpenURIDispatcher",
		"com.apple.eawt._AppEventHandler$_QueuingAppEventDispatcher",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/apple/eawt/_AppEventHandler$_QueuingAppEventDispatcher<Ljava/awt/desktop/OpenURIHandler;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.eawt._AppEventHandler"
	};
	$loadClass(_AppEventHandler$_OpenURIDispatcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(_AppEventHandler$_OpenURIDispatcher);
	});
	return class$;
}

$Class* _AppEventHandler$_OpenURIDispatcher::class$ = nullptr;

		} // eawt
	} // apple
} // com