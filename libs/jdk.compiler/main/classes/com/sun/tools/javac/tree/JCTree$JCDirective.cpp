#include <com/sun/tools/javac/tree/JCTree$JCDirective.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$String* JCTree$JCDirective::toString() {
	 return this->$JCTree::toString();
}

$Object* JCTree$JCDirective::clone() {
	 return this->$JCTree::clone();
}

int32_t JCTree$JCDirective::hashCode() {
	 return this->$JCTree::hashCode();
}

bool JCTree$JCDirective::equals(Object$* arg0) {
	 return this->$JCTree::equals(arg0);
}

void JCTree$JCDirective::finalize() {
	this->$JCTree::finalize();
}

void JCTree$JCDirective::init$() {
	$JCTree::init$();
}

JCTree$JCDirective::JCTree$JCDirective() {
}

$Class* JCTree$JCDirective::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $ABSTRACT},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JCTree$JCDirective, init$, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.JCTree$JCDirective", "com.sun.tools.javac.tree.JCTree", "JCDirective", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.tree.JCTree$JCDirective",
		"com.sun.tools.javac.tree.JCTree",
		"com.sun.source.tree.DirectiveTree",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.tree.JCTree"
	};
	$loadClass(JCTree$JCDirective, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JCTree$JCDirective));
	});
	return class$;
}

$Class* JCTree$JCDirective::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com