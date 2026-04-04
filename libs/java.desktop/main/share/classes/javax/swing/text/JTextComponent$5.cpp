#include <javax/swing/text/JTextComponent$5.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/DropMode.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef INSERT
#undef USE_SELECTION

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $DropMode = ::javax::swing::DropMode;

namespace javax {
	namespace swing {
		namespace text {

$ints* JTextComponent$5::$SwitchMap$javax$swing$DropMode = nullptr;

void JTextComponent$5::clinit$($Class* clazz) {
	$assignStatic(JTextComponent$5::$SwitchMap$javax$swing$DropMode, $new($ints, $($DropMode::values())->length));
	{
		try {
			JTextComponent$5::$SwitchMap$javax$swing$DropMode->set($DropMode::USE_SELECTION->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JTextComponent$5::$SwitchMap$javax$swing$DropMode->set($DropMode::INSERT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JTextComponent$5::JTextComponent$5() {
}

$Class* JTextComponent$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$swing$DropMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JTextComponent$5, $SwitchMap$javax$swing$DropMode)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.JTextComponent",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.JTextComponent$5", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.swing.text.JTextComponent$5",
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
		"javax.swing.text.JTextComponent"
	};
	$loadClass(JTextComponent$5, name, initialize, &classInfo$$, JTextComponent$5::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JTextComponent$5);
	});
	return class$;
}

$Class* JTextComponent$5::class$ = nullptr;

		} // text
	} // swing
} // javax