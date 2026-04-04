#include <com/sun/tools/javac/comp/DeferredAttr$2.h>
#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/source/tree/MemberReferenceTree.h>
#include <com/sun/source/tree/NewClassTree.h>
#include <com/sun/tools/javac/comp/DeferredAttr$2$1.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef M

using $MemberReferenceTree = ::com::sun::source::tree::MemberReferenceTree;
using $NewClassTree = ::com::sun::source::tree::NewClassTree;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$2$1 = ::com::sun::tools::javac::comp::DeferredAttr$2$1;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void DeferredAttr$2::init$($DeferredAttr* this$0, $TreeMaker* M) {
	$set(this, this$0, this$0);
	$TreeCopier::init$(M);
}

$JCTree* DeferredAttr$2::visitNewClass($NewClassTree* node, $Void* p) {
	$useLocalObjectStack();
	$var($JCTree$JCNewClass, t, $cast($JCTree$JCNewClass, node));
	if ($TreeInfo::isDiamond(t)) {
		$var($JCTree$JCExpression, encl, $cast($JCTree$JCExpression, copy($nc(t)->encl, p)));
		$var($List, typeargs, copy(t->typeargs, p));
		$var($JCTree$JCExpression, clazz, $cast($JCTree$JCExpression, copy(t->clazz, p)));
		$var($List, args, copy(t->args, p));
		$var($JCTree$JCClassDecl, def, nullptr);
		return $$nc($nc(this->this$0->make)->at(t->pos$))->SpeculativeNewClass(encl, typeargs, clazz, args, def, t->def != nullptr);
	} else {
		return $cast($JCTree, $TreeCopier::visitNewClass(node, p));
	}
}

$JCTree* DeferredAttr$2::visitMemberReference($MemberReferenceTree* node, $Void* p) {
	$useLocalObjectStack();
	$var($JCTree$JCMemberReference, t, $cast($JCTree$JCMemberReference, node));
	$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, copy($nc(t)->expr, p)));
	$var($List, typeargs, copy(t->typeargs, p));
	$var($JCTree$JCMemberReference, result, $new($DeferredAttr$2$1, this, t->mode, t->name, expr, typeargs, t));
	result->pos$ = t->pos$;
	return result;
}

$Object* DeferredAttr$2::visitMemberReference($MemberReferenceTree* node, Object$* p) {
	return $of(this->visitMemberReference(node, $cast($Void, p)));
}

$Object* DeferredAttr$2::visitNewClass($NewClassTree* node, Object$* p) {
	return $of(this->visitNewClass(node, $cast($Void, p)));
}

DeferredAttr$2::DeferredAttr$2() {
}

$Class* DeferredAttr$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr;Lcom/sun/tools/javac/tree/TreeMaker;)V", nullptr, 0, $method(DeferredAttr$2, init$, void, $DeferredAttr*, $TreeMaker*)},
		{"visitMemberReference", "(Lcom/sun/source/tree/MemberReferenceTree;Ljava/lang/Void;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$2, visitMemberReference, $JCTree*, $MemberReferenceTree*, $Void*)},
		{"visitMemberReference", "(Lcom/sun/source/tree/MemberReferenceTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DeferredAttr$2, visitMemberReference, $Object*, $MemberReferenceTree*, Object$*)},
		{"visitNewClass", "(Lcom/sun/source/tree/NewClassTree;Ljava/lang/Void;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$2, visitNewClass, $JCTree*, $NewClassTree*, $Void*)},
		{"visitNewClass", "(Lcom/sun/source/tree/NewClassTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DeferredAttr$2, visitNewClass, $Object*, $NewClassTree*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.DeferredAttr",
		"<init>",
		"(Lcom/sun/tools/javac/util/Context;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.DeferredAttr$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.DeferredAttr$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.DeferredAttr$2",
		"com.sun.tools.javac.tree.TreeCopier",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/tree/TreeCopier<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.DeferredAttr"
	};
	$loadClass(DeferredAttr$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredAttr$2);
	});
	return class$;
}

$Class* DeferredAttr$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com