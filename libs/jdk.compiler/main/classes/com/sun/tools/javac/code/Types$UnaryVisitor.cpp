#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Types$SimpleVisitor = ::com::sun::tools::javac::code::Types$SimpleVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$UnaryVisitor::init$() {
	$Types$SimpleVisitor::init$();
}

$Object* Types$UnaryVisitor::visit($Type* t) {
	return $nc(t)->accept(this, nullptr);
}

Types$UnaryVisitor::Types$UnaryVisitor() {
}

$Class* Types$UnaryVisitor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Types$UnaryVisitor, init$, void)},
		{"visit", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type;)TR;", $PUBLIC | $FINAL, $method(Types$UnaryVisitor, visit, $Object*, $Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.code.Types$SimpleVisitor", "com.sun.tools.javac.code.Types", "SimpleVisitor", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.code.Types$UnaryVisitor",
		"com.sun.tools.javac.code.Types$SimpleVisitor",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;>Lcom/sun/tools/javac/code/Types$SimpleVisitor<TR;Ljava/lang/Void;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$UnaryVisitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$UnaryVisitor);
	});
	return class$;
}

$Class* Types$UnaryVisitor::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com