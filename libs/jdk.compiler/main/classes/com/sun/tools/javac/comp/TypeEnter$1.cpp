#include <com/sun/tools/javac/comp/TypeEnter$1.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef TYPEAPPLY

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

$ints* TypeEnter$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;

void TypeEnter$1::clinit$($Class* clazz) {
	$assignStatic(TypeEnter$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			TypeEnter$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::TYPEAPPLY->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TypeEnter$1::TypeEnter$1() {
}

$Class* TypeEnter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeEnter$1, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.TypeEnter",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.TypeEnter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.comp.TypeEnter$1",
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
		"com.sun.tools.javac.comp.TypeEnter"
	};
	$loadClass(TypeEnter$1, name, initialize, &classInfo$$, TypeEnter$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TypeEnter$1);
	});
	return class$;
}

$Class* TypeEnter$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com