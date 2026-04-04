#include <sun/swing/JLightweightFrame$1.h>
#include <sun/swing/JLightweightFrame.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLightweightFrame = ::sun::swing::JLightweightFrame;

namespace sun {
	namespace swing {

void JLightweightFrame$1::init$() {
}

void JLightweightFrame$1::updateCursor($JLightweightFrame* frame) {
	$nc(frame)->updateClientCursor();
}

JLightweightFrame$1::JLightweightFrame$1() {
}

$Class* JLightweightFrame$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JLightweightFrame$1, init$, void)},
		{"updateCursor", "(Lsun/swing/JLightweightFrame;)V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame$1, updateCursor, void, $JLightweightFrame*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.JLightweightFrame",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.JLightweightFrame$1", nullptr, nullptr, 0},
		{"sun.swing.SwingAccessor$JLightweightFrameAccessor", "sun.swing.SwingAccessor", "JLightweightFrameAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.JLightweightFrame$1",
		"java.lang.Object",
		"sun.swing.SwingAccessor$JLightweightFrameAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.JLightweightFrame"
	};
	$loadClass(JLightweightFrame$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JLightweightFrame$1);
	});
	return class$;
}

$Class* JLightweightFrame$1::class$ = nullptr;

	} // swing
} // sun