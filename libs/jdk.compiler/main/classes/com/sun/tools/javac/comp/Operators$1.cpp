#include <com/sun/tools/javac/comp/Operators$1.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BYTE
#undef CHAR
#undef SHORT

using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$ints* Operators$1::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void Operators$1::clinit$($Class* clazz) {
	$assignStatic(Operators$1::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			Operators$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::BYTE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Operators$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::SHORT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Operators$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::CHAR->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Operators$1::Operators$1() {
}

$Class* Operators$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Operators$1, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Operators",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Operators$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.comp.Operators$1",
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
		"com.sun.tools.javac.comp.Operators"
	};
	$loadClass(Operators$1, name, initialize, &classInfo$$, Operators$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$1);
	});
	return class$;
}

$Class* Operators$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com