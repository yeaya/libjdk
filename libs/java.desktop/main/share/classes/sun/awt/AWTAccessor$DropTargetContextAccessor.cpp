#include <sun/awt/AWTAccessor$DropTargetContextAccessor.h>
#include <java/awt/dnd/DropTargetContext.h>
#include <java/awt/dnd/peer/DropTargetContextPeer.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $DropTargetContext = ::java::awt::dnd::DropTargetContext;
using $DropTargetContextPeer = ::java::awt::dnd::peer::DropTargetContextPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$DropTargetContextAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"reset", "(Ljava/awt/dnd/DropTargetContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$DropTargetContextAccessor, reset, void, $DropTargetContext*)},
		{"setDropTargetContextPeer", "(Ljava/awt/dnd/DropTargetContext;Ljava/awt/dnd/peer/DropTargetContextPeer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$DropTargetContextAccessor, setDropTargetContextPeer, void, $DropTargetContext*, $DropTargetContextPeer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$DropTargetContextAccessor", "sun.awt.AWTAccessor", "DropTargetContextAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$DropTargetContextAccessor",
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
	$loadClass(AWTAccessor$DropTargetContextAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$DropTargetContextAccessor);
	});
	return class$;
}

$Class* AWTAccessor$DropTargetContextAccessor::class$ = nullptr;

	} // awt
} // sun