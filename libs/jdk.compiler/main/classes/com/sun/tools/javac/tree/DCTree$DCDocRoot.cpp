#include <com/sun/tools/javac/tree/DCTree$DCDocRoot.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/tools/javac/tree/DCTree$DCInlineTag.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <jcpp.h>

#undef DOC_ROOT

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $DCTree$DCInlineTag = ::com::sun::tools::javac::tree::DCTree$DCInlineTag;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$String* DCTree$DCDocRoot::getTagName() {
	return this->$DCTree$DCInlineTag::getTagName();
}

$String* DCTree$DCDocRoot::toString() {
	return this->$DCTree$DCInlineTag::toString();
}

int32_t DCTree$DCDocRoot::hashCode() {
	return this->$DCTree$DCInlineTag::hashCode();
}

bool DCTree$DCDocRoot::equals(Object$* arg0) {
	return this->$DCTree$DCInlineTag::equals(arg0);
}

$Object* DCTree$DCDocRoot::clone() {
	return this->$DCTree$DCInlineTag::clone();
}

void DCTree$DCDocRoot::finalize() {
	this->$DCTree$DCInlineTag::finalize();
}

void DCTree$DCDocRoot::init$() {
	$DCTree$DCInlineTag::init$();
}

$DocTree$Kind* DCTree$DCDocRoot::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::DOC_ROOT;
}

$Object* DCTree$DCDocRoot::accept($DocTreeVisitor* v, Object$* d) {
	return $nc(v)->visitDocRoot(this, d);
}

DCTree$DCDocRoot::DCTree$DCDocRoot() {
}

$Class* DCTree$DCDocRoot::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(DCTree$DCDocRoot, init$, void)},
		{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(DCTree$DCDocRoot, accept, $Object*, $DocTreeVisitor*, Object$*)},
		{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCDocRoot, getKind, $DocTree$Kind*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.DCTree$DCDocRoot", "com.sun.tools.javac.tree.DCTree", "DCDocRoot", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.tree.DCTree$DCInlineTag", "com.sun.tools.javac.tree.DCTree", "DCInlineTag", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.DCTree$DCDocRoot",
		"com.sun.tools.javac.tree.DCTree$DCInlineTag",
		"com.sun.source.doctree.DocRootTree",
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
	$loadClass(DCTree$DCDocRoot, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DCTree$DCDocRoot));
	});
	return class$;
}

$Class* DCTree$DCDocRoot::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com