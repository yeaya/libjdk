#include <com/sun/tools/javac/tree/JCTree$1.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BOOLEAN
#undef CHAR
#undef EXTENDS
#undef SUPER
#undef UNBOUND

using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$ints* JCTree$1::$SwitchMap$com$sun$tools$javac$code$BoundKind = nullptr;
$ints* JCTree$1::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void JCTree$1::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(JCTree$1::$SwitchMap$com$sun$tools$javac$code$BoundKind, $new($ints, $($BoundKind::values())->length));
	{
		try {
			JCTree$1::$SwitchMap$com$sun$tools$javac$code$BoundKind->set($BoundKind::UNBOUND->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JCTree$1::$SwitchMap$com$sun$tools$javac$code$BoundKind->set($BoundKind::EXTENDS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JCTree$1::$SwitchMap$com$sun$tools$javac$code$BoundKind->set($BoundKind::SUPER->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(JCTree$1::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			JCTree$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::BOOLEAN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JCTree$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::CHAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JCTree$1::JCTree$1() {
}

$Class* JCTree$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$code$BoundKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JCTree$1, $SwitchMap$com$sun$tools$javac$code$BoundKind)},
		{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JCTree$1, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.tree.JCTree",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.JCTree$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.tree.JCTree$1",
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
		"com.sun.tools.javac.tree.JCTree"
	};
	$loadClass(JCTree$1, name, initialize, &classInfo$$, JCTree$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JCTree$1);
	});
	return class$;
}

$Class* JCTree$1::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com