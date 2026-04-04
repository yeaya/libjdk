#include <com/sun/org/apache/xerces/internal/util/SymbolHash$Entry.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolHash.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

void SymbolHash$Entry::init$() {
	$set(this, key, nullptr);
	$set(this, value, nullptr);
	$set(this, next, nullptr);
}

void SymbolHash$Entry::init$(Object$* key, Object$* value, SymbolHash$Entry* next) {
	$set(this, key, key);
	$set(this, value, value);
	$set(this, next, next);
}

SymbolHash$Entry* SymbolHash$Entry::makeClone() {
	$var(SymbolHash$Entry, entry, $new(SymbolHash$Entry));
	$set(entry, key, this->key);
	$set(entry, value, this->value);
	if (this->next != nullptr) {
		$set(entry, next, this->next->makeClone());
	}
	return entry;
}

SymbolHash$Entry::SymbolHash$Entry() {
}

$Class* SymbolHash$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"key", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SymbolHash$Entry, key)},
		{"value", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SymbolHash$Entry, value)},
		{"next", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash$Entry;", nullptr, $PUBLIC, $field(SymbolHash$Entry, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SymbolHash$Entry, init$, void)},
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/util/SymbolHash$Entry;)V", nullptr, $PUBLIC, $method(SymbolHash$Entry, init$, void, Object$*, Object$*, SymbolHash$Entry*)},
		{"makeClone", "()Lcom/sun/org/apache/xerces/internal/util/SymbolHash$Entry;", nullptr, $PUBLIC, $method(SymbolHash$Entry, makeClone, SymbolHash$Entry*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.util.SymbolHash$Entry", "com.sun.org.apache.xerces.internal.util.SymbolHash", "Entry", $PROTECTED | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.util.SymbolHash$Entry",
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
		"com.sun.org.apache.xerces.internal.util.SymbolHash"
	};
	$loadClass(SymbolHash$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SymbolHash$Entry);
	});
	return class$;
}

$Class* SymbolHash$Entry::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com