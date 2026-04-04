#include <com/sun/tools/javac/code/Types$24.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Types$HashCodeVisitor.h>
#include <jcpp.h>

using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Types$HashCodeVisitor = ::com::sun::tools::javac::code::Types$HashCodeVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$24::init$() {
	$Types$HashCodeVisitor::init$();
}

$Integer* Types$24::visitTypeVar($Type$TypeVar* t, $Void* ignored) {
	return $Integer::valueOf($System::identityHashCode(t));
}

$Object* Types$24::visitTypeVar($Type$TypeVar* t, Object$* ignored) {
	return $of(this->visitTypeVar(t, $cast($Void, ignored)));
}

Types$24::Types$24() {
}

$Class* Types$24::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Types$24, init$, void)},
		{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(Types$24, visitTypeVar, $Integer*, $Type$TypeVar*, $Void*)},
		{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$24, visitTypeVar, $Object*, $Type$TypeVar*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Types",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$24", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Types$HashCodeVisitor", "com.sun.tools.javac.code.Types", "HashCodeVisitor", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$24",
		"com.sun.tools.javac.code.Types$HashCodeVisitor",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$24, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$24);
	});
	return class$;
}

$Class* Types$24::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com