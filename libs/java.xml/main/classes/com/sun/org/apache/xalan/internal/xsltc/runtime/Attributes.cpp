#include <com/sun/org/apache/xalan/internal/xsltc/runtime/Attributes.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <jcpp.h>

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

$FieldInfo _Attributes_FieldInfo_[] = {
	{"_element", "I", nullptr, $PRIVATE, $field(Attributes, _element)},
	{"_document", "Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PRIVATE, $field(Attributes, _document)},
	{}
};

$MethodInfo _Attributes_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;I)V", nullptr, $PUBLIC, $method(Attributes, init$, void, $DOM*, int32_t)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(Attributes, getLength, int32_t)},
	{"getName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Attributes, getName, $String*, int32_t)},
	{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Attributes, getType, $String*, int32_t)},
	{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Attributes, getType, $String*, $String*)},
	{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Attributes, getValue, $String*, int32_t)},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Attributes, getValue, $String*, $String*)},
	{}
};

$ClassInfo _Attributes_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.Attributes",
	"java.lang.Object",
	"org.xml.sax.AttributeList",
	_Attributes_FieldInfo_,
	_Attributes_MethodInfo_
};

$Object* allocate$Attributes($Class* clazz) {
	return $of($alloc(Attributes));
}

void Attributes::init$($DOM* document, int32_t element) {
	this->_element = element;
	$set(this, _document, document);
}

int32_t Attributes::getLength() {
	return 0;
}

$String* Attributes::getName(int32_t i) {
	return nullptr;
}

$String* Attributes::getType(int32_t i) {
	return nullptr;
}

$String* Attributes::getType($String* name) {
	return nullptr;
}

$String* Attributes::getValue(int32_t i) {
	return nullptr;
}

$String* Attributes::getValue($String* name) {
	return nullptr;
}

Attributes::Attributes() {
}

$Class* Attributes::load$($String* name, bool initialize) {
	$loadClass(Attributes, name, initialize, &_Attributes_ClassInfo_, allocate$Attributes);
	return class$;
}

$Class* Attributes::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com