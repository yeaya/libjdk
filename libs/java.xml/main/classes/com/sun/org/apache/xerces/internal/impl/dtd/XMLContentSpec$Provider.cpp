#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec$Provider.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec.h>
#include <jcpp.h>

using $XMLContentSpec = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

$MethodInfo _XMLContentSpec$Provider_MethodInfo_[] = {
	{"getContentSpec", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLContentSpec$Provider, getContentSpec, bool, int32_t, $XMLContentSpec*)},
	{}
};

$InnerClassInfo _XMLContentSpec$Provider_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dtd.XMLContentSpec$Provider", "com.sun.org.apache.xerces.internal.impl.dtd.XMLContentSpec", "Provider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _XMLContentSpec$Provider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.dtd.XMLContentSpec$Provider",
	nullptr,
	nullptr,
	nullptr,
	_XMLContentSpec$Provider_MethodInfo_,
	nullptr,
	nullptr,
	_XMLContentSpec$Provider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dtd.XMLContentSpec"
};

$Object* allocate$XMLContentSpec$Provider($Class* clazz) {
	return $of($alloc(XMLContentSpec$Provider));
}

$Class* XMLContentSpec$Provider::load$($String* name, bool initialize) {
	$loadClass(XMLContentSpec$Provider, name, initialize, &_XMLContentSpec$Provider_ClassInfo_, allocate$XMLContentSpec$Provider);
	return class$;
}

$Class* XMLContentSpec$Provider::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com