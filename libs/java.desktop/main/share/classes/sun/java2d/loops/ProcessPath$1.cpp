#include <sun/java2d/loops/ProcessPath$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace loops {

void ProcessPath$1::init$() {
}

void ProcessPath$1::processEndSubPath() {
}

ProcessPath$1::ProcessPath$1() {
}

$Class* ProcessPath$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ProcessPath$1, init$, void)},
		{"processEndSubPath", "()V", nullptr, $PUBLIC, $virtualMethod(ProcessPath$1, processEndSubPath, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.loops.ProcessPath",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.ProcessPath$1", nullptr, nullptr, 0},
		{"sun.java2d.loops.ProcessPath$EndSubPathHandler", "sun.java2d.loops.ProcessPath", "EndSubPathHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.ProcessPath$1",
		"java.lang.Object",
		"sun.java2d.loops.ProcessPath$EndSubPathHandler",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.loops.ProcessPath"
	};
	$loadClass(ProcessPath$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessPath$1);
	});
	return class$;
}

$Class* ProcessPath$1::class$ = nullptr;

		} // loops
	} // java2d
} // sun