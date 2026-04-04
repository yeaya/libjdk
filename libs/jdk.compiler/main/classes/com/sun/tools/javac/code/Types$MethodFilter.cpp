#include <com/sun/tools/javac/code/Types$MethodFilter.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef MTH

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$MethodFilter::init$($Types* this$0, $Symbol* msym, $Type* site) {
	$set(this, this$0, this$0);
	$set(this, msym, msym);
	$set(this, site, site);
}

bool Types$MethodFilter::test($Symbol* s) {
	$useLocalObjectStack();
	$init($Kinds$Kind);
	bool var$1 = $nc(s)->kind == $Kinds$Kind::MTH && s->name == $nc(this->msym)->name && (s->flags() & 0x1000) == 0;
	bool var$0 = var$1 && s->isInheritedIn($nc(this->site)->tsym, this->this$0);
	if (var$0) {
		$var($Type, var$2, this->this$0->memberType(this->site, s));
		var$0 = this->this$0->overrideEquivalent(var$2, $(this->this$0->memberType(this->site, this->msym)));
	}
	return var$0;
}

bool Types$MethodFilter::test(Object$* s) {
	return this->test($cast($Symbol, s));
}

Types$MethodFilter::Types$MethodFilter() {
}

$Class* Types$MethodFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$MethodFilter, this$0)},
		{"msym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(Types$MethodFilter, msym)},
		{"site", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Types$MethodFilter, site)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(Types$MethodFilter, init$, void, $Types*, $Symbol*, $Type*)},
		{"test", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC, $virtualMethod(Types$MethodFilter, test, bool, $Symbol*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$MethodFilter, test, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$MethodFilter", "com.sun.tools.javac.code.Types", "MethodFilter", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$MethodFilter",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$MethodFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$MethodFilter);
	});
	return class$;
}

$Class* Types$MethodFilter::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com