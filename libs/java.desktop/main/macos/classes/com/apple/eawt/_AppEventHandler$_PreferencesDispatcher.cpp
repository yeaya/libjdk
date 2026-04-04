#include <com/apple/eawt/_AppEventHandler$_PreferencesDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_AppEventDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <com/apple/eawt/_AppMenuBarHandler.h>
#include <java/awt/desktop/PreferencesEvent.h>
#include <java/awt/desktop/PreferencesHandler.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_AppEventDispatcher = ::com::apple::eawt::_AppEventHandler$_AppEventDispatcher;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $_AppMenuBarHandler = ::com::apple::eawt::_AppMenuBarHandler;
using $PreferencesEvent = ::java::awt::desktop::PreferencesEvent;
using $PreferencesHandler = ::java::awt::desktop::PreferencesHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

void _AppEventHandler$_PreferencesDispatcher::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$_AppEventHandler$_AppEventDispatcher::init$(this$0);
}

void _AppEventHandler$_PreferencesDispatcher::setHandler($PreferencesHandler* handler) {
	$synchronized(this) {
		$useLocalObjectStack();
		$_AppEventHandler$_AppEventDispatcher::setHandler(handler);
		$$nc($_AppMenuBarHandler::getInstance())->setPreferencesMenuItemVisible(handler != nullptr);
		$$nc($_AppMenuBarHandler::getInstance())->setPreferencesMenuItemEnabled(handler != nullptr);
	}
}

void _AppEventHandler$_PreferencesDispatcher::performUsing($PreferencesHandler* handler, $_AppEventHandler$_NativeEvent* event) {
	$nc(handler)->handlePreferences($$new($PreferencesEvent));
}

void _AppEventHandler$_PreferencesDispatcher::performUsing(Object$* handler, $_AppEventHandler$_NativeEvent* event) {
	this->performUsing($cast($PreferencesHandler, handler), event);
}

void _AppEventHandler$_PreferencesDispatcher::setHandler(Object$* handler) {
	this->setHandler($cast($PreferencesHandler, handler));
}

_AppEventHandler$_PreferencesDispatcher::_AppEventHandler$_PreferencesDispatcher() {
}

$Class* _AppEventHandler$_PreferencesDispatcher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_PreferencesDispatcher, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(_AppEventHandler$_PreferencesDispatcher, init$, void, $_AppEventHandler*)},
		{"performUsing", "(Ljava/awt/desktop/PreferencesHandler;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, 0, $virtualMethod(_AppEventHandler$_PreferencesDispatcher, performUsing, void, $PreferencesHandler*, $_AppEventHandler$_NativeEvent*)},
		{"performUsing", "(Ljava/lang/Object;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(_AppEventHandler$_PreferencesDispatcher, performUsing, void, Object$*, $_AppEventHandler$_NativeEvent*)},
		{"setHandler", "(Ljava/awt/desktop/PreferencesHandler;)V", nullptr, $SYNCHRONIZED, $virtualMethod(_AppEventHandler$_PreferencesDispatcher, setHandler, void, $PreferencesHandler*)},
		{"setHandler", "(Ljava/lang/Object;)V", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(_AppEventHandler$_PreferencesDispatcher, setHandler, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.eawt._AppEventHandler$_PreferencesDispatcher", "com.apple.eawt._AppEventHandler", "_PreferencesDispatcher", 0},
		{"com.apple.eawt._AppEventHandler$_AppEventDispatcher", "com.apple.eawt._AppEventHandler", "_AppEventDispatcher", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.eawt._AppEventHandler$_PreferencesDispatcher",
		"com.apple.eawt._AppEventHandler$_AppEventDispatcher",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/apple/eawt/_AppEventHandler$_AppEventDispatcher<Ljava/awt/desktop/PreferencesHandler;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.eawt._AppEventHandler"
	};
	$loadClass(_AppEventHandler$_PreferencesDispatcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(_AppEventHandler$_PreferencesDispatcher);
	});
	return class$;
}

$Class* _AppEventHandler$_PreferencesDispatcher::class$ = nullptr;

		} // eawt
	} // apple
} // com