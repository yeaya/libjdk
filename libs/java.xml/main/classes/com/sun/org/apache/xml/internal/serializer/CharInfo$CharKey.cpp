#include <com/sun/org/apache/xml/internal/serializer/CharInfo$CharKey.h>
#include <com/sun/org/apache/xml/internal/serializer/CharInfo.h>
#include <jcpp.h>

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
						namespace serializer {

void CharInfo$CharKey::init$(char16_t key) {
	this->m_char = key;
}

void CharInfo$CharKey::init$() {
}

void CharInfo$CharKey::setChar(char16_t c) {
	this->m_char = c;
}

int32_t CharInfo$CharKey::hashCode() {
	return (int32_t)this->m_char;
}

bool CharInfo$CharKey::equals(Object$* obj) {
	return $nc($cast(CharInfo$CharKey, obj))->m_char == this->m_char;
}

CharInfo$CharKey::CharInfo$CharKey() {
}

$Class* CharInfo$CharKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"m_char", "C", nullptr, $PRIVATE, $field(CharInfo$CharKey, m_char)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(C)V", nullptr, $PUBLIC, $method(CharInfo$CharKey, init$, void, char16_t)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(CharInfo$CharKey, init$, void)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(CharInfo$CharKey, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(CharInfo$CharKey, hashCode, int32_t)},
		{"setChar", "(C)V", nullptr, $PUBLIC | $FINAL, $method(CharInfo$CharKey, setChar, void, char16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.serializer.CharInfo$CharKey", "com.sun.org.apache.xml.internal.serializer.CharInfo", "CharKey", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.CharInfo$CharKey",
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
		"com.sun.org.apache.xml.internal.serializer.CharInfo"
	};
	$loadClass(CharInfo$CharKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharInfo$CharKey);
	});
	return class$;
}

$Class* CharInfo$CharKey::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com