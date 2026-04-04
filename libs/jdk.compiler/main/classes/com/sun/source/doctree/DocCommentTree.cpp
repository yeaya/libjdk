#include <com/sun/source/doctree/DocCommentTree.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$List* DocCommentTree::getFullBody() {
	$useLocalObjectStack();
	$var($ArrayList, bodyList, $new($ArrayList));
	bodyList->addAll($(getFirstSentence()));
	bodyList->addAll($(getBody()));
	return bodyList;
}

$List* DocCommentTree::getPreamble() {
	return $Collections::emptyList();
}

$List* DocCommentTree::getPostamble() {
	return $Collections::emptyList();
}

$Class* DocCommentTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBlockTags", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DocCommentTree, getBlockTags, $List*)},
		{"getBody", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DocCommentTree, getBody, $List*)},
		{"getFirstSentence", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DocCommentTree, getFirstSentence, $List*)},
		{"getFullBody", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC, $virtualMethod(DocCommentTree, getFullBody, $List*)},
		{"getPostamble", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC, $virtualMethod(DocCommentTree, getPostamble, $List*)},
		{"getPreamble", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC, $virtualMethod(DocCommentTree, getPreamble, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.DocCommentTree",
		nullptr,
		"com.sun.source.doctree.DocTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(DocCommentTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocCommentTree);
	});
	return class$;
}

$Class* DocCommentTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com