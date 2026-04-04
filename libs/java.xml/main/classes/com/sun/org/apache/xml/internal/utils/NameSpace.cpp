#include <com/sun/org/apache/xml/internal/utils/NameSpace.h>
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

void NameSpace::init$($String* prefix, $String* uri) {
	$set(this, m_next, nullptr);
	$set(this, m_prefix, prefix);
	$set(this, m_uri, uri);
}

NameSpace::NameSpace() {
}

$Class* NameSpace::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NameSpace, serialVersionUID)},
		{"m_next", "Lcom/sun/org/apache/xml/internal/utils/NameSpace;", nullptr, $PUBLIC, $field(NameSpace, m_next)},
		{"m_prefix", "Ljava/lang/String;", nullptr, $PUBLIC, $field(NameSpace, m_prefix)},
		{"m_uri", "Ljava/lang/String;", nullptr, $PUBLIC, $field(NameSpace, m_uri)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NameSpace, init$, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.utils.NameSpace",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NameSpace, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NameSpace);
	});
	return class$;
}

$Class* NameSpace::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com