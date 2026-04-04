#include <com/sun/tools/javac/code/Types$TypeRelation.h>
#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Types$SimpleVisitor = ::com::sun::tools::javac::code::Types$SimpleVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$TypeRelation::init$() {
	$Types$SimpleVisitor::init$();
}

Types$TypeRelation::Types$TypeRelation() {
}

$Class* Types$TypeRelation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Types$TypeRelation, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$TypeRelation", "com.sun.tools.javac.code.Types", "TypeRelation", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.code.Types$SimpleVisitor", "com.sun.tools.javac.code.Types", "SimpleVisitor", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.code.Types$TypeRelation",
		"com.sun.tools.javac.code.Types$SimpleVisitor",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/sun/tools/javac/code/Types$SimpleVisitor<Ljava/lang/Boolean;Lcom/sun/tools/javac/code/Type;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$TypeRelation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$TypeRelation);
	});
	return class$;
}

$Class* Types$TypeRelation::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com