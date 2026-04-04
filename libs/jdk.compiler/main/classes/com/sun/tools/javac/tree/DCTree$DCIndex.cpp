#include <com/sun/tools/javac/tree/DCTree$DCIndex.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/tools/javac/tree/DCTree$DCInlineTag.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef INDEX

using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
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

$String* DCTree$DCIndex::getTagName() {
	 return this->$DCTree$DCInlineTag::getTagName();
}

$String* DCTree$DCIndex::toString() {
	 return this->$DCTree$DCInlineTag::toString();
}

int32_t DCTree$DCIndex::hashCode() {
	 return this->$DCTree$DCInlineTag::hashCode();
}

bool DCTree$DCIndex::equals(Object$* arg0) {
	 return this->$DCTree$DCInlineTag::equals(arg0);
}

$Object* DCTree$DCIndex::clone() {
	 return this->$DCTree$DCInlineTag::clone();
}

void DCTree$DCIndex::finalize() {
	this->$DCTree$DCInlineTag::finalize();
}

void DCTree$DCIndex::init$($DCTree* term, $List* description) {
	$DCTree$DCInlineTag::init$();
	$set(this, term, term);
	$set(this, description, description);
}

$DocTree$Kind* DCTree$DCIndex::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::INDEX;
}

$Object* DCTree$DCIndex::accept($DocTreeVisitor* v, Object$* d) {
	return $nc(v)->visitIndex(this, d);
}

$DocTree* DCTree$DCIndex::getSearchTerm() {
	return this->term;
}

$List* DCTree$DCIndex::getDescription() {
	return this->description;
}

DCTree$DCIndex::DCTree$DCIndex() {
}

$Class* DCTree$DCIndex::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"term", "Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCIndex, term)},
		{"description", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCIndex, description)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/tools/javac/tree/DCTree;Ljava/util/List;)V", "(Lcom/sun/tools/javac/tree/DCTree;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(DCTree$DCIndex, init$, void, $DCTree*, $List*)},
		{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(DCTree$DCIndex, accept, $Object*, $DocTreeVisitor*, Object$*)},
		{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC, $virtualMethod(DCTree$DCIndex, getDescription, $List*)},
		{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCIndex, getKind, $DocTree$Kind*)},
		{"getSearchTerm", "()Lcom/sun/source/doctree/DocTree;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCIndex, getSearchTerm, $DocTree*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.DCTree$DCIndex", "com.sun.tools.javac.tree.DCTree", "DCIndex", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.tree.DCTree$DCInlineTag", "com.sun.tools.javac.tree.DCTree", "DCInlineTag", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.DCTree$DCIndex",
		"com.sun.tools.javac.tree.DCTree$DCInlineTag",
		"com.sun.source.doctree.IndexTree",
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
	$loadClass(DCTree$DCIndex, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DCTree$DCIndex));
	});
	return class$;
}

$Class* DCTree$DCIndex::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com