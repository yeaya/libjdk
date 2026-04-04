#include <com/sun/tools/javac/comp/InferenceContext$2.h>
#include <com/sun/tools/javac/comp/Infer$BestLeafSolver.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$BestLeafSolver = ::com::sun::tools::javac::comp::Infer$BestLeafSolver;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void InferenceContext$2::init$($InferenceContext* this$0, $Infer* x0, $List* varsToSolve, $List* val$vars) {
	$set(this, this$0, this$0);
	$set(this, val$vars, val$vars);
	$Infer$BestLeafSolver::init$($nc(x0), varsToSolve);
}

bool InferenceContext$2::done() {
	return !this->this$0->free($(this->this$0->asInstTypes(this->val$vars)));
}

InferenceContext$2::InferenceContext$2() {
}

$Class* InferenceContext$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $FINAL | $SYNTHETIC, $field(InferenceContext$2, this$0)},
		{"val$vars", "Lcom/sun/tools/javac/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(InferenceContext$2, val$vars)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", nullptr, 0, $method(InferenceContext$2, init$, void, $InferenceContext*, $Infer*, $List*, $List*)},
		{"done", "()Z", nullptr, $PUBLIC, $virtualMethod(InferenceContext$2, done, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.InferenceContext",
		"solve",
		"(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.InferenceContext$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Infer$BestLeafSolver", "com.sun.tools.javac.comp.Infer", "BestLeafSolver", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.InferenceContext$2",
		"com.sun.tools.javac.comp.Infer$BestLeafSolver",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.InferenceContext"
	};
	$loadClass(InferenceContext$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InferenceContext$2);
	});
	return class$;
}

$Class* InferenceContext$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com