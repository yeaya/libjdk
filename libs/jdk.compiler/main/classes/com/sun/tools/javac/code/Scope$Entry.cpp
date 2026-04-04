#include <com/sun/tools/javac/code/Scope$Entry.h>
#include <com/sun/tools/javac/code/Scope$ScopeImpl.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Scope$ScopeImpl = ::com::sun::tools::javac::code::Scope$ScopeImpl;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Scope$Entry::init$($Symbol* sym, Scope$Entry* shadowed, Scope$Entry* nextSibling, $Scope$ScopeImpl* scope) {
	$set(this, sym, sym);
	$set(this, shadowed, shadowed);
	$set(this, nextSibling, nextSibling);
	$set(this, scope, scope);
	if (nextSibling != nullptr) {
		$set(nextSibling, prevSibling, this);
	}
}

Scope$Entry* Scope$Entry::next() {
	return this->shadowed;
}

Scope$Entry* Scope$Entry::next($Predicate* sf) {
	if ($nc(this->shadowed)->sym == nullptr || sf == nullptr || sf->test(this->shadowed->sym)) {
		return this->shadowed;
	} else {
		return $nc(this->shadowed)->next(sf);
	}
}

Scope$Entry::Scope$Entry() {
}

$Class* Scope$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Scope$Entry, sym)},
		{"shadowed", "Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, $PRIVATE, $field(Scope$Entry, shadowed)},
		{"nextSibling", "Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, $PUBLIC, $field(Scope$Entry, nextSibling)},
		{"prevSibling", "Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, $PUBLIC, $field(Scope$Entry, prevSibling)},
		{"scope", "Lcom/sun/tools/javac/code/Scope$ScopeImpl;", nullptr, $PUBLIC, $field(Scope$Entry, scope)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope$Entry;Lcom/sun/tools/javac/code/Scope$Entry;Lcom/sun/tools/javac/code/Scope$ScopeImpl;)V", nullptr, $PUBLIC, $method(Scope$Entry, init$, void, $Symbol*, Scope$Entry*, Scope$Entry*, $Scope$ScopeImpl*)},
		{"next", "()Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, $PUBLIC, $virtualMethod(Scope$Entry, next, Scope$Entry*)},
		{"next", "(Ljava/util/function/Predicate;)Lcom/sun/tools/javac/code/Scope$Entry;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Lcom/sun/tools/javac/code/Scope$Entry;", $PUBLIC, $virtualMethod(Scope$Entry, next, Scope$Entry*, $Predicate*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Scope$Entry", "com.sun.tools.javac.code.Scope", "Entry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Scope$Entry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Scope"
	};
	$loadClass(Scope$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope$Entry);
	});
	return class$;
}

$Class* Scope$Entry::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com