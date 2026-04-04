#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <java/awt/event/MouseEvent.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$MouseEventAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isCausedByTouchEvent", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$MouseEventAccessor, isCausedByTouchEvent, bool, $MouseEvent*)},
		{"setCausedByTouchEvent", "(Ljava/awt/event/MouseEvent;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$MouseEventAccessor, setCausedByTouchEvent, void, $MouseEvent*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$MouseEventAccessor", "sun.awt.AWTAccessor", "MouseEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$MouseEventAccessor",
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
	$loadClass(AWTAccessor$MouseEventAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$MouseEventAccessor);
	});
	return class$;
}

$Class* AWTAccessor$MouseEventAccessor::class$ = nullptr;

	} // awt
} // sun