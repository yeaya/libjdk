#include <com/sun/tools/javac/comp/Operators$BinaryNumericOperator.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Operators$BinaryOperatorHelper.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Operators = ::com::sun::tools::javac::comp::Operators;
using $Operators$BinaryOperatorHelper = ::com::sun::tools::javac::comp::Operators$BinaryOperatorHelper;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
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

class Operators$BinaryNumericOperator$$Lambda$isNumeric : public $Predicate {
	$class(Operators$BinaryNumericOperator$$Lambda$isNumeric, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($Type, inst$)->isNumeric();
	}
};
$Class* Operators$BinaryNumericOperator$$Lambda$isNumeric::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Operators$BinaryNumericOperator$$Lambda$isNumeric, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Operators$BinaryNumericOperator$$Lambda$isNumeric, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Operators$BinaryNumericOperator$$Lambda$isNumeric",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(Operators$BinaryNumericOperator$$Lambda$isNumeric, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$BinaryNumericOperator$$Lambda$isNumeric);
	});
	return class$;
}
$Class* Operators$BinaryNumericOperator$$Lambda$isNumeric::class$ = nullptr;

void Operators$BinaryNumericOperator::init$($Operators* this$0, $JCTree$Tag* tag) {
	Operators$BinaryNumericOperator::init$(this$0, tag, $$new(Operators$BinaryNumericOperator$$Lambda$isNumeric));
}

void Operators$BinaryNumericOperator::init$($Operators* this$0, $JCTree$Tag* tag, $Predicate* numericTest) {
	$set(this, this$0, this$0);
	$Operators$BinaryOperatorHelper::init$(this$0, tag);
	$set(this, numericTest, numericTest);
}

$Symbol$OperatorSymbol* Operators$BinaryNumericOperator::resolve($Type* arg1, $Type* arg2) {
	$var($Type, t, this->this$0->binaryPromotion(arg1, arg2));
	return doLookup(t, t);
}

bool Operators$BinaryNumericOperator::test($Type* arg1, $Type* arg2) {
	$useLocalObjectStack();
	bool var$0 = $nc(this->numericTest)->test($(this->this$0->unaryPromotion(arg1)));
	return var$0 && this->numericTest->test($(this->this$0->unaryPromotion(arg2)));
}

bool Operators$BinaryNumericOperator::test(Object$* arg1, Object$* arg2) {
	return this->test($cast($Type, arg1), $cast($Type, arg2));
}

Operators$BinaryNumericOperator::Operators$BinaryNumericOperator() {
}

$Class* Operators$BinaryNumericOperator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.comp.Operators$BinaryNumericOperator$$Lambda$isNumeric")) {
			return Operators$BinaryNumericOperator$$Lambda$isNumeric::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $FINAL | $SYNTHETIC, $field(Operators$BinaryNumericOperator, this$0)},
		{"numericTest", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Operators$BinaryNumericOperator, numericTest)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(Operators$BinaryNumericOperator, init$, void, $Operators*, $JCTree$Tag*)},
		{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/tree/JCTree$Tag;Ljava/util/function/Predicate;)V", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Type;>;)V", 0, $method(Operators$BinaryNumericOperator, init$, void, $Operators*, $JCTree$Tag*, $Predicate*)},
		{"resolve", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PUBLIC, $virtualMethod(Operators$BinaryNumericOperator, resolve, $Symbol$OperatorSymbol*, $Type*, $Type*)},
		{"test", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Operators$BinaryNumericOperator, test, bool, $Type*, $Type*)},
		{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Operators$BinaryNumericOperator, test, bool, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Operators$BinaryNumericOperator", "com.sun.tools.javac.comp.Operators", "BinaryNumericOperator", 0},
		{"com.sun.tools.javac.comp.Operators$BinaryOperatorHelper", "com.sun.tools.javac.comp.Operators", "BinaryOperatorHelper", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Operators$BinaryNumericOperator",
		"com.sun.tools.javac.comp.Operators$BinaryOperatorHelper",
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
	$loadClass(Operators$BinaryNumericOperator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Operators$BinaryNumericOperator));
	});
	return class$;
}

$Class* Operators$BinaryNumericOperator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com