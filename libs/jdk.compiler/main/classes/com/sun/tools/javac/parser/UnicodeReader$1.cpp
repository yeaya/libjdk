#include <com/sun/tools/javac/parser/UnicodeReader$1.h>
#include <com/sun/tools/javac/parser/UnicodeReader$UnicodeEscapeResult.h>
#include <com/sun/tools/javac/parser/UnicodeReader.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BACKSLASH
#undef BROKEN_ESCAPE
#undef VALID_ESCAPE

using $UnicodeReader$UnicodeEscapeResult = ::com::sun::tools::javac::parser::UnicodeReader$UnicodeEscapeResult;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$ints* UnicodeReader$1::$SwitchMap$com$sun$tools$javac$parser$UnicodeReader$UnicodeEscapeResult = nullptr;

void UnicodeReader$1::clinit$($Class* clazz) {
	$assignStatic(UnicodeReader$1::$SwitchMap$com$sun$tools$javac$parser$UnicodeReader$UnicodeEscapeResult, $new($ints, $($UnicodeReader$UnicodeEscapeResult::values())->length));
	{
		try {
			UnicodeReader$1::$SwitchMap$com$sun$tools$javac$parser$UnicodeReader$UnicodeEscapeResult->set($UnicodeReader$UnicodeEscapeResult::BACKSLASH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			UnicodeReader$1::$SwitchMap$com$sun$tools$javac$parser$UnicodeReader$UnicodeEscapeResult->set($UnicodeReader$UnicodeEscapeResult::VALID_ESCAPE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			UnicodeReader$1::$SwitchMap$com$sun$tools$javac$parser$UnicodeReader$UnicodeEscapeResult->set($UnicodeReader$UnicodeEscapeResult::BROKEN_ESCAPE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

UnicodeReader$1::UnicodeReader$1() {
}

$Class* UnicodeReader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$parser$UnicodeReader$UnicodeEscapeResult", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(UnicodeReader$1, $SwitchMap$com$sun$tools$javac$parser$UnicodeReader$UnicodeEscapeResult)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.parser.UnicodeReader",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.UnicodeReader$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.parser.UnicodeReader$1",
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
		"com.sun.tools.javac.parser.UnicodeReader"
	};
	$loadClass(UnicodeReader$1, name, initialize, &classInfo$$, UnicodeReader$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UnicodeReader$1);
	});
	return class$;
}

$Class* UnicodeReader$1::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com