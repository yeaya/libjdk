#include <com/sun/tools/javac/comp/InferenceContext$1.h>
#include <com/sun/tools/javac/comp/Infer$LeafSolver.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$LeafSolver = ::com::sun::tools::javac::comp::Infer$LeafSolver;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
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

void InferenceContext$1::init$($InferenceContext* this$0, $Infer* x0) {
	$set(this, this$0, this$0);
	$Infer$LeafSolver::init$($nc(x0));
}

bool InferenceContext$1::done() {
	return $$nc(this->this$0->restvars())->isEmpty();
}

InferenceContext$1::InferenceContext$1() {
}

$Class* InferenceContext$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $FINAL | $SYNTHETIC, $field(InferenceContext$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/comp/Infer;)V", nullptr, 0, $method(InferenceContext$1, init$, void, $InferenceContext*, $Infer*)},
		{"done", "()Z", nullptr, $PUBLIC, $virtualMethod(InferenceContext$1, done, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.InferenceContext",
		"solve",
		"(Lcom/sun/tools/javac/util/Warner;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.InferenceContext$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Infer$LeafSolver", "com.sun.tools.javac.comp.Infer", "LeafSolver", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.InferenceContext$1",
		"com.sun.tools.javac.comp.Infer$LeafSolver",
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
	$loadClass(InferenceContext$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InferenceContext$1);
	});
	return class$;
}

$Class* InferenceContext$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com