#include <com/sun/tools/javac/code/Types$DescriptorFilter.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

#undef MTH

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
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

void Types$DescriptorFilter::init$($Types* this$0, $Symbol$TypeSymbol* origin) {
	$set(this, this$0, this$0);
	$set(this, origin, origin);
}

bool Types$DescriptorFilter::test($Symbol* sym) {
	$init($Kinds$Kind);
	bool var$1 = $nc(sym)->kind == $Kinds$Kind::MTH && (sym->flags() & (0x0400 | (int64_t)0x0000080000000000)) == 0x0400;
	bool var$0 = var$1 && !this->this$0->overridesObjectMethod(this->origin, sym);
	return var$0 && ($nc($cast($Symbol$MethodSymbol, $nc($(this->this$0->interfaceCandidates($nc(this->origin)->type, $cast($Symbol$MethodSymbol, sym))))->head))->flags() & (int64_t)0x0000080000000000) == 0;
}

bool Types$DescriptorFilter::test(Object$* sym) {
	return this->test($cast($Symbol, sym));
}

Types$DescriptorFilter::Types$DescriptorFilter() {
}

$Class* Types$DescriptorFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$DescriptorFilter, this$0)},
		{"origin", "Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, 0, $field(Types$DescriptorFilter, origin)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0, $method(Types$DescriptorFilter, init$, void, $Types*, $Symbol$TypeSymbol*)},
		{"test", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC, $virtualMethod(Types$DescriptorFilter, test, bool, $Symbol*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$DescriptorFilter, test, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$DescriptorFilter", "com.sun.tools.javac.code.Types", "DescriptorFilter", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$DescriptorFilter",
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
	$loadClass(Types$DescriptorFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$DescriptorFilter);
	});
	return class$;
}

$Class* Types$DescriptorFilter::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com