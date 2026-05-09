#include <com/sun/tools/javac/tree/DCTree$DCComment.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <jcpp.h>

#undef COMMENT

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$String* DCTree$DCComment::toString() {
	return this->$DCTree::toString();
}

int32_t DCTree$DCComment::hashCode() {
	return this->$DCTree::hashCode();
}

bool DCTree$DCComment::equals(Object$* arg0) {
	return this->$DCTree::equals(arg0);
}

$Object* DCTree$DCComment::clone() {
	return this->$DCTree::clone();
}

void DCTree$DCComment::finalize() {
	this->$DCTree::finalize();
}

void DCTree$DCComment::init$($String* body) {
	$DCTree::init$();
	$set(this, body, body);
}

$DocTree$Kind* DCTree$DCComment::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::COMMENT;
}

$Object* DCTree$DCComment::accept($DocTreeVisitor* v, Object$* d) {
	return $nc(v)->visitComment(this, d);
}

$String* DCTree$DCComment::getBody() {
	return this->body;
}

DCTree$DCComment::DCTree$DCComment() {
}

$Class* DCTree$DCComment::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"body", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCComment, body)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(DCTree$DCComment, init$, void, $String*)},
		{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(DCTree$DCComment, accept, $Object*, $DocTreeVisitor*, Object$*)},
		{"getBody", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCComment, getBody, $String*)},
		{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCComment, getKind, $DocTree$Kind*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.DCTree$DCComment", "com.sun.tools.javac.tree.DCTree", "DCComment", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.DCTree$DCComment",
		"com.sun.tools.javac.tree.DCTree",
		"com.sun.source.doctree.CommentTree",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.tree.DCTree"
	};
	$loadClass(DCTree$DCComment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DCTree$DCComment));
	});
	return class$;
}

$Class* DCTree$DCComment::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com