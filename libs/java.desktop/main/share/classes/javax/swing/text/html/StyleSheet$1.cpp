#include <javax/swing/text/html/StyleSheet$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/text/html/StyleSheet$BoxPainter$HorizontalMargin.h>
#include <javax/swing/text/html/StyleSheet$BoxPainter.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef LEFT
#undef RIGHT

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $StyleSheet$BoxPainter$HorizontalMargin = ::javax::swing::text::html::StyleSheet$BoxPainter$HorizontalMargin;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$ints* StyleSheet$1::$SwitchMap$javax$swing$text$html$StyleSheet$BoxPainter$HorizontalMargin = nullptr;

void StyleSheet$1::clinit$($Class* clazz) {
	$assignStatic(StyleSheet$1::$SwitchMap$javax$swing$text$html$StyleSheet$BoxPainter$HorizontalMargin, $new($ints, $($StyleSheet$BoxPainter$HorizontalMargin::values())->length));
	{
		try {
			StyleSheet$1::$SwitchMap$javax$swing$text$html$StyleSheet$BoxPainter$HorizontalMargin->set($StyleSheet$BoxPainter$HorizontalMargin::RIGHT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			StyleSheet$1::$SwitchMap$javax$swing$text$html$StyleSheet$BoxPainter$HorizontalMargin->set($StyleSheet$BoxPainter$HorizontalMargin::LEFT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

StyleSheet$1::StyleSheet$1() {
}

$Class* StyleSheet$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$swing$text$html$StyleSheet$BoxPainter$HorizontalMargin", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StyleSheet$1, $SwitchMap$javax$swing$text$html$StyleSheet$BoxPainter$HorizontalMargin)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.html.StyleSheet",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.StyleSheet$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.swing.text.html.StyleSheet$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.StyleSheet"
	};
	$loadClass(StyleSheet$1, name, initialize, &classInfo$$, StyleSheet$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StyleSheet$1);
	});
	return class$;
}

$Class* StyleSheet$1::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax