#include <sun/awt/AWTAccessor$InvocationEventAccessor.h>
#include <java/awt/event/InvocationEvent.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$InvocationEventAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dispose", "(Ljava/awt/event/InvocationEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$InvocationEventAccessor, dispose, void, $InvocationEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$InvocationEventAccessor", "sun.awt.AWTAccessor", "InvocationEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$InvocationEventAccessor",
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
	$loadClass(AWTAccessor$InvocationEventAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$InvocationEventAccessor);
	});
	return class$;
}

$Class* AWTAccessor$InvocationEventAccessor::class$ = nullptr;

	} // awt
} // sun