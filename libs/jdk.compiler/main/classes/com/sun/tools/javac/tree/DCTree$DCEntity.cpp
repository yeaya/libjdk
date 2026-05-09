#include <com/sun/tools/javac/tree/DCTree$DCEntity.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef ENTITY

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$String* DCTree$DCEntity::toString() {
	return this->$DCTree::toString();
}

int32_t DCTree$DCEntity::hashCode() {
	return this->$DCTree::hashCode();
}

bool DCTree$DCEntity::equals(Object$* arg0) {
	return this->$DCTree::equals(arg0);
}

$Object* DCTree$DCEntity::clone() {
	return this->$DCTree::clone();
}

void DCTree$DCEntity::finalize() {
	this->$DCTree::finalize();
}

void DCTree$DCEntity::init$($Name* name) {
	$DCTree::init$();
	$set(this, name, name);
}

$DocTree$Kind* DCTree$DCEntity::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::ENTITY;
}

$Object* DCTree$DCEntity::accept($DocTreeVisitor* v, Object$* d) {
	return $nc(v)->visitEntity(this, d);
}

$Name* DCTree$DCEntity::getName() {
	return this->name;
}

DCTree$DCEntity::DCTree$DCEntity() {
}

$Class* DCTree$DCEntity::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCEntity, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/lang/model/element/Name;)V", nullptr, 0, $method(DCTree$DCEntity, init$, void, $Name*)},
		{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(DCTree$DCEntity, accept, $Object*, $DocTreeVisitor*, Object$*)},
		{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCEntity, getKind, $DocTree$Kind*)},
		{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCEntity, getName, $Name*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.DCTree$DCEntity", "com.sun.tools.javac.tree.DCTree", "DCEntity", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.DCTree$DCEntity",
		"com.sun.tools.javac.tree.DCTree",
		"com.sun.source.doctree.EntityTree",
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
	$loadClass(DCTree$DCEntity, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DCTree$DCEntity));
	});
	return class$;
}

$Class* DCTree$DCEntity::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com