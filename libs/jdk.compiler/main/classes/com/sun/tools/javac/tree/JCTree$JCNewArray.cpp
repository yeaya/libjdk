#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NEWARRAY
#undef NEW_ARRAY

using $Tree = ::com::sun::source::tree::Tree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$String* JCTree$JCNewArray::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCNewArray::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCNewArray::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCNewArray::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCNewArray::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCNewArray::init$($JCTree$JCExpression* elemtype, $List* dims, $List* elems) {
	$JCTree$JCExpression::init$();
	$set(this, elemtype, elemtype);
	$set(this, dims, dims);
	$set(this, annotations, $List::nil());
	$set(this, dimAnnotations, $List::nil());
	$set(this, elems, elems);
}

void JCTree$JCNewArray::accept($JCTree$Visitor* v) {
	$nc(v)->visitNewArray(this);
}

$Tree$Kind* JCTree$JCNewArray::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::NEW_ARRAY;
}

$Tree* JCTree$JCNewArray::getType() {
	return $cast($JCTree, this->elemtype);
}

$1List* JCTree$JCNewArray::getDimensions() {
	return this->dims;
}

$1List* JCTree$JCNewArray::getInitializers() {
	return this->elems;
}

$Object* JCTree$JCNewArray::accept($TreeVisitor* v, Object$* d) {
	return $nc(v)->visitNewArray(this, d);
}

$JCTree$Tag* JCTree$JCNewArray::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::NEWARRAY;
}

$1List* JCTree$JCNewArray::getAnnotations() {
	return this->annotations;
}

$1List* JCTree$JCNewArray::getDimAnnotations() {
	return this->dimAnnotations;
}

JCTree$JCNewArray::JCTree$JCNewArray() {
}

$Class* JCTree$JCNewArray::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"elemtype", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCNewArray, elemtype)},
		{"dims", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCNewArray, dims)},
		{"annotations", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PUBLIC, $field(JCTree$JCNewArray, annotations)},
		{"dimAnnotations", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;>;", $PUBLIC, $field(JCTree$JCNewArray, dimAnnotations)},
		{"elems", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCNewArray, elems)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)V", $PROTECTED, $method(JCTree$JCNewArray, init$, void, $JCTree$JCExpression*, $List*, $List*)},
		{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$JCNewArray, accept, void, $JCTree$Visitor*)},
		{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(JCTree$JCNewArray, accept, $Object*, $TreeVisitor*, Object$*)},
		{"getAnnotations", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PUBLIC, $virtualMethod(JCTree$JCNewArray, getAnnotations, $1List*)},
		{"getDimAnnotations", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;>;", $PUBLIC, $virtualMethod(JCTree$JCNewArray, getDimAnnotations, $1List*)},
		{"getDimensions", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $virtualMethod(JCTree$JCNewArray, getDimensions, $1List*)},
		{"getInitializers", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $virtualMethod(JCTree$JCNewArray, getInitializers, $1List*)},
		{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCNewArray, getKind, $Tree$Kind*)},
		{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCNewArray, getTag, $JCTree$Tag*)},
		{"getType", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCNewArray, getType, $Tree*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.JCTree$JCNewArray", "com.sun.tools.javac.tree.JCTree", "JCNewArray", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.JCTree$JCNewArray",
		"com.sun.tools.javac.tree.JCTree$JCExpression",
		"com.sun.source.tree.NewArrayTree",
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
	$loadClass(JCTree$JCNewArray, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JCTree$JCNewArray));
	});
	return class$;
}

$Class* JCTree$JCNewArray::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com