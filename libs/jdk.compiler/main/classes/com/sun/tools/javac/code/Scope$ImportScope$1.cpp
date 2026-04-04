#include <com/sun/tools/javac/code/Scope$ImportScope$1.h>
#include <com/sun/tools/javac/code/Scope$ImportScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$ImportScope = ::com::sun::tools::javac::code::Scope$ImportScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Scope$ImportScope$1::init$($Scope$ImportScope* this$0) {
	$set(this, this$0, this$0);
}

void Scope$ImportScope$1::symbolAdded($Symbol* sym, $Scope* s) {
	$Assert::error("The scope is sealed."_s);
}

void Scope$ImportScope$1::symbolRemoved($Symbol* sym, $Scope* s) {
	$Assert::error("The scope is sealed."_s);
}

Scope$ImportScope$1::Scope$ImportScope$1() {
}

$Class* Scope$ImportScope$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Scope$ImportScope;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$ImportScope$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Scope$ImportScope;)V", nullptr, 0, $method(Scope$ImportScope$1, init$, void, $Scope$ImportScope*)},
		{"symbolAdded", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, $PUBLIC, $virtualMethod(Scope$ImportScope$1, symbolAdded, void, $Symbol*, $Scope*)},
		{"symbolRemoved", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, $PUBLIC, $virtualMethod(Scope$ImportScope$1, symbolRemoved, void, $Symbol*, $Scope*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Scope$ImportScope",
		"finalizeSingleScope",
		"(Lcom/sun/tools/javac/code/Scope;)Lcom/sun/tools/javac/code/Scope;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Scope$ImportScope", "com.sun.tools.javac.code.Scope", "ImportScope", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Scope$ImportScope$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Scope$ScopeListener", "com.sun.tools.javac.code.Scope", "ScopeListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Scope$ImportScope$1",
		"java.lang.Object",
		"com.sun.tools.javac.code.Scope$ScopeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Scope"
	};
	$loadClass(Scope$ImportScope$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope$ImportScope$1);
	});
	return class$;
}

$Class* Scope$ImportScope$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com