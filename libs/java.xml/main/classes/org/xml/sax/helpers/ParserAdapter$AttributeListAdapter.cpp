#include <org/xml/sax/helpers/ParserAdapter$AttributeListAdapter.h>

#include <org/xml/sax/AttributeList.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <org/xml/sax/helpers/ParserAdapter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeList = ::org::xml::sax::AttributeList;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;
using $ParserAdapter = ::org::xml::sax::helpers::ParserAdapter;

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

$FieldInfo _ParserAdapter$AttributeListAdapter_FieldInfo_[] = {
	{"this$0", "Lorg/xml/sax/helpers/ParserAdapter;", nullptr, $FINAL | $SYNTHETIC, $field(ParserAdapter$AttributeListAdapter, this$0)},
	{"qAtts", "Lorg/xml/sax/AttributeList;", nullptr, $PRIVATE, $field(ParserAdapter$AttributeListAdapter, qAtts)},
	{}
};

$MethodInfo _ParserAdapter$AttributeListAdapter_MethodInfo_[] = {
	{"<init>", "(Lorg/xml/sax/helpers/ParserAdapter;)V", nullptr, 0, $method(ParserAdapter$AttributeListAdapter, init$, void, $ParserAdapter*)},
	{"getIndex", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(ParserAdapter$AttributeListAdapter, getIndex, int32_t, $String*, $String*)},
	{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(ParserAdapter$AttributeListAdapter, getIndex, int32_t, $String*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(ParserAdapter$AttributeListAdapter, getLength, int32_t)},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParserAdapter$AttributeListAdapter, getLocalName, $String*, int32_t)},
	{"getQName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParserAdapter$AttributeListAdapter, getQName, $String*, int32_t)},
	{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParserAdapter$AttributeListAdapter, getType, $String*, int32_t)},
	{"getType", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParserAdapter$AttributeListAdapter, getType, $String*, $String*, $String*)},
	{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParserAdapter$AttributeListAdapter, getType, $String*, $String*)},
	{"getURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParserAdapter$AttributeListAdapter, getURI, $String*, int32_t)},
	{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParserAdapter$AttributeListAdapter, getValue, $String*, int32_t)},
	{"getValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParserAdapter$AttributeListAdapter, getValue, $String*, $String*, $String*)},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParserAdapter$AttributeListAdapter, getValue, $String*, $String*)},
	{"setAttributeList", "(Lorg/xml/sax/AttributeList;)V", nullptr, 0, $method(ParserAdapter$AttributeListAdapter, setAttributeList, void, $AttributeList*)},
	{}
};

$InnerClassInfo _ParserAdapter$AttributeListAdapter_InnerClassesInfo_[] = {
	{"org.xml.sax.helpers.ParserAdapter$AttributeListAdapter", "org.xml.sax.helpers.ParserAdapter", "AttributeListAdapter", $FINAL},
	{}
};

$ClassInfo _ParserAdapter$AttributeListAdapter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.xml.sax.helpers.ParserAdapter$AttributeListAdapter",
	"java.lang.Object",
	"org.xml.sax.Attributes",
	_ParserAdapter$AttributeListAdapter_FieldInfo_,
	_ParserAdapter$AttributeListAdapter_MethodInfo_,
	nullptr,
	nullptr,
	_ParserAdapter$AttributeListAdapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.xml.sax.helpers.ParserAdapter"
};

$Object* allocate$ParserAdapter$AttributeListAdapter($Class* clazz) {
	return $of($alloc(ParserAdapter$AttributeListAdapter));
}

void ParserAdapter$AttributeListAdapter::init$($ParserAdapter* this$0) {
	$set(this, this$0, this$0);
}

void ParserAdapter$AttributeListAdapter::setAttributeList($AttributeList* qAtts) {
	$set(this, qAtts, qAtts);
}

int32_t ParserAdapter$AttributeListAdapter::getLength() {
	return $nc(this->qAtts)->getLength();
}

$String* ParserAdapter$AttributeListAdapter::getURI(int32_t i) {
	return ""_s;
}

$String* ParserAdapter$AttributeListAdapter::getLocalName(int32_t i) {
	return ""_s;
}

$String* ParserAdapter$AttributeListAdapter::getQName(int32_t i) {
	return $nc($($nc(this->qAtts)->getName(i)))->intern();
}

$String* ParserAdapter$AttributeListAdapter::getType(int32_t i) {
	return $nc($($nc(this->qAtts)->getType(i)))->intern();
}

$String* ParserAdapter$AttributeListAdapter::getValue(int32_t i) {
	return $nc(this->qAtts)->getValue(i);
}

int32_t ParserAdapter$AttributeListAdapter::getIndex($String* uri, $String* localName) {
	return -1;
}

int32_t ParserAdapter$AttributeListAdapter::getIndex($String* qName) {
	$useLocalCurrentObjectStackCache();
	int32_t max = $nc(this->this$0->atts)->getLength();
	for (int32_t i = 0; i < max; ++i) {
		if ($nc($($nc(this->qAtts)->getName(i)))->equals(qName)) {
			return i;
		}
	}
	return -1;
}

$String* ParserAdapter$AttributeListAdapter::getType($String* uri, $String* localName) {
	return nullptr;
}

$String* ParserAdapter$AttributeListAdapter::getType($String* qName) {
	return $nc($($nc(this->qAtts)->getType(qName)))->intern();
}

$String* ParserAdapter$AttributeListAdapter::getValue($String* uri, $String* localName) {
	return nullptr;
}

$String* ParserAdapter$AttributeListAdapter::getValue($String* qName) {
	return $nc(this->qAtts)->getValue(qName);
}

ParserAdapter$AttributeListAdapter::ParserAdapter$AttributeListAdapter() {
}

$Class* ParserAdapter$AttributeListAdapter::load$($String* name, bool initialize) {
	$loadClass(ParserAdapter$AttributeListAdapter, name, initialize, &_ParserAdapter$AttributeListAdapter_ClassInfo_, allocate$ParserAdapter$AttributeListAdapter);
	return class$;
}

$Class* ParserAdapter$AttributeListAdapter::class$ = nullptr;

			} // helpers
		} // sax
	} // xml
} // org