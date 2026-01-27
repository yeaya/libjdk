#include <com/sun/org/apache/xml/internal/utils/MutableAttrListImpl.h>

#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::org::xml::sax::Attributes;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _MutableAttrListImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(MutableAttrListImpl, serialVersionUID)},
	{}
};

$MethodInfo _MutableAttrListImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(MutableAttrListImpl, init$, void)},
	{"<init>", "(Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $method(MutableAttrListImpl, init$, void, $Attributes*)},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MutableAttrListImpl, addAttribute, void, $String*, $String*, $String*, $String*, $String*)},
	{"addAttributes", "(Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(MutableAttrListImpl, addAttributes, void, $Attributes*)},
	{"contains", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(MutableAttrListImpl, contains, bool, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MutableAttrListImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.MutableAttrListImpl",
	"org.xml.sax.helpers.AttributesImpl",
	"java.io.Serializable",
	_MutableAttrListImpl_FieldInfo_,
	_MutableAttrListImpl_MethodInfo_
};

$Object* allocate$MutableAttrListImpl($Class* clazz) {
	return $of($alloc(MutableAttrListImpl));
}

int32_t MutableAttrListImpl::hashCode() {
	 return this->$AttributesImpl::hashCode();
}

bool MutableAttrListImpl::equals(Object$* arg0) {
	 return this->$AttributesImpl::equals(arg0);
}

$Object* MutableAttrListImpl::clone() {
	 return this->$AttributesImpl::clone();
}

$String* MutableAttrListImpl::toString() {
	 return this->$AttributesImpl::toString();
}

void MutableAttrListImpl::finalize() {
	this->$AttributesImpl::finalize();
}

void MutableAttrListImpl::init$() {
	$AttributesImpl::init$();
}

void MutableAttrListImpl::init$($Attributes* atts) {
	$AttributesImpl::init$(atts);
}

void MutableAttrListImpl::addAttribute($String* uri$renamed, $String* localName, $String* qName, $String* type, $String* value) {
	$var($String, uri, uri$renamed);
	if (nullptr == uri) {
		$assign(uri, ""_s);
	}
	int32_t index = this->getIndex(qName);
	if (index >= 0) {
		this->setAttribute(index, uri, localName, qName, type, value);
	} else {
		$AttributesImpl::addAttribute(uri, localName, qName, type, value);
	}
}

void MutableAttrListImpl::addAttributes($Attributes* atts) {
	$useLocalCurrentObjectStackCache();
	int32_t nAtts = $nc(atts)->getLength();
	for (int32_t i = 0; i < nAtts; ++i) {
		$var($String, uri, atts->getURI(i));
		if (nullptr == uri) {
			$assign(uri, ""_s);
		}
		$var($String, localName, atts->getLocalName(i));
		$var($String, qname, atts->getQName(i));
		int32_t index = this->getIndex(uri, localName);
		if (index >= 0) {
			int32_t var$0 = index;
			$var($String, var$1, uri);
			$var($String, var$2, localName);
			$var($String, var$3, qname);
			$var($String, var$4, atts->getType(i));
			this->setAttribute(var$0, var$1, var$2, var$3, var$4, $(atts->getValue(i)));
		} else {
			$var($String, var$5, uri);
			$var($String, var$6, localName);
			$var($String, var$7, qname);
			$var($String, var$8, atts->getType(i));
			addAttribute(var$5, var$6, var$7, var$8, $(atts->getValue(i)));
		}
	}
}

bool MutableAttrListImpl::contains($String* name) {
	return getValue(name) != nullptr;
}

MutableAttrListImpl::MutableAttrListImpl() {
}

$Class* MutableAttrListImpl::load$($String* name, bool initialize) {
	$loadClass(MutableAttrListImpl, name, initialize, &_MutableAttrListImpl_ClassInfo_, allocate$MutableAttrListImpl);
	return class$;
}

$Class* MutableAttrListImpl::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com