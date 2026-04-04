#include <java/awt/EventFilter.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/EventFilter$FilterAction.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $EventFilter$FilterAction = ::java::awt::EventFilter$FilterAction;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* EventFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"acceptEvent", "(Ljava/awt/AWTEvent;)Ljava/awt/EventFilter$FilterAction;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EventFilter, acceptEvent, $EventFilter$FilterAction*, $AWTEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.EventFilter$FilterAction", "java.awt.EventFilter", "FilterAction", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.awt.EventFilter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.awt.EventFilter$FilterAction"
	};
	$loadClass(EventFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventFilter);
	});
	return class$;
}

$Class* EventFilter::class$ = nullptr;

	} // awt
} // java