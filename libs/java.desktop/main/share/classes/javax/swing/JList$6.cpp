#include <javax/swing/JList$6.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/DropMode.h>
#include <javax/swing/JList.h>
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

$ints* JList$6::$SwitchMap$javax$swing$DropMode = nullptr;

void JList$6::clinit$($Class* clazz) {
	$assignStatic(JList$6::$SwitchMap$javax$swing$DropMode, $new($ints, $($DropMode::values())->length));
	{
		try {
			JList$6::$SwitchMap$javax$swing$DropMode->set($DropMode::USE_SELECTION->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JList$6::$SwitchMap$javax$swing$DropMode->set($DropMode::ON->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JList$6::$SwitchMap$javax$swing$DropMode->set($DropMode::INSERT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JList$6::$SwitchMap$javax$swing$DropMode->set($DropMode::ON_OR_INSERT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JList$6::JList$6() {
}

$Class* JList$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$swing$DropMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JList$6, $SwitchMap$javax$swing$DropMode)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JList",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JList$6", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.swing.JList$6",
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
		"javax.swing.JList"
	};
	$loadClass(JList$6, name, initialize, &classInfo$$, JList$6::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JList$6);
	});
	return class$;
}

$Class* JList$6::class$ = nullptr;

	} // swing
} // javax