#include <com/sun/org/apache/xml/internal/utils/res/StringArrayWrapper.h>
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
							namespace res {

void StringArrayWrapper::init$($StringArray* arg) {
	$set(this, m_string, arg);
}

$String* StringArrayWrapper::getString(int32_t index) {
	return $nc(this->m_string)->get(index);
}

int32_t StringArrayWrapper::getLength() {
	return $nc(this->m_string)->length;
}

StringArrayWrapper::StringArrayWrapper() {
}

$Class* StringArrayWrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"m_string", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(StringArrayWrapper, m_string)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StringArrayWrapper, init$, void, $StringArray*)},
		{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(StringArrayWrapper, getLength, int32_t)},
		{"getString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StringArrayWrapper, getString, $String*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.utils.res.StringArrayWrapper",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StringArrayWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringArrayWrapper);
	});
	return class$;
}

$Class* StringArrayWrapper::class$ = nullptr;

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com