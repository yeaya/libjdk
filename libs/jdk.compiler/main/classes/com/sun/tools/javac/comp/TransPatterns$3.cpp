#include <com/sun/tools/javac/comp/TransPatterns$3.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/TransPatterns.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BYTE
#undef CHAR
#undef CLASS
#undef INT
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

$ints* TransPatterns$3::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void TransPatterns$3::clinit$($Class* clazz) {
	$assignStatic(TransPatterns$3::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			TransPatterns$3::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::BYTE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TransPatterns$3::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::CHAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TransPatterns$3::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TransPatterns$3::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::INT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TransPatterns$3::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::CLASS->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TransPatterns$3::TransPatterns$3() {
}

$Class* TransPatterns$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TransPatterns$3, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.TransPatterns",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.TransPatterns$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.comp.TransPatterns$3",
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
		"com.sun.tools.javac.comp.TransPatterns"
	};
	$loadClass(TransPatterns$3, name, initialize, &classInfo$$, TransPatterns$3::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TransPatterns$3);
	});
	return class$;
}

$Class* TransPatterns$3::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com