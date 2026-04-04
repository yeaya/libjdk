#include <com/sun/tools/javac/code/Types$MapVisitor.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$MapVisitor::init$() {
	$Types$DefaultTypeVisitor::init$();
}

$Type* Types$MapVisitor::visit($Type* t) {
	return $cast($Type, $nc(t)->accept(this, nullptr));
}

$Object* Types$MapVisitor::visitType($Type* t, Object$* s) {
	return $of(t);
}

Types$MapVisitor::Types$MapVisitor() {
}

$Class* Types$MapVisitor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Types$MapVisitor, init$, void)},
		{"visit", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $method(Types$MapVisitor, visit, $Type*, $Type*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type;TS;)Lcom/sun/tools/javac/code/Type;", $PUBLIC, $virtualMethod(Types$MapVisitor, visitType, $Object*, $Type*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$MapVisitor", "com.sun.tools.javac.code.Types", "MapVisitor", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Types$DefaultTypeVisitor", "com.sun.tools.javac.code.Types", "DefaultTypeVisitor", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Types$MapVisitor",
		"com.sun.tools.javac.code.Types$DefaultTypeVisitor",
		nullptr,
		nullptr,
		methodInfos$$,
		"<S:Ljava/lang/Object;>Lcom/sun/tools/javac/code/Types$DefaultTypeVisitor<Lcom/sun/tools/javac/code/Type;TS;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$MapVisitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$MapVisitor);
	});
	return class$;
}

$Class* Types$MapVisitor::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com