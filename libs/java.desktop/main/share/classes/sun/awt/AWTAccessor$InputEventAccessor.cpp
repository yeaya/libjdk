#include <sun/awt/AWTAccessor$InputEventAccessor.h>
#include <java/awt/event/InputEvent.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$InputEventAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"canAccessSystemClipboard", "(Ljava/awt/event/InputEvent;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$InputEventAccessor, canAccessSystemClipboard, bool, $InputEvent*)},
		{"getButtonDownMasks", "()[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$InputEventAccessor, getButtonDownMasks, $ints*)},
		{"setCanAccessSystemClipboard", "(Ljava/awt/event/InputEvent;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$InputEventAccessor, setCanAccessSystemClipboard, void, $InputEvent*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$InputEventAccessor", "sun.awt.AWTAccessor", "InputEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$InputEventAccessor",
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
	$loadClass(AWTAccessor$InputEventAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$InputEventAccessor);
	});
	return class$;
}

$Class* AWTAccessor$InputEventAccessor::class$ = nullptr;

	} // awt
} // sun