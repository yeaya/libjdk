#include <com/sun/org/apache/xml/internal/serializer/ElemContext.h>

#include <com/sun/org/apache/xml/internal/serializer/ElemDesc.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _ElemContext_FieldInfo_[] = {
	{"m_currentElemDepth", "I", nullptr, $FINAL, $field(ElemContext, m_currentElemDepth)},
	{"m_elementDesc", "Lcom/sun/org/apache/xml/internal/serializer/ElemDesc;", nullptr, 0, $field(ElemContext, m_elementDesc)},
	{"m_elementLocalName", "Ljava/lang/String;", nullptr, 0, $field(ElemContext, m_elementLocalName)},
	{"m_elementName", "Ljava/lang/String;", nullptr, 0, $field(ElemContext, m_elementName)},
	{"m_elementURI", "Ljava/lang/String;", nullptr, 0, $field(ElemContext, m_elementURI)},
	{"m_isCdataSection", "Z", nullptr, 0, $field(ElemContext, m_isCdataSection)},
	{"m_isRaw", "Z", nullptr, 0, $field(ElemContext, m_isRaw)},
	{"m_next", "Lcom/sun/org/apache/xml/internal/serializer/ElemContext;", nullptr, $PRIVATE, $field(ElemContext, m_next)},
	{"m_prev", "Lcom/sun/org/apache/xml/internal/serializer/ElemContext;", nullptr, $FINAL, $field(ElemContext, m_prev)},
	{"m_startTagOpen", "Z", nullptr, 0, $field(ElemContext, m_startTagOpen)},
	{}
};

$MethodInfo _ElemContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ElemContext, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serializer/ElemContext;)V", nullptr, $PRIVATE, $method(ElemContext, init$, void, ElemContext*)},
	{"pop", "()Lcom/sun/org/apache/xml/internal/serializer/ElemContext;", nullptr, $FINAL, $method(ElemContext, pop, ElemContext*)},
	{"push", "()Lcom/sun/org/apache/xml/internal/serializer/ElemContext;", nullptr, $FINAL, $method(ElemContext, push, ElemContext*)},
	{"push", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/serializer/ElemContext;", nullptr, $FINAL, $method(ElemContext, push, ElemContext*, $String*, $String*, $String*)},
	{}
};

$ClassInfo _ElemContext_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.ElemContext",
	"java.lang.Object",
	nullptr,
	_ElemContext_FieldInfo_,
	_ElemContext_MethodInfo_
};

$Object* allocate$ElemContext($Class* clazz) {
	return $of($alloc(ElemContext));
}

void ElemContext::init$() {
	$set(this, m_elementDesc, nullptr);
	$set(this, m_elementLocalName, nullptr);
	$set(this, m_elementName, nullptr);
	$set(this, m_elementURI, nullptr);
	this->m_isRaw = false;
	this->m_startTagOpen = false;
	$set(this, m_prev, this);
	this->m_currentElemDepth = 0;
}

void ElemContext::init$(ElemContext* previous) {
	$set(this, m_elementDesc, nullptr);
	$set(this, m_elementLocalName, nullptr);
	$set(this, m_elementName, nullptr);
	$set(this, m_elementURI, nullptr);
	this->m_isRaw = false;
	this->m_startTagOpen = false;
	$set(this, m_prev, previous);
	this->m_currentElemDepth = $nc(previous)->m_currentElemDepth + 1;
}

ElemContext* ElemContext::pop() {
	return this->m_prev;
}

ElemContext* ElemContext::push() {
	$var(ElemContext, frame, this->m_next);
	if (frame == nullptr) {
		$assign(frame, $new(ElemContext, this));
		$set(this, m_next, frame);
	}
	$nc(frame)->m_startTagOpen = true;
	return frame;
}

ElemContext* ElemContext::push($String* uri, $String* localName, $String* qName) {
	$var(ElemContext, frame, this->m_next);
	if (frame == nullptr) {
		$assign(frame, $new(ElemContext, this));
		$set(this, m_next, frame);
	}
	$set($nc(frame), m_elementName, qName);
	$set(frame, m_elementLocalName, localName);
	$set(frame, m_elementURI, uri);
	frame->m_isCdataSection = false;
	frame->m_startTagOpen = true;
	return frame;
}

ElemContext::ElemContext() {
}

$Class* ElemContext::load$($String* name, bool initialize) {
	$loadClass(ElemContext, name, initialize, &_ElemContext_ClassInfo_, allocate$ElemContext);
	return class$;
}

$Class* ElemContext::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com