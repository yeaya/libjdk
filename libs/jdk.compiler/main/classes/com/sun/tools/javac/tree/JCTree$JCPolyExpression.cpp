#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef POLY
#undef STANDALONE

using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCPolyExpression$PolyKind = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression$PolyKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

void JCTree$JCPolyExpression::init$() {
	$JCTree$JCExpression::init$();
}

bool JCTree$JCPolyExpression::isPoly() {
	$init($JCTree$JCPolyExpression$PolyKind);
	return this->polyKind == $JCTree$JCPolyExpression$PolyKind::POLY;
}

bool JCTree$JCPolyExpression::isStandalone() {
	$init($JCTree$JCPolyExpression$PolyKind);
	return this->polyKind == $JCTree$JCPolyExpression$PolyKind::STANDALONE;
}

JCTree$JCPolyExpression::JCTree$JCPolyExpression() {
}

$Class* JCTree$JCPolyExpression::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"polyKind", "Lcom/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind;", nullptr, $PUBLIC, $field(JCTree$JCPolyExpression, polyKind)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JCTree$JCPolyExpression, init$, void)},
		{"isPoly", "()Z", nullptr, $PUBLIC, $virtualMethod(JCTree$JCPolyExpression, isPoly, bool)},
		{"isStandalone", "()Z", nullptr, $PUBLIC, $virtualMethod(JCTree$JCPolyExpression, isStandalone, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.JCTree$JCPolyExpression", "com.sun.tools.javac.tree.JCTree", "JCPolyExpression", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.tree.JCTree$JCPolyExpression$PolyKind", "com.sun.tools.javac.tree.JCTree$JCPolyExpression", "PolyKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.tree.JCTree$JCPolyExpression",
		"com.sun.tools.javac.tree.JCTree$JCExpression",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.tree.JCTree"
	};
	$loadClass(JCTree$JCPolyExpression, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JCTree$JCPolyExpression));
	});
	return class$;
}

$Class* JCTree$JCPolyExpression::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com