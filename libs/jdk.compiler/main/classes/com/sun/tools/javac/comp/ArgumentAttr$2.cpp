#include <com/sun/tools/javac/comp/ArgumentAttr$2.h>
#include <com/sun/source/tree/LambdaExpressionTree$BodyKind.h>
#include <com/sun/source/tree/LambdaExpressionTree.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef EXPRESSION
#undef STATEMENT

using $LambdaExpressionTree$BodyKind = ::com::sun::source::tree::LambdaExpressionTree$BodyKind;
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

$ints* ArgumentAttr$2::$SwitchMap$com$sun$source$tree$LambdaExpressionTree$BodyKind = nullptr;

void ArgumentAttr$2::clinit$($Class* clazz) {
	$assignStatic(ArgumentAttr$2::$SwitchMap$com$sun$source$tree$LambdaExpressionTree$BodyKind, $new($ints, $($LambdaExpressionTree$BodyKind::values())->length));
	{
		try {
			ArgumentAttr$2::$SwitchMap$com$sun$source$tree$LambdaExpressionTree$BodyKind->set($LambdaExpressionTree$BodyKind::EXPRESSION->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ArgumentAttr$2::$SwitchMap$com$sun$source$tree$LambdaExpressionTree$BodyKind->set($LambdaExpressionTree$BodyKind::STATEMENT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ArgumentAttr$2::ArgumentAttr$2() {
}

$Class* ArgumentAttr$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$source$tree$LambdaExpressionTree$BodyKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ArgumentAttr$2, $SwitchMap$com$sun$source$tree$LambdaExpressionTree$BodyKind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.ArgumentAttr",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.ArgumentAttr$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.comp.ArgumentAttr$2",
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
		"com.sun.tools.javac.comp.ArgumentAttr"
	};
	$loadClass(ArgumentAttr$2, name, initialize, &classInfo$$, ArgumentAttr$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ArgumentAttr$2);
	});
	return class$;
}

$Class* ArgumentAttr$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com