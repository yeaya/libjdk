#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {

$Class* DisposerRecord::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DisposerRecord, dispose, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.DisposerRecord",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DisposerRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DisposerRecord);
	});
	return class$;
}

$Class* DisposerRecord::class$ = nullptr;

	} // java2d
} // sun