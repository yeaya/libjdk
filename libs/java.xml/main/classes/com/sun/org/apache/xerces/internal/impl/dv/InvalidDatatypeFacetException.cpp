#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeFacetException.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/DatatypeException.h>
#include <jcpp.h>

using $DatatypeException = ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

$FieldInfo _InvalidDatatypeFacetException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(InvalidDatatypeFacetException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidDatatypeFacetException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(InvalidDatatypeFacetException, init$, void, $String*, $ObjectArray*)},
	{}
};

$ClassInfo _InvalidDatatypeFacetException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeFacetException",
	"com.sun.org.apache.xerces.internal.impl.dv.DatatypeException",
	nullptr,
	_InvalidDatatypeFacetException_FieldInfo_,
	_InvalidDatatypeFacetException_MethodInfo_
};

$Object* allocate$InvalidDatatypeFacetException($Class* clazz) {
	return $of($alloc(InvalidDatatypeFacetException));
}

void InvalidDatatypeFacetException::init$($String* key, $ObjectArray* args) {
	$DatatypeException::init$(key, args);
}

InvalidDatatypeFacetException::InvalidDatatypeFacetException() {
}

InvalidDatatypeFacetException::InvalidDatatypeFacetException(const InvalidDatatypeFacetException& e) : $DatatypeException(e) {
}

void InvalidDatatypeFacetException::throw$() {
	throw *this;
}

$Class* InvalidDatatypeFacetException::load$($String* name, bool initialize) {
	$loadClass(InvalidDatatypeFacetException, name, initialize, &_InvalidDatatypeFacetException_ClassInfo_, allocate$InvalidDatatypeFacetException);
	return class$;
}

$Class* InvalidDatatypeFacetException::class$ = nullptr;

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com