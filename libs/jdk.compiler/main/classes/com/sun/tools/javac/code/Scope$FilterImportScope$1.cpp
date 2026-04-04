#include <com/sun/tools/javac/code/Scope$FilterImportScope$1.h>
#include <com/sun/tools/javac/code/Scope$FilterImportScope$SymbolImporter.h>
#include <com/sun/tools/javac/code/Scope$FilterImportScope.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <java/lang/Iterable.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Scope$FilterImportScope = ::com::sun::tools::javac::code::Scope$FilterImportScope;
using $Scope$FilterImportScope$SymbolImporter = ::com::sun::tools::javac::code::Scope$FilterImportScope$SymbolImporter;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Scope$FilterImportScope$1::init$($Scope$FilterImportScope* this$0, bool inspectSuperTypes, $Predicate* val$sf, $Scope$LookupKind* val$lookupKind) {
	$set(this, this$0, this$0);
	$set(this, val$sf, val$sf);
	$set(this, val$lookupKind, val$lookupKind);
	$Scope$FilterImportScope$SymbolImporter::init$(this$0, inspectSuperTypes);
}

$Iterable* Scope$FilterImportScope$1::doLookup($Symbol$TypeSymbol* tsym) {
	return $$nc($nc(tsym)->members())->getSymbols(this->val$sf, this->val$lookupKind);
}

Scope$FilterImportScope$1::Scope$FilterImportScope$1() {
}

$Class* Scope$FilterImportScope$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Scope$FilterImportScope;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$FilterImportScope$1, this$0)},
		{"val$lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$FilterImportScope$1, val$lookupKind)},
		{"val$sf", "Ljava/util/function/Predicate;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$FilterImportScope$1, val$sf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Scope$FilterImportScope;ZLjava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)V", nullptr, 0, $method(Scope$FilterImportScope$1, init$, void, $Scope$FilterImportScope*, bool, $Predicate*, $Scope$LookupKind*)},
		{"doLookup", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", 0, $virtualMethod(Scope$FilterImportScope$1, doLookup, $Iterable*, $Symbol$TypeSymbol*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Scope$FilterImportScope",
		"getSymbols",
		"(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Scope$FilterImportScope", "com.sun.tools.javac.code.Scope", "FilterImportScope", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.code.Scope$FilterImportScope$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Scope$FilterImportScope$SymbolImporter", "com.sun.tools.javac.code.Scope$FilterImportScope", "SymbolImporter", $ABSTRACT},
		{"com.sun.tools.javac.code.Scope$LookupKind", "com.sun.tools.javac.code.Scope", "LookupKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Scope$FilterImportScope$1",
		"com.sun.tools.javac.code.Scope$FilterImportScope$SymbolImporter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Scope"
	};
	$loadClass(Scope$FilterImportScope$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope$FilterImportScope$1);
	});
	return class$;
}

$Class* Scope$FilterImportScope$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com