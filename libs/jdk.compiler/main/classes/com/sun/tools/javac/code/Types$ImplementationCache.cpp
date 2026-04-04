#include <com/sun/tools/javac/code/Types$ImplementationCache.h>
#include <com/sun/tools/javac/code/Scope$CompoundScope.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$ImplementationCache$Entry.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/Iterable.h>
#include <java/lang/ref/SoftReference.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef CLASS
#undef TYPEVAR

using $Scope$CompoundScope = ::com::sun::tools::javac::code::Scope$CompoundScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$ImplementationCache$Entry = ::com::sun::tools::javac::code::Types$ImplementationCache$Entry;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$ImplementationCache::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$set(this, _map, $new($WeakHashMap));
}

$Symbol$MethodSymbol* Types$ImplementationCache::get($Symbol$MethodSymbol* ms, $Symbol$TypeSymbol* origin, bool checkResult, $Predicate* implFilter) {
	$useLocalObjectStack();
	$var($SoftReference, ref_cache, $cast($SoftReference, $nc(this->_map)->get(ms)));
	$var($Map, cache, ref_cache != nullptr ? $cast($Map, ref_cache->get()) : ($Map*)nullptr);
	if (cache == nullptr) {
		$assign(cache, $new($HashMap));
		$nc(this->_map)->put(ms, $$new($SoftReference, cache));
	}
	$var($Types$ImplementationCache$Entry, e, $cast($Types$ImplementationCache$Entry, $nc(cache)->get(origin)));
	$var($Scope$CompoundScope, members, this->this$0->membersClosure($nc(origin)->type, true));
	if (e == nullptr || !e->matches(implFilter, checkResult, $nc(members)->getMark())) {
		$var($Symbol$MethodSymbol, impl, implementationInternal(ms, origin, checkResult, implFilter));
		cache->put(origin, $$new($Types$ImplementationCache$Entry, this, impl, implFilter, checkResult, $nc(members)->getMark()));
		return impl;
	} else {
		return e->cachedImpl;
	}
}

$Symbol$MethodSymbol* Types$ImplementationCache::implementationInternal($Symbol$MethodSymbol* ms, $Symbol$TypeSymbol* origin, bool checkResult, $Predicate* implFilter) {
	$useLocalObjectStack();
	$var($Type, t, $nc(origin)->type);
	for (;; $assign(t, this->this$0->supertype(t))) {
		$init($TypeTag);
		bool var$0 = $nc(t)->hasTag($TypeTag::CLASS);
		if (!(var$0 || t->hasTag($TypeTag::TYPEVAR))) {
			break;
		}
		{
			$assign(t, this->this$0->skipTypeVars(t, false));
			$var($Symbol$TypeSymbol, c, $nc(t)->tsym);
			$var($Symbol, bestSoFar, nullptr);
			{
				$var($Iterator, i$, $$nc($$nc($nc(c)->members())->getSymbolsByName($nc(ms)->name, implFilter))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol, sym, $cast($Symbol, i$->next()));
					if (sym != nullptr && sym->overrides(ms, origin, this->this$0, checkResult)) {
						$assign(bestSoFar, sym);
						if ((sym->flags() & 0x0400) == 0) {
							break;
						}
					}
				}
			}
			if (bestSoFar != nullptr) {
				return $cast($Symbol$MethodSymbol, bestSoFar);
			}
		}
	}
	return nullptr;
}

Types$ImplementationCache::Types$ImplementationCache() {
}

$Class* Types$ImplementationCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$ImplementationCache, this$0)},
		{"_map", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/lang/ref/SoftReference<Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Types$ImplementationCache$Entry;>;>;>;", $PRIVATE, $field(Types$ImplementationCache, _map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(Types$ImplementationCache, init$, void, $Types*)},
		{"get", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;ZLjava/util/function/Predicate;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;ZLjava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", 0, $virtualMethod(Types$ImplementationCache, get, $Symbol$MethodSymbol*, $Symbol$MethodSymbol*, $Symbol$TypeSymbol*, bool, $Predicate*)},
		{"implementationInternal", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;ZLjava/util/function/Predicate;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;ZLjava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", $PRIVATE, $method(Types$ImplementationCache, implementationInternal, $Symbol$MethodSymbol*, $Symbol$MethodSymbol*, $Symbol$TypeSymbol*, bool, $Predicate*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$ImplementationCache", "com.sun.tools.javac.code.Types", "ImplementationCache", 0},
		{"com.sun.tools.javac.code.Types$ImplementationCache$Entry", "com.sun.tools.javac.code.Types$ImplementationCache", "Entry", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$ImplementationCache",
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
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$ImplementationCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$ImplementationCache);
	});
	return class$;
}

$Class* Types$ImplementationCache::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com