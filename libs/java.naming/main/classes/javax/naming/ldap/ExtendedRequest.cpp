#include <javax/naming/ldap/ExtendedRequest.h>

#include <javax/naming/ldap/ExtendedResponse.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace naming {
		namespace ldap {

$MethodInfo _ExtendedRequest_MethodInfo_[] = {
	{"createExtendedResponse", "(Ljava/lang/String;[BII)Ljavax/naming/ldap/ExtendedResponse;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"getEncodedValue", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ExtendedRequest_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.ldap.ExtendedRequest",
	nullptr,
	"java.io.Serializable",
	nullptr,
	_ExtendedRequest_MethodInfo_
};

$Object* allocate$ExtendedRequest($Class* clazz) {
	return $of($alloc(ExtendedRequest));
}

$Class* ExtendedRequest::load$($String* name, bool initialize) {
	$loadClass(ExtendedRequest, name, initialize, &_ExtendedRequest_ClassInfo_, allocate$ExtendedRequest);
	return class$;
}

$Class* ExtendedRequest::class$ = nullptr;

		} // ldap
	} // naming
} // javax