#include <com/sun/tools/javac/code/Scope$CompoundScope.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$ScopeListenerList.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/Iterators.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Iterator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Iterators = ::com::sun::tools::javac::util::Iterators;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Iterator = ::java::util::Iterator;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Scope$CompoundScope$$Lambda$lambda$getSymbols$1 : public $Iterable {
	$class(Scope$CompoundScope$$Lambda$lambda$getSymbols$1, $NO_CLASS_INIT, $Iterable)
public:
	void init$(Scope$CompoundScope* inst, $Predicate* sf, $Scope$LookupKind* lookupKind) {
		$set(this, inst$, inst);
		$set(this, sf, sf);
		$set(this, lookupKind, lookupKind);
	}
	virtual $Iterator* iterator() override {
		 return $nc(inst$)->lambda$getSymbols$1(sf, lookupKind);
	}
	Scope$CompoundScope* inst$ = nullptr;
	$Predicate* sf = nullptr;
	$Scope$LookupKind* lookupKind = nullptr;
};
$Class* Scope$CompoundScope$$Lambda$lambda$getSymbols$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbols$1, inst$)},
		{"sf", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbols$1, sf)},
		{"lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbols$1, lookupKind)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Scope$CompoundScope;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)V", nullptr, $PUBLIC, $method(Scope$CompoundScope$$Lambda$lambda$getSymbols$1, init$, void, Scope$CompoundScope*, $Predicate*, $Scope$LookupKind*)},
		{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC, $virtualMethod(Scope$CompoundScope$$Lambda$lambda$getSymbols$1, iterator, $Iterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.code.Scope$CompoundScope$$Lambda$lambda$getSymbols$1",
		"java.lang.Object",
		"java.lang.Iterable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Scope$CompoundScope$$Lambda$lambda$getSymbols$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope$CompoundScope$$Lambda$lambda$getSymbols$1);
	});
	return class$;
}
$Class* Scope$CompoundScope$$Lambda$lambda$getSymbols$1::class$ = nullptr;

class Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1 : public $Iterable {
	$class(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1, $NO_CLASS_INIT, $Iterable)
public:
	void init$(Scope$CompoundScope* inst, $Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
		$set(this, inst$, inst);
		$set(this, name, name);
		$set(this, sf, sf);
		$set(this, lookupKind, lookupKind);
	}
	virtual $Iterator* iterator() override {
		 return $nc(inst$)->lambda$getSymbolsByName$3(name, sf, lookupKind);
	}
	Scope$CompoundScope* inst$ = nullptr;
	$Name* name = nullptr;
	$Predicate* sf = nullptr;
	$Scope$LookupKind* lookupKind = nullptr;
};
$Class* Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1, inst$)},
		{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1, name)},
		{"sf", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1, sf)},
		{"lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1, lookupKind)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Scope$CompoundScope;Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)V", nullptr, $PUBLIC, $method(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1, init$, void, Scope$CompoundScope*, $Name*, $Predicate*, $Scope$LookupKind*)},
		{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC, $virtualMethod(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1, iterator, $Iterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.code.Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1",
		"java.lang.Object",
		"java.lang.Iterable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1);
	});
	return class$;
}
$Class* Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1::class$ = nullptr;

class Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2 : public $Function {
	$class(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
		$set(this, name, name);
		$set(this, sf, sf);
		$set(this, lookupKind, lookupKind);
	}
	virtual $Object* apply(Object$* scope) override {
		 return Scope$CompoundScope::lambda$getSymbolsByName$2(name, sf, lookupKind, $cast($Scope, scope));
	}
	$Name* name = nullptr;
	$Predicate* sf = nullptr;
	$Scope$LookupKind* lookupKind = nullptr;
};
$Class* Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2, name)},
		{"sf", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2, sf)},
		{"lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2, lookupKind)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)V", nullptr, $PUBLIC, $method(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2, init$, void, $Name*, $Predicate*, $Scope$LookupKind*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.code.Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2);
	});
	return class$;
}
$Class* Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2::class$ = nullptr;

class Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3 : public $Function {
	$class(Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3, $NO_CLASS_INIT, $Function)
public:
	void init$($Predicate* sf, $Scope$LookupKind* lookupKind) {
		$set(this, sf, sf);
		$set(this, lookupKind, lookupKind);
	}
	virtual $Object* apply(Object$* scope) override {
		 return Scope$CompoundScope::lambda$getSymbols$0(sf, lookupKind, $cast($Scope, scope));
	}
	$Predicate* sf = nullptr;
	$Scope$LookupKind* lookupKind = nullptr;
};
$Class* Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sf", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3, sf)},
		{"lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3, lookupKind)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)V", nullptr, $PUBLIC, $method(Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3, init$, void, $Predicate*, $Scope$LookupKind*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.code.Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3);
	});
	return class$;
}
$Class* Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3::class$ = nullptr;

int32_t Scope$CompoundScope::hashCode() {
	 return this->$Scope::hashCode();
}

bool Scope$CompoundScope::equals(Object$* arg0) {
	 return this->$Scope::equals(arg0);
}

$Object* Scope$CompoundScope::clone() {
	 return this->$Scope::clone();
}

void Scope$CompoundScope::finalize() {
	this->$Scope::finalize();
}

void Scope$CompoundScope::init$($Symbol* owner) {
	$Scope::init$(owner);
	$set(this, subScopes, $new($ListBuffer));
	this->mark = 0;
}

void Scope$CompoundScope::prependSubScope($Scope* that) {
	if (that != nullptr) {
		$nc(this->subScopes)->prepend(that);
		$nc(that->listeners)->add(this);
		++this->mark;
		$nc(this->listeners)->symbolAdded(nullptr, this);
	}
}

void Scope$CompoundScope::appendSubScope($Scope* that) {
	if (that != nullptr) {
		$nc(this->subScopes)->append(that);
		$nc(that->listeners)->add(this);
		++this->mark;
		$nc(this->listeners)->symbolAdded(nullptr, this);
	}
}

void Scope$CompoundScope::symbolAdded($Symbol* sym, $Scope* s) {
	++this->mark;
	$nc(this->listeners)->symbolAdded(sym, s);
}

void Scope$CompoundScope::symbolRemoved($Symbol* sym, $Scope* s) {
	++this->mark;
	$nc(this->listeners)->symbolRemoved(sym, s);
}

int32_t Scope$CompoundScope::getMark() {
	return this->mark;
}

$String* Scope$CompoundScope::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append("CompoundScope{"_s);
	$var($String, sep, ""_s);
	{
		$var($Iterator, i$, $nc(this->subScopes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Scope, s, $cast($Scope, i$->next()));
			{
				buf->append(sep);
				buf->append(s);
				$assign(sep, ","_s);
			}
		}
	}
	buf->append("}"_s);
	return buf->toString();
}

$Iterable* Scope$CompoundScope::getSymbols($Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $new(Scope$CompoundScope$$Lambda$lambda$getSymbols$1, this, sf, lookupKind);
}

$Iterable* Scope$CompoundScope::getSymbolsByName($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $new(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1, this, name, sf, lookupKind);
}

$Scope* Scope$CompoundScope::getOrigin($Symbol* sym) {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(this->subScopes)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Scope, delegate, $cast($Scope, i$->next()));
		if ($nc(delegate)->includes(sym)) {
			return delegate->getOrigin(sym);
		}
	}
	return nullptr;
}

bool Scope$CompoundScope::isStaticallyImported($Symbol* sym) {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(this->subScopes)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Scope, delegate, $cast($Scope, i$->next()));
		if ($nc(delegate)->includes(sym)) {
			return delegate->isStaticallyImported(sym);
		}
	}
	return false;
}

$Iterator* Scope$CompoundScope::lambda$getSymbolsByName$3($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $Iterators::createCompoundIterator($cast($AbstractCollection, this->subScopes), $$new(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2, name, sf, lookupKind));
}

$Iterator* Scope$CompoundScope::lambda$getSymbolsByName$2($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind, $Scope* scope) {
	$init(Scope$CompoundScope);
	return $$nc($nc(scope)->getSymbolsByName(name, sf, lookupKind))->iterator();
}

$Iterator* Scope$CompoundScope::lambda$getSymbols$1($Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $Iterators::createCompoundIterator($cast($AbstractCollection, this->subScopes), $$new(Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3, sf, lookupKind));
}

$Iterator* Scope$CompoundScope::lambda$getSymbols$0($Predicate* sf, $Scope$LookupKind* lookupKind, $Scope* scope) {
	$init(Scope$CompoundScope);
	return $$nc($nc(scope)->getSymbols(sf, lookupKind))->iterator();
}

Scope$CompoundScope::Scope$CompoundScope() {
}

$Class* Scope$CompoundScope::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.code.Scope$CompoundScope$$Lambda$lambda$getSymbols$1")) {
			return Scope$CompoundScope$$Lambda$lambda$getSymbols$1::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.code.Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1")) {
			return Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.code.Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2")) {
			return Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.code.Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3")) {
			return Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"subScopes", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/Scope;>;", 0, $field(Scope$CompoundScope, subScopes)},
		{"mark", "I", nullptr, $PRIVATE, $field(Scope$CompoundScope, mark)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(Scope$CompoundScope, init$, void, $Symbol*)},
		{"appendSubScope", "(Lcom/sun/tools/javac/code/Scope;)V", nullptr, $PUBLIC, $virtualMethod(Scope$CompoundScope, appendSubScope, void, $Scope*)},
		{"getMark", "()I", nullptr, $PUBLIC, $virtualMethod(Scope$CompoundScope, getMark, int32_t)},
		{"getOrigin", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope;", nullptr, $PUBLIC, $virtualMethod(Scope$CompoundScope, getOrigin, $Scope*, $Symbol*)},
		{"getSymbols", "(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC, $virtualMethod(Scope$CompoundScope, getSymbols, $Iterable*, $Predicate*, $Scope$LookupKind*)},
		{"getSymbolsByName", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC, $virtualMethod(Scope$CompoundScope, getSymbolsByName, $Iterable*, $Name*, $Predicate*, $Scope$LookupKind*)},
		{"isStaticallyImported", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC, $virtualMethod(Scope$CompoundScope, isStaticallyImported, bool, $Symbol*)},
		{"lambda$getSymbols$0", "(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;Lcom/sun/tools/javac/code/Scope;)Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Scope$CompoundScope, lambda$getSymbols$0, $Iterator*, $Predicate*, $Scope$LookupKind*, $Scope*)},
		{"lambda$getSymbols$1", "(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(Scope$CompoundScope, lambda$getSymbols$1, $Iterator*, $Predicate*, $Scope$LookupKind*)},
		{"lambda$getSymbolsByName$2", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;Lcom/sun/tools/javac/code/Scope;)Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Scope$CompoundScope, lambda$getSymbolsByName$2, $Iterator*, $Name*, $Predicate*, $Scope$LookupKind*, $Scope*)},
		{"lambda$getSymbolsByName$3", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(Scope$CompoundScope, lambda$getSymbolsByName$3, $Iterator*, $Name*, $Predicate*, $Scope$LookupKind*)},
		{"prependSubScope", "(Lcom/sun/tools/javac/code/Scope;)V", nullptr, $PUBLIC, $virtualMethod(Scope$CompoundScope, prependSubScope, void, $Scope*)},
		{"symbolAdded", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, $PUBLIC, $virtualMethod(Scope$CompoundScope, symbolAdded, void, $Symbol*, $Scope*)},
		{"symbolRemoved", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, $PUBLIC, $virtualMethod(Scope$CompoundScope, symbolRemoved, void, $Symbol*, $Scope*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Scope$CompoundScope, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Scope$CompoundScope", "com.sun.tools.javac.code.Scope", "CompoundScope", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Scope$ScopeListener", "com.sun.tools.javac.code.Scope", "ScopeListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Scope$CompoundScope",
		"com.sun.tools.javac.code.Scope",
		"com.sun.tools.javac.code.Scope$ScopeListener",
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
	$loadClass(Scope$CompoundScope, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Scope$CompoundScope));
	});
	return class$;
}

$Class* Scope$CompoundScope::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com