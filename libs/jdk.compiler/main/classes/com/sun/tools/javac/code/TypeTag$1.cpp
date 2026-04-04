#include <com/sun/tools/javac/code/TypeTag$1.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BOT
#undef BYTE
#undef CHAR
#undef CLASS
#undef DOUBLE
#undef FLOAT
#undef INT
#undef LONG
#undef SHORT
#undef VOID

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
				namespace code {

$ints* TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void TypeTag$1::clinit$($Class* clazz) {
	$assignStatic(TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::INT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::LONG->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::FLOAT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::DOUBLE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::BOOLEAN->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::CHAR->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::CLASS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::BOT->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::BYTE->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::SHORT->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::VOID->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TypeTag$1::TypeTag$1() {
}

$Class* TypeTag$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeTag$1, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.TypeTag",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.TypeTag$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.code.TypeTag$1",
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
		"com.sun.tools.javac.code.TypeTag"
	};
	$loadClass(TypeTag$1, name, initialize, &classInfo$$, TypeTag$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TypeTag$1);
	});
	return class$;
}

$Class* TypeTag$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com