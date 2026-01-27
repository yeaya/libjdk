#include <com/sun/org/apache/xml/internal/serializer/AttributesImplSerializer.h>

#include <java/lang/StringBuffer.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

#undef MAX

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Attributes = ::org::xml::sax::Attributes;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _AttributesImplSerializer_FieldInfo_[] = {
	{"m_indexFromQName", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $FINAL, $field(AttributesImplSerializer, m_indexFromQName)},
	{"m_buff", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE | $FINAL, $field(AttributesImplSerializer, m_buff)},
	{"MAX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributesImplSerializer, MAX)},
	{"MAXMinus1", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributesImplSerializer, MAXMinus1)},
	{}
};

$MethodInfo _AttributesImplSerializer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AttributesImplSerializer, init$, void)},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AttributesImplSerializer, addAttribute, void, $String*, $String*, $String*, $String*, $String*)},
	{"clear", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AttributesImplSerializer, clear, void)},
	{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(AttributesImplSerializer, getIndex, int32_t, $String*)},
	{"getIndex", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(AttributesImplSerializer, getIndex, int32_t, $String*, $String*)},
	{"setAttributes", "(Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AttributesImplSerializer, setAttributes, void, $Attributes*)},
	{"switchOverToHash", "(I)V", nullptr, $PRIVATE, $method(AttributesImplSerializer, switchOverToHash, void, int32_t)},
	{}
};

$ClassInfo _AttributesImplSerializer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.AttributesImplSerializer",
	"org.xml.sax.helpers.AttributesImpl",
	nullptr,
	_AttributesImplSerializer_FieldInfo_,
	_AttributesImplSerializer_MethodInfo_
};

$Object* allocate$AttributesImplSerializer($Class* clazz) {
	return $of($alloc(AttributesImplSerializer));
}

void AttributesImplSerializer::init$() {
	$AttributesImpl::init$();
	$set(this, m_indexFromQName, $new($HashMap));
	$set(this, m_buff, $new($StringBuffer));
}

int32_t AttributesImplSerializer::getIndex($String* qname) {
	int32_t index = 0;
	if ($AttributesImpl::getLength() < AttributesImplSerializer::MAX) {
		index = $AttributesImpl::getIndex(qname);
		return index;
	}
	$var($Integer, i, $cast($Integer, $nc(this->m_indexFromQName)->get(qname)));
	if (i == nullptr) {
		index = -1;
	} else {
		index = $nc(i)->intValue();
	}
	return index;
}

void AttributesImplSerializer::addAttribute($String* uri, $String* local, $String* qname, $String* type, $String* val) {
	$useLocalCurrentObjectStackCache();
	int32_t index = $AttributesImpl::getLength();
	$AttributesImpl::addAttribute(uri, local, qname, type, val);
	if (index < AttributesImplSerializer::MAXMinus1) {
		return;
	} else if (index == AttributesImplSerializer::MAXMinus1) {
		switchOverToHash(AttributesImplSerializer::MAX);
	} else {
		$var($Integer, i, $Integer::valueOf(index));
		$nc(this->m_indexFromQName)->put(qname, i);
		$nc(this->m_buff)->setLength(0);
		$nc(this->m_buff)->append(u'{')->append(uri)->append(u'}')->append(local);
		$var($String, key, $nc(this->m_buff)->toString());
		$nc(this->m_indexFromQName)->put(key, i);
	}
}

void AttributesImplSerializer::switchOverToHash(int32_t numAtts) {
	$useLocalCurrentObjectStackCache();
	for (int32_t index = 0; index < numAtts; ++index) {
		$var($String, qName, $AttributesImpl::getQName(index));
		$var($Integer, i, $Integer::valueOf(index));
		$nc(this->m_indexFromQName)->put(qName, i);
		$var($String, uri, $AttributesImpl::getURI(index));
		$var($String, local, $AttributesImpl::getLocalName(index));
		$nc(this->m_buff)->setLength(0);
		$nc(this->m_buff)->append(u'{')->append(uri)->append(u'}')->append(local);
		$var($String, key, $nc(this->m_buff)->toString());
		$nc(this->m_indexFromQName)->put(key, i);
	}
}

void AttributesImplSerializer::clear() {
	int32_t len = $AttributesImpl::getLength();
	$AttributesImpl::clear();
	if (AttributesImplSerializer::MAX <= len) {
		$nc(this->m_indexFromQName)->clear();
	}
}

void AttributesImplSerializer::setAttributes($Attributes* atts) {
	$AttributesImpl::setAttributes(atts);
	int32_t numAtts = $nc(atts)->getLength();
	if (AttributesImplSerializer::MAX <= numAtts) {
		switchOverToHash(numAtts);
	}
}

int32_t AttributesImplSerializer::getIndex($String* uri, $String* localName) {
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	if ($AttributesImpl::getLength() < AttributesImplSerializer::MAX) {
		index = $AttributesImpl::getIndex(uri, localName);
		return index;
	}
	$nc(this->m_buff)->setLength(0);
	$nc(this->m_buff)->append(u'{')->append(uri)->append(u'}')->append(localName);
	$var($String, key, $nc(this->m_buff)->toString());
	$var($Integer, i, $cast($Integer, $nc(this->m_indexFromQName)->get(key)));
	if (i == nullptr) {
		index = -1;
	} else {
		index = $nc(i)->intValue();
	}
	return index;
}

AttributesImplSerializer::AttributesImplSerializer() {
}

$Class* AttributesImplSerializer::load$($String* name, bool initialize) {
	$loadClass(AttributesImplSerializer, name, initialize, &_AttributesImplSerializer_ClassInfo_, allocate$AttributesImplSerializer);
	return class$;
}

$Class* AttributesImplSerializer::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com