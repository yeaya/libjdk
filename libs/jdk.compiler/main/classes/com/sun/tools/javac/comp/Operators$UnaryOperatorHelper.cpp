#include <com/sun/tools/javac/comp/Operators$UnaryOperatorHelper.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Operators$OperatorHelper.h>
#include <com/sun/tools/javac/comp/Operators$OperatorType.h>
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
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Operators = ::com::sun::tools::javac::comp::Operators;
using $Operators$OperatorHelper = ::com::sun::tools::javac::comp::Operators$OperatorHelper;
using $Operators$OperatorType = ::com::sun::tools::javac::comp::Operators$OperatorType;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $List = ::com::sun::tools::javac::util::List;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Operators$UnaryOperatorHelper$$Lambda$lambda$doLookup$0 : public $Predicate {
	$class(Operators$UnaryOperatorHelper$$Lambda$lambda$doLookup$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Operators$UnaryOperatorHelper* inst, $Type* t) {
		$set(this, inst$, inst);
		$set(this, t, t);
	}
	virtual bool test(Object$* op) override {
		return $nc(inst$)->lambda$doLookup$0(t, $cast($Symbol$OperatorSymbol, op));
	}
	Operators$UnaryOperatorHelper* inst$ = nullptr;
	$Type* t = nullptr;
};
$Class* Operators$UnaryOperatorHelper$$Lambda$lambda$doLookup$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Operators$UnaryOperatorHelper$$Lambda$lambda$doLookup$0, inst$)},
		{"t", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Operators$UnaryOperatorHelper$$Lambda$lambda$doLookup$0, t)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Operators$UnaryOperatorHelper;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(Operators$UnaryOperatorHelper$$Lambda$lambda$doLookup$0, init$, void, Operators$UnaryOperatorHelper*, $Type*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Operators$UnaryOperatorHelper$$Lambda$lambda$doLookup$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Operators$UnaryOperatorHelper$$Lambda$lambda$doLookup$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Operators$UnaryOperatorHelper$$Lambda$lambda$doLookup$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$UnaryOperatorHelper$$Lambda$lambda$doLookup$0);
	});
	return class$;
}
$Class* Operators$UnaryOperatorHelper$$Lambda$lambda$doLookup$0::class$ = nullptr;

class Operators$UnaryOperatorHelper$$Lambda$lambda$addUnaryOperator$1$1 : public $Supplier {
	$class(Operators$UnaryOperatorHelper$$Lambda$lambda$addUnaryOperator$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Operators$UnaryOperatorHelper* inst, $Operators$OperatorType* arg, $Operators$OperatorType* res, $ints* opcode) {
		$set(this, inst$, inst);
		$set(this, arg, arg);
		$set(this, res, res);
		$set(this, opcode, opcode);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->lambda$addUnaryOperator$1(arg, res, opcode));
	}
	Operators$UnaryOperatorHelper* inst$ = nullptr;
	$Operators$OperatorType* arg = nullptr;
	$Operators$OperatorType* res = nullptr;
	$ints* opcode = nullptr;
};
$Class* Operators$UnaryOperatorHelper$$Lambda$lambda$addUnaryOperator$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Operators$UnaryOperatorHelper$$Lambda$lambda$addUnaryOperator$1$1, inst$)},
		{"arg", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC, $field(Operators$UnaryOperatorHelper$$Lambda$lambda$addUnaryOperator$1$1, arg)},
		{"res", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC, $field(Operators$UnaryOperatorHelper$$Lambda$lambda$addUnaryOperator$1$1, res)},
		{"opcode", "[I", nullptr, $PUBLIC, $field(Operators$UnaryOperatorHelper$$Lambda$lambda$addUnaryOperator$1$1, opcode)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Operators$UnaryOperatorHelper;Lcom/sun/tools/javac/comp/Operators$OperatorType;Lcom/sun/tools/javac/comp/Operators$OperatorType;[I)V", nullptr, $PUBLIC, $method(Operators$UnaryOperatorHelper$$Lambda$lambda$addUnaryOperator$1$1, init$, void, Operators$UnaryOperatorHelper*, $Operators$OperatorType*, $Operators$OperatorType*, $ints*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Operators$UnaryOperatorHelper$$Lambda$lambda$addUnaryOperator$1$1, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Operators$UnaryOperatorHelper$$Lambda$lambda$addUnaryOperator$1$1",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Operators$UnaryOperatorHelper$$Lambda$lambda$addUnaryOperator$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$UnaryOperatorHelper$$Lambda$lambda$addUnaryOperator$1$1);
	});
	return class$;
}
$Class* Operators$UnaryOperatorHelper$$Lambda$lambda$addUnaryOperator$1$1::class$ = nullptr;

int32_t Operators$UnaryOperatorHelper::hashCode() {
	return this->$Operators$OperatorHelper::hashCode();
}

bool Operators$UnaryOperatorHelper::equals(Object$* arg0) {
	return this->$Operators$OperatorHelper::equals(arg0);
}

$Object* Operators$UnaryOperatorHelper::clone() {
	return this->$Operators$OperatorHelper::clone();
}

$String* Operators$UnaryOperatorHelper::toString() {
	return this->$Operators$OperatorHelper::toString();
}

void Operators$UnaryOperatorHelper::finalize() {
	this->$Operators$OperatorHelper::finalize();
}

void Operators$UnaryOperatorHelper::init$($Operators* this$0, $JCTree$Tag* tag) {
	$set(this, this$0, this$0);
	$Operators$OperatorHelper::init$(this$0, tag);
}

$Symbol$OperatorSymbol* Operators$UnaryOperatorHelper::doLookup($Type* t) {
	return doLookup($$new(Operators$UnaryOperatorHelper$$Lambda$lambda$doLookup$0, this, t));
}

bool Operators$UnaryOperatorHelper::isUnaryOperatorApplicable($Symbol$OperatorSymbol* op, $Type* t) {
	return $nc(this->this$0->types)->isSameType($cast($Type, $nc($($nc($nc(op)->type)->getParameterTypes()))->head), t);
}

Operators$UnaryOperatorHelper* Operators$UnaryOperatorHelper::addUnaryOperator($Operators$OperatorType* arg, $Operators$OperatorType* res, $ints* opcode) {
	$set(this, operatorSuppliers, $nc(this->operatorSuppliers)->prepend($$new(Operators$UnaryOperatorHelper$$Lambda$lambda$addUnaryOperator$1$1, this, arg, res, opcode)));
	return this;
}

$Symbol$OperatorSymbol* Operators$UnaryOperatorHelper::lambda$addUnaryOperator$1($Operators$OperatorType* arg, $Operators$OperatorType* res, $ints* opcode) {
	return this->this$0->makeOperator(this->name, $($List::of(arg)), res, opcode);
}

bool Operators$UnaryOperatorHelper::lambda$doLookup$0($Type* t, $Symbol$OperatorSymbol* op) {
	return isUnaryOperatorApplicable(op, t);
}

Operators$UnaryOperatorHelper::Operators$UnaryOperatorHelper() {
}

$Class* Operators$UnaryOperatorHelper::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.comp.Operators$UnaryOperatorHelper$$Lambda$lambda$doLookup$0")) {
			return Operators$UnaryOperatorHelper$$Lambda$lambda$doLookup$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Operators$UnaryOperatorHelper$$Lambda$lambda$addUnaryOperator$1$1")) {
			return Operators$UnaryOperatorHelper$$Lambda$lambda$addUnaryOperator$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $FINAL | $SYNTHETIC, $field(Operators$UnaryOperatorHelper, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(Operators$UnaryOperatorHelper, init$, void, $Operators*, $JCTree$Tag*)},
		{"addUnaryOperator", "(Lcom/sun/tools/javac/comp/Operators$OperatorType;Lcom/sun/tools/javac/comp/Operators$OperatorType;[I)Lcom/sun/tools/javac/comp/Operators$UnaryOperatorHelper;", nullptr, $FINAL | $TRANSIENT, $method(Operators$UnaryOperatorHelper, addUnaryOperator, Operators$UnaryOperatorHelper*, $Operators$OperatorType*, $Operators$OperatorType*, $ints*)},
		{"doLookup", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $FINAL, $method(Operators$UnaryOperatorHelper, doLookup, $Symbol$OperatorSymbol*, $Type*)},
		{"isUnaryOperatorApplicable", "(Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;Lcom/sun/tools/javac/code/Type;)Z", nullptr, 0, $virtualMethod(Operators$UnaryOperatorHelper, isUnaryOperatorApplicable, bool, $Symbol$OperatorSymbol*, $Type*)},
		{"lambda$addUnaryOperator$1", "(Lcom/sun/tools/javac/comp/Operators$OperatorType;Lcom/sun/tools/javac/comp/Operators$OperatorType;[I)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PRIVATE | $SYNTHETIC, $method(Operators$UnaryOperatorHelper, lambda$addUnaryOperator$1, $Symbol$OperatorSymbol*, $Operators$OperatorType*, $Operators$OperatorType*, $ints*)},
		{"lambda$doLookup$0", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Operators$UnaryOperatorHelper, lambda$doLookup$0, bool, $Type*, $Symbol$OperatorSymbol*)},
		{"resolve", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $ABSTRACT, $virtualMethod(Operators$UnaryOperatorHelper, resolve, $Symbol$OperatorSymbol*, $Type*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Operators$UnaryOperatorHelper", "com.sun.tools.javac.comp.Operators", "UnaryOperatorHelper", $ABSTRACT},
		{"com.sun.tools.javac.comp.Operators$OperatorHelper", "com.sun.tools.javac.comp.Operators", "OperatorHelper", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.comp.Operators$UnaryOperatorHelper",
		"com.sun.tools.javac.comp.Operators$OperatorHelper",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/comp/Operators$OperatorHelper;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Type;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Operators"
	};
	$loadClass(Operators$UnaryOperatorHelper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Operators$UnaryOperatorHelper));
	});
	return class$;
}

$Class* Operators$UnaryOperatorHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com