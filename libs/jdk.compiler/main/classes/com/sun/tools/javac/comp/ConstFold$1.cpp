#include <com/sun/tools/javac/comp/ConstFold$1.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/ConstFold.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BYTE
#undef CHAR
#undef DOUBLE
#undef FLOAT
#undef INT
#undef LONG
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

$ints* ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void ConstFold$1::clinit$($Class* clazz) {
	$assignStatic(ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::BYTE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::CHAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::INT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::LONG->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::FLOAT->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::DOUBLE->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ConstFold$1::ConstFold$1() {
}

$Class* ConstFold$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ConstFold$1, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.ConstFold",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.ConstFold$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.comp.ConstFold$1",
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
		"com.sun.tools.javac.comp.ConstFold"
	};
	$loadClass(ConstFold$1, name, initialize, &classInfo$$, ConstFold$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ConstFold$1);
	});
	return class$;
}

$Class* ConstFold$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com