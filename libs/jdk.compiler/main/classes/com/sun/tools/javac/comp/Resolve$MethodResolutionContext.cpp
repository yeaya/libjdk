#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext$Candidate.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

#undef SPECULATIVE

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$MethodResolutionContext$Candidate = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext$Candidate;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $List = ::com::sun::tools::javac::util::List;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Resolve$MethodResolutionContext::init$($Resolve* this$0) {
	$set(this, this$0, this$0);
	$set(this, candidates, $List::nil());
	$set(this, step, nullptr);
	$set(this, methodCheck, this->this$0->resolveMethodCheck);
	this->internalResolution = false;
	$init($DeferredAttr$AttrMode);
	$set(this, attrMode$, $DeferredAttr$AttrMode::SPECULATIVE);
}

void Resolve$MethodResolutionContext::addInapplicableCandidate($Symbol* sym, $JCDiagnostic* details) {
	$var($Resolve$MethodResolutionContext$Candidate, c, $new($Resolve$MethodResolutionContext$Candidate, this, $nc(this->this$0->currentResolutionContext)->step, sym, details, nullptr));
	$set(this, candidates, $nc(this->candidates)->append(c));
}

void Resolve$MethodResolutionContext::addApplicableCandidate($Symbol* sym, $Type* mtype) {
	$var($Resolve$MethodResolutionContext$Candidate, c, $new($Resolve$MethodResolutionContext$Candidate, this, $nc(this->this$0->currentResolutionContext)->step, sym, nullptr, mtype));
	$set(this, candidates, $nc(this->candidates)->append(c));
}

$DeferredAttr$DeferredAttrContext* Resolve$MethodResolutionContext::deferredAttrContext($Symbol* sym, $InferenceContext* inferenceContext, $Attr$ResultInfo* pendingResult, $Warner* warn) {
	$var($DeferredAttr$DeferredAttrContext, parent, (pendingResult == nullptr) ? $nc(this->this$0->deferredAttr)->emptyDeferredAttrContext : $nc(pendingResult->checkContext)->deferredAttrContext());
	return $new($DeferredAttr$DeferredAttrContext, $nc(this->this$0->deferredAttr), this->attrMode$, sym, this->step, inferenceContext, parent, warn);
}

$DeferredAttr$AttrMode* Resolve$MethodResolutionContext::attrMode() {
	return this->attrMode$;
}

bool Resolve$MethodResolutionContext::internal() {
	return this->internalResolution;
}

Resolve$MethodResolutionContext::Resolve$MethodResolutionContext() {
}

$Class* Resolve$MethodResolutionContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$MethodResolutionContext, this$0)},
		{"candidates", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext$Candidate;>;", $PRIVATE, $field(Resolve$MethodResolutionContext, candidates)},
		{"step", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;", nullptr, 0, $field(Resolve$MethodResolutionContext, step)},
		{"methodCheck", "Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", nullptr, 0, $field(Resolve$MethodResolutionContext, methodCheck)},
		{"internalResolution", "Z", nullptr, $PRIVATE, $field(Resolve$MethodResolutionContext, internalResolution)},
		{"attrMode", "Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;", nullptr, $PRIVATE, $field(Resolve$MethodResolutionContext, attrMode$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, 0, $method(Resolve$MethodResolutionContext, init$, void, $Resolve*)},
		{"addApplicableCandidate", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $virtualMethod(Resolve$MethodResolutionContext, addApplicableCandidate, void, $Symbol*, $Type*)},
		{"addInapplicableCandidate", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, 0, $virtualMethod(Resolve$MethodResolutionContext, addInapplicableCandidate, void, $Symbol*, $JCDiagnostic*)},
		{"attrMode", "()Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;", nullptr, 0, $virtualMethod(Resolve$MethodResolutionContext, attrMode, $DeferredAttr$AttrMode*)},
		{"deferredAttrContext", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/util/Warner;)Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;", nullptr, 0, $virtualMethod(Resolve$MethodResolutionContext, deferredAttrContext, $DeferredAttr$DeferredAttrContext*, $Symbol*, $InferenceContext*, $Attr$ResultInfo*, $Warner*)},
		{"internal", "()Z", nullptr, 0, $virtualMethod(Resolve$MethodResolutionContext, internal, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionContext", "com.sun.tools.javac.comp.Resolve", "MethodResolutionContext", 0},
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionContext$Candidate", "com.sun.tools.javac.comp.Resolve$MethodResolutionContext", "Candidate", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$MethodResolutionContext",
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
	$loadClass(Resolve$MethodResolutionContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$MethodResolutionContext);
	});
	return class$;
}

$Class* Resolve$MethodResolutionContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com