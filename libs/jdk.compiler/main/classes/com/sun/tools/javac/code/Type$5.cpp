#include <com/sun/tools/javac/code/Type$5.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef DOUBLE
#undef EQ
#undef FLOAT
#undef INT
#undef LONG
#undef LOWER
#undef SHORT
#undef UPPER

using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
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

$ints* Type$5::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound = nullptr;
$ints* Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void Type$5::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Type$5::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound, $new($ints, $($Type$UndetVar$InferenceBound::values())->length));
	{
		try {
			Type$5::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound->set($Type$UndetVar$InferenceBound::UPPER->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Type$5::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound->set($Type$UndetVar$InferenceBound::LOWER->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Type$5::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound->set($Type$UndetVar$InferenceBound::EQ->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::CHAR->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::BYTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::INT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::LONG->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::FLOAT->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::DOUBLE->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::BOOLEAN->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Type$5::Type$5() {
}

$Class* Type$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Type$5, $SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound)},
		{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Type$5, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Type",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Type$5", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.code.Type$5",
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
		"com.sun.tools.javac.code.Type"
	};
	$loadClass(Type$5, name, initialize, &classInfo$$, Type$5::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Type$5);
	});
	return class$;
}

$Class* Type$5::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com