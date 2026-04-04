#include <sun/java2d/loops/ProcessPath$ProcessHandler.h>
#include <sun/java2d/loops/ProcessPath$DrawHandler.h>
#include <sun/java2d/loops/ProcessPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessPath$DrawHandler = ::sun::java2d::loops::ProcessPath$DrawHandler;

namespace sun {
	namespace java2d {
		namespace loops {

void ProcessPath$ProcessHandler::init$($ProcessPath$DrawHandler* dhnd, int32_t clipMode) {
	$set(this, dhnd, dhnd);
	this->clipMode = clipMode;
}

ProcessPath$ProcessHandler::ProcessPath$ProcessHandler() {
}

$Class* ProcessPath$ProcessHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dhnd", "Lsun/java2d/loops/ProcessPath$DrawHandler;", nullptr, 0, $field(ProcessPath$ProcessHandler, dhnd)},
		{"clipMode", "I", nullptr, 0, $field(ProcessPath$ProcessHandler, clipMode)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/ProcessPath$DrawHandler;I)V", nullptr, $PUBLIC, $method(ProcessPath$ProcessHandler, init$, void, $ProcessPath$DrawHandler*, int32_t)},
		{"processFixedLine", "(IIII[IZZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessPath$ProcessHandler, processFixedLine, void, int32_t, int32_t, int32_t, int32_t, $ints*, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.ProcessPath$ProcessHandler", "sun.java2d.loops.ProcessPath", "ProcessHandler", $PUBLIC | $STATIC | $ABSTRACT},
		{"sun.java2d.loops.ProcessPath$EndSubPathHandler", "sun.java2d.loops.ProcessPath", "EndSubPathHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.java2d.loops.ProcessPath$ProcessHandler",
		"java.lang.Object",
		"sun.java2d.loops.ProcessPath$EndSubPathHandler",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.loops.ProcessPath"
	};
	$loadClass(ProcessPath$ProcessHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessPath$ProcessHandler);
	});
	return class$;
}

$Class* ProcessPath$ProcessHandler::class$ = nullptr;

		} // loops
	} // java2d
} // sun