#include <com/sun/tools/javac/main/JavaCompiler$2.h>
#include <com/sun/tools/javac/main/JavaCompiler$CompilePolicy.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BY_FILE
#undef BY_TODO
#undef CLASSDEF
#undef METHODDEF
#undef SIMPLE
#undef VARDEF

using $JavaCompiler$CompilePolicy = ::com::sun::tools::javac::main::JavaCompiler$CompilePolicy;
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
				namespace main {

$ints* JavaCompiler$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;
$ints* JavaCompiler$2::$SwitchMap$com$sun$tools$javac$main$JavaCompiler$CompilePolicy = nullptr;

void JavaCompiler$2::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(JavaCompiler$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			JavaCompiler$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::CLASSDEF->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavaCompiler$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::METHODDEF->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavaCompiler$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::VARDEF->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(JavaCompiler$2::$SwitchMap$com$sun$tools$javac$main$JavaCompiler$CompilePolicy, $new($ints, $($JavaCompiler$CompilePolicy::values())->length));
	{
		try {
			JavaCompiler$2::$SwitchMap$com$sun$tools$javac$main$JavaCompiler$CompilePolicy->set($JavaCompiler$CompilePolicy::SIMPLE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavaCompiler$2::$SwitchMap$com$sun$tools$javac$main$JavaCompiler$CompilePolicy->set($JavaCompiler$CompilePolicy::BY_FILE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavaCompiler$2::$SwitchMap$com$sun$tools$javac$main$JavaCompiler$CompilePolicy->set($JavaCompiler$CompilePolicy::BY_TODO->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JavaCompiler$2::JavaCompiler$2() {
}

$Class* JavaCompiler$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavaCompiler$2, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
		{"$SwitchMap$com$sun$tools$javac$main$JavaCompiler$CompilePolicy", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavaCompiler$2, $SwitchMap$com$sun$tools$javac$main$JavaCompiler$CompilePolicy)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.main.JavaCompiler",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.JavaCompiler$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.main.JavaCompiler$2",
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
		"com.sun.tools.javac.main.JavaCompiler"
	};
	$loadClass(JavaCompiler$2, name, initialize, &classInfo$$, JavaCompiler$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JavaCompiler$2);
	});
	return class$;
}

$Class* JavaCompiler$2::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com