#include <sun/java2d/loops/ProcessPath$EndSubPathHandler.h>
#include <sun/java2d/loops/ProcessPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace loops {

$Class* ProcessPath$EndSubPathHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"processEndSubPath", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessPath$EndSubPathHandler, processEndSubPath, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.ProcessPath$EndSubPathHandler", "sun.java2d.loops.ProcessPath", "EndSubPathHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.loops.ProcessPath$EndSubPathHandler",
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
		"sun.java2d.loops.ProcessPath"
	};
	$loadClass(ProcessPath$EndSubPathHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessPath$EndSubPathHandler);
	});
	return class$;
}

$Class* ProcessPath$EndSubPathHandler::class$ = nullptr;

		} // loops
	} // java2d
} // sun