#include <com/sun/tools/javac/tree/DCTree$DCSummary.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/tools/javac/tree/DCTree$DCInlineTag.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef SUMMARY

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $DCTree$DCInlineTag = ::com::sun::tools::javac::tree::DCTree$DCInlineTag;
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

$String* DCTree$DCSummary::getTagName() {
	 return this->$DCTree$DCInlineTag::getTagName();
}

$String* DCTree$DCSummary::toString() {
	 return this->$DCTree$DCInlineTag::toString();
}

int32_t DCTree$DCSummary::hashCode() {
	 return this->$DCTree$DCInlineTag::hashCode();
}

bool DCTree$DCSummary::equals(Object$* arg0) {
	 return this->$DCTree$DCInlineTag::equals(arg0);
}

$Object* DCTree$DCSummary::clone() {
	 return this->$DCTree$DCInlineTag::clone();
}

void DCTree$DCSummary::finalize() {
	this->$DCTree$DCInlineTag::finalize();
}

void DCTree$DCSummary::init$($List* summary) {
	$DCTree$DCInlineTag::init$();
	$set(this, summary, summary);
}

$DocTree$Kind* DCTree$DCSummary::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::SUMMARY;
}

$Object* DCTree$DCSummary::accept($DocTreeVisitor* v, Object$* d) {
	return $nc(v)->visitSummary(this, d);
}

$List* DCTree$DCSummary::getSummary() {
	return this->summary;
}

DCTree$DCSummary::DCTree$DCSummary() {
}

$Class* DCTree$DCSummary::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"summary", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCSummary, summary)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(DCTree$DCSummary, init$, void, $List*)},
		{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(DCTree$DCSummary, accept, $Object*, $DocTreeVisitor*, Object$*)},
		{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCSummary, getKind, $DocTree$Kind*)},
		{"getSummary", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC, $virtualMethod(DCTree$DCSummary, getSummary, $List*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.DCTree$DCSummary", "com.sun.tools.javac.tree.DCTree", "DCSummary", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.tree.DCTree$DCInlineTag", "com.sun.tools.javac.tree.DCTree", "DCInlineTag", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.DCTree$DCSummary",
		"com.sun.tools.javac.tree.DCTree$DCInlineTag",
		"com.sun.source.doctree.SummaryTree",
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
	$loadClass(DCTree$DCSummary, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DCTree$DCSummary));
	});
	return class$;
}

$Class* DCTree$DCSummary::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com