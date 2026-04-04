#include <javax/swing/JTree$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/DropMode.h>
#include <javax/swing/JTree.h>
#include <jcpp.h>

#undef INSERT
#undef ON
#undef ON_OR_INSERT
#undef USE_SELECTION

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $DropMode = ::javax::swing::DropMode;

namespace javax {
	namespace swing {

$ints* JTree$1::$SwitchMap$javax$swing$DropMode = nullptr;

void JTree$1::clinit$($Class* clazz) {
	$assignStatic(JTree$1::$SwitchMap$javax$swing$DropMode, $new($ints, $($DropMode::values())->length));
	{
		try {
			JTree$1::$SwitchMap$javax$swing$DropMode->set($DropMode::USE_SELECTION->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JTree$1::$SwitchMap$javax$swing$DropMode->set($DropMode::ON->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JTree$1::$SwitchMap$javax$swing$DropMode->set($DropMode::INSERT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JTree$1::$SwitchMap$javax$swing$DropMode->set($DropMode::ON_OR_INSERT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JTree$1::JTree$1() {
}

$Class* JTree$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$swing$DropMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JTree$1, $SwitchMap$javax$swing$DropMode)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JTree",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTree$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.swing.JTree$1",
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
		"javax.swing.JTree"
	};
	$loadClass(JTree$1, name, initialize, &classInfo$$, JTree$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JTree$1);
	});
	return class$;
}

$Class* JTree$1::class$ = nullptr;

	} // swing
} // javax