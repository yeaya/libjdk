#include <sun/font/GlyphLayout$LayoutEngineFactory.h>
#include <sun/font/Font2D.h>
#include <sun/font/GlyphLayout$LayoutEngine.h>
#include <sun/font/GlyphLayout$LayoutEngineKey.h>
#include <sun/font/GlyphLayout.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;
using $GlyphLayout$LayoutEngine = ::sun::font::GlyphLayout$LayoutEngine;
using $GlyphLayout$LayoutEngineKey = ::sun::font::GlyphLayout$LayoutEngineKey;

namespace sun {
	namespace font {

$Class* GlyphLayout$LayoutEngineFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getEngine", "(Lsun/font/Font2D;II)Lsun/font/GlyphLayout$LayoutEngine;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GlyphLayout$LayoutEngineFactory, getEngine, $GlyphLayout$LayoutEngine*, $Font2D*, int32_t, int32_t)},
		{"getEngine", "(Lsun/font/GlyphLayout$LayoutEngineKey;)Lsun/font/GlyphLayout$LayoutEngine;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GlyphLayout$LayoutEngineFactory, getEngine, $GlyphLayout$LayoutEngine*, $GlyphLayout$LayoutEngineKey*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.GlyphLayout$LayoutEngineFactory", "sun.font.GlyphLayout", "LayoutEngineFactory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.font.GlyphLayout$LayoutEngineFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.GlyphLayout"
	};
	$loadClass(GlyphLayout$LayoutEngineFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GlyphLayout$LayoutEngineFactory);
	});
	return class$;
}

$Class* GlyphLayout$LayoutEngineFactory::class$ = nullptr;

	} // font
} // sun