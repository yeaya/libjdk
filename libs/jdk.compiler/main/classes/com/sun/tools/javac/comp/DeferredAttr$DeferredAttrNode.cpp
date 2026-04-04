#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$5.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode$1.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode$StructuralStuckChecker.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Enum.h>
#include <java/lang/Iterable.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$5 = ::com::sun::tools::javac::comp::DeferredAttr$5;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredAttrNode$1 = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode$1;
using $DeferredAttr$DeferredAttrNode$StructuralStuckChecker = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode$StructuralStuckChecker;
using $DeferredAttr$DeferredStuckPolicy = ::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void DeferredAttr$DeferredAttrNode::init$($DeferredAttr* this$0, $DeferredAttr$DeferredType* dt, $Attr$ResultInfo* resultInfo, $DeferredAttr$DeferredStuckPolicy* deferredStuckPolicy) {
	$set(this, this$0, this$0);
	$set(this, dt, dt);
	$set(this, resultInfo, resultInfo);
	$set(this, deferredStuckPolicy, deferredStuckPolicy);
}

bool DeferredAttr$DeferredAttrNode::process($DeferredAttr$DeferredAttrContext* deferredAttrContext) {
	$useLocalObjectStack();
	$init($DeferredAttr$5);
	switch ($nc($DeferredAttr$5::$SwitchMap$com$sun$tools$javac$comp$DeferredAttr$AttrMode)->get(($nc(deferredAttrContext)->mode)->ordinal())) {
	case 1:
		if ($nc(this->deferredStuckPolicy)->isStuck()) {
			$$new($DeferredAttr$DeferredAttrNode$StructuralStuckChecker, this)->check(this->dt, this->resultInfo, deferredAttrContext);
			return true;
		} else {
			$Assert::error("Cannot get here"_s);
		}
	case 2:
		if ($nc(this->deferredStuckPolicy)->isStuck()) {
			if (deferredAttrContext->parent != this->this$0->emptyDeferredAttrContext && $Type::containsAny($nc($nc(deferredAttrContext->parent)->inferenceContext)->inferencevars, $($List::from($($nc(this->deferredStuckPolicy)->stuckVars()))))) {
				deferredAttrContext->parent->addDeferredAttrNode(this->dt, $($nc(this->resultInfo)->dup($$new($DeferredAttr$DeferredAttrNode$1, this, $nc(this->resultInfo)->checkContext, deferredAttrContext))), this->deferredStuckPolicy);
				$set($nc($nc(this->dt)->tree), type, $Type::stuckType);
				return true;
			} else {
				return false;
			}
		} else {
			$Assert::check(!deferredAttrContext->insideOverloadPhase(), "attribution shouldn\'t be happening here"_s);
			$var($Attr$ResultInfo, instResultInfo, $nc(this->resultInfo)->dup($($nc(deferredAttrContext->inferenceContext)->asInstType($nc(this->resultInfo)->pt))));
			$nc(this->dt)->check(instResultInfo, this->this$0->dummyStuckPolicy);
			return true;
		}
	default:
		$throwNew($AssertionError, $of("Bad mode"_s));
	}
}

DeferredAttr$DeferredAttrNode::DeferredAttr$DeferredAttrNode() {
}

$Class* DeferredAttr$DeferredAttrNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$DeferredAttrNode, this$0)},
		{"dt", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;", nullptr, 0, $field(DeferredAttr$DeferredAttrNode, dt)},
		{"resultInfo", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, 0, $field(DeferredAttr$DeferredAttrNode, resultInfo)},
		{"deferredStuckPolicy", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy;", nullptr, 0, $field(DeferredAttr$DeferredAttrNode, deferredStuckPolicy)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy;)V", nullptr, 0, $method(DeferredAttr$DeferredAttrNode, init$, void, $DeferredAttr*, $DeferredAttr$DeferredType*, $Attr$ResultInfo*, $DeferredAttr$DeferredStuckPolicy*)},
		{"process", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)Z", nullptr, 0, $virtualMethod(DeferredAttr$DeferredAttrNode, process, bool, $DeferredAttr$DeferredAttrContext*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrNode", 0},
		{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker", "com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode", "LambdaBodyStructChecker", 0},
		{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$StructuralStuckChecker", "com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode", "StructuralStuckChecker", 0},
		{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.DeferredAttr"
	};
	$loadClass(DeferredAttr$DeferredAttrNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredAttr$DeferredAttrNode);
	});
	return class$;
}

$Class* DeferredAttr$DeferredAttrNode::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com