#include <java/awt/font/MultipleMaster.h>
#include <java/awt/Font.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$Class* MultipleMaster::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"deriveMMFont", "([F)Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MultipleMaster, deriveMMFont, $Font*, $floats*)},
		{"deriveMMFont", "([FFFFF)Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MultipleMaster, deriveMMFont, $Font*, $floats*, float, float, float, float)},
		{"getDesignAxisDefaults", "()[F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MultipleMaster, getDesignAxisDefaults, $floats*)},
		{"getDesignAxisNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MultipleMaster, getDesignAxisNames, $StringArray*)},
		{"getDesignAxisRanges", "()[F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MultipleMaster, getDesignAxisRanges, $floats*)},
		{"getNumDesignAxes", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MultipleMaster, getNumDesignAxes, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.font.MultipleMaster",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MultipleMaster, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultipleMaster);
	});
	return class$;
}

$Class* MultipleMaster::class$ = nullptr;

		} // font
	} // awt
} // java