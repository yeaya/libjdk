#include <sun/java2d/loops/ProcessPath$Edge.h>
#include <sun/java2d/loops/ProcessPath$Point.h>
#include <sun/java2d/loops/ProcessPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessPath$Point = ::sun::java2d::loops::ProcessPath$Point;

namespace sun {
	namespace java2d {
		namespace loops {

void ProcessPath$Edge::init$($ProcessPath$Point* p, int32_t x, int32_t dx, int32_t dir) {
	$set(this, p, p);
	this->x = x;
	this->dx = dx;
	this->dir = dir;
}

ProcessPath$Edge::ProcessPath$Edge() {
}

$Class* ProcessPath$Edge::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"x", "I", nullptr, 0, $field(ProcessPath$Edge, x)},
		{"dx", "I", nullptr, 0, $field(ProcessPath$Edge, dx)},
		{"p", "Lsun/java2d/loops/ProcessPath$Point;", nullptr, 0, $field(ProcessPath$Edge, p)},
		{"dir", "I", nullptr, 0, $field(ProcessPath$Edge, dir)},
		{"prev", "Lsun/java2d/loops/ProcessPath$Edge;", nullptr, 0, $field(ProcessPath$Edge, prev)},
		{"next", "Lsun/java2d/loops/ProcessPath$Edge;", nullptr, 0, $field(ProcessPath$Edge, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/ProcessPath$Point;III)V", nullptr, $PUBLIC, $method(ProcessPath$Edge, init$, void, $ProcessPath$Point*, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.ProcessPath$Edge", "sun.java2d.loops.ProcessPath", "Edge", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.ProcessPath$Edge",
		"java.lang.Object",
		nullptr,
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
	$loadClass(ProcessPath$Edge, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessPath$Edge);
	});
	return class$;
}

$Class* ProcessPath$Edge::class$ = nullptr;

		} // loops
	} // java2d
} // sun