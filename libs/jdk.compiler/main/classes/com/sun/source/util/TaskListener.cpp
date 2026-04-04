#include <com/sun/source/util/TaskListener.h>
#include <com/sun/source/util/TaskEvent.h>
#include <jcpp.h>

using $TaskEvent = ::com::sun::source::util::TaskEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

void TaskListener::started($TaskEvent* e) {
}

void TaskListener::finished($TaskEvent* e) {
}

$Class* TaskListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"finished", "(Lcom/sun/source/util/TaskEvent;)V", nullptr, $PUBLIC, $virtualMethod(TaskListener, finished, void, $TaskEvent*)},
		{"started", "(Lcom/sun/source/util/TaskEvent;)V", nullptr, $PUBLIC, $virtualMethod(TaskListener, started, void, $TaskEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.util.TaskListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TaskListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TaskListener);
	});
	return class$;
}

$Class* TaskListener::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com