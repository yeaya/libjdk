#include <com/sun/tools/javac/comp/Operators$UnaryPrefixPostfixOperator.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Operators$UnaryNumericOperator.h>
#include <com/sun/tools/javac/comp/Operators$UnaryOperatorHelper.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <jcpp.h>

using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Operators = ::com::sun::tools::javac::comp::Operators;
using $Operators$UnaryNumericOperator = ::com::sun::tools::javac::comp::Operators$UnaryNumericOperator;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Operators$UnaryPrefixPostfixOperator::init$($Operators* this$0, $JCTree$Tag* tag) {
	$set(this, this$0, this$0);
	$Operators$UnaryNumericOperator::init$(this$0, tag);
}

$Symbol$OperatorSymbol* Operators$UnaryPrefixPostfixOperator::resolve($Type* arg) {
	return doLookup($($nc(this->this$0->types)->unboxedTypeOrType(arg)));
}

Operators$UnaryPrefixPostfixOperator::Operators$UnaryPrefixPostfixOperator() {
}

$Class* Operators$UnaryPrefixPostfixOperator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $FINAL | $SYNTHETIC, $field(Operators$UnaryPrefixPostfixOperator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(Operators$UnaryPrefixPostfixOperator, init$, void, $Operators*, $JCTree$Tag*)},
		{"resolve", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PUBLIC, $virtualMethod(Operators$UnaryPrefixPostfixOperator, resolve, $Symbol$OperatorSymbol*, $Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Operators$UnaryPrefixPostfixOperator", "com.sun.tools.javac.comp.Operators", "UnaryPrefixPostfixOperator", 0},
		{"com.sun.tools.javac.comp.Operators$UnaryNumericOperator", "com.sun.tools.javac.comp.Operators", "UnaryNumericOperator", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Operators$UnaryPrefixPostfixOperator",
		"com.sun.tools.javac.comp.Operators$UnaryNumericOperator",
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
	$loadClass(Operators$UnaryPrefixPostfixOperator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Operators$UnaryPrefixPostfixOperator));
	});
	return class$;
}

$Class* Operators$UnaryPrefixPostfixOperator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com