#include <sun/swing/SwingAccessor$JLightweightFrameAccessor.h>
#include <sun/swing/JLightweightFrame.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLightweightFrame = ::sun::swing::JLightweightFrame;

namespace sun {
	namespace swing {

$Class* SwingAccessor$JLightweightFrameAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"updateCursor", "(Lsun/swing/JLightweightFrame;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwingAccessor$JLightweightFrameAccessor, updateCursor, void, $JLightweightFrame*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.SwingAccessor$JLightweightFrameAccessor", "sun.swing.SwingAccessor", "JLightweightFrameAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.swing.SwingAccessor$JLightweightFrameAccessor",
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
		"sun.swing.SwingAccessor"
	};
	$loadClass(SwingAccessor$JLightweightFrameAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingAccessor$JLightweightFrameAccessor);
	});
	return class$;
}

$Class* SwingAccessor$JLightweightFrameAccessor::class$ = nullptr;

	} // swing
} // sun