#include <com/sun/tools/javac/comp/Operators$OperatorHelper.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Symbol$OperatorSymbolArray = $Array<::com::sun::tools::javac::code::Symbol$OperatorSymbol>;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Operators = ::com::sun::tools::javac::comp::Operators;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $List = ::com::sun::tools::javac::util::List;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Optional = ::java::util::Optional;
using $Function = ::java::util::function::Function;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Operators$OperatorHelper$$Lambda$initOperators : public $Supplier {
	$class(Operators$OperatorHelper$$Lambda$initOperators, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Operators$OperatorHelper* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $nc(inst$)->initOperators();
	}
	Operators$OperatorHelper* inst$ = nullptr;
};
$Class* Operators$OperatorHelper$$Lambda$initOperators::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Operators$OperatorHelper$$Lambda$initOperators, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Operators$OperatorHelper;)V", nullptr, $PUBLIC, $method(Operators$OperatorHelper$$Lambda$initOperators, init$, void, Operators$OperatorHelper*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Operators$OperatorHelper$$Lambda$initOperators, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Operators$OperatorHelper$$Lambda$initOperators",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Operators$OperatorHelper$$Lambda$initOperators, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$OperatorHelper$$Lambda$initOperators);
	});
	return class$;
}
$Class* Operators$OperatorHelper$$Lambda$initOperators::class$ = nullptr;

class Operators$OperatorHelper$$Lambda$get$1 : public $Function {
	$class(Operators$OperatorHelper$$Lambda$get$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $sure($Supplier, inst$)->get();
	}
};
$Class* Operators$OperatorHelper$$Lambda$get$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Operators$OperatorHelper$$Lambda$get$1, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Operators$OperatorHelper$$Lambda$get$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Operators$OperatorHelper$$Lambda$get$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Operators$OperatorHelper$$Lambda$get$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$OperatorHelper$$Lambda$get$1);
	});
	return class$;
}
$Class* Operators$OperatorHelper$$Lambda$get$1::class$ = nullptr;

class Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2 : public $IntFunction {
	$class(Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		return Operators$OperatorHelper::lambda$initOperators$0(x$0);
	}
};
$Class* Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2, init$, void)},
		{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2, apply, $Object*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2",
		"java.lang.Object",
		"java.util.function.IntFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2);
	});
	return class$;
}
$Class* Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2::class$ = nullptr;

void Operators$OperatorHelper::init$($Operators* this$0, $JCTree$Tag* tag) {
	$set(this, this$0, this$0);
	$set(this, alternatives, $Optional::empty());
	$set(this, operatorSuppliers, $List::nil());
	$set(this, name, this$0->operatorName(tag));
}

$Symbol$OperatorSymbol* Operators$OperatorHelper::doLookup($Predicate* applicabilityTest) {
	$useLocalObjectStack();
	return $cast($Symbol$OperatorSymbol, $$nc($$nc($$nc($Stream::of($$cast($Symbol$OperatorSymbolArray, $nc(this->alternatives)->orElseGet($$new(Operators$OperatorHelper$$Lambda$initOperators, this)))))->filter(applicabilityTest))->findFirst())->orElse(this->this$0->noOpSymbol));
}

$Symbol$OperatorSymbolArray* Operators$OperatorHelper::initOperators() {
	$useLocalObjectStack();
	$var($Symbol$OperatorSymbolArray, operators, $cast($Symbol$OperatorSymbolArray, $$nc($$nc($nc(this->operatorSuppliers)->stream())->map($$new(Operators$OperatorHelper$$Lambda$get$1)))->toArray($$new(Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2))));
	$set(this, alternatives, $Optional::of(operators));
	$set(this, operatorSuppliers, nullptr);
	return operators;
}

$Symbol$OperatorSymbolArray* Operators$OperatorHelper::lambda$initOperators$0(int32_t x$0) {
	return $new($Symbol$OperatorSymbolArray, x$0);
}

Operators$OperatorHelper::Operators$OperatorHelper() {
}

$Class* Operators$OperatorHelper::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.comp.Operators$OperatorHelper$$Lambda$initOperators")) {
			return Operators$OperatorHelper$$Lambda$initOperators::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Operators$OperatorHelper$$Lambda$get$1")) {
			return Operators$OperatorHelper$$Lambda$get$1::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2")) {
			return Operators$OperatorHelper$$Lambda$lambda$initOperators$0$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $FINAL | $SYNTHETIC, $field(Operators$OperatorHelper, this$0)},
		{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $FINAL, $field(Operators$OperatorHelper, name)},
		{"alternatives", "Ljava/util/Optional;", "Ljava/util/Optional<[Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;>;", 0, $field(Operators$OperatorHelper, alternatives)},
		{"operatorSuppliers", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Ljava/util/function/Supplier<Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;>;>;", 0, $field(Operators$OperatorHelper, operatorSuppliers)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(Operators$OperatorHelper, init$, void, $Operators*, $JCTree$Tag*)},
		{"doLookup", "(Ljava/util/function/Predicate;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;>;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", $FINAL, $method(Operators$OperatorHelper, doLookup, $Symbol$OperatorSymbol*, $Predicate*)},
		{"initOperators", "()[Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PRIVATE, $method(Operators$OperatorHelper, initOperators, $Symbol$OperatorSymbolArray*)},
		{"lambda$initOperators$0", "(I)[Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Operators$OperatorHelper, lambda$initOperators$0, $Symbol$OperatorSymbolArray*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Operators$OperatorHelper", "com.sun.tools.javac.comp.Operators", "OperatorHelper", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.comp.Operators$OperatorHelper",
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
		"com.sun.tools.javac.comp.Operators"
	};
	$loadClass(Operators$OperatorHelper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$OperatorHelper);
	});
	return class$;
}

$Class* Operators$OperatorHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com