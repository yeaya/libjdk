#include <sun/java2d/loops/ProcessPath$FillData.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <sun/java2d/loops/ProcessPath$Point.h>
#include <sun/java2d/loops/ProcessPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $ProcessPath$Point = ::sun::java2d::loops::ProcessPath$Point;

namespace sun {
	namespace java2d {
		namespace loops {

void ProcessPath$FillData::init$() {
	$set(this, plgPnts, $new($Vector, 256));
}

void ProcessPath$FillData::addPoint(int32_t x, int32_t y, bool lastPoint) {
	if ($nc(this->plgPnts)->size() == 0) {
		this->plgYMin = (this->plgYMax = y);
	} else {
		this->plgYMin = (this->plgYMin > y) ? y : this->plgYMin;
		this->plgYMax = (this->plgYMax < y) ? y : this->plgYMax;
	}
	this->plgPnts->add($$new($ProcessPath$Point, x, y, lastPoint));
}

bool ProcessPath$FillData::isEmpty() {
	return $nc(this->plgPnts)->size() == 0;
}

bool ProcessPath$FillData::isEnded() {
	return $nc(($$cast($ProcessPath$Point, $nc(this->plgPnts)->get($nc(this->plgPnts)->size() - 1))))->lastPoint;
}

bool ProcessPath$FillData::setEnded() {
	return $nc(($$cast($ProcessPath$Point, $nc(this->plgPnts)->get($nc(this->plgPnts)->size() - 1))))->lastPoint = true;
}

ProcessPath$FillData::ProcessPath$FillData() {
}

$Class* ProcessPath$FillData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"plgPnts", "Ljava/util/List;", "Ljava/util/List<Lsun/java2d/loops/ProcessPath$Point;>;", 0, $field(ProcessPath$FillData, plgPnts)},
		{"plgYMin", "I", nullptr, $PUBLIC, $field(ProcessPath$FillData, plgYMin)},
		{"plgYMax", "I", nullptr, $PUBLIC, $field(ProcessPath$FillData, plgYMax)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProcessPath$FillData, init$, void)},
		{"addPoint", "(IIZ)V", nullptr, $PUBLIC, $virtualMethod(ProcessPath$FillData, addPoint, void, int32_t, int32_t, bool)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(ProcessPath$FillData, isEmpty, bool)},
		{"isEnded", "()Z", nullptr, $PUBLIC, $virtualMethod(ProcessPath$FillData, isEnded, bool)},
		{"setEnded", "()Z", nullptr, $PUBLIC, $virtualMethod(ProcessPath$FillData, setEnded, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.ProcessPath$FillData", "sun.java2d.loops.ProcessPath", "FillData", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.ProcessPath$FillData",
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
	$loadClass(ProcessPath$FillData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessPath$FillData);
	});
	return class$;
}

$Class* ProcessPath$FillData::class$ = nullptr;

		} // loops
	} // java2d
} // sun