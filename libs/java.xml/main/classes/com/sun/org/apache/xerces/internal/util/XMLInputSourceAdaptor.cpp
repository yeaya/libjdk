#include <com/sun/org/apache/xerces/internal/util/XMLInputSourceAdaptor.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/util/URI$MalformedURIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <jcpp.h>

using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $URI$MalformedURIException = ::com::sun::org::apache::xerces::internal::util::URI$MalformedURIException;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _XMLInputSourceAdaptor_FieldInfo_[] = {
	{"fSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PUBLIC | $FINAL, $field(XMLInputSourceAdaptor, fSource)},
	{}
};

$MethodInfo _XMLInputSourceAdaptor_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $method(XMLInputSourceAdaptor, init$, void, $XMLInputSource*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLInputSourceAdaptor, getSystemId, $String*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLInputSourceAdaptor, setSystemId, void, $String*)},
	{}
};

$ClassInfo _XMLInputSourceAdaptor_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.XMLInputSourceAdaptor",
	"java.lang.Object",
	"javax.xml.transform.Source",
	_XMLInputSourceAdaptor_FieldInfo_,
	_XMLInputSourceAdaptor_MethodInfo_
};

$Object* allocate$XMLInputSourceAdaptor($Class* clazz) {
	return $of($alloc(XMLInputSourceAdaptor));
}

void XMLInputSourceAdaptor::init$($XMLInputSource* core) {
	$set(this, fSource, core);
}

void XMLInputSourceAdaptor::setSystemId($String* systemId) {
	$nc(this->fSource)->setSystemId(systemId);
}

$String* XMLInputSourceAdaptor::getSystemId() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, var$0, $nc(this->fSource)->getSystemId());
		return $XMLEntityManager::expandSystemId(var$0, $($nc(this->fSource)->getBaseSystemId()), false);
	} catch ($URI$MalformedURIException& e) {
		return $nc(this->fSource)->getSystemId();
	}
	$shouldNotReachHere();
}

XMLInputSourceAdaptor::XMLInputSourceAdaptor() {
}

$Class* XMLInputSourceAdaptor::load$($String* name, bool initialize) {
	$loadClass(XMLInputSourceAdaptor, name, initialize, &_XMLInputSourceAdaptor_ClassInfo_, allocate$XMLInputSourceAdaptor);
	return class$;
}

$Class* XMLInputSourceAdaptor::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com