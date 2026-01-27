#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable$HashEntry.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExtendedType.h>
#include <jcpp.h>

using $ExtendedType = ::com::sun::org::apache::xml::internal::dtm::ref::ExtendedType;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _ExpandedNameTable$HashEntry_FieldInfo_[] = {
	{"key", "Lcom/sun/org/apache/xml/internal/dtm/ref/ExtendedType;", nullptr, 0, $field(ExpandedNameTable$HashEntry, key)},
	{"value", "I", nullptr, 0, $field(ExpandedNameTable$HashEntry, value)},
	{"hash", "I", nullptr, 0, $field(ExpandedNameTable$HashEntry, hash)},
	{"next", "Lcom/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable$HashEntry;", nullptr, 0, $field(ExpandedNameTable$HashEntry, next)},
	{}
};

$MethodInfo _ExpandedNameTable$HashEntry_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/ExtendedType;IILcom/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable$HashEntry;)V", nullptr, $PROTECTED, $method(ExpandedNameTable$HashEntry, init$, void, $ExtendedType*, int32_t, int32_t, ExpandedNameTable$HashEntry*)},
	{}
};

$InnerClassInfo _ExpandedNameTable$HashEntry_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.ExpandedNameTable$HashEntry", "com.sun.org.apache.xml.internal.dtm.ref.ExpandedNameTable", "HashEntry", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ExpandedNameTable$HashEntry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.ExpandedNameTable$HashEntry",
	"java.lang.Object",
	nullptr,
	_ExpandedNameTable$HashEntry_FieldInfo_,
	_ExpandedNameTable$HashEntry_MethodInfo_,
	nullptr,
	nullptr,
	_ExpandedNameTable$HashEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.ExpandedNameTable"
};

$Object* allocate$ExpandedNameTable$HashEntry($Class* clazz) {
	return $of($alloc(ExpandedNameTable$HashEntry));
}

void ExpandedNameTable$HashEntry::init$($ExtendedType* key, int32_t value, int32_t hash, ExpandedNameTable$HashEntry* next) {
	$set(this, key, key);
	this->value = value;
	this->hash = hash;
	$set(this, next, next);
}

ExpandedNameTable$HashEntry::ExpandedNameTable$HashEntry() {
}

$Class* ExpandedNameTable$HashEntry::load$($String* name, bool initialize) {
	$loadClass(ExpandedNameTable$HashEntry, name, initialize, &_ExpandedNameTable$HashEntry_ClassInfo_, allocate$ExpandedNameTable$HashEntry);
	return class$;
}

$Class* ExpandedNameTable$HashEntry::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com