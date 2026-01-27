#include <com/sun/org/apache/xml/internal/utils/StringToStringTableVector.h>

#include <com/sun/org/apache/xml/internal/utils/StringToStringTable.h>
#include <jcpp.h>

using $StringToStringTableArray = $Array<::com::sun::org::apache::xml::internal::utils::StringToStringTable>;
using $StringToStringTable = ::com::sun::org::apache::xml::internal::utils::StringToStringTable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _StringToStringTableVector_FieldInfo_[] = {
	{"m_blocksize", "I", nullptr, $PRIVATE, $field(StringToStringTableVector, m_blocksize)},
	{"m_map", "[Lcom/sun/org/apache/xml/internal/utils/StringToStringTable;", nullptr, $PRIVATE, $field(StringToStringTableVector, m_map)},
	{"m_firstFree", "I", nullptr, $PRIVATE, $field(StringToStringTableVector, m_firstFree)},
	{"m_mapSize", "I", nullptr, $PRIVATE, $field(StringToStringTableVector, m_mapSize)},
	{}
};

$MethodInfo _StringToStringTableVector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StringToStringTableVector, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(StringToStringTableVector, init$, void, int32_t)},
	{"addElement", "(Lcom/sun/org/apache/xml/internal/utils/StringToStringTable;)V", nullptr, $PUBLIC | $FINAL, $method(StringToStringTableVector, addElement, void, $StringToStringTable*)},
	{"contains", "(Lcom/sun/org/apache/xml/internal/utils/StringToStringTable;)Z", nullptr, $PUBLIC | $FINAL, $method(StringToStringTableVector, contains, bool, $StringToStringTable*)},
	{"containsKey", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL, $method(StringToStringTableVector, containsKey, bool, $String*)},
	{"elementAt", "(I)Lcom/sun/org/apache/xml/internal/utils/StringToStringTable;", nullptr, $PUBLIC | $FINAL, $method(StringToStringTableVector, elementAt, $StringToStringTable*, int32_t)},
	{"get", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(StringToStringTableVector, get, $String*, $String*)},
	{"getLength", "()I", nullptr, $PUBLIC | $FINAL, $method(StringToStringTableVector, getLength, int32_t)},
	{"removeLastElem", "()V", nullptr, $PUBLIC | $FINAL, $method(StringToStringTableVector, removeLastElem, void)},
	{"size", "()I", nullptr, $PUBLIC | $FINAL, $method(StringToStringTableVector, size, int32_t)},
	{}
};

$ClassInfo _StringToStringTableVector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.StringToStringTableVector",
	"java.lang.Object",
	nullptr,
	_StringToStringTableVector_FieldInfo_,
	_StringToStringTableVector_MethodInfo_
};

$Object* allocate$StringToStringTableVector($Class* clazz) {
	return $of($alloc(StringToStringTableVector));
}

void StringToStringTableVector::init$() {
	this->m_firstFree = 0;
	this->m_blocksize = 8;
	this->m_mapSize = this->m_blocksize;
	$set(this, m_map, $new($StringToStringTableArray, this->m_blocksize));
}

void StringToStringTableVector::init$(int32_t blocksize) {
	this->m_firstFree = 0;
	this->m_blocksize = blocksize;
	this->m_mapSize = blocksize;
	$set(this, m_map, $new($StringToStringTableArray, blocksize));
}

int32_t StringToStringTableVector::getLength() {
	return this->m_firstFree;
}

int32_t StringToStringTableVector::size() {
	return this->m_firstFree;
}

void StringToStringTableVector::addElement($StringToStringTable* value) {
	if ((this->m_firstFree + 1) >= this->m_mapSize) {
		this->m_mapSize += this->m_blocksize;
		$var($StringToStringTableArray, newMap, $new($StringToStringTableArray, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
	}
	$nc(this->m_map)->set(this->m_firstFree, value);
	++this->m_firstFree;
}

$String* StringToStringTableVector::get($String* key) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = this->m_firstFree - 1; i >= 0; --i) {
		$var($String, nsuri, $nc($nc(this->m_map)->get(i))->get(key));
		if (nsuri != nullptr) {
			return nsuri;
		}
	}
	return nullptr;
}

bool StringToStringTableVector::containsKey($String* key) {
	for (int32_t i = this->m_firstFree - 1; i >= 0; --i) {
		if ($nc($nc(this->m_map)->get(i))->get(key) != nullptr) {
			return true;
		}
	}
	return false;
}

void StringToStringTableVector::removeLastElem() {
	if (this->m_firstFree > 0) {
		$nc(this->m_map)->set(this->m_firstFree, nullptr);
		--this->m_firstFree;
	}
}

$StringToStringTable* StringToStringTableVector::elementAt(int32_t i) {
	return $nc(this->m_map)->get(i);
}

bool StringToStringTableVector::contains($StringToStringTable* s) {
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		if ($nc($of($nc(this->m_map)->get(i)))->equals(s)) {
			return true;
		}
	}
	return false;
}

StringToStringTableVector::StringToStringTableVector() {
}

$Class* StringToStringTableVector::load$($String* name, bool initialize) {
	$loadClass(StringToStringTableVector, name, initialize, &_StringToStringTableVector_ClassInfo_, allocate$StringToStringTableVector);
	return class$;
}

$Class* StringToStringTableVector::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com