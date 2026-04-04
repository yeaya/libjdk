#include <com/sun/tools/javac/model/JavacElements$1.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/model/JavacElements.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/lang/model/element/ModuleElement$DirectiveKind.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <jcpp.h>

#undef EXPORTS
#undef MDL
#undef OPENS
#undef PCK
#undef REQUIRES

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ModuleElement$DirectiveKind = ::javax::lang::model::element::ModuleElement$DirectiveKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

$ints* JavacElements$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind = nullptr;
$ints* JavacElements$1::$SwitchMap$javax$lang$model$element$ModuleElement$DirectiveKind = nullptr;

void JavacElements$1::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(JavacElements$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind, $new($ints, $($Kinds$Kind::values())->length));
	{
		try {
			JavacElements$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind->set($Kinds$Kind::PCK->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavacElements$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind->set($Kinds$Kind::MDL->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(JavacElements$1::$SwitchMap$javax$lang$model$element$ModuleElement$DirectiveKind, $new($ints, $($ModuleElement$DirectiveKind::values())->length));
	{
		try {
			JavacElements$1::$SwitchMap$javax$lang$model$element$ModuleElement$DirectiveKind->set($ModuleElement$DirectiveKind::REQUIRES->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavacElements$1::$SwitchMap$javax$lang$model$element$ModuleElement$DirectiveKind->set($ModuleElement$DirectiveKind::EXPORTS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JavacElements$1::$SwitchMap$javax$lang$model$element$ModuleElement$DirectiveKind->set($ModuleElement$DirectiveKind::OPENS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JavacElements$1::JavacElements$1() {
}

$Class* JavacElements$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$code$Kinds$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacElements$1, $SwitchMap$com$sun$tools$javac$code$Kinds$Kind)},
		{"$SwitchMap$javax$lang$model$element$ModuleElement$DirectiveKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacElements$1, $SwitchMap$javax$lang$model$element$ModuleElement$DirectiveKind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.model.JavacElements",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.model.JavacElements$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.model.JavacElements$1",
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
		"com.sun.tools.javac.model.JavacElements"
	};
	$loadClass(JavacElements$1, name, initialize, &classInfo$$, JavacElements$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JavacElements$1);
	});
	return class$;
}

$Class* JavacElements$1::class$ = nullptr;

				} // model
			} // javac
		} // tools
	} // sun
} // com