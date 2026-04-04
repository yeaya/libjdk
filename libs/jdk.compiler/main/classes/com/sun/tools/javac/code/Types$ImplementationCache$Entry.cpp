#include <com/sun/tools/javac/code/Types$ImplementationCache$Entry.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Types$ImplementationCache.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Types$ImplementationCache = ::com::sun::tools::javac::code::Types$ImplementationCache;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$ImplementationCache$Entry::init$($Types$ImplementationCache* this$1, $Symbol$MethodSymbol* cachedImpl, $Predicate* scopeFilter, bool checkResult, int32_t prevMark) {
	$set(this, this$1, this$1);
	$set(this, cachedImpl, cachedImpl);
	$set(this, implFilter, scopeFilter);
	this->checkResult = checkResult;
	this->prevMark = prevMark;
}

bool Types$ImplementationCache$Entry::matches($Predicate* scopeFilter, bool checkResult, int32_t mark) {
	return this->implFilter == scopeFilter && this->checkResult == checkResult && this->prevMark == mark;
}

Types$ImplementationCache$Entry::Types$ImplementationCache$Entry() {
}

$Class* Types$ImplementationCache$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/code/Types$ImplementationCache;", nullptr, $FINAL | $SYNTHETIC, $field(Types$ImplementationCache$Entry, this$1)},
		{"cachedImpl", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $FINAL, $field(Types$ImplementationCache$Entry, cachedImpl)},
		{"implFilter", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;", $FINAL, $field(Types$ImplementationCache$Entry, implFilter)},
		{"checkResult", "Z", nullptr, $FINAL, $field(Types$ImplementationCache$Entry, checkResult)},
		{"prevMark", "I", nullptr, $FINAL, $field(Types$ImplementationCache$Entry, prevMark)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types$ImplementationCache;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/util/function/Predicate;ZI)V", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;ZI)V", $PUBLIC, $method(Types$ImplementationCache$Entry, init$, void, $Types$ImplementationCache*, $Symbol$MethodSymbol*, $Predicate*, bool, int32_t)},
		{"matches", "(Ljava/util/function/Predicate;ZI)Z", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;ZI)Z", 0, $virtualMethod(Types$ImplementationCache$Entry, matches, bool, $Predicate*, bool, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$ImplementationCache", "com.sun.tools.javac.code.Types", "ImplementationCache", 0},
		{"com.sun.tools.javac.code.Types$ImplementationCache$Entry", "com.sun.tools.javac.code.Types$ImplementationCache", "Entry", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$ImplementationCache$Entry",
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
	$loadClass(Types$ImplementationCache$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$ImplementationCache$Entry);
	});
	return class$;
}

$Class* Types$ImplementationCache$Entry::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com