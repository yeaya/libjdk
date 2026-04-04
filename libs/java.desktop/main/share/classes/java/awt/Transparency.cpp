#include <java/awt/Transparency.h>
#include <jcpp.h>

#undef BITMASK
#undef OPAQUE
#undef TRANSLUCENT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* Transparency::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"OPAQUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Transparency, OPAQUE)},
		{"BITMASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Transparency, BITMASK)},
		{"TRANSLUCENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Transparency, TRANSLUCENT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getTransparency", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transparency, getTransparency, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.Transparency",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Transparency, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Transparency);
	});
	return class$;
}

$Class* Transparency::class$ = nullptr;

	} // awt
} // java