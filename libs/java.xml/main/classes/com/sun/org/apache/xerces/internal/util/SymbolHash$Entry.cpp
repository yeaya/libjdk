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

$FieldInfo _SymbolHash$Entry_FieldInfo_[] = {
	{"key", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SymbolHash$Entry, key)},
	{"value", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SymbolHash$Entry, value)},
	{"next", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash$Entry;", nullptr, $PUBLIC, $field(SymbolHash$Entry, next)},
	{}
};

$MethodInfo _SymbolHash$Entry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SymbolHash$Entry, init$, void)},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/util/SymbolHash$Entry;)V", nullptr, $PUBLIC, $method(SymbolHash$Entry, init$, void, Object$*, Object$*, SymbolHash$Entry*)},
	{"makeClone", "()Lcom/sun/org/apache/xerces/internal/util/SymbolHash$Entry;", nullptr, $PUBLIC, $method(SymbolHash$Entry, makeClone, SymbolHash$Entry*)},
	{}
};

$InnerClassInfo _SymbolHash$Entry_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.SymbolHash$Entry", "com.sun.org.apache.xerces.internal.util.SymbolHash", "Entry", $PROTECTED | $STATIC | $FINAL},
	{}
};

$ClassInfo _SymbolHash$Entry_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.SymbolHash$Entry",
	"java.lang.Object",
	nullptr,
	_SymbolHash$Entry_FieldInfo_,
	_SymbolHash$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_SymbolHash$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.SymbolHash"
};

$Object* allocate$SymbolHash$Entry($Class* clazz) {
	return $of($alloc(SymbolHash$Entry));
}

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
		$set(entry, next, $nc(this->next)->makeClone());
	}
	return entry;
}

SymbolHash$Entry::SymbolHash$Entry() {
}

$Class* SymbolHash$Entry::load$($String* name, bool initialize) {
	$loadClass(SymbolHash$Entry, name, initialize, &_SymbolHash$Entry_ClassInfo_, allocate$SymbolHash$Entry);
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