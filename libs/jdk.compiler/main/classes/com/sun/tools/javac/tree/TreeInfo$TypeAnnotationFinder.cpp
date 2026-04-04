#include <com/sun/tools/javac/tree/TreeInfo$TypeAnnotationFinder.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

#undef TYPE_ANNOTATION

using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

void TreeInfo$TypeAnnotationFinder::init$() {
	$TreeScanner::init$();
	this->foundTypeAnno = false;
}

void TreeInfo$TypeAnnotationFinder::scan($JCTree* tree) {
	if (this->foundTypeAnno || tree == nullptr) {
		return;
	}
	$TreeScanner::scan(tree);
}

void TreeInfo$TypeAnnotationFinder::visitAnnotation($JCTree$JCAnnotation* tree) {
	$init($JCTree$Tag);
	this->foundTypeAnno = this->foundTypeAnno || $nc(tree)->hasTag($JCTree$Tag::TYPE_ANNOTATION);
}

TreeInfo$TypeAnnotationFinder::TreeInfo$TypeAnnotationFinder() {
}

$Class* TreeInfo$TypeAnnotationFinder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"foundTypeAnno", "Z", nullptr, $PUBLIC, $field(TreeInfo$TypeAnnotationFinder, foundTypeAnno)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(TreeInfo$TypeAnnotationFinder, init$, void)},
		{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, $virtualMethod(TreeInfo$TypeAnnotationFinder, scan, void, $JCTree*)},
		{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC, $virtualMethod(TreeInfo$TypeAnnotationFinder, visitAnnotation, void, $JCTree$JCAnnotation*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.TreeInfo$TypeAnnotationFinder", "com.sun.tools.javac.tree.TreeInfo", "TypeAnnotationFinder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.tree.TreeInfo$TypeAnnotationFinder",
		"com.sun.tools.javac.tree.TreeScanner",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.tree.TreeInfo"
	};
	$loadClass(TreeInfo$TypeAnnotationFinder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeInfo$TypeAnnotationFinder);
	});
	return class$;
}

$Class* TreeInfo$TypeAnnotationFinder::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com