#include <sun/awt/AWTAccessor$DragSourceContextAccessor.h>
#include <java/awt/dnd/DragSourceContext.h>
#include <java/awt/dnd/peer/DragSourceContextPeer.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $DragSourceContext = ::java::awt::dnd::DragSourceContext;
using $DragSourceContextPeer = ::java::awt::dnd::peer::DragSourceContextPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$DragSourceContextAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getPeer", "(Ljava/awt/dnd/DragSourceContext;)Ljava/awt/dnd/peer/DragSourceContextPeer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$DragSourceContextAccessor, getPeer, $DragSourceContextPeer*, $DragSourceContext*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$DragSourceContextAccessor", "sun.awt.AWTAccessor", "DragSourceContextAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$DragSourceContextAccessor",
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
	$loadClass(AWTAccessor$DragSourceContextAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$DragSourceContextAccessor);
	});
	return class$;
}

$Class* AWTAccessor$DragSourceContextAccessor::class$ = nullptr;

	} // awt
} // sun