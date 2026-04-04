#include <com/sun/tools/javac/util/Log$1.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ERROR
#undef FRAGMENT
#undef NOTE
#undef WARNING

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

$ints* Log$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType = nullptr;

void Log$1::clinit$($Class* clazz) {
	$assignStatic(Log$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType, $new($ints, $($JCDiagnostic$DiagnosticType::values())->length));
	{
		try {
			Log$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType->set($JCDiagnostic$DiagnosticType::FRAGMENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Log$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType->set($JCDiagnostic$DiagnosticType::NOTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Log$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType->set($JCDiagnostic$DiagnosticType::WARNING->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Log$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType->set($JCDiagnostic$DiagnosticType::ERROR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Log$1::Log$1() {
}

$Class* Log$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Log$1, $SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.util.Log",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.Log$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.util.Log$1",
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
		"com.sun.tools.javac.util.Log"
	};
	$loadClass(Log$1, name, initialize, &classInfo$$, Log$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Log$1);
	});
	return class$;
}

$Class* Log$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com