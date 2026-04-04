#include <com/sun/tools/javac/comp/Resolve$ResolveDeferredRecoveryMap.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr$RecoveryDeferredTypeMap.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Resolve$18.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $DeferredAttr$RecoveryDeferredTypeMap = ::com::sun::tools::javac::comp::DeferredAttr$RecoveryDeferredTypeMap;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$18 = ::com::sun::tools::javac::comp::Resolve$18;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Resolve$ResolveDeferredRecoveryMap::init$($Resolve* this$0, $DeferredAttr$AttrMode* mode, $Symbol* msym, $Resolve$MethodResolutionPhase* step) {
	$set(this, this$0, this$0);
	$DeferredAttr$RecoveryDeferredTypeMap::init$($nc(this$0->deferredAttr), mode, msym, step);
}

$Type* Resolve$ResolveDeferredRecoveryMap::typeOf($DeferredAttr$DeferredType* dt, $Type* pt) {
	$useLocalObjectStack();
	$var($Type, res, $DeferredAttr$RecoveryDeferredTypeMap::typeOf(dt, pt));
	if (!$nc(res)->isErroneous()) {
		$init($Resolve$18);
		switch ($nc($Resolve$18::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get(($$nc($$nc($TreeInfo::skipParens($nc(dt)->tree))->getTag()))->ordinal())) {
		case 1:
		case 2:
			return dt;
		case 3:
			return $equals(res, $Type::recoveryType) ? $cast($Type, dt) : res;
		}
	}
	return res;
}

$Type* Resolve$ResolveDeferredRecoveryMap::typeOf($DeferredAttr$DeferredType* dt, Object$* pt) {
	return this->typeOf(dt, $cast($Type, pt));
}

Resolve$ResolveDeferredRecoveryMap::Resolve$ResolveDeferredRecoveryMap() {
}

$Class* Resolve$ResolveDeferredRecoveryMap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$ResolveDeferredRecoveryMap, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)V", nullptr, $PUBLIC, $method(Resolve$ResolveDeferredRecoveryMap, init$, void, $Resolve*, $DeferredAttr$AttrMode*, $Symbol*, $Resolve$MethodResolutionPhase*)},
		{"typeOf", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PROTECTED, $virtualMethod(Resolve$ResolveDeferredRecoveryMap, typeOf, $Type*, $DeferredAttr$DeferredType*, $Type*)},
		{"typeOf", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(Resolve$ResolveDeferredRecoveryMap, typeOf, $Type*, $DeferredAttr$DeferredType*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$ResolveDeferredRecoveryMap", "com.sun.tools.javac.comp.Resolve", "ResolveDeferredRecoveryMap", 0},
		{"com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap", "com.sun.tools.javac.comp.DeferredAttr", "RecoveryDeferredTypeMap", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$ResolveDeferredRecoveryMap",
		"com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap",
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
	$loadClass(Resolve$ResolveDeferredRecoveryMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Resolve$ResolveDeferredRecoveryMap));
	});
	return class$;
}

$Class* Resolve$ResolveDeferredRecoveryMap::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com