#include <com/sun/tools/javac/comp/Resolve$3.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/Resolve$AbstractMethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$AbstractMethodCheck = ::com::sun::tools::javac::comp::Resolve$AbstractMethodCheck;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $Warner = ::com::sun::tools::javac::util::Warner;
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

void Resolve$3::init$($Resolve* this$0) {
	$set(this, this$0, this$0);
	$Resolve$AbstractMethodCheck::init$(this$0);
}

void Resolve$3::checkArg($JCDiagnostic$DiagnosticPosition* pos, bool varargs, $Type* actual, $Type* formal, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $Warner* warn) {
}

$String* Resolve$3::toString() {
	return "arityMethodCheck"_s;
}

Resolve$3::Resolve$3() {
}

$Class* Resolve$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, 0, $method(Resolve$3, init$, void, $Resolve*)},
		{"checkArg", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;ZLcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/Warner;)V", nullptr, 0, $virtualMethod(Resolve$3, checkArg, void, $JCDiagnostic$DiagnosticPosition*, bool, $Type*, $Type*, $DeferredAttr$DeferredAttrContext*, $Warner*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Resolve$3, toString, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Resolve",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$3", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck", "com.sun.tools.javac.comp.Resolve", "AbstractMethodCheck", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$3",
		"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$3);
	});
	return class$;
}

$Class* Resolve$3::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com