#include <com/sun/tools/javac/tree/DCTree$DCSee.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef SEE

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $DCTree$DCBlockTag = ::com::sun::tools::javac::tree::DCTree$DCBlockTag;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$String* DCTree$DCSee::getTagName() {
	return this->$DCTree$DCBlockTag::getTagName();
}

$String* DCTree$DCSee::toString() {
	return this->$DCTree$DCBlockTag::toString();
}

int32_t DCTree$DCSee::hashCode() {
	return this->$DCTree$DCBlockTag::hashCode();
}

bool DCTree$DCSee::equals(Object$* arg0) {
	return this->$DCTree$DCBlockTag::equals(arg0);
}

$Object* DCTree$DCSee::clone() {
	return this->$DCTree$DCBlockTag::clone();
}

void DCTree$DCSee::finalize() {
	this->$DCTree$DCBlockTag::finalize();
}

void DCTree$DCSee::init$($List* reference) {
	$DCTree$DCBlockTag::init$();
	$set(this, reference, reference);
}

$DocTree$Kind* DCTree$DCSee::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::SEE;
}

$Object* DCTree$DCSee::accept($DocTreeVisitor* v, Object$* d) {
	return $nc(v)->visitSee(this, d);
}

$List* DCTree$DCSee::getReference() {
	return this->reference;
}

DCTree$DCSee::DCTree$DCSee() {
}

$Class* DCTree$DCSee::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"reference", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCSee, reference)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(DCTree$DCSee, init$, void, $List*)},
		{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(DCTree$DCSee, accept, $Object*, $DocTreeVisitor*, Object$*)},
		{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCSee, getKind, $DocTree$Kind*)},
		{"getReference", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC, $virtualMethod(DCTree$DCSee, getReference, $List*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.DCTree$DCSee", "com.sun.tools.javac.tree.DCTree", "DCSee", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.tree.DCTree$DCBlockTag", "com.sun.tools.javac.tree.DCTree", "DCBlockTag", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.DCTree$DCSee",
		"com.sun.tools.javac.tree.DCTree$DCBlockTag",
		"com.sun.source.doctree.SeeTree",
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
	$loadClass(DCTree$DCSee, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DCTree$DCSee));
	});
	return class$;
}

$Class* DCTree$DCSee::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com