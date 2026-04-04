#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$2.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

#undef ERROR
#undef WARNING

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Diagnostic$Kind = ::javax::tools::Diagnostic$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$ints* JavacProcessingEnvironment$2::$SwitchMap$javax$tools$Diagnostic$Kind = nullptr;

void JavacProcessingEnvironment$2::clinit$($Class* clazz) {
	$assignStatic(JavacProcessingEnvironment$2::$SwitchMap$javax$tools$Diagnostic$Kind, $new($ints, $($Diagnostic$Kind::values())->length));
	{
		try {
			JavacProcessingEnvironment$2::$SwitchMap$javax$tools$Diagnostic$Kind->set($Diagnostic$Kind::WARNING->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavacProcessingEnvironment$2::$SwitchMap$javax$tools$Diagnostic$Kind->set($Diagnostic$Kind::ERROR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JavacProcessingEnvironment$2::JavacProcessingEnvironment$2() {
}

$Class* JavacProcessingEnvironment$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$tools$Diagnostic$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacProcessingEnvironment$2, $SwitchMap$javax$tools$Diagnostic$Kind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.processing.JavacProcessingEnvironment",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.processing.JavacProcessingEnvironment$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.processing.JavacProcessingEnvironment$2",
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
		"com.sun.tools.javac.processing.JavacProcessingEnvironment"
	};
	$loadClass(JavacProcessingEnvironment$2, name, initialize, &classInfo$$, JavacProcessingEnvironment$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JavacProcessingEnvironment$2);
	});
	return class$;
}

$Class* JavacProcessingEnvironment$2::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com