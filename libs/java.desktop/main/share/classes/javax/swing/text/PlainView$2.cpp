#include <javax/swing/text/PlainView$2.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/text/PlainView$FPMethodArgs.h>
#include <javax/swing/text/PlainView.h>
#include <jcpp.h>

#undef GNNC
#undef GNNII
#undef IGNN
#undef IIGNN

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $PlainView$FPMethodArgs = ::javax::swing::text::PlainView$FPMethodArgs;

namespace javax {
	namespace swing {
		namespace text {

$ints* PlainView$2::$SwitchMap$javax$swing$text$PlainView$FPMethodArgs = nullptr;

void PlainView$2::clinit$($Class* clazz) {
	$assignStatic(PlainView$2::$SwitchMap$javax$swing$text$PlainView$FPMethodArgs, $new($ints, $($PlainView$FPMethodArgs::values())->length));
	{
		try {
			PlainView$2::$SwitchMap$javax$swing$text$PlainView$FPMethodArgs->set($PlainView$FPMethodArgs::IGNN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			PlainView$2::$SwitchMap$javax$swing$text$PlainView$FPMethodArgs->set($PlainView$FPMethodArgs::IIGNN->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			PlainView$2::$SwitchMap$javax$swing$text$PlainView$FPMethodArgs->set($PlainView$FPMethodArgs::GNNII->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			PlainView$2::$SwitchMap$javax$swing$text$PlainView$FPMethodArgs->set($PlainView$FPMethodArgs::GNNC->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

PlainView$2::PlainView$2() {
}

$Class* PlainView$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$swing$text$PlainView$FPMethodArgs", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PlainView$2, $SwitchMap$javax$swing$text$PlainView$FPMethodArgs)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.PlainView",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.PlainView$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.swing.text.PlainView$2",
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
		"javax.swing.text.PlainView"
	};
	$loadClass(PlainView$2, name, initialize, &classInfo$$, PlainView$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PlainView$2);
	});
	return class$;
}

$Class* PlainView$2::class$ = nullptr;

		} // text
	} // swing
} // javax