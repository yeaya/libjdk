#include <sun/font/GlyphLayout$LayoutEngineKey.h>
#include <java/lang/ClassCastException.h>
#include <sun/font/Font2D.h>
#include <sun/font/GlyphLayout.h>
#include <jcpp.h>

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;

namespace sun {
	namespace font {

void GlyphLayout$LayoutEngineKey::init$() {
}

void GlyphLayout$LayoutEngineKey::init$($Font2D* font, int32_t script, int32_t lang) {
	init(font, script, lang);
}

void GlyphLayout$LayoutEngineKey::init($Font2D* font, int32_t script, int32_t lang) {
	$set(this, font$, font);
	this->script$ = script;
	this->lang$ = lang;
}

GlyphLayout$LayoutEngineKey* GlyphLayout$LayoutEngineKey::copy() {
	return $new(GlyphLayout$LayoutEngineKey, this->font$, this->script$, this->lang$);
}

$Font2D* GlyphLayout$LayoutEngineKey::font() {
	return this->font$;
}

int32_t GlyphLayout$LayoutEngineKey::script() {
	return this->script$;
}

int32_t GlyphLayout$LayoutEngineKey::lang() {
	return this->lang$;
}

bool GlyphLayout$LayoutEngineKey::equals(Object$* rhs) {
	if ($equals(this, rhs)) {
		return true;
	}
	if (rhs == nullptr) {
		return false;
	}
	try {
		$var(GlyphLayout$LayoutEngineKey, that, $cast(GlyphLayout$LayoutEngineKey, rhs));
		return this->script$ == $nc(that)->script$ && this->lang$ == that->lang$ && $nc(this->font$)->equals(that->font$);
	} catch ($ClassCastException& e) {
		return false;
	}
	$shouldNotReachHere();
}

int32_t GlyphLayout$LayoutEngineKey::hashCode() {
	return (this->script$ ^ this->lang$) ^ $nc(this->font$)->hashCode();
}

GlyphLayout$LayoutEngineKey::GlyphLayout$LayoutEngineKey() {
}

$Class* GlyphLayout$LayoutEngineKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"font", "Lsun/font/Font2D;", nullptr, $PRIVATE, $field(GlyphLayout$LayoutEngineKey, font$)},
		{"script", "I", nullptr, $PRIVATE, $field(GlyphLayout$LayoutEngineKey, script$)},
		{"lang", "I", nullptr, $PRIVATE, $field(GlyphLayout$LayoutEngineKey, lang$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GlyphLayout$LayoutEngineKey, init$, void)},
		{"<init>", "(Lsun/font/Font2D;II)V", nullptr, 0, $method(GlyphLayout$LayoutEngineKey, init$, void, $Font2D*, int32_t, int32_t)},
		{"copy", "()Lsun/font/GlyphLayout$LayoutEngineKey;", nullptr, 0, $method(GlyphLayout$LayoutEngineKey, copy, GlyphLayout$LayoutEngineKey*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(GlyphLayout$LayoutEngineKey, equals, bool, Object$*)},
		{"font", "()Lsun/font/Font2D;", nullptr, 0, $method(GlyphLayout$LayoutEngineKey, font, $Font2D*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(GlyphLayout$LayoutEngineKey, hashCode, int32_t)},
		{"init", "(Lsun/font/Font2D;II)V", nullptr, 0, $method(GlyphLayout$LayoutEngineKey, init, void, $Font2D*, int32_t, int32_t)},
		{"lang", "()I", nullptr, 0, $method(GlyphLayout$LayoutEngineKey, lang, int32_t)},
		{"script", "()I", nullptr, 0, $method(GlyphLayout$LayoutEngineKey, script, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.GlyphLayout$LayoutEngineKey", "sun.font.GlyphLayout", "LayoutEngineKey", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.font.GlyphLayout$LayoutEngineKey",
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
	$loadClass(GlyphLayout$LayoutEngineKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GlyphLayout$LayoutEngineKey);
	});
	return class$;
}

$Class* GlyphLayout$LayoutEngineKey::class$ = nullptr;

	} // font
} // sun