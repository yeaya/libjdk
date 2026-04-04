#include <sun/font/GlyphDisposedListener.h>
#include <java/util/ArrayList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;

namespace sun {
	namespace font {

$Class* GlyphDisposedListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"glyphDisposed", "(Ljava/util/ArrayList;)V", "(Ljava/util/ArrayList<Ljava/lang/Long;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(GlyphDisposedListener, glyphDisposed, void, $ArrayList*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.font.GlyphDisposedListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GlyphDisposedListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GlyphDisposedListener);
	});
	return class$;
}

$Class* GlyphDisposedListener::class$ = nullptr;

	} // font
} // sun