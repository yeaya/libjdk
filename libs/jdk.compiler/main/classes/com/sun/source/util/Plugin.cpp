#include <com/sun/source/util/Plugin.h>
#include <com/sun/source/util/JavacTask.h>
#include <jcpp.h>

using $JavacTask = ::com::sun::source::util::JavacTask;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

bool Plugin::autoStart() {
	return false;
}

$Class* Plugin::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"autoStart", "()Z", nullptr, $PUBLIC, $virtualMethod(Plugin, autoStart, bool)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Plugin, getName, $String*)},
		{"init", "(Lcom/sun/source/util/JavacTask;[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(Plugin, init, void, $JavacTask*, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.util.Plugin",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Plugin, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Plugin);
	});
	return class$;
}

$Class* Plugin::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com