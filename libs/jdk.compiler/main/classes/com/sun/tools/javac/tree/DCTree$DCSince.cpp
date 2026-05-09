#include <com/sun/tools/javac/tree/DCTree$DCSince.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef SINCE

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

$String* DCTree$DCSince::getTagName() {
	return this->$DCTree$DCBlockTag::getTagName();
}

$String* DCTree$DCSince::toString() {
	return this->$DCTree$DCBlockTag::toString();
}

int32_t DCTree$DCSince::hashCode() {
	return this->$DCTree$DCBlockTag::hashCode();
}

bool DCTree$DCSince::equals(Object$* arg0) {
	return this->$DCTree$DCBlockTag::equals(arg0);
}

$Object* DCTree$DCSince::clone() {
	return this->$DCTree$DCBlockTag::clone();
}

void DCTree$DCSince::finalize() {
	this->$DCTree$DCBlockTag::finalize();
}

void DCTree$DCSince::init$($List* body) {
	$DCTree$DCBlockTag::init$();
	$set(this, body, body);
}

$DocTree$Kind* DCTree$DCSince::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::SINCE;
}

$Object* DCTree$DCSince::accept($DocTreeVisitor* v, Object$* d) {
	return $nc(v)->visitSince(this, d);
}

$List* DCTree$DCSince::getBody() {
	return this->body;
}

DCTree$DCSince::DCTree$DCSince() {
}

$Class* DCTree$DCSince::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"body", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCSince, body)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(DCTree$DCSince, init$, void, $List*)},
		{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(DCTree$DCSince, accept, $Object*, $DocTreeVisitor*, Object$*)},
		{"getBody", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC, $virtualMethod(DCTree$DCSince, getBody, $List*)},
		{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCSince, getKind, $DocTree$Kind*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.DCTree$DCSince", "com.sun.tools.javac.tree.DCTree", "DCSince", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.tree.DCTree$DCBlockTag", "com.sun.tools.javac.tree.DCTree", "DCBlockTag", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.DCTree$DCSince",
		"com.sun.tools.javac.tree.DCTree$DCBlockTag",
		"com.sun.source.doctree.SinceTree",
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
	$loadClass(DCTree$DCSince, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DCTree$DCSince));
	});
	return class$;
}

$Class* DCTree$DCSince::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com