#include <com/sun/tools/javac/comp/DeferredAttr$RecoveryDeferredTypeMap$1.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr$RecoveryInfo.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$RecoveryDeferredTypeMap.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$RecoveryInfo = ::com::sun::tools::javac::comp::Attr$RecoveryInfo;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$RecoveryDeferredTypeMap = ::com::sun::tools::javac::comp::DeferredAttr$RecoveryDeferredTypeMap;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
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

void DeferredAttr$RecoveryDeferredTypeMap$1::init$($DeferredAttr$RecoveryDeferredTypeMap* this$1, $Attr* x0, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $Type* pt) {
	$set(this, this$1, this$1);
	$Attr$RecoveryInfo::init$($nc(x0), deferredAttrContext, pt);
}

$Type* DeferredAttr$RecoveryDeferredTypeMap$1::check($JCDiagnostic$DiagnosticPosition* pos, $Type* found) {
	return $nc($nc(this->this$1->this$0)->chk)->checkNonVoid(pos, $($Attr$RecoveryInfo::check(pos, found)));
}

DeferredAttr$RecoveryDeferredTypeMap$1::DeferredAttr$RecoveryDeferredTypeMap$1() {
}

$Class* DeferredAttr$RecoveryDeferredTypeMap$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/comp/DeferredAttr$RecoveryDeferredTypeMap;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$RecoveryDeferredTypeMap$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr$RecoveryDeferredTypeMap;Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(DeferredAttr$RecoveryDeferredTypeMap$1, init$, void, $DeferredAttr$RecoveryDeferredTypeMap*, $Attr*, $DeferredAttr$DeferredAttrContext*, $Type*)},
		{"check", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PROTECTED, $virtualMethod(DeferredAttr$RecoveryDeferredTypeMap$1, check, $Type*, $JCDiagnostic$DiagnosticPosition*, $Type*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap",
		"recover",
		"(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap", "com.sun.tools.javac.comp.DeferredAttr", "RecoveryDeferredTypeMap", $PUBLIC},
		{"com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Attr$RecoveryInfo", "com.sun.tools.javac.comp.Attr", "RecoveryInfo", 0},
		{"com.sun.tools.javac.comp.DeferredAttr$DeferredType", "com.sun.tools.javac.comp.DeferredAttr", "DeferredType", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap$1",
		"com.sun.tools.javac.comp.Attr$RecoveryInfo",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.DeferredAttr"
	};
	$loadClass(DeferredAttr$RecoveryDeferredTypeMap$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredAttr$RecoveryDeferredTypeMap$1);
	});
	return class$;
}

$Class* DeferredAttr$RecoveryDeferredTypeMap$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com