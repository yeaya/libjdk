#include <com/sun/tools/javac/tree/TreeCopier$1.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef LETEXPR

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
				namespace tree {

$ints* TreeCopier$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;

void TreeCopier$1::clinit$($Class* clazz) {
	$assignStatic(TreeCopier$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			TreeCopier$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::LETEXPR->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TreeCopier$1::TreeCopier$1() {
}

$Class* TreeCopier$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TreeCopier$1, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.tree.TreeCopier",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.TreeCopier$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.tree.TreeCopier$1",
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
		"com.sun.tools.javac.tree.TreeCopier"
	};
	$loadClass(TreeCopier$1, name, initialize, &classInfo$$, TreeCopier$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TreeCopier$1);
	});
	return class$;
}

$Class* TreeCopier$1::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com