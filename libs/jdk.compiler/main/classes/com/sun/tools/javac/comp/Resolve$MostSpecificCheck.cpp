#include <com/sun/tools/javac/comp/Resolve$MostSpecificCheck.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve$MostSpecificCheck$MostSpecificCheckContext.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

#undef VAL

using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$MethodCheck = ::com::sun::tools::javac::comp::Resolve$MethodCheck;
using $Resolve$MostSpecificCheck$MostSpecificCheckContext = ::com::sun::tools::javac::comp::Resolve$MostSpecificCheck$MostSpecificCheckContext;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
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

void Resolve$MostSpecificCheck::init$($Resolve* this$0, $List* actuals) {
	$set(this, this$0, this$0);
	$set(this, actuals, actuals);
}

void Resolve$MostSpecificCheck::argumentsAcceptable($Env* env, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $List* formals1$renamed, $List* formals2$renamed, $Warner* warn) {
	$useLocalObjectStack();
	$var($List, formals1, formals1$renamed);
	$var($List, formals2, formals2$renamed);
	$var($Symbol, var$0, $nc(deferredAttrContext)->msym);
	int32_t var$1 = $nc(formals1)->length();
	$assign(formals2, this->this$0->adjustArgs(formals2, var$0, var$1, deferredAttrContext->phase->isVarargsRequired()));
	while ($nc(formals2)->nonEmpty()) {
		$var($Attr$ResultInfo, mresult, methodCheckResult($cast($Type, formals2->head), deferredAttrContext, warn, $cast($Type, $nc(this->actuals)->head)));
		$nc(mresult)->check(nullptr, $cast($Type, $nc(formals1)->head));
		$assign(formals1, formals1->tail);
		$assign(formals2, formals2->tail);
		$set(this, actuals, $nc(this->actuals)->isEmpty() ? this->actuals : this->actuals->tail);
	}
}

$Attr$ResultInfo* Resolve$MostSpecificCheck::methodCheckResult($Type* to, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $Warner* rsWarner, $Type* actual) {
	$init($Kinds$KindSelector);
	return $new($Attr$ResultInfo, $nc(this->this$0->attr), $Kinds$KindSelector::VAL, to, $$new($Resolve$MostSpecificCheck$MostSpecificCheckContext, this, deferredAttrContext, rsWarner, actual));
}

$Resolve$MethodCheck* Resolve$MostSpecificCheck::mostSpecificCheck($List* actuals) {
	$Assert::error("Cannot get here!"_s);
	return nullptr;
}

Resolve$MostSpecificCheck::Resolve$MostSpecificCheck() {
}

$Class* Resolve$MostSpecificCheck::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$MostSpecificCheck, this$0)},
		{"actuals", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Resolve$MostSpecificCheck, actuals)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", 0, $method(Resolve$MostSpecificCheck, init$, void, $Resolve*, $List*)},
		{"argumentsAcceptable", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/Warner;)V", $PUBLIC, $virtualMethod(Resolve$MostSpecificCheck, argumentsAcceptable, void, $Env*, $DeferredAttr$DeferredAttrContext*, $List*, $List*, $Warner*)},
		{"methodCheckResult", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/Warner;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, 0, $virtualMethod(Resolve$MostSpecificCheck, methodCheckResult, $Attr$ResultInfo*, $Type*, $DeferredAttr$DeferredAttrContext*, $Warner*, $Type*)},
		{"mostSpecificCheck", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", $PUBLIC, $virtualMethod(Resolve$MostSpecificCheck, mostSpecificCheck, $Resolve$MethodCheck*, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$MostSpecificCheck", "com.sun.tools.javac.comp.Resolve", "MostSpecificCheck", 0},
		{"com.sun.tools.javac.comp.Resolve$MethodCheck", "com.sun.tools.javac.comp.Resolve", "MethodCheck", $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext", "com.sun.tools.javac.comp.Resolve$MostSpecificCheck", "MostSpecificCheckContext", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$MostSpecificCheck",
		"java.lang.Object",
		"com.sun.tools.javac.comp.Resolve$MethodCheck",
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
	$loadClass(Resolve$MostSpecificCheck, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$MostSpecificCheck);
	});
	return class$;
}

$Class* Resolve$MostSpecificCheck::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com