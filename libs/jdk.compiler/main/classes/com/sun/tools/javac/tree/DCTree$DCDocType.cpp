#include <com/sun/tools/javac/tree/DCTree$DCDocType.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <jcpp.h>

#undef DOC_TYPE

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

$String* DCTree$DCDocType::toString() {
	 return this->$DCTree::toString();
}

int32_t DCTree$DCDocType::hashCode() {
	 return this->$DCTree::hashCode();
}

bool DCTree$DCDocType::equals(Object$* arg0) {
	 return this->$DCTree::equals(arg0);
}

$Object* DCTree$DCDocType::clone() {
	 return this->$DCTree::clone();
}

void DCTree$DCDocType::finalize() {
	this->$DCTree::finalize();
}

void DCTree$DCDocType::init$($String* text) {
	$DCTree::init$();
	$set(this, text, text);
}

$DocTree$Kind* DCTree$DCDocType::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::DOC_TYPE;
}

$Object* DCTree$DCDocType::accept($DocTreeVisitor* v, Object$* d) {
	return $nc(v)->visitDocType(this, d);
}

$String* DCTree$DCDocType::getText() {
	return this->text;
}

DCTree$DCDocType::DCTree$DCDocType() {
}

$Class* DCTree$DCDocType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"text", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCDocType, text)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(DCTree$DCDocType, init$, void, $String*)},
		{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(DCTree$DCDocType, accept, $Object*, $DocTreeVisitor*, Object$*)},
		{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCDocType, getKind, $DocTree$Kind*)},
		{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCDocType, getText, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.DCTree$DCDocType", "com.sun.tools.javac.tree.DCTree", "DCDocType", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.DCTree$DCDocType",
		"com.sun.tools.javac.tree.DCTree",
		"com.sun.source.doctree.DocTypeTree",
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
	$loadClass(DCTree$DCDocType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DCTree$DCDocType));
	});
	return class$;
}

$Class* DCTree$DCDocType::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com