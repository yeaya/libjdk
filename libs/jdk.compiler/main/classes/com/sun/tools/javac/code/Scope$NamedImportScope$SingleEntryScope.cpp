#include <com/sun/tools/javac/code/Scope$NamedImportScope$SingleEntryScope.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$NamedImportScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collections = ::java::util::Collections;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Scope$NamedImportScope$SingleEntryScope::init$($Symbol* owner, $Symbol* sym, $Scope* origin) {
	$Scope::init$(owner);
	$set(this, sym, sym);
	$set(this, content, $List::of(sym));
	$set(this, origin, origin);
}

$Iterable* Scope$NamedImportScope$SingleEntryScope::getSymbols($Predicate* sf, $Scope$LookupKind* lookupKind) {
	return sf == nullptr || sf->test(this->sym) ? $cast($Iterable, $cast($AbstractCollection, this->content)) : $cast($Iterable, $Collections::emptyList());
}

$Iterable* Scope$NamedImportScope$SingleEntryScope::getSymbolsByName($Name* name, $Predicate* sf, $Scope$LookupKind* lookupKind) {
	return $nc(this->sym)->name == name && (sf == nullptr || sf->test(this->sym)) ? $cast($Iterable, $cast($AbstractCollection, this->content)) : $cast($Iterable, $Collections::emptyList());
}

$Scope* Scope$NamedImportScope$SingleEntryScope::getOrigin($Symbol* byName) {
	return this->sym == byName ? this->origin : ($Scope*)nullptr;
}

bool Scope$NamedImportScope$SingleEntryScope::isStaticallyImported($Symbol* byName) {
	return false;
}

Scope$NamedImportScope$SingleEntryScope::Scope$NamedImportScope$SingleEntryScope() {
}

$Class* Scope$NamedImportScope$SingleEntryScope::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE | $FINAL, $field(Scope$NamedImportScope$SingleEntryScope, sym)},
		{"content", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE | $FINAL, $field(Scope$NamedImportScope$SingleEntryScope, content)},
		{"origin", "Lcom/sun/tools/javac/code/Scope;", nullptr, $PRIVATE | $FINAL, $field(Scope$NamedImportScope$SingleEntryScope, origin)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, $PUBLIC, $method(Scope$NamedImportScope$SingleEntryScope, init$, void, $Symbol*, $Symbol*, $Scope*)},
		{"getOrigin", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope;", nullptr, $PUBLIC, $virtualMethod(Scope$NamedImportScope$SingleEntryScope, getOrigin, $Scope*, $Symbol*)},
		{"getSymbols", "(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC, $virtualMethod(Scope$NamedImportScope$SingleEntryScope, getSymbols, $Iterable*, $Predicate*, $Scope$LookupKind*)},
		{"getSymbolsByName", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC, $virtualMethod(Scope$NamedImportScope$SingleEntryScope, getSymbolsByName, $Iterable*, $Name*, $Predicate*, $Scope$LookupKind*)},
		{"isStaticallyImported", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC, $virtualMethod(Scope$NamedImportScope$SingleEntryScope, isStaticallyImported, bool, $Symbol*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Scope$NamedImportScope", "com.sun.tools.javac.code.Scope", "NamedImportScope", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Scope$NamedImportScope$SingleEntryScope", "com.sun.tools.javac.code.Scope$NamedImportScope", "SingleEntryScope", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Scope$NamedImportScope$SingleEntryScope",
		"com.sun.tools.javac.code.Scope",
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
	$loadClass(Scope$NamedImportScope$SingleEntryScope, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope$NamedImportScope$SingleEntryScope);
	});
	return class$;
}

$Class* Scope$NamedImportScope$SingleEntryScope::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com