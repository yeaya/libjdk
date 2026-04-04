#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolsError$MostSpecificMap.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolsError.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext$Candidate.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Resolve$InapplicableSymbolsError = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolsError;
using $Resolve$MethodResolutionContext$Candidate = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext$Candidate;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Resolve$InapplicableSymbolsError$MostSpecificMap::init$($Resolve$InapplicableSymbolsError* this$1) {
	$set(this, this$1, this$1);
	$LinkedHashMap::init$();
}

void Resolve$InapplicableSymbolsError$MostSpecificMap::put($Resolve$MethodResolutionContext$Candidate* c) {
	$useLocalObjectStack();
	$var($ListBuffer, overridden, $new($ListBuffer));
	{
		$var($Iterator, i$, $$nc(keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, s, $cast($Symbol, i$->next()));
			{
				if (s == $nc(c)->sym) {
					continue;
				}
				if ($nc(c->sym)->overrides(s, $cast($Symbol$TypeSymbol, $nc(s)->owner), $nc(this->this$1->this$0)->types, false)) {
					overridden->add(s);
				} else if (s->overrides(c->sym, $cast($Symbol$TypeSymbol, c->sym->owner), this->this$1->this$0->types, false)) {
					return;
				}
			}
		}
	}
	{
		$var($Iterator, i$, overridden->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, s, $cast($Symbol, i$->next()));
			{
				remove(s);
			}
		}
	}
	put($nc(c)->sym, $nc(c)->details);
}

Resolve$InapplicableSymbolsError$MostSpecificMap::Resolve$InapplicableSymbolsError$MostSpecificMap() {
}

$Class* Resolve$InapplicableSymbolsError$MostSpecificMap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/comp/Resolve$InapplicableSymbolsError;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$InapplicableSymbolsError$MostSpecificMap, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$InapplicableSymbolsError;)V", nullptr, $PRIVATE, $method(Resolve$InapplicableSymbolsError$MostSpecificMap, init$, void, $Resolve$InapplicableSymbolsError*)},
		{"put", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext$Candidate;)V", nullptr, $PRIVATE, $method(Resolve$InapplicableSymbolsError$MostSpecificMap, put, void, $Resolve$MethodResolutionContext$Candidate*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError", "com.sun.tools.javac.comp.Resolve", "InapplicableSymbolsError", 0},
		{"com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError$MostSpecificMap", "com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError", "MostSpecificMap", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError$MostSpecificMap",
		"java.util.LinkedHashMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/LinkedHashMap<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$InapplicableSymbolsError$MostSpecificMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Resolve$InapplicableSymbolsError$MostSpecificMap));
	});
	return class$;
}

$Class* Resolve$InapplicableSymbolsError$MostSpecificMap::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com