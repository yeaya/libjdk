#include <org/xml/sax/helpers/XMLReaderAdapter$AttributesAdapter.h>

#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/helpers/XMLReaderAdapter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::org::xml::sax::Attributes;
using $XMLReaderAdapter = ::org::xml::sax::helpers::XMLReaderAdapter;

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

$FieldInfo _XMLReaderAdapter$AttributesAdapter_FieldInfo_[] = {
	{"this$0", "Lorg/xml/sax/helpers/XMLReaderAdapter;", nullptr, $FINAL | $SYNTHETIC, $field(XMLReaderAdapter$AttributesAdapter, this$0)},
	{"attributes", "Lorg/xml/sax/Attributes;", nullptr, $PRIVATE, $field(XMLReaderAdapter$AttributesAdapter, attributes)},
	{}
};

$MethodInfo _XMLReaderAdapter$AttributesAdapter_MethodInfo_[] = {
	{"<init>", "(Lorg/xml/sax/helpers/XMLReaderAdapter;)V", nullptr, 0, $method(XMLReaderAdapter$AttributesAdapter, init$, void, $XMLReaderAdapter*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter$AttributesAdapter, getLength, int32_t)},
	{"getName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter$AttributesAdapter, getName, $String*, int32_t)},
	{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter$AttributesAdapter, getType, $String*, int32_t)},
	{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter$AttributesAdapter, getType, $String*, $String*)},
	{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter$AttributesAdapter, getValue, $String*, int32_t)},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLReaderAdapter$AttributesAdapter, getValue, $String*, $String*)},
	{"setAttributes", "(Lorg/xml/sax/Attributes;)V", nullptr, 0, $method(XMLReaderAdapter$AttributesAdapter, setAttributes, void, $Attributes*)},
	{}
};

$InnerClassInfo _XMLReaderAdapter$AttributesAdapter_InnerClassesInfo_[] = {
	{"org.xml.sax.helpers.XMLReaderAdapter$AttributesAdapter", "org.xml.sax.helpers.XMLReaderAdapter", "AttributesAdapter", $FINAL},
	{}
};

$ClassInfo _XMLReaderAdapter$AttributesAdapter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.xml.sax.helpers.XMLReaderAdapter$AttributesAdapter",
	"java.lang.Object",
	"org.xml.sax.AttributeList",
	_XMLReaderAdapter$AttributesAdapter_FieldInfo_,
	_XMLReaderAdapter$AttributesAdapter_MethodInfo_,
	nullptr,
	nullptr,
	_XMLReaderAdapter$AttributesAdapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.xml.sax.helpers.XMLReaderAdapter"
};

$Object* allocate$XMLReaderAdapter$AttributesAdapter($Class* clazz) {
	return $of($alloc(XMLReaderAdapter$AttributesAdapter));
}

void XMLReaderAdapter$AttributesAdapter::init$($XMLReaderAdapter* this$0) {
	$set(this, this$0, this$0);
}

void XMLReaderAdapter$AttributesAdapter::setAttributes($Attributes* attributes) {
	$set(this, attributes, attributes);
}

int32_t XMLReaderAdapter$AttributesAdapter::getLength() {
	return $nc(this->attributes)->getLength();
}

$String* XMLReaderAdapter$AttributesAdapter::getName(int32_t i) {
	return $nc(this->attributes)->getQName(i);
}

$String* XMLReaderAdapter$AttributesAdapter::getType(int32_t i) {
	return $nc(this->attributes)->getType(i);
}

$String* XMLReaderAdapter$AttributesAdapter::getValue(int32_t i) {
	return $nc(this->attributes)->getValue(i);
}

$String* XMLReaderAdapter$AttributesAdapter::getType($String* qName) {
	return $nc(this->attributes)->getType(qName);
}

$String* XMLReaderAdapter$AttributesAdapter::getValue($String* qName) {
	return $nc(this->attributes)->getValue(qName);
}

XMLReaderAdapter$AttributesAdapter::XMLReaderAdapter$AttributesAdapter() {
}

$Class* XMLReaderAdapter$AttributesAdapter::load$($String* name, bool initialize) {
	$loadClass(XMLReaderAdapter$AttributesAdapter, name, initialize, &_XMLReaderAdapter$AttributesAdapter_ClassInfo_, allocate$XMLReaderAdapter$AttributesAdapter);
	return class$;
}

$Class* XMLReaderAdapter$AttributesAdapter::class$ = nullptr;

			} // helpers
		} // sax
	} // xml
} // org