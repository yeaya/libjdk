#include <com/sun/source/tree/ModuleTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/ModuleTree$ModuleKind.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ModuleTree$ModuleKind = ::com::sun::source::tree::ModuleTree$ModuleKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* ModuleTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAnnotations", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/AnnotationTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ModuleTree, getAnnotations, $List*)},
		{"getDirectives", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/DirectiveTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ModuleTree, getDirectives, $List*)},
		{"getModuleType", "()Lcom/sun/source/tree/ModuleTree$ModuleKind;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModuleTree, getModuleType, $ModuleTree$ModuleKind*)},
		{"getName", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModuleTree, getName, $ExpressionTree*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.source.tree.ModuleTree$ModuleKind", "com.sun.source.tree.ModuleTree", "ModuleKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.ModuleTree",
		nullptr,
		"com.sun.source.tree.Tree",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.source.tree.ModuleTree$ModuleKind"
	};
	$loadClass(ModuleTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleTree);
	});
	return class$;
}

$Class* ModuleTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com