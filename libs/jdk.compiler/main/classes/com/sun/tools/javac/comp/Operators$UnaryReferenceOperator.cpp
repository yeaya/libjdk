#include <com/sun/tools/javac/comp/Operators$UnaryReferenceOperator.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Operators$UnaryOperatorHelper.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <jcpp.h>

using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Operators = ::com::sun::tools::javac::comp::Operators;
using $Operators$UnaryOperatorHelper = ::com::sun::tools::javac::comp::Operators$UnaryOperatorHelper;
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

void Operators$UnaryReferenceOperator::init$($Operators* this$0, $JCTree$Tag* tag) {
	$set(this, this$0, this$0);
	$Operators$UnaryOperatorHelper::init$(this$0, tag);
}

bool Operators$UnaryReferenceOperator::test($Type* type) {
	return $nc(type)->isNullOrReference();
}

$Symbol$OperatorSymbol* Operators$UnaryReferenceOperator::resolve($Type* arg) {
	return doLookup($nc(this->this$0->syms)->objectType);
}

bool Operators$UnaryReferenceOperator::test(Object$* type) {
	return this->test($cast($Type, type));
}

Operators$UnaryReferenceOperator::Operators$UnaryReferenceOperator() {
}

$Class* Operators$UnaryReferenceOperator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $FINAL | $SYNTHETIC, $field(Operators$UnaryReferenceOperator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(Operators$UnaryReferenceOperator, init$, void, $Operators*, $JCTree$Tag*)},
		{"resolve", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PUBLIC, $virtualMethod(Operators$UnaryReferenceOperator, resolve, $Symbol$OperatorSymbol*, $Type*)},
		{"test", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Operators$UnaryReferenceOperator, test, bool, $Type*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Operators$UnaryReferenceOperator, test, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Operators$UnaryReferenceOperator", "com.sun.tools.javac.comp.Operators", "UnaryReferenceOperator", 0},
		{"com.sun.tools.javac.comp.Operators$UnaryOperatorHelper", "com.sun.tools.javac.comp.Operators", "UnaryOperatorHelper", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Operators$UnaryReferenceOperator",
		"com.sun.tools.javac.comp.Operators$UnaryOperatorHelper",
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
	$loadClass(Operators$UnaryReferenceOperator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Operators$UnaryReferenceOperator));
	});
	return class$;
}

$Class* Operators$UnaryReferenceOperator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com