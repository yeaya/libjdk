#include <com/sun/tools/javac/model/FilteredMemberList.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <java/io/Serializable.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractList.h>
#include <java/util/Iterator.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef NON_RECURSIVE

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractList = ::java::util::AbstractList;
using $Iterator = ::java::util::Iterator;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

class FilteredMemberList$$Lambda$lambda$iterator$0 : public $Predicate {
	$class(FilteredMemberList$$Lambda$lambda$iterator$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* t) override {
		return FilteredMemberList::lambda$iterator$0($cast($Symbol, t));
	}
};
$Class* FilteredMemberList$$Lambda$lambda$iterator$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FilteredMemberList$$Lambda$lambda$iterator$0, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(FilteredMemberList$$Lambda$lambda$iterator$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.model.FilteredMemberList$$Lambda$lambda$iterator$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(FilteredMemberList$$Lambda$lambda$iterator$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilteredMemberList$$Lambda$lambda$iterator$0);
	});
	return class$;
}
$Class* FilteredMemberList$$Lambda$lambda$iterator$0::class$ = nullptr;

void FilteredMemberList::init$($Scope* scope) {
	$AbstractList::init$();
	$set(this, scope, scope);
}

int32_t FilteredMemberList::size() {
	$useLocalObjectStack();
	int32_t cnt = 0;
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $$nc($nc(this->scope)->getSymbols($Scope$LookupKind::NON_RECURSIVE))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			if (!unwanted(sym)) {
				++cnt;
			}
		}
	}
	return cnt;
}

$Object* FilteredMemberList::get(int32_t index) {
	$useLocalObjectStack();
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $$nc($nc(this->scope)->getSymbols($Scope$LookupKind::NON_RECURSIVE))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			if (!unwanted(sym) && (index-- == 0)) {
				return $of(sym);
			}
		}
	}
	$throwNew($IndexOutOfBoundsException);
}

$Iterator* FilteredMemberList::iterator() {
	$useLocalObjectStack();
	$init($Scope$LookupKind);
	return $$nc($nc(this->scope)->getSymbols($$new(FilteredMemberList$$Lambda$lambda$iterator$0), $Scope$LookupKind::NON_RECURSIVE))->iterator();
}

bool FilteredMemberList::unwanted($Symbol* s) {
	$init(FilteredMemberList);
	return s == nullptr || (s->flags() & 0x1000) != 0;
}

bool FilteredMemberList::lambda$iterator$0($Symbol* t) {
	$init(FilteredMemberList);
	return !unwanted(t);
}

FilteredMemberList::FilteredMemberList() {
}

$Class* FilteredMemberList::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.model.FilteredMemberList$$Lambda$lambda$iterator$0")) {
			return FilteredMemberList$$Lambda$lambda$iterator$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"scope", "Lcom/sun/tools/javac/code/Scope;", nullptr, $PRIVATE | $FINAL, $field(FilteredMemberList, scope)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Scope;)V", nullptr, $PUBLIC, $method(FilteredMemberList, init$, void, $Scope*)},
		{"get", "(I)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $virtualMethod(FilteredMemberList, get, $Object*, int32_t)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC, $virtualMethod(FilteredMemberList, iterator, $Iterator*)},
		{"lambda$iterator$0", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FilteredMemberList, lambda$iterator$0, bool, $Symbol*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(FilteredMemberList, size, int32_t)},
		{"unwanted", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(FilteredMemberList, unwanted, bool, $Symbol*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.model.FilteredMemberList",
		"java.util.AbstractList",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/AbstractList<Lcom/sun/tools/javac/code/Symbol;>;"
	};
	$loadClass(FilteredMemberList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FilteredMemberList));
	});
	return class$;
}

$Class* FilteredMemberList::class$ = nullptr;

				} // model
			} // javac
		} // tools
	} // sun
} // com