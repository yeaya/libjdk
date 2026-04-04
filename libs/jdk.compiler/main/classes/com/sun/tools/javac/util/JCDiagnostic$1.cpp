#include <com/sun/tools/javac/util/JCDiagnostic$1.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ERROR
#undef FRAGMENT
#undef NOTE
#undef RESOLVE_ERROR
#undef SYNTAX
#undef WARNING

using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$ints* JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticFlag = nullptr;
$ints* JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType = nullptr;

void JCDiagnostic$1::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticFlag, $new($ints, $($JCDiagnostic$DiagnosticFlag::values())->length));
	{
		try {
			JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticFlag->set($JCDiagnostic$DiagnosticFlag::SYNTAX->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticFlag->set($JCDiagnostic$DiagnosticFlag::RESOLVE_ERROR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType, $new($ints, $($JCDiagnostic$DiagnosticType::values())->length));
	{
		try {
			JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType->set($JCDiagnostic$DiagnosticType::ERROR->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType->set($JCDiagnostic$DiagnosticType::WARNING->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType->set($JCDiagnostic$DiagnosticType::NOTE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType->set($JCDiagnostic$DiagnosticType::FRAGMENT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JCDiagnostic$1::JCDiagnostic$1() {
}

$Class* JCDiagnostic$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticFlag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JCDiagnostic$1, $SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticFlag)},
		{"$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JCDiagnostic$1, $SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.util.JCDiagnostic",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.JCDiagnostic$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.util.JCDiagnostic$1",
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
		"com.sun.tools.javac.util.JCDiagnostic"
	};
	$loadClass(JCDiagnostic$1, name, initialize, &classInfo$$, JCDiagnostic$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JCDiagnostic$1);
	});
	return class$;
}

$Class* JCDiagnostic$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com