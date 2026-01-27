#include <com/sun/org/apache/xml/internal/utils/StringToStringTable.h>

#include <jcpp.h>

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

$FieldInfo _StringToStringTable_FieldInfo_[] = {
	{"m_blocksize", "I", nullptr, $PRIVATE, $field(StringToStringTable, m_blocksize)},
	{"m_map", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(StringToStringTable, m_map)},
	{"m_firstFree", "I", nullptr, $PRIVATE, $field(StringToStringTable, m_firstFree)},
	{"m_mapSize", "I", nullptr, $PRIVATE, $field(StringToStringTable, m_mapSize)},
	{}
};

$MethodInfo _StringToStringTable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StringToStringTable, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(StringToStringTable, init$, void, int32_t)},
	{"contains", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL, $method(StringToStringTable, contains, bool, $String*)},
	{"containsValue", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL, $method(StringToStringTable, containsValue, bool, $String*)},
	{"elementAt", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(StringToStringTable, elementAt, $String*, int32_t)},
	{"get", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(StringToStringTable, get, $String*, $String*)},
	{"getByValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(StringToStringTable, getByValue, $String*, $String*)},
	{"getIgnoreCase", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(StringToStringTable, getIgnoreCase, $String*, $String*)},
	{"getLength", "()I", nullptr, $PUBLIC | $FINAL, $method(StringToStringTable, getLength, int32_t)},
	{"put", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(StringToStringTable, put, void, $String*, $String*)},
	{"remove", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(StringToStringTable, remove, void, $String*)},
	{}
};

$ClassInfo _StringToStringTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.StringToStringTable",
	"java.lang.Object",
	nullptr,
	_StringToStringTable_FieldInfo_,
	_StringToStringTable_MethodInfo_
};

$Object* allocate$StringToStringTable($Class* clazz) {
	return $of($alloc(StringToStringTable));
}

void StringToStringTable::init$() {
	this->m_firstFree = 0;
	this->m_blocksize = 16;
	this->m_mapSize = this->m_blocksize;
	$set(this, m_map, $new($StringArray, this->m_blocksize));
}

void StringToStringTable::init$(int32_t blocksize) {
	this->m_firstFree = 0;
	this->m_blocksize = blocksize;
	this->m_mapSize = blocksize;
	$set(this, m_map, $new($StringArray, blocksize));
}

int32_t StringToStringTable::getLength() {
	return this->m_firstFree;
}

void StringToStringTable::put($String* key, $String* value) {
	if ((this->m_firstFree + 2) >= this->m_mapSize) {
		this->m_mapSize += this->m_blocksize;
		$var($StringArray, newMap, $new($StringArray, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
	}
	$nc(this->m_map)->set(this->m_firstFree, key);
	++this->m_firstFree;
	$nc(this->m_map)->set(this->m_firstFree, value);
	++this->m_firstFree;
}

$String* StringToStringTable::get($String* key) {
	for (int32_t i = 0; i < this->m_firstFree; i += 2) {
		if ($nc($nc(this->m_map)->get(i))->equals(key)) {
			return $nc(this->m_map)->get(i + 1);
		}
	}
	return nullptr;
}

void StringToStringTable::remove($String* key) {
	for (int32_t i = 0; i < this->m_firstFree; i += 2) {
		if ($nc($nc(this->m_map)->get(i))->equals(key)) {
			if ((i + 2) < this->m_firstFree) {
				$System::arraycopy(this->m_map, i + 2, this->m_map, i, this->m_firstFree - (i + 2));
			}
			this->m_firstFree -= 2;
			$nc(this->m_map)->set(this->m_firstFree, nullptr);
			$nc(this->m_map)->set(this->m_firstFree + 1, nullptr);
			break;
		}
	}
}

$String* StringToStringTable::getIgnoreCase($String* key) {
	if (nullptr == key) {
		return nullptr;
	}
	for (int32_t i = 0; i < this->m_firstFree; i += 2) {
		if ($nc($nc(this->m_map)->get(i))->equalsIgnoreCase(key)) {
			return $nc(this->m_map)->get(i + 1);
		}
	}
	return nullptr;
}

$String* StringToStringTable::getByValue($String* val) {
	for (int32_t i = 1; i < this->m_firstFree; i += 2) {
		if ($nc($nc(this->m_map)->get(i))->equals(val)) {
			return $nc(this->m_map)->get(i - 1);
		}
	}
	return nullptr;
}

$String* StringToStringTable::elementAt(int32_t i) {
	return $nc(this->m_map)->get(i);
}

bool StringToStringTable::contains($String* key) {
	for (int32_t i = 0; i < this->m_firstFree; i += 2) {
		if ($nc($nc(this->m_map)->get(i))->equals(key)) {
			return true;
		}
	}
	return false;
}

bool StringToStringTable::containsValue($String* val) {
	for (int32_t i = 1; i < this->m_firstFree; i += 2) {
		if ($nc($nc(this->m_map)->get(i))->equals(val)) {
			return true;
		}
	}
	return false;
}

StringToStringTable::StringToStringTable() {
}

$Class* StringToStringTable::load$($String* name, bool initialize) {
	$loadClass(StringToStringTable, name, initialize, &_StringToStringTable_ClassInfo_, allocate$StringToStringTable);
	return class$;
}

$Class* StringToStringTable::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com