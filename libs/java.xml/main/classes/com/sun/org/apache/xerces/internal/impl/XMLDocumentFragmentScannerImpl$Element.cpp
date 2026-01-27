#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Element.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <jcpp.h>

using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
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
						namespace impl {

$FieldInfo _XMLDocumentFragmentScannerImpl$Element_FieldInfo_[] = {
	{"qname", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC, $field(XMLDocumentFragmentScannerImpl$Element, qname)},
	{"fRawname", "[C", nullptr, $PUBLIC, $field(XMLDocumentFragmentScannerImpl$Element, fRawname)},
	{"next", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Element;", nullptr, $PUBLIC, $field(XMLDocumentFragmentScannerImpl$Element, next)},
	{}
};

$MethodInfo _XMLDocumentFragmentScannerImpl$Element_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Element;)V", nullptr, $PUBLIC, $method(XMLDocumentFragmentScannerImpl$Element, init$, void, $QName*, XMLDocumentFragmentScannerImpl$Element*)},
	{}
};

$InnerClassInfo _XMLDocumentFragmentScannerImpl$Element_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Element", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "Element", $PROTECTED | $STATIC | $FINAL},
	{}
};

$ClassInfo _XMLDocumentFragmentScannerImpl$Element_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Element",
	"java.lang.Object",
	nullptr,
	_XMLDocumentFragmentScannerImpl$Element_FieldInfo_,
	_XMLDocumentFragmentScannerImpl$Element_MethodInfo_,
	nullptr,
	nullptr,
	_XMLDocumentFragmentScannerImpl$Element_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl"
};

$Object* allocate$XMLDocumentFragmentScannerImpl$Element($Class* clazz) {
	return $of($alloc(XMLDocumentFragmentScannerImpl$Element));
}

void XMLDocumentFragmentScannerImpl$Element::init$($QName* qname, XMLDocumentFragmentScannerImpl$Element* next) {
	$nc(this->qname)->setValues(qname);
	$set(this, fRawname, $nc($nc(qname)->rawname)->toCharArray());
	$set(this, next, next);
}

XMLDocumentFragmentScannerImpl$Element::XMLDocumentFragmentScannerImpl$Element() {
}

$Class* XMLDocumentFragmentScannerImpl$Element::load$($String* name, bool initialize) {
	$loadClass(XMLDocumentFragmentScannerImpl$Element, name, initialize, &_XMLDocumentFragmentScannerImpl$Element_ClassInfo_, allocate$XMLDocumentFragmentScannerImpl$Element);
	return class$;
}

$Class* XMLDocumentFragmentScannerImpl$Element::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com