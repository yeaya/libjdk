#include <com/sun/tools/javac/code/ClassFinder$2.h>
#include <com/sun/tools/javac/code/ClassFinder.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <jcpp.h>

#undef CLASS
#undef OTHER
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
				namespace code {

$ints* ClassFinder$2::$SwitchMap$javax$tools$JavaFileObject$Kind = nullptr;

void ClassFinder$2::clinit$($Class* clazz) {
	$assignStatic(ClassFinder$2::$SwitchMap$javax$tools$JavaFileObject$Kind, $new($ints, $($JavaFileObject$Kind::values())->length));
	{
		try {
			ClassFinder$2::$SwitchMap$javax$tools$JavaFileObject$Kind->set($JavaFileObject$Kind::OTHER->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassFinder$2::$SwitchMap$javax$tools$JavaFileObject$Kind->set($JavaFileObject$Kind::CLASS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassFinder$2::$SwitchMap$javax$tools$JavaFileObject$Kind->set($JavaFileObject$Kind::SOURCE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ClassFinder$2::ClassFinder$2() {
}

$Class* ClassFinder$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$tools$JavaFileObject$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ClassFinder$2, $SwitchMap$javax$tools$JavaFileObject$Kind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.ClassFinder",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.ClassFinder$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.code.ClassFinder$2",
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
		"com.sun.tools.javac.code.ClassFinder"
	};
	$loadClass(ClassFinder$2, name, initialize, &classInfo$$, ClassFinder$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ClassFinder$2);
	});
	return class$;
}

$Class* ClassFinder$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com