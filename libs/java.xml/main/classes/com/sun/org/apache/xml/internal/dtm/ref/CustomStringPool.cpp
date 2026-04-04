#include <com/sun/org/apache/xml/internal/dtm/ref/CustomStringPool.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMStringPool.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef NULL

using $DTMStringPool = ::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

void CustomStringPool::init$() {
	$DTMStringPool::init$();
	$set(this, m_stringToInt, $new($HashMap));
}

void CustomStringPool::removeAllElements() {
	$nc(this->m_intToString)->clear();
	if (this->m_stringToInt != nullptr) {
		this->m_stringToInt->clear();
	}
}

$String* CustomStringPool::indexToString(int32_t i) {
	return $cast($String, $nc(this->m_intToString)->get(i));
}

int32_t CustomStringPool::stringToIndex($String* s) {
	if (s == nullptr) {
		return CustomStringPool::NULL;
	}
	$var($Integer, iobj, $cast($Integer, this->m_stringToInt->get(s)));
	if (iobj == nullptr) {
		$nc(this->m_intToString)->add(s);
		$assign(iobj, $Integer::valueOf(this->m_intToString->size()));
		this->m_stringToInt->put(s, iobj);
	}
	return $nc(iobj)->intValue();
}

CustomStringPool::CustomStringPool() {
}

$Class* CustomStringPool::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"m_stringToInt", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $FINAL, $field(CustomStringPool, m_stringToInt)},
		{"NULL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CustomStringPool, NULL)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CustomStringPool, init$, void)},
		{"indexToString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CustomStringPool, indexToString, $String*, int32_t), "java.lang.IndexOutOfBoundsException"},
		{"removeAllElements", "()V", nullptr, $PUBLIC, $virtualMethod(CustomStringPool, removeAllElements, void)},
		{"stringToIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(CustomStringPool, stringToIndex, int32_t, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.dtm.ref.CustomStringPool",
		"com.sun.org.apache.xml.internal.dtm.ref.DTMStringPool",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CustomStringPool, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CustomStringPool);
	});
	return class$;
}

$Class* CustomStringPool::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com