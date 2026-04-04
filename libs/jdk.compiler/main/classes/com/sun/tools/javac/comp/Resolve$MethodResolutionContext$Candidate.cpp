#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext$Candidate.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve$MethodResolutionContext = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Resolve$MethodResolutionContext$Candidate::init$($Resolve$MethodResolutionContext* this$1, $Resolve$MethodResolutionPhase* step, $Symbol* sym, $JCDiagnostic* details, $Type* mtype) {
	$set(this, this$1, this$1);
	$set(this, step, step);
	$set(this, sym, sym);
	$set(this, details, details);
	$set(this, mtype, mtype);
}

bool Resolve$MethodResolutionContext$Candidate::isApplicable() {
	return this->mtype != nullptr;
}

Resolve$MethodResolutionContext$Candidate::Resolve$MethodResolutionContext$Candidate() {
}

$Class* Resolve$MethodResolutionContext$Candidate::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$MethodResolutionContext$Candidate, this$1)},
		{"step", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;", nullptr, $FINAL, $field(Resolve$MethodResolutionContext$Candidate, step)},
		{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL, $field(Resolve$MethodResolutionContext$Candidate, sym)},
		{"details", "Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $FINAL, $field(Resolve$MethodResolutionContext$Candidate, details)},
		{"mtype", "Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL, $field(Resolve$MethodResolutionContext$Candidate, mtype)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PRIVATE, $method(Resolve$MethodResolutionContext$Candidate, init$, void, $Resolve$MethodResolutionContext*, $Resolve$MethodResolutionPhase*, $Symbol*, $JCDiagnostic*, $Type*)},
		{"isApplicable", "()Z", nullptr, 0, $virtualMethod(Resolve$MethodResolutionContext$Candidate, isApplicable, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionContext", "com.sun.tools.javac.comp.Resolve", "MethodResolutionContext", 0},
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionContext$Candidate", "com.sun.tools.javac.comp.Resolve$MethodResolutionContext", "Candidate", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$MethodResolutionContext$Candidate",
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
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$MethodResolutionContext$Candidate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$MethodResolutionContext$Candidate);
	});
	return class$;
}

$Class* Resolve$MethodResolutionContext$Candidate::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com