#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNamedNodeMap$DTMException.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNamedNodeMap.h>
#include <org/w3c/dom/DOMException.h>
#include <jcpp.h>

using $DTMNamedNodeMap = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNamedNodeMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMException = ::org::w3c::dom::DOMException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _DTMNamedNodeMap$DTMException_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMNamedNodeMap;", nullptr, $FINAL | $SYNTHETIC, $field(DTMNamedNodeMap$DTMException, this$0)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DTMNamedNodeMap$DTMException, serialVersionUID)},
	{}
};

$MethodInfo _DTMNamedNodeMap$DTMException_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMNamedNodeMap;SLjava/lang/String;)V", nullptr, $PUBLIC, $method(DTMNamedNodeMap$DTMException, init$, void, $DTMNamedNodeMap*, int16_t, $String*)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMNamedNodeMap;S)V", nullptr, $PUBLIC, $method(DTMNamedNodeMap$DTMException, init$, void, $DTMNamedNodeMap*, int16_t)},
	{}
};

$InnerClassInfo _DTMNamedNodeMap$DTMException_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMNamedNodeMap$DTMException", "com.sun.org.apache.xml.internal.dtm.ref.DTMNamedNodeMap", "DTMException", $PUBLIC},
	{}
};

$ClassInfo _DTMNamedNodeMap$DTMException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMNamedNodeMap$DTMException",
	"org.w3c.dom.DOMException",
	nullptr,
	_DTMNamedNodeMap$DTMException_FieldInfo_,
	_DTMNamedNodeMap$DTMException_MethodInfo_,
	nullptr,
	nullptr,
	_DTMNamedNodeMap$DTMException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMNamedNodeMap"
};

$Object* allocate$DTMNamedNodeMap$DTMException($Class* clazz) {
	return $of($alloc(DTMNamedNodeMap$DTMException));
}

void DTMNamedNodeMap$DTMException::init$($DTMNamedNodeMap* this$0, int16_t code, $String* message) {
	$set(this, this$0, this$0);
	$DOMException::init$(code, message);
}

void DTMNamedNodeMap$DTMException::init$($DTMNamedNodeMap* this$0, int16_t code) {
	$set(this, this$0, this$0);
	$DOMException::init$(code, ""_s);
}

DTMNamedNodeMap$DTMException::DTMNamedNodeMap$DTMException() {
}

DTMNamedNodeMap$DTMException::DTMNamedNodeMap$DTMException(const DTMNamedNodeMap$DTMException& e) : $DOMException(e) {
}

void DTMNamedNodeMap$DTMException::throw$() {
	throw *this;
}

$Class* DTMNamedNodeMap$DTMException::load$($String* name, bool initialize) {
	$loadClass(DTMNamedNodeMap$DTMException, name, initialize, &_DTMNamedNodeMap$DTMException_ClassInfo_, allocate$DTMNamedNodeMap$DTMException);
	return class$;
}

$Class* DTMNamedNodeMap$DTMException::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com