#include <sun/font/GlyphLayout$LayoutEngine.h>
#include <java/awt/geom/Point2D$Float.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/GlyphLayout$GVData.h>
#include <sun/font/GlyphLayout.h>
#include <sun/font/TextRecord.h>
#include <jcpp.h>

using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $GlyphLayout$GVData = ::sun::font::GlyphLayout$GVData;
using $TextRecord = ::sun::font::TextRecord;

namespace sun {
	namespace font {

$Class* GlyphLayout$LayoutEngine::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"layout", "(Lsun/font/FontStrikeDesc;[FFIILsun/font/TextRecord;ILjava/awt/geom/Point2D$Float;Lsun/font/GlyphLayout$GVData;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GlyphLayout$LayoutEngine, layout, void, $FontStrikeDesc*, $floats*, float, int32_t, int32_t, $TextRecord*, int32_t, $Point2D$Float*, $GlyphLayout$GVData*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.GlyphLayout$LayoutEngine", "sun.font.GlyphLayout", "LayoutEngine", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.font.GlyphLayout$LayoutEngine",
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
	$loadClass(GlyphLayout$LayoutEngine, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GlyphLayout$LayoutEngine);
	});
	return class$;
}

$Class* GlyphLayout$LayoutEngine::class$ = nullptr;

	} // font
} // sun