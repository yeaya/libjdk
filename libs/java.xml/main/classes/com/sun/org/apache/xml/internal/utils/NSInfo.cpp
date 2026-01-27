#include <com/sun/org/apache/xml/internal/utils/NSInfo.h>

#include <jcpp.h>

#undef ANCESTORHASXMLNS
#undef ANCESTORNOXMLNS
#undef ANCESTORXMLNSUNPROCESSED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _NSInfo_FieldInfo_[] = {
	{"m_namespace", "Ljava/lang/String;", nullptr, $PUBLIC, $field(NSInfo, m_namespace)},
	{"m_hasXMLNSAttrs", "Z", nullptr, $PUBLIC, $field(NSInfo, m_hasXMLNSAttrs)},
	{"m_hasProcessedNS", "Z", nullptr, $PUBLIC, $field(NSInfo, m_hasProcessedNS)},
	{"m_ancestorHasXMLNSAttrs", "I", nullptr, $PUBLIC, $field(NSInfo, m_ancestorHasXMLNSAttrs)},
	{"ANCESTORXMLNSUNPROCESSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NSInfo, ANCESTORXMLNSUNPROCESSED)},
	{"ANCESTORHASXMLNS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NSInfo, ANCESTORHASXMLNS)},
	{"ANCESTORNOXMLNS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NSInfo, ANCESTORNOXMLNS)},
	{}
};

$MethodInfo _NSInfo_MethodInfo_[] = {
	{"<init>", "(ZZ)V", nullptr, $PUBLIC, $method(NSInfo, init$, void, bool, bool)},
	{"<init>", "(ZZI)V", nullptr, $PUBLIC, $method(NSInfo, init$, void, bool, bool, int32_t)},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(NSInfo, init$, void, $String*, bool)},
	{}
};

$ClassInfo _NSInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.NSInfo",
	"java.lang.Object",
	nullptr,
	_NSInfo_FieldInfo_,
	_NSInfo_MethodInfo_
};

$Object* allocate$NSInfo($Class* clazz) {
	return $of($alloc(NSInfo));
}

void NSInfo::init$(bool hasProcessedNS, bool hasXMLNSAttrs) {
	this->m_hasProcessedNS = hasProcessedNS;
	this->m_hasXMLNSAttrs = hasXMLNSAttrs;
	$set(this, m_namespace, nullptr);
	this->m_ancestorHasXMLNSAttrs = NSInfo::ANCESTORXMLNSUNPROCESSED;
}

void NSInfo::init$(bool hasProcessedNS, bool hasXMLNSAttrs, int32_t ancestorHasXMLNSAttrs) {
	this->m_hasProcessedNS = hasProcessedNS;
	this->m_hasXMLNSAttrs = hasXMLNSAttrs;
	this->m_ancestorHasXMLNSAttrs = ancestorHasXMLNSAttrs;
	$set(this, m_namespace, nullptr);
}

void NSInfo::init$($String* namespace$, bool hasXMLNSAttrs) {
	this->m_hasProcessedNS = true;
	this->m_hasXMLNSAttrs = hasXMLNSAttrs;
	$set(this, m_namespace, namespace$);
	this->m_ancestorHasXMLNSAttrs = NSInfo::ANCESTORXMLNSUNPROCESSED;
}

NSInfo::NSInfo() {
}

$Class* NSInfo::load$($String* name, bool initialize) {
	$loadClass(NSInfo, name, initialize, &_NSInfo_ClassInfo_, allocate$NSInfo);
	return class$;
}

$Class* NSInfo::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com