#include <sun/java2d/loops/ProcessPath$Point.h>
#include <sun/java2d/loops/ProcessPath$Edge.h>
#include <sun/java2d/loops/ProcessPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace loops {

void ProcessPath$Point::init$(int32_t x, int32_t y, bool lastPoint) {
	this->x = x;
	this->y = y;
	this->lastPoint = lastPoint;
}

ProcessPath$Point::ProcessPath$Point() {
}

$Class* ProcessPath$Point::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"x", "I", nullptr, $PUBLIC, $field(ProcessPath$Point, x)},
		{"y", "I", nullptr, $PUBLIC, $field(ProcessPath$Point, y)},
		{"lastPoint", "Z", nullptr, $PUBLIC, $field(ProcessPath$Point, lastPoint)},
		{"prev", "Lsun/java2d/loops/ProcessPath$Point;", nullptr, $PUBLIC, $field(ProcessPath$Point, prev)},
		{"next", "Lsun/java2d/loops/ProcessPath$Point;", nullptr, $PUBLIC, $field(ProcessPath$Point, next)},
		{"nextByY", "Lsun/java2d/loops/ProcessPath$Point;", nullptr, $PUBLIC, $field(ProcessPath$Point, nextByY)},
		{"edge", "Lsun/java2d/loops/ProcessPath$Edge;", nullptr, $PUBLIC, $field(ProcessPath$Point, edge)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IIZ)V", nullptr, $PUBLIC, $method(ProcessPath$Point, init$, void, int32_t, int32_t, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.ProcessPath$Point", "sun.java2d.loops.ProcessPath", "Point", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.ProcessPath$Point",
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
	$loadClass(ProcessPath$Point, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessPath$Point);
	});
	return class$;
}

$Class* ProcessPath$Point::class$ = nullptr;

		} // loops
	} // java2d
} // sun