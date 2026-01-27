#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable$HashEntry.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExtendedType.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef CDATA_SECTION
#undef COMMENT
#undef DOCUMENT
#undef DOCUMENT_FRAGMENT
#undef DOCUMENT_TYPE
#undef ELEMENT
#undef ENTITY
#undef ENTITY_REFERENCE
#undef NAMESPACE
#undef NOTATION
#undef NTYPES
#undef NULL
#undef PROCESSING_INSTRUCTION
#undef TEXT

using $ExpandedNameTable$HashEntryArray = $Array<::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable$HashEntry>;
using $ExtendedTypeArray = $Array<::com::sun::org::apache::xml::internal::dtm::ref::ExtendedType>;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $ExpandedNameTable$HashEntry = ::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable$HashEntry;
using $ExtendedType = ::com::sun::org::apache::xml::internal::dtm::ref::ExtendedType;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
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

$FieldInfo _ExpandedNameTable_FieldInfo_[] = {
	{"m_extendedTypes", "[Lcom/sun/org/apache/xml/internal/dtm/ref/ExtendedType;", nullptr, $PRIVATE, $field(ExpandedNameTable, m_extendedTypes)},
	{"m_initialSize", "I", nullptr, $PRIVATE | $STATIC, $staticField(ExpandedNameTable, m_initialSize)},
	{"m_nextType", "I", nullptr, $PRIVATE, $field(ExpandedNameTable, m_nextType)},
	{"ELEMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExpandedNameTable, ELEMENT)},
	{"ATTRIBUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExpandedNameTable, ATTRIBUTE)},
	{"TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExpandedNameTable, TEXT)},
	{"CDATA_SECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExpandedNameTable, CDATA_SECTION)},
	{"ENTITY_REFERENCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExpandedNameTable, ENTITY_REFERENCE)},
	{"ENTITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExpandedNameTable, ENTITY)},
	{"PROCESSING_INSTRUCTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExpandedNameTable, PROCESSING_INSTRUCTION)},
	{"COMMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExpandedNameTable, COMMENT)},
	{"DOCUMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExpandedNameTable, DOCUMENT)},
	{"DOCUMENT_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExpandedNameTable, DOCUMENT_TYPE)},
	{"DOCUMENT_FRAGMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExpandedNameTable, DOCUMENT_FRAGMENT)},
	{"NOTATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExpandedNameTable, NOTATION)},
	{"NAMESPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExpandedNameTable, NAMESPACE)},
	{"hashET", "Lcom/sun/org/apache/xml/internal/dtm/ref/ExtendedType;", nullptr, 0, $field(ExpandedNameTable, hashET)},
	{"m_defaultExtendedTypes", "[Lcom/sun/org/apache/xml/internal/dtm/ref/ExtendedType;", nullptr, $PRIVATE | $STATIC, $staticField(ExpandedNameTable, m_defaultExtendedTypes)},
	{"m_loadFactor", "F", nullptr, $PRIVATE | $STATIC, $staticField(ExpandedNameTable, m_loadFactor)},
	{"m_initialCapacity", "I", nullptr, $PRIVATE | $STATIC, $staticField(ExpandedNameTable, m_initialCapacity)},
	{"m_capacity", "I", nullptr, $PRIVATE, $field(ExpandedNameTable, m_capacity)},
	{"m_threshold", "I", nullptr, $PRIVATE, $field(ExpandedNameTable, m_threshold)},
	{"m_table", "[Lcom/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable$HashEntry;", nullptr, $PRIVATE, $field(ExpandedNameTable, m_table)},
	{}
};

$MethodInfo _ExpandedNameTable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ExpandedNameTable, init$, void)},
	{"getExpandedTypeID", "(Ljava/lang/String;Ljava/lang/String;I)I", nullptr, $PUBLIC, $virtualMethod(ExpandedNameTable, getExpandedTypeID, int32_t, $String*, $String*, int32_t)},
	{"getExpandedTypeID", "(Ljava/lang/String;Ljava/lang/String;IZ)I", nullptr, $PUBLIC, $virtualMethod(ExpandedNameTable, getExpandedTypeID, int32_t, $String*, $String*, int32_t, bool)},
	{"getExpandedTypeID", "(I)I", nullptr, $PUBLIC, $virtualMethod(ExpandedNameTable, getExpandedTypeID, int32_t, int32_t)},
	{"getExtendedTypes", "()[Lcom/sun/org/apache/xml/internal/dtm/ref/ExtendedType;", nullptr, $PUBLIC, $virtualMethod(ExpandedNameTable, getExtendedTypes, $ExtendedTypeArray*)},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ExpandedNameTable, getLocalName, $String*, int32_t)},
	{"getLocalNameID", "(I)I", nullptr, $PUBLIC | $FINAL, $method(ExpandedNameTable, getLocalNameID, int32_t, int32_t)},
	{"getNamespace", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ExpandedNameTable, getNamespace, $String*, int32_t)},
	{"getNamespaceID", "(I)I", nullptr, $PUBLIC | $FINAL, $method(ExpandedNameTable, getNamespaceID, int32_t, int32_t)},
	{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(ExpandedNameTable, getSize, int32_t)},
	{"getType", "(I)S", nullptr, $PUBLIC | $FINAL, $method(ExpandedNameTable, getType, int16_t, int32_t)},
	{"initExtendedTypes", "()V", nullptr, $PRIVATE, $method(ExpandedNameTable, initExtendedTypes, void)},
	{"rehash", "()V", nullptr, $PRIVATE, $method(ExpandedNameTable, rehash, void)},
	{}
};

$InnerClassInfo _ExpandedNameTable_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.ExpandedNameTable$HashEntry", "com.sun.org.apache.xml.internal.dtm.ref.ExpandedNameTable", "HashEntry", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ExpandedNameTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.ExpandedNameTable",
	"java.lang.Object",
	nullptr,
	_ExpandedNameTable_FieldInfo_,
	_ExpandedNameTable_MethodInfo_,
	nullptr,
	nullptr,
	_ExpandedNameTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.ExpandedNameTable$HashEntry"
};

$Object* allocate$ExpandedNameTable($Class* clazz) {
	return $of($alloc(ExpandedNameTable));
}

int32_t ExpandedNameTable::m_initialSize = 0;
$ExtendedTypeArray* ExpandedNameTable::m_defaultExtendedTypes = nullptr;
float ExpandedNameTable::m_loadFactor = 0.0;
int32_t ExpandedNameTable::m_initialCapacity = 0;

void ExpandedNameTable::init$() {
	$set(this, hashET, $new($ExtendedType, -1, ""_s, ""_s));
	this->m_capacity = ExpandedNameTable::m_initialCapacity;
	this->m_threshold = $cast(int32_t, (this->m_capacity * ExpandedNameTable::m_loadFactor));
	$set(this, m_table, $new($ExpandedNameTable$HashEntryArray, this->m_capacity));
	initExtendedTypes();
}

void ExpandedNameTable::initExtendedTypes() {
	$useLocalCurrentObjectStackCache();
	$set(this, m_extendedTypes, $new($ExtendedTypeArray, ExpandedNameTable::m_initialSize));
	for (int32_t i = 0; i < $DTM::NTYPES; ++i) {
		$nc(this->m_extendedTypes)->set(i, $nc(ExpandedNameTable::m_defaultExtendedTypes)->get(i));
		$nc(this->m_table)->set(i, $$new($ExpandedNameTable$HashEntry, $nc(ExpandedNameTable::m_defaultExtendedTypes)->get(i), i, i, nullptr));
	}
	this->m_nextType = $DTM::NTYPES;
}

int32_t ExpandedNameTable::getExpandedTypeID($String* namespace$, $String* localName, int32_t type) {
	return getExpandedTypeID(namespace$, localName, type, false);
}

int32_t ExpandedNameTable::getExpandedTypeID($String* namespace$$renamed, $String* localName$renamed, int32_t type, bool searchOnly) {
	$useLocalCurrentObjectStackCache();
	$var($String, localName, localName$renamed);
	$var($String, namespace$, namespace$$renamed);
	if (nullptr == namespace$) {
		$assign(namespace$, ""_s);
	}
	if (nullptr == localName) {
		$assign(localName, ""_s);
	}
	int32_t var$0 = type + $nc(namespace$)->hashCode();
	int32_t hash = var$0 + $nc(localName)->hashCode();
	$nc(this->hashET)->redefine(type, namespace$, localName, hash);
	int32_t index = $mod(hash, this->m_capacity);
	if (index < 0) {
		index = -index;
	}
	{
		$var($ExpandedNameTable$HashEntry, e, $nc(this->m_table)->get(index));
		for (; e != nullptr; $assign(e, $nc(e)->next)) {
			if (e->hash == hash && $nc(e->key)->equals(this->hashET)) {
				return e->value;
			}
		}
	}
	if (searchOnly) {
		return $DTM::NULL;
	}
	if (this->m_nextType > this->m_threshold) {
		rehash();
		index = $mod(hash, this->m_capacity);
		if (index < 0) {
			index = -index;
		}
	}
	$var($ExtendedType, newET, $new($ExtendedType, type, namespace$, localName, hash));
	if ($nc(this->m_extendedTypes)->length == this->m_nextType) {
		$var($ExtendedTypeArray, newArray, $new($ExtendedTypeArray, $nc(this->m_extendedTypes)->length * 2));
		$System::arraycopy(this->m_extendedTypes, 0, newArray, 0, $nc(this->m_extendedTypes)->length);
		$set(this, m_extendedTypes, newArray);
	}
	$nc(this->m_extendedTypes)->set(this->m_nextType, newET);
	$var($ExpandedNameTable$HashEntry, entry, $new($ExpandedNameTable$HashEntry, newET, this->m_nextType, hash, $nc(this->m_table)->get(index)));
	$nc(this->m_table)->set(index, entry);
	return this->m_nextType++;
}

void ExpandedNameTable::rehash() {
	$useLocalCurrentObjectStackCache();
	int32_t oldCapacity = this->m_capacity;
	$var($ExpandedNameTable$HashEntryArray, oldTable, this->m_table);
	int32_t newCapacity = 2 * oldCapacity + 1;
	this->m_capacity = newCapacity;
	this->m_threshold = $cast(int32_t, (newCapacity * ExpandedNameTable::m_loadFactor));
	$set(this, m_table, $new($ExpandedNameTable$HashEntryArray, newCapacity));
	for (int32_t i = oldCapacity - 1; i >= 0; --i) {
		{
			$var($ExpandedNameTable$HashEntry, old, $nc(oldTable)->get(i));
			for (; old != nullptr;) {
				$var($ExpandedNameTable$HashEntry, e, old);
				$assign(old, old->next);
				int32_t newIndex = $mod(e->hash, newCapacity);
				if (newIndex < 0) {
					newIndex = -newIndex;
				}
				$set(e, next, $nc(this->m_table)->get(newIndex));
				$nc(this->m_table)->set(newIndex, e);
			}
		}
	}
}

int32_t ExpandedNameTable::getExpandedTypeID(int32_t type) {
	return type;
}

$String* ExpandedNameTable::getLocalName(int32_t ExpandedNameID) {
	return $nc($nc(this->m_extendedTypes)->get(ExpandedNameID))->getLocalName();
}

int32_t ExpandedNameTable::getLocalNameID(int32_t ExpandedNameID) {
	if ($nc($($nc($nc(this->m_extendedTypes)->get(ExpandedNameID))->getLocalName()))->equals(""_s)) {
		return 0;
	} else {
		return ExpandedNameID;
	}
}

$String* ExpandedNameTable::getNamespace(int32_t ExpandedNameID) {
	$var($String, namespace$, $nc($nc(this->m_extendedTypes)->get(ExpandedNameID))->getNamespace());
	return ($nc(namespace$)->equals(""_s) ? ($String*)nullptr : namespace$);
}

int32_t ExpandedNameTable::getNamespaceID(int32_t ExpandedNameID) {
	if ($nc($($nc($nc(this->m_extendedTypes)->get(ExpandedNameID))->getNamespace()))->equals(""_s)) {
		return 0;
	} else {
		return ExpandedNameID;
	}
}

int16_t ExpandedNameTable::getType(int32_t ExpandedNameID) {
	return (int16_t)$nc($nc(this->m_extendedTypes)->get(ExpandedNameID))->getNodeType();
}

int32_t ExpandedNameTable::getSize() {
	return this->m_nextType;
}

$ExtendedTypeArray* ExpandedNameTable::getExtendedTypes() {
	return this->m_extendedTypes;
}

void clinit$ExpandedNameTable($Class* class$) {
	$useLocalCurrentObjectStackCache();
	ExpandedNameTable::m_initialSize = 128;
	ExpandedNameTable::m_loadFactor = 0.75f;
	ExpandedNameTable::m_initialCapacity = 203;
	{
		$assignStatic(ExpandedNameTable::m_defaultExtendedTypes, $new($ExtendedTypeArray, $DTM::NTYPES));
		for (int32_t i = 0; i < $DTM::NTYPES; ++i) {
			$nc(ExpandedNameTable::m_defaultExtendedTypes)->set(i, $$new($ExtendedType, i, ""_s, ""_s));
		}
	}
}

ExpandedNameTable::ExpandedNameTable() {
}

$Class* ExpandedNameTable::load$($String* name, bool initialize) {
	$loadClass(ExpandedNameTable, name, initialize, &_ExpandedNameTable_ClassInfo_, clinit$ExpandedNameTable, allocate$ExpandedNameTable);
	return class$;
}

$Class* ExpandedNameTable::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com