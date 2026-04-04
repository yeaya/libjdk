#include <java/util/prefs/NodeChangeListener.h>
#include <java/util/prefs/NodeChangeEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NodeChangeEvent = ::java::util::prefs::NodeChangeEvent;

namespace java {
	namespace util {
		namespace prefs {

$Class* NodeChangeListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"childAdded", "(Ljava/util/prefs/NodeChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeChangeListener, childAdded, void, $NodeChangeEvent*)},
		{"childRemoved", "(Ljava/util/prefs/NodeChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeChangeListener, childRemoved, void, $NodeChangeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.prefs.NodeChangeListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(NodeChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NodeChangeListener);
	});
	return class$;
}

$Class* NodeChangeListener::class$ = nullptr;

		} // prefs
	} // util
} // java