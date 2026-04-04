#include <sun/java2d/FontSupport.h>
#include <sun/awt/FontConfiguration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontConfiguration = ::sun::awt::FontConfiguration;

namespace sun {
	namespace java2d {

$Class* FontSupport::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getFontConfiguration", "()Lsun/awt/FontConfiguration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FontSupport, getFontConfiguration, $FontConfiguration*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.FontSupport",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FontSupport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontSupport);
	});
	return class$;
}

$Class* FontSupport::class$ = nullptr;

	} // java2d
} // sun