#include <com/sun/tools/javac/tree/DCTree$DCReference.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/tools/javac/tree/DCTree$DCEndPosTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef REFERENCE

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $DCTree$DCEndPosTree = ::com::sun::tools::javac::tree::DCTree$DCEndPosTree;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$String* DCTree$DCReference::toString() {
	return this->$DCTree$DCEndPosTree::toString();
}

int32_t DCTree$DCReference::hashCode() {
	return this->$DCTree$DCEndPosTree::hashCode();
}

bool DCTree$DCReference::equals(Object$* arg0) {
	return this->$DCTree$DCEndPosTree::equals(arg0);
}

$Object* DCTree$DCReference::clone() {
	return this->$DCTree$DCEndPosTree::clone();
}

void DCTree$DCReference::finalize() {
	this->$DCTree$DCEndPosTree::finalize();
}

void DCTree$DCReference::init$($String* signature, $JCTree$JCExpression* moduleName, $JCTree* qualExpr, $Name* member, $List* paramTypes) {
	$DCTree$DCEndPosTree::init$();
	$set(this, signature, signature);
	$set(this, moduleName, moduleName);
	$set(this, qualifierExpression, qualExpr);
	$set(this, memberName, member);
	$set(this, paramTypes, paramTypes);
}

$DocTree$Kind* DCTree$DCReference::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::REFERENCE;
}

$Object* DCTree$DCReference::accept($DocTreeVisitor* v, Object$* d) {
	return $nc(v)->visitReference(this, d);
}

$String* DCTree$DCReference::getSignature() {
	return this->signature;
}

DCTree$DCReference::DCTree$DCReference() {
}

$Class* DCTree$DCReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"signature", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCReference, signature)},
		{"moduleName", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCReference, moduleName)},
		{"qualifierExpression", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCReference, qualifierExpression)},
		{"memberName", "Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCReference, memberName)},
		{"paramTypes", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCReference, paramTypes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree;Ljavax/lang/model/element/Name;Ljava/util/List;)V", "(Ljava/lang/String;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree;Ljavax/lang/model/element/Name;Ljava/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)V", 0, $method(DCTree$DCReference, init$, void, $String*, $JCTree$JCExpression*, $JCTree*, $Name*, $List*)},
		{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(DCTree$DCReference, accept, $Object*, $DocTreeVisitor*, Object$*)},
		{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCReference, getKind, $DocTree$Kind*)},
		{"getSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCReference, getSignature, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.DCTree$DCReference", "com.sun.tools.javac.tree.DCTree", "DCReference", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.tree.DCTree$DCEndPosTree", "com.sun.tools.javac.tree.DCTree", "DCEndPosTree", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.DCTree$DCReference",
		"com.sun.tools.javac.tree.DCTree$DCEndPosTree",
		"com.sun.source.doctree.ReferenceTree",
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/tree/DCTree$DCEndPosTree<Lcom/sun/tools/javac/tree/DCTree$DCReference;>;Lcom/sun/source/doctree/ReferenceTree;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.tree.DCTree"
	};
	$loadClass(DCTree$DCReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DCTree$DCReference));
	});
	return class$;
}

$Class* DCTree$DCReference::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com