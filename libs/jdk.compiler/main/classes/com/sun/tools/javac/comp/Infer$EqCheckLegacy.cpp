#include <com/sun/tools/javac/comp/Infer$EqCheckLegacy.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Infer$CheckBounds.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationAction.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/EnumSet.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/BiPredicate.h>
#include <jcpp.h>

#undef EQ

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$CheckBounds = ::com::sun::tools::javac::comp::Infer$CheckBounds;
using $Infer$IncorporationAction = ::com::sun::tools::javac::comp::Infer$IncorporationAction;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $EnumSet = ::java::util::EnumSet;
using $BiFunction = ::java::util::function::BiFunction;
using $BiPredicate = ::java::util::function::BiPredicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Infer$EqCheckLegacy$$Lambda$asInstType : public $BiFunction {
	$class(Infer$EqCheckLegacy$$Lambda$asInstType, $NO_CLASS_INIT, $BiFunction)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$, Object$* t) override {
		 return $of($sure($InferenceContext, inst$)->asInstType($cast($Type, t)));
	}
};
$Class* Infer$EqCheckLegacy$$Lambda$asInstType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Infer$EqCheckLegacy$$Lambda$asInstType, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Infer$EqCheckLegacy$$Lambda$asInstType, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Infer$EqCheckLegacy$$Lambda$asInstType",
		"java.lang.Object",
		"java.util.function.BiFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(Infer$EqCheckLegacy$$Lambda$asInstType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Infer$EqCheckLegacy$$Lambda$asInstType);
	});
	return class$;
}
$Class* Infer$EqCheckLegacy$$Lambda$asInstType::class$ = nullptr;

class Infer$EqCheckLegacy$$Lambda$free$1 : public $BiPredicate {
	$class(Infer$EqCheckLegacy$$Lambda$free$1, $NO_CLASS_INIT, $BiPredicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$, Object$* t) override {
		 return $sure($InferenceContext, inst$)->free($cast($Type, t));
	}
};
$Class* Infer$EqCheckLegacy$$Lambda$free$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Infer$EqCheckLegacy$$Lambda$free$1, init$, void)},
		{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Infer$EqCheckLegacy$$Lambda$free$1, test, bool, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Infer$EqCheckLegacy$$Lambda$free$1",
		"java.lang.Object",
		"java.util.function.BiPredicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(Infer$EqCheckLegacy$$Lambda$free$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Infer$EqCheckLegacy$$Lambda$free$1);
	});
	return class$;
}
$Class* Infer$EqCheckLegacy$$Lambda$free$1::class$ = nullptr;

void Infer$EqCheckLegacy::init$($Infer* this$0, $Type$UndetVar* uv, $Type* t, $Type$UndetVar$InferenceBound* from) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$var($BiFunction, var$0, $new(Infer$EqCheckLegacy$$Lambda$asInstType));
	$Infer$CheckBounds::init$(this$0, uv, t, var$0, $$new(Infer$EqCheckLegacy$$Lambda$free$1), from);
}

$Infer$IncorporationAction* Infer$EqCheckLegacy::dup($Type$UndetVar* that) {
	return $new(Infer$EqCheckLegacy, this->this$0, that, this->t, this->from);
}

$EnumSet* Infer$EqCheckLegacy::boundsToCheck() {
	$init($Type$UndetVar$InferenceBound);
	return (this->from == $Type$UndetVar$InferenceBound::EQ) ? $EnumSet::allOf($Type$UndetVar$InferenceBound::class$) : $EnumSet::of($Type$UndetVar$InferenceBound::EQ);
}

Infer$EqCheckLegacy::Infer$EqCheckLegacy() {
}

$Class* Infer$EqCheckLegacy::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.comp.Infer$EqCheckLegacy$$Lambda$asInstType")) {
			return Infer$EqCheckLegacy$$Lambda$asInstType::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Infer$EqCheckLegacy$$Lambda$free$1")) {
			return Infer$EqCheckLegacy$$Lambda$free$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$EqCheckLegacy, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, 0, $method(Infer$EqCheckLegacy, init$, void, $Infer*, $Type$UndetVar*, $Type*, $Type$UndetVar$InferenceBound*)},
		{"boundsToCheck", "()Ljava/util/EnumSet;", "()Ljava/util/EnumSet<Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;>;", 0, $virtualMethod(Infer$EqCheckLegacy, boundsToCheck, $EnumSet*)},
		{"dup", "(Lcom/sun/tools/javac/code/Type$UndetVar;)Lcom/sun/tools/javac/comp/Infer$IncorporationAction;", nullptr, $PUBLIC, $virtualMethod(Infer$EqCheckLegacy, dup, $Infer$IncorporationAction*, $Type$UndetVar*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$EqCheckLegacy", "com.sun.tools.javac.comp.Infer", "EqCheckLegacy", 0},
		{"com.sun.tools.javac.comp.Infer$CheckBounds", "com.sun.tools.javac.comp.Infer", "CheckBounds", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Infer$EqCheckLegacy",
		"com.sun.tools.javac.comp.Infer$CheckBounds",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Infer"
	};
	$loadClass(Infer$EqCheckLegacy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Infer$EqCheckLegacy);
	});
	return class$;
}

$Class* Infer$EqCheckLegacy::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com