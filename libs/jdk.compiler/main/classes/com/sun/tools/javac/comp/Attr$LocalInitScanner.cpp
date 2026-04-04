#include <com/sun/tools/javac/comp/Attr$LocalInitScanner.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <jcpp.h>

using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Attr$LocalInitScanner::init$() {
	$TreeScanner::init$();
	$set(this, badInferenceMsg, nullptr);
	this->needsTarget = true;
}

void Attr$LocalInitScanner::visitNewArray($JCTree$JCNewArray* tree) {
	if ($nc(tree)->elemtype == nullptr && this->needsTarget) {
		$init($CompilerProperties$Fragments);
		$set(this, badInferenceMsg, $CompilerProperties$Fragments::LocalArrayMissingTarget);
	}
}

void Attr$LocalInitScanner::visitLambda($JCTree$JCLambda* tree) {
	if (this->needsTarget) {
		$init($CompilerProperties$Fragments);
		$set(this, badInferenceMsg, $CompilerProperties$Fragments::LocalLambdaMissingTarget);
	}
}

void Attr$LocalInitScanner::visitTypeCast($JCTree$JCTypeCast* tree) {
	bool prevNeedsTarget = this->needsTarget;
	$var($Throwable, var$0, nullptr);
	try {
		this->needsTarget = false;
		$TreeScanner::visitTypeCast(tree);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->needsTarget = prevNeedsTarget;
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void Attr$LocalInitScanner::visitReference($JCTree$JCMemberReference* tree) {
	if (this->needsTarget) {
		$init($CompilerProperties$Fragments);
		$set(this, badInferenceMsg, $CompilerProperties$Fragments::LocalMrefMissingTarget);
	}
}

void Attr$LocalInitScanner::visitNewClass($JCTree$JCNewClass* tree) {
	bool prevNeedsTarget = this->needsTarget;
	$var($Throwable, var$0, nullptr);
	try {
		this->needsTarget = false;
		$TreeScanner::visitNewClass(tree);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->needsTarget = prevNeedsTarget;
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void Attr$LocalInitScanner::visitApply($JCTree$JCMethodInvocation* tree) {
	bool prevNeedsTarget = this->needsTarget;
	$var($Throwable, var$0, nullptr);
	try {
		this->needsTarget = false;
		$TreeScanner::visitApply(tree);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->needsTarget = prevNeedsTarget;
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

Attr$LocalInitScanner::Attr$LocalInitScanner() {
}

$Class* Attr$LocalInitScanner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"badInferenceMsg", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, 0, $field(Attr$LocalInitScanner, badInferenceMsg)},
		{"needsTarget", "Z", nullptr, 0, $field(Attr$LocalInitScanner, needsTarget)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Attr$LocalInitScanner, init$, void)},
		{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC, $virtualMethod(Attr$LocalInitScanner, visitApply, void, $JCTree$JCMethodInvocation*)},
		{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC, $virtualMethod(Attr$LocalInitScanner, visitLambda, void, $JCTree$JCLambda*)},
		{"visitNewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCNewArray;)V", nullptr, $PUBLIC, $virtualMethod(Attr$LocalInitScanner, visitNewArray, void, $JCTree$JCNewArray*)},
		{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC, $virtualMethod(Attr$LocalInitScanner, visitNewClass, void, $JCTree$JCNewClass*)},
		{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC, $virtualMethod(Attr$LocalInitScanner, visitReference, void, $JCTree$JCMemberReference*)},
		{"visitTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC, $virtualMethod(Attr$LocalInitScanner, visitTypeCast, void, $JCTree$JCTypeCast*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Attr$LocalInitScanner", "com.sun.tools.javac.comp.Attr", "LocalInitScanner", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Attr$LocalInitScanner",
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
		"com.sun.tools.javac.comp.Attr"
	};
	$loadClass(Attr$LocalInitScanner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attr$LocalInitScanner);
	});
	return class$;
}

$Class* Attr$LocalInitScanner::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com