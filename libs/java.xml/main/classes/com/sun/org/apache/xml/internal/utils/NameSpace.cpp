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

$FieldInfo _NameSpace_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NameSpace, serialVersionUID)},
	{"m_next", "Lcom/sun/org/apache/xml/internal/utils/NameSpace;", nullptr, $PUBLIC, $field(NameSpace, m_next)},
	{"m_prefix", "Ljava/lang/String;", nullptr, $PUBLIC, $field(NameSpace, m_prefix)},
	{"m_uri", "Ljava/lang/String;", nullptr, $PUBLIC, $field(NameSpace, m_uri)},
	{}
};

$MethodInfo _NameSpace_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NameSpace, init$, void, $String*, $String*)},
	{}
};

$ClassInfo _NameSpace_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.NameSpace",
	"java.lang.Object",
	"java.io.Serializable",
	_NameSpace_FieldInfo_,
	_NameSpace_MethodInfo_
};

$Object* allocate$NameSpace($Class* clazz) {
	return $of($alloc(NameSpace));
}

void NameSpace::init$($String* prefix, $String* uri) {
	$set(this, m_next, nullptr);
	$set(this, m_prefix, prefix);
	$set(this, m_uri, uri);
}

NameSpace::NameSpace() {
}

$Class* NameSpace::load$($String* name, bool initialize) {
	$loadClass(NameSpace, name, initialize, &_NameSpace_ClassInfo_, allocate$NameSpace);
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