#include <com/sun/tools/javac/code/Symbol$1.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/lang/model/element/ElementKind.h>
#include <jcpp.h>

#undef EXCEPTION_PARAMETER
#undef LOCAL_VARIABLE
#undef PACKAGE
#undef PARAMETER
#undef POSTDEC
#undef POSTINC
#undef PREDEC
#undef PREINC
#undef RESOURCE_VARIABLE

using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ElementKind = ::javax::lang::model::element::ElementKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$ints* Symbol$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;
$ints* Symbol$1::$SwitchMap$javax$lang$model$element$ElementKind = nullptr;

void Symbol$1::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Symbol$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			Symbol$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::PREINC->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Symbol$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::PREDEC->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Symbol$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::POSTINC->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Symbol$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::POSTDEC->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Symbol$1::$SwitchMap$javax$lang$model$element$ElementKind, $new($ints, $($ElementKind::values())->length));
	{
		try {
			Symbol$1::$SwitchMap$javax$lang$model$element$ElementKind->set($ElementKind::LOCAL_VARIABLE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Symbol$1::$SwitchMap$javax$lang$model$element$ElementKind->set($ElementKind::PACKAGE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Symbol$1::$SwitchMap$javax$lang$model$element$ElementKind->set($ElementKind::PARAMETER->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Symbol$1::$SwitchMap$javax$lang$model$element$ElementKind->set($ElementKind::RESOURCE_VARIABLE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Symbol$1::$SwitchMap$javax$lang$model$element$ElementKind->set($ElementKind::EXCEPTION_PARAMETER->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Symbol$1::Symbol$1() {
}

$Class* Symbol$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Symbol$1, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
		{"$SwitchMap$javax$lang$model$element$ElementKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Symbol$1, $SwitchMap$javax$lang$model$element$ElementKind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Symbol",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Symbol$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.code.Symbol$1",
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
		"com.sun.tools.javac.code.Symbol"
	};
	$loadClass(Symbol$1, name, initialize, &classInfo$$, Symbol$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Symbol$1);
	});
	return class$;
}

$Class* Symbol$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com