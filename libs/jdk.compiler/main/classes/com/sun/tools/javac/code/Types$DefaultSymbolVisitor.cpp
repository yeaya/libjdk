#include <com/sun/tools/javac/code/Types$DefaultSymbolVisitor.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$DefaultSymbolVisitor::init$() {
}

$Object* Types$DefaultSymbolVisitor::visit($Symbol* s, Object$* arg) {
	return $nc(s)->accept(this, arg);
}

$Object* Types$DefaultSymbolVisitor::visitClassSymbol($Symbol$ClassSymbol* s, Object$* arg) {
	return visitSymbol(s, arg);
}

$Object* Types$DefaultSymbolVisitor::visitMethodSymbol($Symbol$MethodSymbol* s, Object$* arg) {
	return visitSymbol(s, arg);
}

$Object* Types$DefaultSymbolVisitor::visitOperatorSymbol($Symbol$OperatorSymbol* s, Object$* arg) {
	return visitSymbol(s, arg);
}

$Object* Types$DefaultSymbolVisitor::visitPackageSymbol($Symbol$PackageSymbol* s, Object$* arg) {
	return visitSymbol(s, arg);
}

$Object* Types$DefaultSymbolVisitor::visitTypeSymbol($Symbol$TypeSymbol* s, Object$* arg) {
	return visitSymbol(s, arg);
}

$Object* Types$DefaultSymbolVisitor::visitVarSymbol($Symbol$VarSymbol* s, Object$* arg) {
	return visitSymbol(s, arg);
}

Types$DefaultSymbolVisitor::Types$DefaultSymbolVisitor() {
}

$Class* Types$DefaultSymbolVisitor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Types$DefaultSymbolVisitor, init$, void)},
		{"visit", "(Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol;TS;)TR;", $PUBLIC | $FINAL, $method(Types$DefaultSymbolVisitor, visit, $Object*, $Symbol*, Object$*)},
		{"visitClassSymbol", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;TS;)TR;", $PUBLIC, $virtualMethod(Types$DefaultSymbolVisitor, visitClassSymbol, $Object*, $Symbol$ClassSymbol*, Object$*)},
		{"visitMethodSymbol", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;TS;)TR;", $PUBLIC, $virtualMethod(Types$DefaultSymbolVisitor, visitMethodSymbol, $Object*, $Symbol$MethodSymbol*, Object$*)},
		{"visitOperatorSymbol", "(Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;TS;)TR;", $PUBLIC, $virtualMethod(Types$DefaultSymbolVisitor, visitOperatorSymbol, $Object*, $Symbol$OperatorSymbol*, Object$*)},
		{"visitPackageSymbol", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;TS;)TR;", $PUBLIC, $virtualMethod(Types$DefaultSymbolVisitor, visitPackageSymbol, $Object*, $Symbol$PackageSymbol*, Object$*)},
		{"visitTypeSymbol", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;TS;)TR;", $PUBLIC, $virtualMethod(Types$DefaultSymbolVisitor, visitTypeSymbol, $Object*, $Symbol$TypeSymbol*, Object$*)},
		{"visitVarSymbol", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;TS;)TR;", $PUBLIC, $virtualMethod(Types$DefaultSymbolVisitor, visitVarSymbol, $Object*, $Symbol$VarSymbol*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$DefaultSymbolVisitor", "com.sun.tools.javac.code.Types", "DefaultSymbolVisitor", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.code.Symbol$Visitor", "com.sun.tools.javac.code.Symbol", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.code.Types$DefaultSymbolVisitor",
		"java.lang.Object",
		"com.sun.tools.javac.code.Symbol$Visitor",
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;S:Ljava/lang/Object;>Ljava/lang/Object;Lcom/sun/tools/javac/code/Symbol$Visitor<TR;TS;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$DefaultSymbolVisitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$DefaultSymbolVisitor);
	});
	return class$;
}

$Class* Types$DefaultSymbolVisitor::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com