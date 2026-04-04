#include <com/sun/tools/javac/code/Types$MembersClosureCache$MembersScope.h>
#include <com/sun/tools/javac/code/Scope$CompoundScope.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Types$MembersClosureCache.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Scope$CompoundScope = ::com::sun::tools::javac::code::Scope$CompoundScope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Types$MembersClosureCache = ::com::sun::tools::javac::code::Types$MembersClosureCache;
using $Name = ::com::sun::tools::javac::util::Name;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0 : public $Predicate {
	$class(Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Predicate* sf) {
		$set(this, sf, sf);
	}
	virtual bool test(Object$* s) override {
		 return Types$MembersClosureCache$MembersScope::lambda$combine$0(sf, $cast($Symbol, s));
	}
	$Predicate* sf = nullptr;
};
$Class* Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sf", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0, sf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Predicate;)V", nullptr, $PUBLIC, $method(Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0, init$, void, $Predicate*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.code.Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0);
	});
	return class$;
}
$Class* Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0::class$ = nullptr;

void Types$MembersClosureCache$MembersScope::init$($Types$MembersClosureCache* this$1, $Scope$CompoundScope* scope) {
	$set(this, this$1, this$1);
	$Scope$CompoundScope::init$($nc(scope)->owner);
	$set(this, scope, scope);
}

$Predicate* Types$MembersClosureCache$MembersScope::combine($Predicate* sf) {
	return $new(Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0, sf);
}

$Iterable* Types$MembersClosureCache$MembersScope::getSymbols($Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $nc(this->scope)->getSymbols($(combine(sf)), lookupKind);
}

$Iterable* Types$MembersClosureCache$MembersScope::getSymbolsByName($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $nc(this->scope)->getSymbolsByName(name, $(combine(sf)), lookupKind);
}

int32_t Types$MembersClosureCache$MembersScope::getMark() {
	return $nc(this->scope)->getMark();
}

bool Types$MembersClosureCache$MembersScope::lambda$combine$0($Predicate* sf, $Symbol* s) {
	$init(Types$MembersClosureCache$MembersScope);
	bool var$0 = !$nc($nc(s)->owner)->isInterface();
	return var$0 && (sf == nullptr || sf->test(s));
}

Types$MembersClosureCache$MembersScope::Types$MembersClosureCache$MembersScope() {
}

$Class* Types$MembersClosureCache$MembersScope::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.code.Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0")) {
			return Types$MembersClosureCache$MembersScope$$Lambda$lambda$combine$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/code/Types$MembersClosureCache;", nullptr, $FINAL | $SYNTHETIC, $field(Types$MembersClosureCache$MembersScope, this$1)},
		{"scope", "Lcom/sun/tools/javac/code/Scope$CompoundScope;", nullptr, 0, $field(Types$MembersClosureCache$MembersScope, scope)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types$MembersClosureCache;Lcom/sun/tools/javac/code/Scope$CompoundScope;)V", nullptr, $PUBLIC, $method(Types$MembersClosureCache$MembersScope, init$, void, $Types$MembersClosureCache*, $Scope$CompoundScope*)},
		{"combine", "(Ljava/util/function/Predicate;)Ljava/util/function/Predicate;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;", 0, $virtualMethod(Types$MembersClosureCache$MembersScope, combine, $Predicate*, $Predicate*)},
		{"getMark", "()I", nullptr, $PUBLIC, $virtualMethod(Types$MembersClosureCache$MembersScope, getMark, int32_t)},
		{"getSymbols", "(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC, $virtualMethod(Types$MembersClosureCache$MembersScope, getSymbols, $Iterable*, $Predicate*, $Scope$LookupKind*)},
		{"getSymbolsByName", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC, $virtualMethod(Types$MembersClosureCache$MembersScope, getSymbolsByName, $Iterable*, $Name*, $Predicate*, $Scope$LookupKind*)},
		{"lambda$combine$0", "(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Types$MembersClosureCache$MembersScope, lambda$combine$0, bool, $Predicate*, $Symbol*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$MembersClosureCache", "com.sun.tools.javac.code.Types", "MembersClosureCache", 0},
		{"com.sun.tools.javac.code.Types$MembersClosureCache$MembersScope", "com.sun.tools.javac.code.Types$MembersClosureCache", "MembersScope", 0},
		{"com.sun.tools.javac.code.Scope$CompoundScope", "com.sun.tools.javac.code.Scope", "CompoundScope", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$MembersClosureCache$MembersScope",
		"com.sun.tools.javac.code.Scope$CompoundScope",
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
	$loadClass(Types$MembersClosureCache$MembersScope, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Types$MembersClosureCache$MembersScope));
	});
	return class$;
}

$Class* Types$MembersClosureCache$MembersScope::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com