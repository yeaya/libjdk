#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <jcpp.h>

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* DocTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTree, accept, $Object*, $DocTreeVisitor*, Object$*)},
		{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTree, getKind, $DocTree$Kind*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.source.doctree.DocTree$Kind", "com.sun.source.doctree.DocTree", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.DocTree",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.source.doctree.DocTree$Kind"
	};
	$loadClass(DocTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocTree);
	});
	return class$;
}

$Class* DocTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com