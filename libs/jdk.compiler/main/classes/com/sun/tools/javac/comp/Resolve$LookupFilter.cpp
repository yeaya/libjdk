#include <com/sun/tools/javac/comp/Resolve$LookupFilter.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <jcpp.h>

#undef MTH

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Resolve$LookupFilter::init$($Resolve* this$0, bool abstractOk) {
	$set(this, this$0, this$0);
	this->abstractOk = abstractOk;
}

bool Resolve$LookupFilter::test($Symbol* s) {
	int64_t flags = $nc(s)->flags();
	$init($Kinds$Kind);
	return s->kind == $Kinds$Kind::MTH && (flags & 0x1000) == 0 && (this->abstractOk || (flags & (int64_t)0x0000080000000000) != 0 || (flags & 0x0400) == 0);
}

bool Resolve$LookupFilter::test(Object$* s) {
	return this->test($cast($Symbol, s));
}

Resolve$LookupFilter::Resolve$LookupFilter() {
}

$Class* Resolve$LookupFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$LookupFilter, this$0)},
		{"abstractOk", "Z", nullptr, 0, $field(Resolve$LookupFilter, abstractOk)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Z)V", nullptr, 0, $method(Resolve$LookupFilter, init$, void, $Resolve*, bool)},
		{"test", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC, $virtualMethod(Resolve$LookupFilter, test, bool, $Symbol*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Resolve$LookupFilter, test, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$LookupFilter", "com.sun.tools.javac.comp.Resolve", "LookupFilter", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$LookupFilter",
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
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$LookupFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$LookupFilter);
	});
	return class$;
}

$Class* Resolve$LookupFilter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com