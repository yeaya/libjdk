#include <com/sun/tools/javac/code/Scope$ScopeImpl.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$Entry.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$ScopeImpl$1.h>
#include <com/sun/tools/javac/code/Scope$ScopeImpl$2.h>
#include <com/sun/tools/javac/code/Scope$ScopeListenerList.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collections.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef INITIAL_SIZE
#undef NON_RECURSIVE

using $Scope$EntryArray = $Array<::com::sun::tools::javac::code::Scope$Entry>;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$Entry = ::com::sun::tools::javac::code::Scope$Entry;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$ScopeImpl$1 = ::com::sun::tools::javac::code::Scope$ScopeImpl$1;
using $Scope$ScopeImpl$2 = ::com::sun::tools::javac::code::Scope$ScopeImpl$2;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Name = ::com::sun::tools::javac::util::Name;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Collections = ::java::util::Collections;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Scope$ScopeImpl$$Lambda$lambda$remove$0 : public $Predicate {
	$class(Scope$ScopeImpl$$Lambda$lambda$remove$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Symbol* sym) {
		$set(this, sym, sym);
	}
	virtual bool test(Object$* candidate) override {
		return Scope$ScopeImpl::lambda$remove$0(sym, $cast($Symbol, candidate));
	}
	$Symbol* sym = nullptr;
};
$Class* Scope$ScopeImpl$$Lambda$lambda$remove$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Scope$ScopeImpl$$Lambda$lambda$remove$0, sym)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(Scope$ScopeImpl$$Lambda$lambda$remove$0, init$, void, $Symbol*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Scope$ScopeImpl$$Lambda$lambda$remove$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.code.Scope$ScopeImpl$$Lambda$lambda$remove$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Scope$ScopeImpl$$Lambda$lambda$remove$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope$ScopeImpl$$Lambda$lambda$remove$0);
	});
	return class$;
}
$Class* Scope$ScopeImpl$$Lambda$lambda$remove$0::class$ = nullptr;

class Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1 : public $Iterable {
	$class(Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1, $NO_CLASS_INIT, $Iterable)
public:
	void init$(Scope$ScopeImpl* inst, $Scope$LookupKind* lookupKind, $Predicate* sf) {
		$set(this, inst$, inst);
		$set(this, lookupKind, lookupKind);
		$set(this, sf, sf);
	}
	virtual $Iterator* iterator() override {
		return $nc(inst$)->lambda$getSymbols$1(lookupKind, sf);
	}
	Scope$ScopeImpl* inst$ = nullptr;
	$Scope$LookupKind* lookupKind = nullptr;
	$Predicate* sf = nullptr;
};
$Class* Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1, inst$)},
		{"lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC, $field(Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1, lookupKind)},
		{"sf", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1, sf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Scope$ScopeImpl;Lcom/sun/tools/javac/code/Scope$LookupKind;Ljava/util/function/Predicate;)V", nullptr, $PUBLIC, $method(Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1, init$, void, Scope$ScopeImpl*, $Scope$LookupKind*, $Predicate*)},
		{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC, $virtualMethod(Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1, iterator, $Iterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.code.Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1",
		"java.lang.Object",
		"java.lang.Iterable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1);
	});
	return class$;
}
$Class* Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1::class$ = nullptr;

class Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2 : public $Iterable {
	$class(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2, $NO_CLASS_INIT, $Iterable)
public:
	void init$(Scope$ScopeImpl* inst, $Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
		$set(this, inst$, inst);
		$set(this, name, name);
		$set(this, sf, sf);
		$set(this, lookupKind, lookupKind);
	}
	virtual $Iterator* iterator() override {
		return $nc(inst$)->lambda$getSymbolsByName$2(name, sf, lookupKind);
	}
	Scope$ScopeImpl* inst$ = nullptr;
	$Name* name = nullptr;
	$Predicate* sf = nullptr;
	$Scope$LookupKind* lookupKind = nullptr;
};
$Class* Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2, inst$)},
		{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2, name)},
		{"sf", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2, sf)},
		{"lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC, $field(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2, lookupKind)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Scope$ScopeImpl;Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)V", nullptr, $PUBLIC, $method(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2, init$, void, Scope$ScopeImpl*, $Name*, $Predicate*, $Scope$LookupKind*)},
		{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC, $virtualMethod(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2, iterator, $Iterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.code.Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2",
		"java.lang.Object",
		"java.lang.Iterable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2);
	});
	return class$;
}
$Class* Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2::class$ = nullptr;

$Scope$Entry* Scope$ScopeImpl::sentinel = nullptr;

void Scope$ScopeImpl::init$(Scope$ScopeImpl* next, $Symbol* owner, $Scope$EntryArray* table) {
	$Scope$WriteableScope::init$(owner);
	this->nelems = 0;
	this->removeCount = 0;
	$set(this, next, next);
	$Assert::check(owner != nullptr);
	$set(this, table, table);
	this->hashMask = $nc(table)->length - 1;
}

void Scope$ScopeImpl::init$(Scope$ScopeImpl* next, $Symbol* owner, $Scope$EntryArray* table, int32_t nelems) {
	Scope$ScopeImpl::init$(next, owner, table);
	this->nelems = nelems;
}

void Scope$ScopeImpl::init$($Symbol* owner) {
	Scope$ScopeImpl::init$(nullptr, owner, $$new($Scope$EntryArray, Scope$ScopeImpl::INITIAL_SIZE));
}

$Scope$WriteableScope* Scope$ScopeImpl::dup($Symbol* newOwner) {
	$var(Scope$ScopeImpl, result, $new(Scope$ScopeImpl, this, newOwner, this->table, this->nelems));
	++this->shared;
	return result;
}

$Scope$WriteableScope* Scope$ScopeImpl::dupUnshared($Symbol* newOwner) {
	$useLocalObjectStack();
	if (this->shared > 0) {
		$var($Set, acceptScopes, $Collections::newSetFromMap($$new($IdentityHashMap)));
		$var(Scope$ScopeImpl, c, this);
		while (c != nullptr) {
			$nc(acceptScopes)->add(c);
			$assign(c, c->next);
		}
		int32_t n = 0;
		$var($Scope$EntryArray, oldTable, this->table);
		$var($Scope$EntryArray, newTable, $new($Scope$EntryArray, $nc(this->table)->length));
		for (int32_t i = 0; i < $nc(oldTable)->length; ++i) {
			$var($Scope$Entry, e, oldTable->get(i));
			while (e != nullptr && e != Scope$ScopeImpl::sentinel && !$nc(acceptScopes)->contains(e->scope)) {
				$assign(e, e->shadowed);
			}
			if (e != nullptr) {
				++n;
				newTable->set(i, e);
			}
		}
		return $new(Scope$ScopeImpl, this, newOwner, newTable, n);
	} else {
		return $new(Scope$ScopeImpl, this, newOwner, $$cast($Scope$EntryArray, $nc(this->table)->clone()), this->nelems);
	}
}

$Scope$WriteableScope* Scope$ScopeImpl::leave() {
	$useLocalObjectStack();
	$Assert::check(this->shared == 0);
	if (this->table != $nc(this->next)->table) {
		return this->next;
	}
	while (this->elems != nullptr) {
		int32_t hash = getIndex($nc(this->elems->sym)->name);
		$var($Scope$Entry, e, $nc(this->table)->get(hash));
		$Assert::check(e == this->elems, $nc(this->elems)->sym);
		$nc(this->table)->set(hash, $nc(this->elems)->shadowed);
		$set(this, elems, this->elems->nextSibling);
	}
	$Assert::check($nc(this->next)->shared > 0);
	--$nc(this->next)->shared;
	this->next->nelems = this->nelems;
	return this->next;
}

void Scope$ScopeImpl::dble() {
	$useLocalObjectStack();
	$Assert::check(this->shared == 0);
	$var($Scope$EntryArray, oldtable, this->table);
	$var($Scope$EntryArray, newtable, $new($Scope$EntryArray, $nc(oldtable)->length * 2));
	{
		$var(Scope$ScopeImpl, s, this);
		for (; s != nullptr; $assign(s, s->next)) {
			if (s->table == oldtable) {
				$Assert::check(s == this || s->shared != 0);
				$set(s, table, newtable);
				s->hashMask = newtable->length - 1;
			}
		}
	}
	int32_t n = 0;
	for (int32_t i = oldtable->length; --i >= 0;) {
		$var($Scope$Entry, e, oldtable->get(i));
		if (e != nullptr && e != Scope$ScopeImpl::sentinel) {
			$nc(this->table)->set(getIndex($nc(e->sym)->name), e);
			++n;
		}
	}
	this->nelems = n;
}

void Scope$ScopeImpl::enter($Symbol* sym) {
	$useLocalObjectStack();
	$Assert::check(this->shared == 0);
	if (this->nelems * 3 >= this->hashMask * 2) {
		dble();
	}
	int32_t hash = getIndex($nc(sym)->name);
	$var($Scope$Entry, old, $nc(this->table)->get(hash));
	if (old == nullptr) {
		$assign(old, Scope$ScopeImpl::sentinel);
		++this->nelems;
	}
	$var($Scope$Entry, e, $new($Scope$Entry, sym, old, this->elems, this));
	this->table->set(hash, e);
	$set(this, elems, e);
	$nc(this->listeners)->symbolAdded(sym, this);
}

void Scope$ScopeImpl::remove($Symbol* sym) {
	$useLocalObjectStack();
	$Assert::check(this->shared == 0);
	$var($Scope$Entry, e, lookup($nc(sym)->name, $$new(Scope$ScopeImpl$$Lambda$lambda$remove$0, sym)));
	if ($nc(e)->scope == nullptr) {
		return;
	}
	int32_t i = getIndex(sym->name);
	$var($Scope$Entry, te, $nc(this->table)->get(i));
	if (te == e) {
		this->table->set(i, e->shadowed);
	} else {
		while (true) {
			if ($nc(te)->shadowed == e) {
				$set(te, shadowed, e->shadowed);
				break;
			}
			$assign(te, te->shadowed);
		}
	}
	if (this->elems == e) {
		$set(this, elems, e->nextSibling);
		if (this->elems != nullptr) {
			$set(this->elems, prevSibling, nullptr);
		}
	} else {
		$Assert::check(e->prevSibling != nullptr, e->sym);
		$set($nc(e->prevSibling), nextSibling, e->nextSibling);
		if (e->nextSibling != nullptr) {
			$set(e->nextSibling, prevSibling, e->prevSibling);
		}
	}
	++this->removeCount;
	$nc(this->listeners)->symbolRemoved(sym, this);
}

void Scope$ScopeImpl::enterIfAbsent($Symbol* sym) {
	$Assert::check(this->shared == 0);
	$var($Scope$Entry, e, lookup($nc(sym)->name));
	while ($nc(e)->scope == this && $nc(e->sym)->kind != sym->kind) {
		$assign(e, e->next());
	}
	if ($nc(e)->scope != this) {
		enter(sym);
	}
}

bool Scope$ScopeImpl::includes($Symbol* c) {
	$var($Scope$Entry, e, lookup($nc(c)->name));
	for (; $nc(e)->scope == this; $assign(e, e->next())) {
		if (e->sym == c) {
			return true;
		}
	}
	return false;
}

$Scope$Entry* Scope$ScopeImpl::lookup($Name* name) {
	$init($Scope);
	return lookup(name, $Scope::noFilter);
}

$Scope$Entry* Scope$ScopeImpl::lookup($Name* name, $Predicate* sf) {
	$var($Scope$Entry, e, $nc(this->table)->get(getIndex(name)));
	if (e == nullptr || e == Scope$ScopeImpl::sentinel) {
		return Scope$ScopeImpl::sentinel;
	}
	while ($nc(e)->scope != nullptr && ($nc(e->sym)->name != name || (sf != nullptr && !sf->test(e->sym)))) {
		$assign(e, e->shadowed);
	}
	return e;
}

$Symbol* Scope$ScopeImpl::findFirst($Name* name, $Predicate* sf) {
	return $nc($(lookup(name, sf)))->sym;
}

int32_t Scope$ScopeImpl::getIndex($Name* name) {
	$useLocalObjectStack();
	int32_t h = $nc($of(name))->hashCode();
	int32_t i = h & this->hashMask;
	int32_t x = this->hashMask - ((h + (h >> 16)) << 1);
	int32_t d = -1;
	for (;;) {
		$var($Scope$Entry, e, $nc(this->table)->get(i));
		if (e == nullptr) {
			return d >= 0 ? d : i;
		}
		if (e == Scope$ScopeImpl::sentinel) {
			if (d < 0) {
				d = i;
			}
		} else if ($nc($nc(e)->sym)->name == name) {
			return i;
		}
		i = (i + x) & this->hashMask;
	}
}

bool Scope$ScopeImpl::anyMatch($Predicate* sf) {
	$useLocalObjectStack();
	$init($Scope$LookupKind);
	return $$nc($$nc(getSymbols(sf, $Scope$LookupKind::NON_RECURSIVE))->iterator())->hasNext();
}

$Iterable* Scope$ScopeImpl::getSymbols($Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $new(Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1, this, lookupKind, sf);
}

$Iterable* Scope$ScopeImpl::getSymbolsByName($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $new(Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2, this, name, sf, lookupKind);
}

$Scope* Scope$ScopeImpl::getOrigin($Symbol* s) {
	$var($Scope$Entry, e, lookup($nc(s)->name));
	for (; $nc(e)->scope != nullptr; $assign(e, e->next())) {
		if (e->sym == s) {
			return this;
		}
	}
	return nullptr;
}

bool Scope$ScopeImpl::isStaticallyImported($Symbol* s) {
	return false;
}

$String* Scope$ScopeImpl::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, result, $new($StringBuilder));
	result->append("Scope["_s);
	{
		$var(Scope$ScopeImpl, s, this);
		for (; s != nullptr; $assign(s, s->next)) {
			if (s != this) {
				result->append(" | "_s);
			}
			{
				$var($Scope$Entry, e, s->elems);
				for (; e != nullptr; $assign(e, e->nextSibling)) {
					if (e != s->elems) {
						result->append(", "_s);
					}
					result->append(e->sym);
				}
			}
		}
	}
	result->append("]"_s);
	return result->toString();
}

$Iterator* Scope$ScopeImpl::lambda$getSymbolsByName$2($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $new($Scope$ScopeImpl$2, this, name, sf, lookupKind);
}

$Iterator* Scope$ScopeImpl::lambda$getSymbols$1($Scope$LookupKind* lookupKind, $Predicate* sf) {
	return $new($Scope$ScopeImpl$1, this, lookupKind, sf);
}

bool Scope$ScopeImpl::lambda$remove$0($Symbol* sym, $Symbol* candidate) {
	$init(Scope$ScopeImpl);
	return candidate == sym;
}

void Scope$ScopeImpl::clinit$($Class* clazz) {
	$assignStatic(Scope$ScopeImpl::sentinel, $new($Scope$Entry, nullptr, nullptr, nullptr, nullptr));
}

Scope$ScopeImpl::Scope$ScopeImpl() {
}

$Class* Scope$ScopeImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.code.Scope$ScopeImpl$$Lambda$lambda$remove$0")) {
			return Scope$ScopeImpl$$Lambda$lambda$remove$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.code.Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1")) {
			return Scope$ScopeImpl$$Lambda$lambda$getSymbols$1$1::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.code.Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2")) {
			return Scope$ScopeImpl$$Lambda$lambda$getSymbolsByName$2$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"shared", "I", nullptr, $PRIVATE, $field(Scope$ScopeImpl, shared)},
		{"next", "Lcom/sun/tools/javac/code/Scope$ScopeImpl;", nullptr, $PUBLIC, $field(Scope$ScopeImpl, next)},
		{"table", "[Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, 0, $field(Scope$ScopeImpl, table)},
		{"hashMask", "I", nullptr, 0, $field(Scope$ScopeImpl, hashMask)},
		{"elems", "Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, $PUBLIC, $field(Scope$ScopeImpl, elems)},
		{"nelems", "I", nullptr, 0, $field(Scope$ScopeImpl, nelems)},
		{"removeCount", "I", nullptr, 0, $field(Scope$ScopeImpl, removeCount)},
		{"sentinel", "Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Scope$ScopeImpl, sentinel)},
		{"INITIAL_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Scope$ScopeImpl, INITIAL_SIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Scope$ScopeImpl;Lcom/sun/tools/javac/code/Symbol;[Lcom/sun/tools/javac/code/Scope$Entry;)V", nullptr, $PRIVATE, $method(Scope$ScopeImpl, init$, void, Scope$ScopeImpl*, $Symbol*, $Scope$EntryArray*)},
		{"<init>", "(Lcom/sun/tools/javac/code/Scope$ScopeImpl;Lcom/sun/tools/javac/code/Symbol;[Lcom/sun/tools/javac/code/Scope$Entry;I)V", nullptr, $PRIVATE, $method(Scope$ScopeImpl, init$, void, Scope$ScopeImpl*, $Symbol*, $Scope$EntryArray*, int32_t)},
		{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(Scope$ScopeImpl, init$, void, $Symbol*)},
		{"anyMatch", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Z", $PUBLIC, $virtualMethod(Scope$ScopeImpl, anyMatch, bool, $Predicate*)},
		{"dble", "()V", nullptr, $PRIVATE, $method(Scope$ScopeImpl, dble, void)},
		{"dup", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC, $virtualMethod(Scope$ScopeImpl, dup, $Scope$WriteableScope*, $Symbol*)},
		{"dupUnshared", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC, $virtualMethod(Scope$ScopeImpl, dupUnshared, $Scope$WriteableScope*, $Symbol*)},
		{"enter", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $virtualMethod(Scope$ScopeImpl, enter, void, $Symbol*)},
		{"enterIfAbsent", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $virtualMethod(Scope$ScopeImpl, enterIfAbsent, void, $Symbol*)},
		{"findFirst", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Lcom/sun/tools/javac/code/Symbol;", $PUBLIC, $virtualMethod(Scope$ScopeImpl, findFirst, $Symbol*, $Name*, $Predicate*)},
		{"getIndex", "(Lcom/sun/tools/javac/util/Name;)I", nullptr, 0, $virtualMethod(Scope$ScopeImpl, getIndex, int32_t, $Name*)},
		{"getOrigin", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope;", nullptr, $PUBLIC, $virtualMethod(Scope$ScopeImpl, getOrigin, $Scope*, $Symbol*)},
		{"getSymbols", "(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC, $virtualMethod(Scope$ScopeImpl, getSymbols, $Iterable*, $Predicate*, $Scope$LookupKind*)},
		{"getSymbolsByName", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC, $virtualMethod(Scope$ScopeImpl, getSymbolsByName, $Iterable*, $Name*, $Predicate*, $Scope$LookupKind*)},
		{"includes", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC, $virtualMethod(Scope$ScopeImpl, includes, bool, $Symbol*)},
		{"isStaticallyImported", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC, $virtualMethod(Scope$ScopeImpl, isStaticallyImported, bool, $Symbol*)},
		{"lambda$getSymbols$1", "(Lcom/sun/tools/javac/code/Scope$LookupKind;Ljava/util/function/Predicate;)Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(Scope$ScopeImpl, lambda$getSymbols$1, $Iterator*, $Scope$LookupKind*, $Predicate*)},
		{"lambda$getSymbolsByName$2", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(Scope$ScopeImpl, lambda$getSymbolsByName$2, $Iterator*, $Name*, $Predicate*, $Scope$LookupKind*)},
		{"lambda$remove$0", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Scope$ScopeImpl, lambda$remove$0, bool, $Symbol*, $Symbol*)},
		{"leave", "()Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC, $virtualMethod(Scope$ScopeImpl, leave, $Scope$WriteableScope*)},
		{"lookup", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, $PROTECTED, $virtualMethod(Scope$ScopeImpl, lookup, $Scope$Entry*, $Name*)},
		{"lookup", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;)Lcom/sun/tools/javac/code/Scope$Entry;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Lcom/sun/tools/javac/code/Scope$Entry;", $PROTECTED, $virtualMethod(Scope$ScopeImpl, lookup, $Scope$Entry*, $Name*, $Predicate*)},
		{"remove", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $virtualMethod(Scope$ScopeImpl, remove, void, $Symbol*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Scope$ScopeImpl, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Scope$ScopeImpl", "com.sun.tools.javac.code.Scope", "ScopeImpl", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.code.Scope$WriteableScope", "com.sun.tools.javac.code.Scope", "WriteableScope", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.code.Scope$ScopeImpl$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Scope$ScopeImpl$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Scope$ScopeImpl",
		"com.sun.tools.javac.code.Scope$WriteableScope",
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
	$loadClass(Scope$ScopeImpl, name, initialize, &classInfo$$, Scope$ScopeImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Scope$ScopeImpl);
	});
	return class$;
}

$Class* Scope$ScopeImpl::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com