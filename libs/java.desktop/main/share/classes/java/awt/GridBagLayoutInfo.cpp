#include <java/awt/GridBagLayoutInfo.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <jcpp.h>

#undef CONSTANT_DESCENT

using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void GridBagLayoutInfo::init$(int32_t width, int32_t height) {
	this->width = width;
	this->height = height;
}

bool GridBagLayoutInfo::hasConstantDescent(int32_t row) {
	$init($Component$BaselineResizeBehavior);
	return (($nc(this->baselineType)->get(row) & ($sl(1, $Component$BaselineResizeBehavior::CONSTANT_DESCENT->ordinal()))) != 0);
}

bool GridBagLayoutInfo::hasBaseline(int32_t row) {
	return (this->hasBaseline$ && $nc(this->baselineType)->get(row) != 0);
}

GridBagLayoutInfo::GridBagLayoutInfo() {
}

$Class* GridBagLayoutInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GridBagLayoutInfo, serialVersionUID)},
		{"width", "I", nullptr, 0, $field(GridBagLayoutInfo, width)},
		{"height", "I", nullptr, 0, $field(GridBagLayoutInfo, height)},
		{"startx", "I", nullptr, 0, $field(GridBagLayoutInfo, startx)},
		{"starty", "I", nullptr, 0, $field(GridBagLayoutInfo, starty)},
		{"minWidth", "[I", nullptr, 0, $field(GridBagLayoutInfo, minWidth)},
		{"minHeight", "[I", nullptr, 0, $field(GridBagLayoutInfo, minHeight)},
		{"weightX", "[D", nullptr, 0, $field(GridBagLayoutInfo, weightX)},
		{"weightY", "[D", nullptr, 0, $field(GridBagLayoutInfo, weightY)},
		{"hasBaseline", "Z", nullptr, 0, $field(GridBagLayoutInfo, hasBaseline$)},
		{"baselineType", "[S", nullptr, 0, $field(GridBagLayoutInfo, baselineType)},
		{"maxAscent", "[I", nullptr, 0, $field(GridBagLayoutInfo, maxAscent)},
		{"maxDescent", "[I", nullptr, 0, $field(GridBagLayoutInfo, maxDescent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, 0, $method(GridBagLayoutInfo, init$, void, int32_t, int32_t)},
		{"hasBaseline", "(I)Z", nullptr, 0, $virtualMethod(GridBagLayoutInfo, hasBaseline, bool, int32_t)},
		{"hasConstantDescent", "(I)Z", nullptr, 0, $virtualMethod(GridBagLayoutInfo, hasConstantDescent, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.GridBagLayoutInfo",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GridBagLayoutInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GridBagLayoutInfo);
	});
	return class$;
}

$Class* GridBagLayoutInfo::class$ = nullptr;

	} // awt
} // java