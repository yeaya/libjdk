#include <java/awt/font/JavaAWTFontAccessImpl.h>
#include <java/awt/font/NumericShaper.h>
#include <java/awt/font/TextAttribute.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef BIDI_EMBEDDING
#undef NUMERIC_SHAPING
#undef RUN_DIRECTION
#undef RUN_DIRECTION_LTR

using $NumericShaper = ::java::awt::font::NumericShaper;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

bool JavaAWTFontAccessImpl::$assertionsDisabled = false;

void JavaAWTFontAccessImpl::init$() {
}

$Object* JavaAWTFontAccessImpl::getTextAttributeConstant($String* name) {
	{
		$var($String, s1456$, name);
		int32_t tmp1456$ = -1;
		switch ($nc(s1456$)->hashCode()) {
		case 0x659b868b:
			if (s1456$->equals("RUN_DIRECTION"_s)) {
				tmp1456$ = 0;
			}
			break;
		case (int32_t)0x89afa4ac:
			if (s1456$->equals("NUMERIC_SHAPING"_s)) {
				tmp1456$ = 1;
			}
			break;
		case (int32_t)0xb8570dc4:
			if (s1456$->equals("BIDI_EMBEDDING"_s)) {
				tmp1456$ = 2;
			}
			break;
		case (int32_t)0x883ba016:
			if (s1456$->equals("RUN_DIRECTION_LTR"_s)) {
				tmp1456$ = 3;
			}
			break;
		}
		switch (tmp1456$) {
		case 0:
			$init($TextAttribute);
			return $TextAttribute::RUN_DIRECTION;
		case 1:
			$init($TextAttribute);
			return $TextAttribute::NUMERIC_SHAPING;
		case 2:
			$init($TextAttribute);
			return $TextAttribute::BIDI_EMBEDDING;
		case 3:
			$init($TextAttribute);
			return $of($TextAttribute::RUN_DIRECTION_LTR);
		default:
			$throwNew($AssertionError, $of("Constant name is not recognized"_s));
		}
	}
}

void JavaAWTFontAccessImpl::shape(Object$* shaper, $chars* text, int32_t start, int32_t count) {
	if (!JavaAWTFontAccessImpl::$assertionsDisabled && !$instanceOf($NumericShaper, shaper)) {
		$throwNew($AssertionError);
	}
	$nc($cast($NumericShaper, shaper))->shape(text, start, count);
}

void JavaAWTFontAccessImpl::clinit$($Class* clazz) {
	JavaAWTFontAccessImpl::$assertionsDisabled = !JavaAWTFontAccessImpl::class$->desiredAssertionStatus();
}

JavaAWTFontAccessImpl::JavaAWTFontAccessImpl() {
}

$Class* JavaAWTFontAccessImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavaAWTFontAccessImpl, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JavaAWTFontAccessImpl, init$, void)},
		{"getTextAttributeConstant", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JavaAWTFontAccessImpl, getTextAttributeConstant, $Object*, $String*)},
		{"shape", "(Ljava/lang/Object;[CII)V", nullptr, $PUBLIC, $virtualMethod(JavaAWTFontAccessImpl, shape, void, Object$*, $chars*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.font.JavaAWTFontAccessImpl",
		"java.lang.Object",
		"jdk.internal.access.JavaAWTFontAccess",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JavaAWTFontAccessImpl, name, initialize, &classInfo$$, JavaAWTFontAccessImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JavaAWTFontAccessImpl);
	});
	return class$;
}

$Class* JavaAWTFontAccessImpl::class$ = nullptr;

		} // font
	} // awt
} // java