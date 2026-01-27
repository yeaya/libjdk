#include <com/sun/org/apache/xml/internal/utils/CharKey.h>

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

$FieldInfo _CharKey_FieldInfo_[] = {
	{"m_char", "C", nullptr, $PRIVATE, $field(CharKey, m_char)},
	{}
};

$MethodInfo _CharKey_MethodInfo_[] = {
	{"<init>", "(C)V", nullptr, $PUBLIC, $method(CharKey, init$, void, char16_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(CharKey, init$, void)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(CharKey, equals, bool, Object$*)},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(CharKey, hashCode, int32_t)},
	{"setChar", "(C)V", nullptr, $PUBLIC | $FINAL, $method(CharKey, setChar, void, char16_t)},
	{}
};

$ClassInfo _CharKey_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.CharKey",
	"java.lang.Object",
	nullptr,
	_CharKey_FieldInfo_,
	_CharKey_MethodInfo_
};

$Object* allocate$CharKey($Class* clazz) {
	return $of($alloc(CharKey));
}

void CharKey::init$(char16_t key) {
	this->m_char = key;
}

void CharKey::init$() {
}

void CharKey::setChar(char16_t c) {
	this->m_char = c;
}

int32_t CharKey::hashCode() {
	return (int32_t)this->m_char;
}

bool CharKey::equals(Object$* obj) {
	return $nc(($cast(CharKey, obj)))->m_char == this->m_char;
}

CharKey::CharKey() {
}

$Class* CharKey::load$($String* name, bool initialize) {
	$loadClass(CharKey, name, initialize, &_CharKey_ClassInfo_, allocate$CharKey);
	return class$;
}

$Class* CharKey::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com