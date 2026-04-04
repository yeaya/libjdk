#include <com/sun/tools/javac/processing/JavacFiler$1.h>
#include <com/sun/tools/javac/processing/JavacFiler.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef CLASS
#undef SOURCE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$ints* JavacFiler$1::$SwitchMap$javax$tools$JavaFileObject$Kind = nullptr;

void JavacFiler$1::clinit$($Class* clazz) {
	$assignStatic(JavacFiler$1::$SwitchMap$javax$tools$JavaFileObject$Kind, $new($ints, $($JavaFileObject$Kind::values())->length));
	{
		try {
			JavacFiler$1::$SwitchMap$javax$tools$JavaFileObject$Kind->set($JavaFileObject$Kind::SOURCE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavacFiler$1::$SwitchMap$javax$tools$JavaFileObject$Kind->set($JavaFileObject$Kind::CLASS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JavacFiler$1::JavacFiler$1() {
}

$Class* JavacFiler$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$tools$JavaFileObject$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacFiler$1, $SwitchMap$javax$tools$JavaFileObject$Kind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.processing.JavacFiler",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.processing.JavacFiler$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.processing.JavacFiler$1",
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
		"com.sun.tools.javac.processing.JavacFiler"
	};
	$loadClass(JavacFiler$1, name, initialize, &classInfo$$, JavacFiler$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JavacFiler$1);
	});
	return class$;
}

$Class* JavacFiler$1::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com