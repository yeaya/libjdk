#include <com/sun/tools/javac/code/Types$CandidatesCache$Entry.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$CandidatesCache.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types$CandidatesCache = ::com::sun::tools::javac::code::Types$CandidatesCache;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$CandidatesCache$Entry::init$($Types$CandidatesCache* this$1, $Type* site, $Symbol$MethodSymbol* msym) {
	$set(this, this$1, this$1);
	$set(this, site, site);
	$set(this, msym, msym);
}

bool Types$CandidatesCache$Entry::equals(Object$* obj) {
	$var(Types$CandidatesCache$Entry, entry, nullptr);
	bool var$2 = $instanceOf(Types$CandidatesCache$Entry, obj);
	if (var$2) {
		$assign(entry, $cast(Types$CandidatesCache$Entry, obj));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $nc(entry)->msym == this->msym;
	return var$0 && $nc(this->this$1->this$0)->isSameType(this->site, entry->site);
}

int32_t Types$CandidatesCache$Entry::hashCode() {
	int32_t var$0 = $nc(this->this$1->this$0)->hashCode(this->site);
	return var$0 & ~$nc(this->msym)->hashCode();
}

Types$CandidatesCache$Entry::Types$CandidatesCache$Entry() {
}

$Class* Types$CandidatesCache$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/code/Types$CandidatesCache;", nullptr, $FINAL | $SYNTHETIC, $field(Types$CandidatesCache$Entry, this$1)},
		{"site", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Types$CandidatesCache$Entry, site)},
		{"msym", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, 0, $field(Types$CandidatesCache$Entry, msym)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types$CandidatesCache;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, 0, $method(Types$CandidatesCache$Entry, init$, void, $Types$CandidatesCache*, $Type*, $Symbol$MethodSymbol*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Types$CandidatesCache$Entry, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Types$CandidatesCache$Entry, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$CandidatesCache", "com.sun.tools.javac.code.Types", "CandidatesCache", $PUBLIC},
		{"com.sun.tools.javac.code.Types$CandidatesCache$Entry", "com.sun.tools.javac.code.Types$CandidatesCache", "Entry", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$CandidatesCache$Entry",
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
	$loadClass(Types$CandidatesCache$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$CandidatesCache$Entry);
	});
	return class$;
}

$Class* Types$CandidatesCache$Entry::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com