#include <com/sun/tools/javac/code/Scope$FilterImportScope$SymbolImporter.h>
#include <com/sun/tools/javac/code/Scope$FilterImportScope.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/Iterable.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Scope$FilterImportScope = ::com::sun::tools::javac::code::Scope$FilterImportScope;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Scope$FilterImportScope$SymbolImporter::init$($Scope$FilterImportScope* this$0, bool inspectSuperTypes) {
	$set(this, this$0, this$0);
	$set(this, processed, $new($HashSet));
	$set(this, delegates, $List::nil());
	this->inspectSuperTypes = inspectSuperTypes;
}

$List* Scope$FilterImportScope$SymbolImporter::importFrom($Symbol$TypeSymbol* tsym, $List* results$renamed) {
	$useLocalObjectStack();
	$var($List, results, results$renamed);
	if (tsym == nullptr || !$nc(this->processed)->add(tsym)) {
		return results;
	}
	if (this->inspectSuperTypes) {
		$assign(results, importFrom($nc($($nc(this->this$0->types)->supertype($nc(tsym)->type)))->tsym, results));
		{
			$var($Iterator, i$, $$nc(this->this$0->types->interfaces(tsym->type))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				$assign(results, importFrom($nc(t)->tsym, results));
			}
		}
	}
	return $nc(results)->prepend($(doLookup(tsym)));
}

Scope$FilterImportScope$SymbolImporter::Scope$FilterImportScope$SymbolImporter() {
}

$Class* Scope$FilterImportScope$SymbolImporter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Scope$FilterImportScope;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$FilterImportScope$SymbolImporter, this$0)},
		{"processed", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol;>;", 0, $field(Scope$FilterImportScope$SymbolImporter, processed)},
		{"delegates", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;>;", 0, $field(Scope$FilterImportScope$SymbolImporter, delegates)},
		{"inspectSuperTypes", "Z", nullptr, $FINAL, $field(Scope$FilterImportScope$SymbolImporter, inspectSuperTypes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Scope$FilterImportScope;Z)V", nullptr, $PUBLIC, $method(Scope$FilterImportScope$SymbolImporter, init$, void, $Scope$FilterImportScope*, bool)},
		{"doLookup", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $ABSTRACT, $virtualMethod(Scope$FilterImportScope$SymbolImporter, doLookup, $Iterable*, $Symbol$TypeSymbol*)},
		{"importFrom", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/List<Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;>;)Lcom/sun/tools/javac/util/List<Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;>;", 0, $virtualMethod(Scope$FilterImportScope$SymbolImporter, importFrom, $List*, $Symbol$TypeSymbol*, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Scope$FilterImportScope", "com.sun.tools.javac.code.Scope", "FilterImportScope", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.code.Scope$FilterImportScope$SymbolImporter", "com.sun.tools.javac.code.Scope$FilterImportScope", "SymbolImporter", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.code.Scope$FilterImportScope$SymbolImporter",
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
	$loadClass(Scope$FilterImportScope$SymbolImporter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope$FilterImportScope$SymbolImporter);
	});
	return class$;
}

$Class* Scope$FilterImportScope$SymbolImporter::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com