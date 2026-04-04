#include <com/sun/tools/javac/util/BasicDiagnosticFormatter$1.h>
#include <com/sun/tools/javac/util/BasicDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ERROR
#undef FRAGMENT

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

$ints* BasicDiagnosticFormatter$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType = nullptr;

void BasicDiagnosticFormatter$1::clinit$($Class* clazz) {
	$assignStatic(BasicDiagnosticFormatter$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType, $new($ints, $($JCDiagnostic$DiagnosticType::values())->length));
	{
		try {
			BasicDiagnosticFormatter$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType->set($JCDiagnostic$DiagnosticType::FRAGMENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			BasicDiagnosticFormatter$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType->set($JCDiagnostic$DiagnosticType::ERROR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

BasicDiagnosticFormatter$1::BasicDiagnosticFormatter$1() {
}

$Class* BasicDiagnosticFormatter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BasicDiagnosticFormatter$1, $SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.util.BasicDiagnosticFormatter",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.BasicDiagnosticFormatter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.util.BasicDiagnosticFormatter$1",
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
		"com.sun.tools.javac.util.BasicDiagnosticFormatter"
	};
	$loadClass(BasicDiagnosticFormatter$1, name, initialize, &classInfo$$, BasicDiagnosticFormatter$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BasicDiagnosticFormatter$1);
	});
	return class$;
}

$Class* BasicDiagnosticFormatter$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com