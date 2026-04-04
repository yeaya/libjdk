#include <java/awt/Queue.h>
#include <sun/awt/EventQueueItem.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void Queue::init$() {
}

Queue::Queue() {
}

$Class* Queue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"head", "Lsun/awt/EventQueueItem;", nullptr, 0, $field(Queue, head)},
		{"tail", "Lsun/awt/EventQueueItem;", nullptr, 0, $field(Queue, tail)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Queue, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Queue",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Queue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Queue);
	});
	return class$;
}

$Class* Queue::class$ = nullptr;

	} // awt
} // java