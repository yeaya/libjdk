#include <com/sun/tools/javac/code/Scope$FilterImportScope$2.h>
#include <com/sun/tools/javac/code/Scope$FilterImportScope$SymbolImporter.h>
#include <com/sun/tools/javac/code/Scope$FilterImportScope.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/Iterable.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Scope$FilterImportScope = ::com::sun::tools::javac::code::Scope$FilterImportScope;
using $Scope$FilterImportScope$SymbolImporter = ::com::sun::tools::javac::code::Scope$FilterImportScope$SymbolImporter;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Name = ::com::sun::tools::javac::util::Name;
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

void Scope$FilterImportScope$2::init$($Scope$FilterImportScope* this$0, bool inspectSuperTypes, $Name* val$name, $Predicate* val$sf, $Scope$LookupKind* val$lookupKind) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
	$set(this, val$sf, val$sf);
	$set(this, val$lookupKind, val$lookupKind);
	$Scope$FilterImportScope$SymbolImporter::init$(this$0, inspectSuperTypes);
}

$Iterable* Scope$FilterImportScope$2::doLookup($Symbol$TypeSymbol* tsym) {
	return $$nc($nc(tsym)->members())->getSymbolsByName(this->val$name, this->val$sf, this->val$lookupKind);
}

Scope$FilterImportScope$2::Scope$FilterImportScope$2() {
}

$Class* Scope$FilterImportScope$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Scope$FilterImportScope;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$FilterImportScope$2, this$0)},
		{"val$lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$FilterImportScope$2, val$lookupKind)},
		{"val$sf", "Ljava/util/function/Predicate;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$FilterImportScope$2, val$sf)},
		{"val$name", "Lcom/sun/tools/javac/util/Name;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$FilterImportScope$2, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Scope$FilterImportScope;ZLcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)V", nullptr, 0, $method(Scope$FilterImportScope$2, init$, void, $Scope$FilterImportScope*, bool, $Name*, $Predicate*, $Scope$LookupKind*)},
		{"doLookup", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", 0, $virtualMethod(Scope$FilterImportScope$2, doLookup, $Iterable*, $Symbol$TypeSymbol*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Scope$FilterImportScope",
		"getSymbolsByName",
		"(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Scope$FilterImportScope", "com.sun.tools.javac.code.Scope", "FilterImportScope", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.code.Scope$FilterImportScope$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Scope$FilterImportScope$SymbolImporter", "com.sun.tools.javac.code.Scope$FilterImportScope", "SymbolImporter", $ABSTRACT},
		{"com.sun.tools.javac.code.Scope$LookupKind", "com.sun.tools.javac.code.Scope", "LookupKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Scope$FilterImportScope$2",
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
	$loadClass(Scope$FilterImportScope$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope$FilterImportScope$2);
	});
	return class$;
}

$Class* Scope$FilterImportScope$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com