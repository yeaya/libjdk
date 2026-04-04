#include <sun/font/XRGlyphCache$1.h>
#include <sun/font/XRGlyphCache.h>
#include <sun/font/XRGlyphCacheEntry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XRGlyphCache = ::sun::font::XRGlyphCache;
using $XRGlyphCacheEntry = ::sun::font::XRGlyphCacheEntry;

namespace sun {
	namespace font {

void XRGlyphCache$1::init$($XRGlyphCache* this$0) {
	$set(this, this$0, this$0);
}

int32_t XRGlyphCache$1::compare($XRGlyphCacheEntry* e1, $XRGlyphCacheEntry* e2) {
	int32_t var$0 = $nc(e2)->getLastUsed();
	return var$0 - $nc(e1)->getLastUsed();
}

int32_t XRGlyphCache$1::compare(Object$* e1, Object$* e2) {
	return this->compare($cast($XRGlyphCacheEntry, e1), $cast($XRGlyphCacheEntry, e2));
}

XRGlyphCache$1::XRGlyphCache$1() {
}

$Class* XRGlyphCache$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/XRGlyphCache;", nullptr, $FINAL | $SYNTHETIC, $field(XRGlyphCache$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/XRGlyphCache;)V", nullptr, 0, $method(XRGlyphCache$1, init$, void, $XRGlyphCache*)},
		{"compare", "(Lsun/font/XRGlyphCacheEntry;Lsun/font/XRGlyphCacheEntry;)I", nullptr, $PUBLIC, $virtualMethod(XRGlyphCache$1, compare, int32_t, $XRGlyphCacheEntry*, $XRGlyphCacheEntry*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XRGlyphCache$1, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.XRGlyphCache",
		"clearCache",
		"([Lsun/font/XRGlyphCacheEntry;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.XRGlyphCache$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.XRGlyphCache$1",
		"java.lang.Object",
		"java.util.Comparator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Lsun/font/XRGlyphCacheEntry;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.XRGlyphCache"
	};
	$loadClass(XRGlyphCache$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XRGlyphCache$1);
	});
	return class$;
}

$Class* XRGlyphCache$1::class$ = nullptr;

	} // font
} // sun