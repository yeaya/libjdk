#include <com/sun/tools/javac/tree/DCTree$DCInlineTag.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/tools/javac/tree/DCTree$DCEndPosTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <jcpp.h>

using $DCTree$DCEndPosTree = ::com::sun::tools::javac::tree::DCTree$DCEndPosTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$String* DCTree$DCInlineTag::toString() {
	return this->$DCTree$DCEndPosTree::toString();
}

int32_t DCTree$DCInlineTag::hashCode() {
	return this->$DCTree$DCEndPosTree::hashCode();
}

bool DCTree$DCInlineTag::equals(Object$* arg0) {
	return this->$DCTree$DCEndPosTree::equals(arg0);
}

$Object* DCTree$DCInlineTag::clone() {
	return this->$DCTree$DCEndPosTree::clone();
}

void DCTree$DCInlineTag::finalize() {
	this->$DCTree$DCEndPosTree::finalize();
}

void DCTree$DCInlineTag::init$() {
	$DCTree$DCEndPosTree::init$();
}

$String* DCTree$DCInlineTag::getTagName() {
	return $nc($(getKind()))->tagName;
}

DCTree$DCInlineTag::DCTree$DCInlineTag() {
}

$Class* DCTree$DCInlineTag::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $ABSTRACT},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(DCTree$DCInlineTag, init$, void)},
		{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCInlineTag, getTagName, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.DCTree$DCInlineTag", "com.sun.tools.javac.tree.DCTree", "DCInlineTag", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.tree.DCTree$DCEndPosTree", "com.sun.tools.javac.tree.DCTree", "DCEndPosTree", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.tree.DCTree$DCInlineTag",
		"com.sun.tools.javac.tree.DCTree$DCEndPosTree",
		"com.sun.source.doctree.InlineTagTree",
		nullptr,
		methodInfos$$,
		"Lcom/sun/tools/javac/tree/DCTree$DCEndPosTree<Lcom/sun/tools/javac/tree/DCTree$DCInlineTag;>;Lcom/sun/source/doctree/InlineTagTree;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.tree.DCTree"
	};
	$loadClass(DCTree$DCInlineTag, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DCTree$DCInlineTag));
	});
	return class$;
}

$Class* DCTree$DCInlineTag::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com