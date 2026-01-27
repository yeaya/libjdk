#include <com/sun/org/apache/xml/internal/utils/StringToIntTable.h>

#include <jcpp.h>

#undef INVALID_KEY

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

$FieldInfo _StringToIntTable_FieldInfo_[] = {
	{"INVALID_KEY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StringToIntTable, INVALID_KEY)},
	{"m_blocksize", "I", nullptr, $PRIVATE, $field(StringToIntTable, m_blocksize)},
	{"m_map", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(StringToIntTable, m_map)},
	{"m_values", "[I", nullptr, $PRIVATE, $field(StringToIntTable, m_values)},
	{"m_firstFree", "I", nullptr, $PRIVATE, $field(StringToIntTable, m_firstFree)},
	{"m_mapSize", "I", nullptr, $PRIVATE, $field(StringToIntTable, m_mapSize)},
	{}
};

$MethodInfo _StringToIntTable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StringToIntTable, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(StringToIntTable, init$, void, int32_t)},
	{"contains", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL, $method(StringToIntTable, contains, bool, $String*)},
	{"get", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $FINAL, $method(StringToIntTable, get, int32_t, $String*)},
	{"getIgnoreCase", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $FINAL, $method(StringToIntTable, getIgnoreCase, int32_t, $String*)},
	{"getLength", "()I", nullptr, $PUBLIC | $FINAL, $method(StringToIntTable, getLength, int32_t)},
	{"keys", "()[Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(StringToIntTable, keys, $StringArray*)},
	{"put", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $FINAL, $method(StringToIntTable, put, void, $String*, int32_t)},
	{}
};

$ClassInfo _StringToIntTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.StringToIntTable",
	"java.lang.Object",
	nullptr,
	_StringToIntTable_FieldInfo_,
	_StringToIntTable_MethodInfo_
};

$Object* allocate$StringToIntTable($Class* clazz) {
	return $of($alloc(StringToIntTable));
}

void StringToIntTable::init$() {
	this->m_firstFree = 0;
	this->m_blocksize = 8;
	this->m_mapSize = this->m_blocksize;
	$set(this, m_map, $new($StringArray, this->m_blocksize));
	$set(this, m_values, $new($ints, this->m_blocksize));
}

void StringToIntTable::init$(int32_t blocksize) {
	this->m_firstFree = 0;
	this->m_blocksize = blocksize;
	this->m_mapSize = blocksize;
	$set(this, m_map, $new($StringArray, blocksize));
	$set(this, m_values, $new($ints, this->m_blocksize));
}

int32_t StringToIntTable::getLength() {
	return this->m_firstFree;
}

void StringToIntTable::put($String* key, int32_t value) {
	$useLocalCurrentObjectStackCache();
	if ((this->m_firstFree + 1) >= this->m_mapSize) {
		this->m_mapSize += this->m_blocksize;
		$var($StringArray, newMap, $new($StringArray, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
		$var($ints, newValues, $new($ints, this->m_mapSize));
		$System::arraycopy(this->m_values, 0, newValues, 0, this->m_firstFree + 1);
		$set(this, m_values, newValues);
	}
	$nc(this->m_map)->set(this->m_firstFree, key);
	$nc(this->m_values)->set(this->m_firstFree, value);
	++this->m_firstFree;
}

int32_t StringToIntTable::get($String* key) {
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		if ($nc($nc(this->m_map)->get(i))->equals(key)) {
			return $nc(this->m_values)->get(i);
		}
	}
	return StringToIntTable::INVALID_KEY;
}

int32_t StringToIntTable::getIgnoreCase($String* key) {
	if (nullptr == key) {
		return StringToIntTable::INVALID_KEY;
	}
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		if ($nc($nc(this->m_map)->get(i))->equalsIgnoreCase(key)) {
			return $nc(this->m_values)->get(i);
		}
	}
	return StringToIntTable::INVALID_KEY;
}

bool StringToIntTable::contains($String* key) {
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		if ($nc($nc(this->m_map)->get(i))->equals(key)) {
			return true;
		}
	}
	return false;
}

$StringArray* StringToIntTable::keys() {
	$var($StringArray, keysArr, $new($StringArray, this->m_firstFree));
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		keysArr->set(i, $nc(this->m_map)->get(i));
	}
	return keysArr;
}

StringToIntTable::StringToIntTable() {
}

$Class* StringToIntTable::load$($String* name, bool initialize) {
	$loadClass(StringToIntTable, name, initialize, &_StringToIntTable_ClassInfo_, allocate$StringToIntTable);
	return class$;
}

$Class* StringToIntTable::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com