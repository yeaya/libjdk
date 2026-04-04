#include <sun/awt/AWTAccessor$FrameAccessor.h>
#include <java/awt/Frame.h>
#include <java/awt/Rectangle.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $Frame = ::java::awt::Frame;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$FrameAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getExtendedState", "(Ljava/awt/Frame;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$FrameAccessor, getExtendedState, int32_t, $Frame*)},
		{"getMaximizedBounds", "(Ljava/awt/Frame;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$FrameAccessor, getMaximizedBounds, $Rectangle*, $Frame*)},
		{"setExtendedState", "(Ljava/awt/Frame;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$FrameAccessor, setExtendedState, void, $Frame*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$FrameAccessor", "sun.awt.AWTAccessor", "FrameAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$FrameAccessor",
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
	$loadClass(AWTAccessor$FrameAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$FrameAccessor);
	});
	return class$;
}

$Class* AWTAccessor$FrameAccessor::class$ = nullptr;

	} // awt
} // sun