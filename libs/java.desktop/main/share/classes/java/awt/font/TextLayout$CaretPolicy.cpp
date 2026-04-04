#include <java/awt/font/TextLayout$CaretPolicy.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/font/TextLayout.h>
#include <jcpp.h>

using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $TextLayout = ::java::awt::font::TextLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

void TextLayout$CaretPolicy::init$() {
}

$TextHitInfo* TextLayout$CaretPolicy::getStrongCaret($TextHitInfo* hit1, $TextHitInfo* hit2, $TextLayout* layout) {
	return $nc(layout)->getStrongHit(hit1, hit2);
}

TextLayout$CaretPolicy::TextLayout$CaretPolicy() {
}

$Class* TextLayout$CaretPolicy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TextLayout$CaretPolicy, init$, void)},
		{"getStrongCaret", "(Ljava/awt/font/TextHitInfo;Ljava/awt/font/TextHitInfo;Ljava/awt/font/TextLayout;)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC, $virtualMethod(TextLayout$CaretPolicy, getStrongCaret, $TextHitInfo*, $TextHitInfo*, $TextHitInfo*, $TextLayout*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.font.TextLayout$CaretPolicy", "java.awt.font.TextLayout", "CaretPolicy", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.font.TextLayout$CaretPolicy",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.font.TextLayout"
	};
	$loadClass(TextLayout$CaretPolicy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextLayout$CaretPolicy);
	});
	return class$;
}

$Class* TextLayout$CaretPolicy::class$ = nullptr;

		} // font
	} // awt
} // java