#include <sun/font/GlyphLayout$SDCache$SDKey.h>
#include <java/awt/Font.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/lang/ClassCastException.h>
#include <sun/font/GlyphLayout$SDCache.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

void GlyphLayout$SDCache$SDKey::init$($Font* font, $FontRenderContext* frc) {
	$set(this, font, font);
	$set(this, frc, frc);
	int32_t var$0 = $nc(font)->hashCode();
	this->hash = var$0 ^ $nc(frc)->hashCode();
}

int32_t GlyphLayout$SDCache$SDKey::hashCode() {
	return this->hash;
}

bool GlyphLayout$SDCache$SDKey::equals(Object$* o) {
	try {
		$var(GlyphLayout$SDCache$SDKey, rhs, $cast(GlyphLayout$SDCache$SDKey, o));
		bool var$0 = this->hash == $nc(rhs)->hash && $nc(this->font)->equals(rhs->font);
		return var$0 && $nc(this->frc)->equals(rhs->frc);
	} catch ($ClassCastException& e) {
	}
	return false;
}

GlyphLayout$SDCache$SDKey::GlyphLayout$SDCache$SDKey() {
}

$Class* GlyphLayout$SDCache$SDKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"font", "Ljava/awt/Font;", nullptr, $PRIVATE | $FINAL, $field(GlyphLayout$SDCache$SDKey, font)},
		{"frc", "Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE | $FINAL, $field(GlyphLayout$SDCache$SDKey, frc)},
		{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(GlyphLayout$SDCache$SDKey, hash)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Font;Ljava/awt/font/FontRenderContext;)V", nullptr, 0, $method(GlyphLayout$SDCache$SDKey, init$, void, $Font*, $FontRenderContext*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(GlyphLayout$SDCache$SDKey, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(GlyphLayout$SDCache$SDKey, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.GlyphLayout$SDCache", "sun.font.GlyphLayout", "SDCache", $PRIVATE | $STATIC | $FINAL},
		{"sun.font.GlyphLayout$SDCache$SDKey", "sun.font.GlyphLayout$SDCache", "SDKey", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.font.GlyphLayout$SDCache$SDKey",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.GlyphLayout"
	};
	$loadClass(GlyphLayout$SDCache$SDKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GlyphLayout$SDCache$SDKey);
	});
	return class$;
}

$Class* GlyphLayout$SDCache$SDKey::class$ = nullptr;

	} // font
} // sun