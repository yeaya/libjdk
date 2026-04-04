#include <sun/font/FontSubstitution.h>
#include <sun/font/CompositeFont.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompositeFont = ::sun::font::CompositeFont;

namespace sun {
	namespace font {

$Class* FontSubstitution::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCompositeFont2D", "()Lsun/font/CompositeFont;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FontSubstitution, getCompositeFont2D, $CompositeFont*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.font.FontSubstitution",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FontSubstitution, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontSubstitution);
	});
	return class$;
}

$Class* FontSubstitution::class$ = nullptr;

	} // font
} // sun