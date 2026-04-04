#include <javax/swing/MultiUIDefaults$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type.h>
#include <javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator.h>
#include <javax/swing/MultiUIDefaults.h>
#include <jcpp.h>

#undef ELEMENTS
#undef KEYS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $MultiUIDefaults$MultiUIDefaultsEnumerator$Type = ::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator$Type;

namespace javax {
	namespace swing {

$ints* MultiUIDefaults$1::$SwitchMap$javax$swing$MultiUIDefaults$MultiUIDefaultsEnumerator$Type = nullptr;

void MultiUIDefaults$1::clinit$($Class* clazz) {
	$assignStatic(MultiUIDefaults$1::$SwitchMap$javax$swing$MultiUIDefaults$MultiUIDefaultsEnumerator$Type, $new($ints, $($MultiUIDefaults$MultiUIDefaultsEnumerator$Type::values())->length));
	{
		try {
			MultiUIDefaults$1::$SwitchMap$javax$swing$MultiUIDefaults$MultiUIDefaultsEnumerator$Type->set($MultiUIDefaults$MultiUIDefaultsEnumerator$Type::KEYS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MultiUIDefaults$1::$SwitchMap$javax$swing$MultiUIDefaults$MultiUIDefaultsEnumerator$Type->set($MultiUIDefaults$MultiUIDefaultsEnumerator$Type::ELEMENTS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

MultiUIDefaults$1::MultiUIDefaults$1() {
}

$Class* MultiUIDefaults$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$swing$MultiUIDefaults$MultiUIDefaultsEnumerator$Type", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MultiUIDefaults$1, $SwitchMap$javax$swing$MultiUIDefaults$MultiUIDefaultsEnumerator$Type)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.MultiUIDefaults",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.MultiUIDefaults$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.swing.MultiUIDefaults$1",
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
		"javax.swing.MultiUIDefaults"
	};
	$loadClass(MultiUIDefaults$1, name, initialize, &classInfo$$, MultiUIDefaults$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MultiUIDefaults$1);
	});
	return class$;
}

$Class* MultiUIDefaults$1::class$ = nullptr;

	} // swing
} // javax