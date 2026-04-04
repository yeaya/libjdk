#include <java/util/prefs/AbstractPreferences$NodeAddedEvent.h>
#include <java/util/prefs/AbstractPreferences.h>
#include <java/util/prefs/NodeChangeEvent.h>
#include <java/util/prefs/Preferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractPreferences = ::java::util::prefs::AbstractPreferences;
using $NodeChangeEvent = ::java::util::prefs::NodeChangeEvent;
using $Preferences = ::java::util::prefs::Preferences;

namespace java {
	namespace util {
		namespace prefs {

void AbstractPreferences$NodeAddedEvent::init$($AbstractPreferences* this$0, $Preferences* parent, $Preferences* child) {
	$set(this, this$0, this$0);
	$NodeChangeEvent::init$(parent, child);
}

AbstractPreferences$NodeAddedEvent::AbstractPreferences$NodeAddedEvent() {
}

$Class* AbstractPreferences$NodeAddedEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/prefs/AbstractPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractPreferences$NodeAddedEvent, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractPreferences$NodeAddedEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/prefs/AbstractPreferences;Ljava/util/prefs/Preferences;Ljava/util/prefs/Preferences;)V", nullptr, 0, $method(AbstractPreferences$NodeAddedEvent, init$, void, $AbstractPreferences*, $Preferences*, $Preferences*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.AbstractPreferences$NodeAddedEvent", "java.util.prefs.AbstractPreferences", "NodeAddedEvent", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.AbstractPreferences$NodeAddedEvent",
		"java.util.prefs.NodeChangeEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.prefs.AbstractPreferences"
	};
	$loadClass(AbstractPreferences$NodeAddedEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractPreferences$NodeAddedEvent);
	});
	return class$;
}

$Class* AbstractPreferences$NodeAddedEvent::class$ = nullptr;

		} // prefs
	} // util
} // java