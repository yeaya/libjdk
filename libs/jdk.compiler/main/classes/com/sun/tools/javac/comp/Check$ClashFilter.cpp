#include <com/sun/tools/javac/comp/Check$ClashFilter.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <jcpp.h>

#undef MTH

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Check = ::com::sun::tools::javac::comp::Check;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Check$ClashFilter::init$($Check* this$0, $Type* site) {
	$set(this, this$0, this$0);
	$set(this, site, site);
}

bool Check$ClashFilter::shouldSkip($Symbol* s) {
	return ($nc(s)->flags() & (int64_t)0x0000040000000000) != 0 && $equals(s->owner, $nc(this->site)->tsym);
}

bool Check$ClashFilter::test($Symbol* s) {
	$init($Kinds$Kind);
	bool var$2 = $nc(s)->kind == $Kinds$Kind::MTH && (s->flags() & 0x1000) == 0;
	bool var$1 = var$2 && !shouldSkip(s);
	bool var$0 = var$1 && s->isInheritedIn($nc(this->site)->tsym, this->this$0->types);
	return var$0 && !s->isConstructor();
}

bool Check$ClashFilter::test(Object$* s) {
	return this->test($cast($Symbol, s));
}

Check$ClashFilter::Check$ClashFilter() {
}

$Class* Check$ClashFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Check;", nullptr, $FINAL | $SYNTHETIC, $field(Check$ClashFilter, this$0)},
		{"site", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Check$ClashFilter, site)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(Check$ClashFilter, init$, void, $Check*, $Type*)},
		{"shouldSkip", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, 0, $virtualMethod(Check$ClashFilter, shouldSkip, bool, $Symbol*)},
		{"test", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC, $virtualMethod(Check$ClashFilter, test, bool, $Symbol*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Check$ClashFilter, test, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Check$ClashFilter", "com.sun.tools.javac.comp.Check", "ClashFilter", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Check$ClashFilter",
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
		"com.sun.tools.javac.comp.Check"
	};
	$loadClass(Check$ClashFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$ClashFilter);
	});
	return class$;
}

$Class* Check$ClashFilter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com