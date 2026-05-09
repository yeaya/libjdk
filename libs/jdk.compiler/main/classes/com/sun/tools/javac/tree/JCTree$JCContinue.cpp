#include <com/sun/tools/javac/tree/JCTree$JCContinue.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef CONTINUE

using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$String* JCTree$JCContinue::toString() {
	return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCContinue::clone() {
	return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCContinue::hashCode() {
	return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCContinue::equals(Object$* arg0) {
	return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCContinue::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCContinue::init$($Name* label, $JCTree* target) {
	$JCTree$JCStatement::init$();
	$set(this, label, label);
	$set(this, target, target);
}

void JCTree$JCContinue::accept($JCTree$Visitor* v) {
	$nc(v)->visitContinue(this);
}

$Tree$Kind* JCTree$JCContinue::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::CONTINUE;
}

$1Name* JCTree$JCContinue::getLabel() {
	return this->label;
}

$Object* JCTree$JCContinue::accept($TreeVisitor* v, Object$* d) {
	return $nc(v)->visitContinue(this, d);
}

$JCTree$Tag* JCTree$JCContinue::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::CONTINUE;
}

JCTree$JCContinue::JCTree$JCContinue() {
}

$Class* JCTree$JCContinue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"label", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(JCTree$JCContinue, label)},
		{"target", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(JCTree$JCContinue, target)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PROTECTED, $method(JCTree$JCContinue, init$, void, $Name*, $JCTree*)},
		{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$JCContinue, accept, void, $JCTree$Visitor*)},
		{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(JCTree$JCContinue, accept, $Object*, $TreeVisitor*, Object$*)},
		{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCContinue, getKind, $Tree$Kind*)},
		{"getLabel", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCContinue, getLabel, $1Name*)},
		{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCContinue, getTag, $JCTree$Tag*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.JCTree$JCContinue", "com.sun.tools.javac.tree.JCTree", "JCContinue", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.JCTree$JCContinue",
		"com.sun.tools.javac.tree.JCTree$JCStatement",
		"com.sun.source.tree.ContinueTree",
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
	$loadClass(JCTree$JCContinue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JCTree$JCContinue));
	});
	return class$;
}

$Class* JCTree$JCContinue::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com