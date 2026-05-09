#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <jcpp.h>

using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$String* DCTree$DCBlockTag::toString() {
	return this->$DCTree::toString();
}

int32_t DCTree$DCBlockTag::hashCode() {
	return this->$DCTree::hashCode();
}

bool DCTree$DCBlockTag::equals(Object$* arg0) {
	return this->$DCTree::equals(arg0);
}

$Object* DCTree$DCBlockTag::clone() {
	return this->$DCTree::clone();
}

void DCTree$DCBlockTag::finalize() {
	this->$DCTree::finalize();
}

void DCTree$DCBlockTag::init$() {
	$DCTree::init$();
}

$String* DCTree$DCBlockTag::getTagName() {
	return $nc($(getKind()))->tagName;
}

DCTree$DCBlockTag::DCTree$DCBlockTag() {
}

$Class* DCTree$DCBlockTag::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $ABSTRACT},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(DCTree$DCBlockTag, init$, void)},
		{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCBlockTag, getTagName, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.DCTree$DCBlockTag", "com.sun.tools.javac.tree.DCTree", "DCBlockTag", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.tree.DCTree$DCBlockTag",
		"com.sun.tools.javac.tree.DCTree",
		"com.sun.source.doctree.BlockTagTree",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.tree.DCTree"
	};
	$loadClass(DCTree$DCBlockTag, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DCTree$DCBlockTag));
	});
	return class$;
}

$Class* DCTree$DCBlockTag::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com