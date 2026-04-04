#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef IDENT
#undef IDENTIFIER

using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
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

$String* JCTree$JCIdent::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCIdent::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCIdent::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCIdent::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCIdent::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCIdent::init$($Name* name, $Symbol* sym) {
	$JCTree$JCExpression::init$();
	$set(this, name, name);
	$set(this, sym, sym);
}

void JCTree$JCIdent::accept($JCTree$Visitor* v) {
	$nc(v)->visitIdent(this);
}

$Tree$Kind* JCTree$JCIdent::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::IDENTIFIER;
}

$1Name* JCTree$JCIdent::getName() {
	return this->name;
}

$Object* JCTree$JCIdent::accept($TreeVisitor* v, Object$* d) {
	return $nc(v)->visitIdentifier(this, d);
}

$JCTree$Tag* JCTree$JCIdent::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::IDENT;
}

JCTree$JCIdent::JCTree$JCIdent() {
}

$Class* JCTree$JCIdent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(JCTree$JCIdent, name)},
		{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(JCTree$JCIdent, sym)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PROTECTED, $method(JCTree$JCIdent, init$, void, $Name*, $Symbol*)},
		{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$JCIdent, accept, void, $JCTree$Visitor*)},
		{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(JCTree$JCIdent, accept, $Object*, $TreeVisitor*, Object$*)},
		{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCIdent, getKind, $Tree$Kind*)},
		{"getName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCIdent, getName, $1Name*)},
		{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCIdent, getTag, $JCTree$Tag*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.JCTree$JCIdent", "com.sun.tools.javac.tree.JCTree", "JCIdent", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.JCTree$JCIdent",
		"com.sun.tools.javac.tree.JCTree$JCExpression",
		"com.sun.source.tree.IdentifierTree",
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
	$loadClass(JCTree$JCIdent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JCTree$JCIdent));
	});
	return class$;
}

$Class* JCTree$JCIdent::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com