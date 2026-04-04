#include <sun/awt/AWTAccessor$DefaultKeyboardFocusManagerAccessor.h>
#include <java/awt/DefaultKeyboardFocusManager.h>
#include <java/awt/event/KeyEvent.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $DefaultKeyboardFocusManager = ::java::awt::DefaultKeyboardFocusManager;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$DefaultKeyboardFocusManagerAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"consumeNextKeyTyped", "(Ljava/awt/DefaultKeyboardFocusManager;Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$DefaultKeyboardFocusManagerAccessor, consumeNextKeyTyped, void, $DefaultKeyboardFocusManager*, $KeyEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$DefaultKeyboardFocusManagerAccessor", "sun.awt.AWTAccessor", "DefaultKeyboardFocusManagerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$DefaultKeyboardFocusManagerAccessor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.AWTAccessor"
	};
	$loadClass(AWTAccessor$DefaultKeyboardFocusManagerAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$DefaultKeyboardFocusManagerAccessor);
	});
	return class$;
}

$Class* AWTAccessor$DefaultKeyboardFocusManagerAccessor::class$ = nullptr;

	} // awt
} // sun