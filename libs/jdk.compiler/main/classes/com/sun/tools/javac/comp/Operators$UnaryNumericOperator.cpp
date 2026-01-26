#include <com/sun/tools/javac/comp/Operators$UnaryNumericOperator.h>

#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Operators$UnaryOperatorHelper.h>
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
using $Operators$UnaryOperatorHelper = ::com::sun::tools::javac::comp::Operators$UnaryOperatorHelper;
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

class Operators$UnaryNumericOperator$$Lambda$isNumeric : public $Predicate {
	$class(Operators$UnaryNumericOperator$$Lambda$isNumeric, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($Type, inst$)->isNumeric();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Operators$UnaryNumericOperator$$Lambda$isNumeric>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Operators$UnaryNumericOperator$$Lambda$isNumeric::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Operators$UnaryNumericOperator$$Lambda$isNumeric, init$, void)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Operators$UnaryNumericOperator$$Lambda$isNumeric, test, bool, Object$*)},
	{}
};
$ClassInfo Operators$UnaryNumericOperator$$Lambda$isNumeric::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Operators$UnaryNumericOperator$$Lambda$isNumeric",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Operators$UnaryNumericOperator$$Lambda$isNumeric::load$($String* name, bool initialize) {
	$loadClass(Operators$UnaryNumericOperator$$Lambda$isNumeric, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Operators$UnaryNumericOperator$$Lambda$isNumeric::class$ = nullptr;

$FieldInfo _Operators$UnaryNumericOperator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $FINAL | $SYNTHETIC, $field(Operators$UnaryNumericOperator, this$0)},
	{"numericTest", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Operators$UnaryNumericOperator, numericTest)},
	{}
};

$MethodInfo _Operators$UnaryNumericOperator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(Operators$UnaryNumericOperator, init$, void, $Operators*, $JCTree$Tag*)},
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/tree/JCTree$Tag;Ljava/util/function/Predicate;)V", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Type;>;)V", 0, $method(Operators$UnaryNumericOperator, init$, void, $Operators*, $JCTree$Tag*, $Predicate*)},
	{"resolve", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PUBLIC, $virtualMethod(Operators$UnaryNumericOperator, resolve, $Symbol$OperatorSymbol*, $Type*)},
	{"test", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Operators$UnaryNumericOperator, test, bool, $Type*)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Operators$UnaryNumericOperator, test, bool, Object$*)},
	{}
};

$InnerClassInfo _Operators$UnaryNumericOperator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Operators$UnaryNumericOperator", "com.sun.tools.javac.comp.Operators", "UnaryNumericOperator", 0},
	{"com.sun.tools.javac.comp.Operators$UnaryOperatorHelper", "com.sun.tools.javac.comp.Operators", "UnaryOperatorHelper", $ABSTRACT},
	{}
};

$ClassInfo _Operators$UnaryNumericOperator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Operators$UnaryNumericOperator",
	"com.sun.tools.javac.comp.Operators$UnaryOperatorHelper",
	nullptr,
	_Operators$UnaryNumericOperator_FieldInfo_,
	_Operators$UnaryNumericOperator_MethodInfo_,
	nullptr,
	nullptr,
	_Operators$UnaryNumericOperator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Operators"
};

$Object* allocate$Operators$UnaryNumericOperator($Class* clazz) {
	return $of($alloc(Operators$UnaryNumericOperator));
}

void Operators$UnaryNumericOperator::init$($Operators* this$0, $JCTree$Tag* tag) {
	Operators$UnaryNumericOperator::init$(this$0, tag, static_cast<$Predicate*>($$new(Operators$UnaryNumericOperator$$Lambda$isNumeric)));
}

void Operators$UnaryNumericOperator::init$($Operators* this$0, $JCTree$Tag* tag, $Predicate* numericTest) {
	$set(this, this$0, this$0);
	$Operators$UnaryOperatorHelper::init$(this$0, tag);
	$set(this, numericTest, numericTest);
}

bool Operators$UnaryNumericOperator::test($Type* type) {
	return $nc(this->numericTest)->test($(this->this$0->unaryPromotion(type)));
}

$Symbol$OperatorSymbol* Operators$UnaryNumericOperator::resolve($Type* arg) {
	return doLookup($(this->this$0->unaryPromotion(arg)));
}

bool Operators$UnaryNumericOperator::test(Object$* type) {
	return this->test($cast($Type, type));
}

Operators$UnaryNumericOperator::Operators$UnaryNumericOperator() {
}

$Class* Operators$UnaryNumericOperator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Operators$UnaryNumericOperator$$Lambda$isNumeric::classInfo$.name)) {
			return Operators$UnaryNumericOperator$$Lambda$isNumeric::load$(name, initialize);
		}
	}
	$loadClass(Operators$UnaryNumericOperator, name, initialize, &_Operators$UnaryNumericOperator_ClassInfo_, allocate$Operators$UnaryNumericOperator);
	return class$;
}

$Class* Operators$UnaryNumericOperator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com