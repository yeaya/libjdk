#include <com/sun/tools/javac/code/Scope$CompoundScope.h>

#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$ScopeListener.h>
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
#include <java/util/AbstractQueue.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$ScopeListener = ::com::sun::tools::javac::code::Scope$ScopeListener;
using $Scope$ScopeListenerList = ::com::sun::tools::javac::code::Scope$ScopeListenerList;
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
using $AbstractQueue = ::java::util::AbstractQueue;
using $Collection = ::java::util::Collection;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Scope$CompoundScope$$Lambda$lambda$getSymbols$1>());
	}
	Scope$CompoundScope* inst$ = nullptr;
	$Predicate* sf = nullptr;
	$Scope$LookupKind* lookupKind = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Scope$CompoundScope$$Lambda$lambda$getSymbols$1::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbols$1, inst$)},
	{"sf", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbols$1, sf)},
	{"lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbols$1, lookupKind)},
	{}
};
$MethodInfo Scope$CompoundScope$$Lambda$lambda$getSymbols$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Scope$CompoundScope;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)V", nullptr, $PUBLIC, $method(Scope$CompoundScope$$Lambda$lambda$getSymbols$1, init$, void, Scope$CompoundScope*, $Predicate*, $Scope$LookupKind*)},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC, $virtualMethod(Scope$CompoundScope$$Lambda$lambda$getSymbols$1, iterator, $Iterator*)},
	{}
};
$ClassInfo Scope$CompoundScope$$Lambda$lambda$getSymbols$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Scope$CompoundScope$$Lambda$lambda$getSymbols$1",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* Scope$CompoundScope$$Lambda$lambda$getSymbols$1::load$($String* name, bool initialize) {
	$loadClass(Scope$CompoundScope$$Lambda$lambda$getSymbols$1, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1>());
	}
	Scope$CompoundScope* inst$ = nullptr;
	$Name* name = nullptr;
	$Predicate* sf = nullptr;
	$Scope$LookupKind* lookupKind = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1::fieldInfos[5] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1, inst$)},
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1, name)},
	{"sf", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1, sf)},
	{"lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1, lookupKind)},
	{}
};
$MethodInfo Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Scope$CompoundScope;Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)V", nullptr, $PUBLIC, $method(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1, init$, void, Scope$CompoundScope*, $Name*, $Predicate*, $Scope$LookupKind*)},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC, $virtualMethod(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1, iterator, $Iterator*)},
	{}
};
$ClassInfo Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1::load$($String* name, bool initialize) {
	$loadClass(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1, name, initialize, &classInfo$, allocate$);
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
		 return $of(Scope$CompoundScope::lambda$getSymbolsByName$2(name, sf, lookupKind, $cast($Scope, scope)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2>());
	}
	$Name* name = nullptr;
	$Predicate* sf = nullptr;
	$Scope$LookupKind* lookupKind = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2::fieldInfos[4] = {
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2, name)},
	{"sf", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2, sf)},
	{"lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2, lookupKind)},
	{}
};
$MethodInfo Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)V", nullptr, $PUBLIC, $method(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2, init$, void, $Name*, $Predicate*, $Scope$LookupKind*)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2, apply, $Object*, Object$*)},
	{}
};
$ClassInfo Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2::load$($String* name, bool initialize) {
	$loadClass(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2, name, initialize, &classInfo$, allocate$);
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
		 return $of(Scope$CompoundScope::lambda$getSymbols$0(sf, lookupKind, $cast($Scope, scope)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3>());
	}
	$Predicate* sf = nullptr;
	$Scope$LookupKind* lookupKind = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3::fieldInfos[3] = {
	{"sf", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3, sf)},
	{"lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC, $field(Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3, lookupKind)},
	{}
};
$MethodInfo Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)V", nullptr, $PUBLIC, $method(Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3, init$, void, $Predicate*, $Scope$LookupKind*)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3, apply, $Object*, Object$*)},
	{}
};
$ClassInfo Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3::load$($String* name, bool initialize) {
	$loadClass(Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3::class$ = nullptr;

$FieldInfo _Scope$CompoundScope_FieldInfo_[] = {
	{"subScopes", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/Scope;>;", 0, $field(Scope$CompoundScope, subScopes)},
	{"mark", "I", nullptr, $PRIVATE, $field(Scope$CompoundScope, mark)},
	{}
};

$MethodInfo _Scope$CompoundScope_MethodInfo_[] = {
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

$InnerClassInfo _Scope$CompoundScope_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$CompoundScope", "com.sun.tools.javac.code.Scope", "CompoundScope", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Scope$ScopeListener", "com.sun.tools.javac.code.Scope", "ScopeListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Scope$CompoundScope_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Scope$CompoundScope",
	"com.sun.tools.javac.code.Scope",
	"com.sun.tools.javac.code.Scope$ScopeListener",
	_Scope$CompoundScope_FieldInfo_,
	_Scope$CompoundScope_MethodInfo_,
	nullptr,
	nullptr,
	_Scope$CompoundScope_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$CompoundScope($Class* clazz) {
	return $of($alloc(Scope$CompoundScope));
}

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
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append("CompoundScope{"_s);
	$var($String, sep, ""_s);
	{
		$var($Iterator, i$, $nc(this->subScopes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Scope, s, $cast($Scope, i$->next()));
			{
				buf->append(sep);
				buf->append($of(s));
				$assign(sep, ","_s);
			}
		}
	}
	buf->append("}"_s);
	return buf->toString();
}

$Iterable* Scope$CompoundScope::getSymbols($Predicate* sf, $Scope$LookupKind* lookupKind) {
	return static_cast<$Iterable*>($new(Scope$CompoundScope$$Lambda$lambda$getSymbols$1, this, sf, lookupKind));
}

$Iterable* Scope$CompoundScope::getSymbolsByName($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
	return static_cast<$Iterable*>($new(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1, this, name, sf, lookupKind));
}

$Scope* Scope$CompoundScope::getOrigin($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->subScopes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Scope, delegate, $cast($Scope, i$->next()));
			{
				if ($nc(delegate)->includes(sym)) {
					return delegate->getOrigin(sym);
				}
			}
		}
	}
	return nullptr;
}

bool Scope$CompoundScope::isStaticallyImported($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->subScopes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Scope, delegate, $cast($Scope, i$->next()));
			{
				if ($nc(delegate)->includes(sym)) {
					return delegate->isStaticallyImported(sym);
				}
			}
		}
	}
	return false;
}

$Iterator* Scope$CompoundScope::lambda$getSymbolsByName$3($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $Iterators::createCompoundIterator(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(this->subScopes)))), static_cast<$Function*>($$new(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2, name, sf, lookupKind)));
}

$Iterator* Scope$CompoundScope::lambda$getSymbolsByName$2($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind, $Scope* scope) {
	$init(Scope$CompoundScope);
	return $nc($($nc(scope)->getSymbolsByName(name, sf, lookupKind)))->iterator();
}

$Iterator* Scope$CompoundScope::lambda$getSymbols$1($Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $Iterators::createCompoundIterator(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(this->subScopes)))), static_cast<$Function*>($$new(Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3, sf, lookupKind)));
}

$Iterator* Scope$CompoundScope::lambda$getSymbols$0($Predicate* sf, $Scope$LookupKind* lookupKind, $Scope* scope) {
	$init(Scope$CompoundScope);
	return $nc($($nc(scope)->getSymbols(sf, lookupKind)))->iterator();
}

Scope$CompoundScope::Scope$CompoundScope() {
}

$Class* Scope$CompoundScope::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Scope$CompoundScope$$Lambda$lambda$getSymbols$1::classInfo$.name)) {
			return Scope$CompoundScope$$Lambda$lambda$getSymbols$1::load$(name, initialize);
		}
		if (name->equals(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1::classInfo$.name)) {
			return Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$3$1::load$(name, initialize);
		}
		if (name->equals(Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2::classInfo$.name)) {
			return Scope$CompoundScope$$Lambda$lambda$getSymbolsByName$2$2::load$(name, initialize);
		}
		if (name->equals(Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3::classInfo$.name)) {
			return Scope$CompoundScope$$Lambda$lambda$getSymbols$0$3::load$(name, initialize);
		}
	}
	$loadClass(Scope$CompoundScope, name, initialize, &_Scope$CompoundScope_ClassInfo_, allocate$Scope$CompoundScope);
	return class$;
}

$Class* Scope$CompoundScope::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com