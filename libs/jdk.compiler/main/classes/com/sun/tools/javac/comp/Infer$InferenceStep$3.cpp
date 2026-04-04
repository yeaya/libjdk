#include <com/sun/tools/javac/comp/Infer$InferenceStep$3.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Infer$InferenceStep.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef UPPER

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Types = ::com::sun::tools::javac::code::Types;
using $Infer$InferenceStep = ::com::sun::tools::javac::comp::Infer$InferenceStep;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Infer$InferenceStep$3$$Lambda$lambda$accepts$0 : public $Predicate {
	$class(Infer$InferenceStep$3$$Lambda$lambda$accepts$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($InferenceContext* inferenceContext) {
		$set(this, inferenceContext, inferenceContext);
	}
	virtual bool test(Object$* b) override {
		 return Infer$InferenceStep$3::lambda$accepts$0(inferenceContext, $cast($Type, b));
	}
	$InferenceContext* inferenceContext = nullptr;
};
$Class* Infer$InferenceStep$3$$Lambda$lambda$accepts$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inferenceContext", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $PUBLIC, $field(Infer$InferenceStep$3$$Lambda$lambda$accepts$0, inferenceContext)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC, $method(Infer$InferenceStep$3$$Lambda$lambda$accepts$0, init$, void, $InferenceContext*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Infer$InferenceStep$3$$Lambda$lambda$accepts$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Infer$InferenceStep$3$$Lambda$lambda$accepts$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Infer$InferenceStep$3$$Lambda$lambda$accepts$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Infer$InferenceStep$3$$Lambda$lambda$accepts$0);
	});
	return class$;
}
$Class* Infer$InferenceStep$3$$Lambda$lambda$accepts$0::class$ = nullptr;

class Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1 : public $Predicate {
	$class(Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Types* types, $Symtab* syms) {
		$set(this, types, types);
		$set(this, syms, syms);
	}
	virtual bool test(Object$* u) override {
		 return Infer$InferenceStep$3::lambda$accepts$1(types, syms, $cast($Type, u));
	}
	$Types* types = nullptr;
	$Symtab* syms = nullptr;
};
$Class* Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PUBLIC, $field(Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1, types)},
		{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PUBLIC, $field(Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1, syms)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Symtab;)V", nullptr, $PUBLIC, $method(Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1, init$, void, $Types*, $Symtab*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1);
	});
	return class$;
}
$Class* Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1::class$ = nullptr;

void Infer$InferenceStep$3::init$($String* $enum$name, int32_t $enum$ordinal, $Type$UndetVar$InferenceBound* ib) {
	$Infer$InferenceStep::init$($enum$name, $enum$ordinal, ib);
}

bool Infer$InferenceStep$3::accepts($Type$UndetVar* t, $InferenceContext* inferenceContext) {
	$useLocalObjectStack();
	if (!$nc(t)->isThrows()) {
		return false;
	}
	$var($Types, types, $nc(inferenceContext)->types);
	$var($Symtab, syms, $nc(inferenceContext->infer)->syms);
	$init($Type$UndetVar$InferenceBound);
	return $$nc($$nc($$nc(t->getBounds($$new($Type$UndetVar$InferenceBoundArray, {$Type$UndetVar$InferenceBound::UPPER})))->stream())->filter($$new(Infer$InferenceStep$3$$Lambda$lambda$accepts$0, inferenceContext)))->allMatch($$new(Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1, types, syms));
}

$Type* Infer$InferenceStep$3::solve($Type$UndetVar* uv, $InferenceContext* inferenceContext) {
	return $nc($nc($nc(inferenceContext)->infer)->syms)->runtimeExceptionType;
}

bool Infer$InferenceStep$3::lambda$accepts$1($Types* types, $Symtab* syms, $Type* u) {
	$init(Infer$InferenceStep$3);
	return $nc(types)->isSubtype($nc(syms)->runtimeExceptionType, u);
}

bool Infer$InferenceStep$3::lambda$accepts$0($InferenceContext* inferenceContext, $Type* b) {
	$init(Infer$InferenceStep$3);
	return !$nc(inferenceContext)->free(b);
}

Infer$InferenceStep$3::Infer$InferenceStep$3() {
}

$Class* Infer$InferenceStep$3::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.comp.Infer$InferenceStep$3$$Lambda$lambda$accepts$0")) {
			return Infer$InferenceStep$3$$Lambda$lambda$accepts$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1")) {
			return Infer$InferenceStep$3$$Lambda$lambda$accepts$1$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, $PRIVATE, $method(Infer$InferenceStep$3, init$, void, $String*, int32_t, $Type$UndetVar$InferenceBound*)},
		{"accepts", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)Z", nullptr, $PUBLIC, $virtualMethod(Infer$InferenceStep$3, accepts, bool, $Type$UndetVar*, $InferenceContext*)},
		{"lambda$accepts$0", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Infer$InferenceStep$3, lambda$accepts$0, bool, $InferenceContext*, $Type*)},
		{"lambda$accepts$1", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Infer$InferenceStep$3, lambda$accepts$1, bool, $Types*, $Symtab*, $Type*)},
		{"solve", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Infer$InferenceStep$3, solve, $Type*, $Type$UndetVar*, $InferenceContext*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Infer$InferenceStep",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$InferenceStep", "com.sun.tools.javac.comp.Infer", "InferenceStep", $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.tools.javac.comp.Infer$InferenceStep$3", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.comp.Infer$InferenceStep$3",
		"com.sun.tools.javac.comp.Infer$InferenceStep",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Infer"
	};
	$loadClass(Infer$InferenceStep$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Infer$InferenceStep$3));
	});
	return class$;
}

$Class* Infer$InferenceStep$3::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com