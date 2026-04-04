#include <java/awt/geom/PathIterator.h>
#include <jcpp.h>

#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_MOVETO
#undef SEG_QUADTO
#undef WIND_EVEN_ODD
#undef WIND_NON_ZERO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$Class* PathIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"WIND_EVEN_ODD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PathIterator, WIND_EVEN_ODD)},
		{"WIND_NON_ZERO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PathIterator, WIND_NON_ZERO)},
		{"SEG_MOVETO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PathIterator, SEG_MOVETO)},
		{"SEG_LINETO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PathIterator, SEG_LINETO)},
		{"SEG_QUADTO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PathIterator, SEG_QUADTO)},
		{"SEG_CUBICTO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PathIterator, SEG_CUBICTO)},
		{"SEG_CLOSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PathIterator, SEG_CLOSE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"currentSegment", "([F)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathIterator, currentSegment, int32_t, $floats*)},
		{"currentSegment", "([D)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathIterator, currentSegment, int32_t, $doubles*)},
		{"getWindingRule", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathIterator, getWindingRule, int32_t)},
		{"isDone", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathIterator, isDone, bool)},
		{"next", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathIterator, next, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.geom.PathIterator",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PathIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PathIterator);
	});
	return class$;
}

$Class* PathIterator::class$ = nullptr;

		} // geom
	} // awt
} // java