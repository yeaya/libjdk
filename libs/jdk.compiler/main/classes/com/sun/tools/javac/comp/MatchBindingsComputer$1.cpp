#include <com/sun/tools/javac/comp/MatchBindingsComputer$1.h>
#include <com/sun/tools/javac/comp/MatchBindingsComputer.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef AND
#undef BINDINGPATTERN
#undef CONDEXPR
#undef GUARDPATTERN
#undef NOT
#undef OR
#undef PARENS
#undef PARENTHESIZEDPATTERN
#undef TYPETEST

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
				namespace comp {

$ints* MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;

void MatchBindingsComputer$1::clinit$($Class* clazz) {
	$assignStatic(MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::AND->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::OR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::NOT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::BINDINGPATTERN->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::PARENTHESIZEDPATTERN->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::GUARDPATTERN->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::PARENS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::TYPETEST->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::CONDEXPR->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

MatchBindingsComputer$1::MatchBindingsComputer$1() {
}

$Class* MatchBindingsComputer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MatchBindingsComputer$1, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.MatchBindingsComputer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.MatchBindingsComputer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.comp.MatchBindingsComputer$1",
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
		"com.sun.tools.javac.comp.MatchBindingsComputer"
	};
	$loadClass(MatchBindingsComputer$1, name, initialize, &classInfo$$, MatchBindingsComputer$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MatchBindingsComputer$1);
	});
	return class$;
}

$Class* MatchBindingsComputer$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com