#include <com/sun/tools/javac/processing/JavacMessager$1.h>
#include <com/sun/tools/javac/processing/JavacMessager.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

#undef ERROR
#undef MANDATORY_WARNING
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

$ints* JavacMessager$1::$SwitchMap$javax$tools$Diagnostic$Kind = nullptr;

void JavacMessager$1::clinit$($Class* clazz) {
	$assignStatic(JavacMessager$1::$SwitchMap$javax$tools$Diagnostic$Kind, $new($ints, $($Diagnostic$Kind::values())->length));
	{
		try {
			JavacMessager$1::$SwitchMap$javax$tools$Diagnostic$Kind->set($Diagnostic$Kind::ERROR->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavacMessager$1::$SwitchMap$javax$tools$Diagnostic$Kind->set($Diagnostic$Kind::WARNING->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavacMessager$1::$SwitchMap$javax$tools$Diagnostic$Kind->set($Diagnostic$Kind::MANDATORY_WARNING->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JavacMessager$1::JavacMessager$1() {
}

$Class* JavacMessager$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$tools$Diagnostic$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacMessager$1, $SwitchMap$javax$tools$Diagnostic$Kind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.processing.JavacMessager",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.processing.JavacMessager$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.processing.JavacMessager$1",
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
		"com.sun.tools.javac.processing.JavacMessager"
	};
	$loadClass(JavacMessager$1, name, initialize, &classInfo$$, JavacMessager$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JavacMessager$1);
	});
	return class$;
}

$Class* JavacMessager$1::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com