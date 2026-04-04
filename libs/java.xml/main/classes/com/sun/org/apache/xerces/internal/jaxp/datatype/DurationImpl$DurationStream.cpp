#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DurationImpl$DurationStream.h>
#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DurationImpl.h>
#include <jcpp.h>

using $DurationImpl = ::com::sun::org::apache::xerces::internal::jaxp::datatype::DurationImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace datatype {

void DurationImpl$DurationStream::init$($String* _lexical) {
	$set(this, lexical, _lexical);
}

$Object* DurationImpl$DurationStream::readResolve() {
	return $of($new($DurationImpl, this->lexical));
}

DurationImpl$DurationStream::DurationImpl$DurationStream() {
}

$Class* DurationImpl$DurationStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lexical", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DurationImpl$DurationStream, lexical)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DurationImpl$DurationStream, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(DurationImpl$DurationStream, init$, void, $String*)},
		{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(DurationImpl$DurationStream, readResolve, $Object*), "java.io.ObjectStreamException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl$DurationStream", "com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl", "DurationStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl$DurationStream",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl"
	};
	$loadClass(DurationImpl$DurationStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DurationImpl$DurationStream);
	});
	return class$;
}

$Class* DurationImpl$DurationStream::class$ = nullptr;

							} // datatype
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com