#include <com/sun/tools/javac/api/JavacTaskImpl$3.h>
#include <com/sun/tools/javac/api/JavacTaskImpl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef CLASSDEF
#undef MODULEDEF
#undef PACKAGEDEF

using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$ints* JavacTaskImpl$3::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;

void JavacTaskImpl$3::clinit$($Class* clazz) {
	$assignStatic(JavacTaskImpl$3::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			JavacTaskImpl$3::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::CLASSDEF->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavacTaskImpl$3::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::MODULEDEF->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavacTaskImpl$3::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::PACKAGEDEF->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JavacTaskImpl$3::JavacTaskImpl$3() {
}

$Class* JavacTaskImpl$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacTaskImpl$3, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.api.JavacTaskImpl",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.api.JavacTaskImpl$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.api.JavacTaskImpl$3",
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
		"com.sun.tools.javac.api.JavacTaskImpl"
	};
	$loadClass(JavacTaskImpl$3, name, initialize, &classInfo$$, JavacTaskImpl$3::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JavacTaskImpl$3);
	});
	return class$;
}

$Class* JavacTaskImpl$3::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com