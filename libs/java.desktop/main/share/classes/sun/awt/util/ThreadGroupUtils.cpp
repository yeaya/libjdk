#include <sun/awt/util/ThreadGroupUtils.h>
#include <java/lang/ThreadGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;

namespace sun {
	namespace awt {
		namespace util {

void ThreadGroupUtils::init$() {
}

$ThreadGroup* ThreadGroupUtils::getRootThreadGroup() {
	$useLocalObjectStack();
	$var($ThreadGroup, currentTG, $($Thread::currentThread())->getThreadGroup());
	$var($ThreadGroup, parentTG, $nc(currentTG)->getParent());
	while (parentTG != nullptr) {
		$assign(currentTG, parentTG);
		$assign(parentTG, currentTG->getParent());
	}
	return currentTG;
}

ThreadGroupUtils::ThreadGroupUtils() {
}

$Class* ThreadGroupUtils::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ThreadGroupUtils, init$, void)},
		{"getRootThreadGroup", "()Ljava/lang/ThreadGroup;", nullptr, $PUBLIC | $STATIC, $staticMethod(ThreadGroupUtils, getRootThreadGroup, $ThreadGroup*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.util.ThreadGroupUtils",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ThreadGroupUtils, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadGroupUtils);
	});
	return class$;
}

$Class* ThreadGroupUtils::class$ = nullptr;

		} // util
	} // awt
} // sun