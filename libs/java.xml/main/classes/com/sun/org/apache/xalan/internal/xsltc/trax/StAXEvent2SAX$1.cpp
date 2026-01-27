#include <com/sun/org/apache/xalan/internal/xsltc/trax/StAXEvent2SAX$1.h>

#include <com/sun/org/apache/xalan/internal/xsltc/trax/StAXEvent2SAX.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

using $StAXEvent2SAX = ::com::sun::org::apache::xalan::internal::xsltc::trax::StAXEvent2SAX;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Location = ::javax::xml::stream::Location;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _StAXEvent2SAX$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/trax/StAXEvent2SAX;", nullptr, $FINAL | $SYNTHETIC, $field(StAXEvent2SAX$1, this$0)},
	{"val$event", "Ljavax/xml/stream/events/XMLEvent;", nullptr, $FINAL | $SYNTHETIC, $field(StAXEvent2SAX$1, val$event)},
	{}
};

$MethodInfo _StAXEvent2SAX$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/trax/StAXEvent2SAX;Ljavax/xml/stream/events/XMLEvent;)V", "()V", 0, $method(StAXEvent2SAX$1, init$, void, $StAXEvent2SAX*, $XMLEvent*)},
	{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX$1, getColumnNumber, int32_t)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX$1, getEncoding, $String*)},
	{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX$1, getLineNumber, int32_t)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX$1, getPublicId, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX$1, getSystemId, $String*)},
	{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StAXEvent2SAX$1, getXMLVersion, $String*)},
	{}
};

$EnclosingMethodInfo _StAXEvent2SAX$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xalan.internal.xsltc.trax.StAXEvent2SAX",
	"handleStartDocument",
	"(Ljavax/xml/stream/events/XMLEvent;)V"
};

$InnerClassInfo _StAXEvent2SAX$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.trax.StAXEvent2SAX$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StAXEvent2SAX$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.StAXEvent2SAX$1",
	"java.lang.Object",
	"org.xml.sax.ext.Locator2",
	_StAXEvent2SAX$1_FieldInfo_,
	_StAXEvent2SAX$1_MethodInfo_,
	nullptr,
	&_StAXEvent2SAX$1_EnclosingMethodInfo_,
	_StAXEvent2SAX$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.trax.StAXEvent2SAX"
};

$Object* allocate$StAXEvent2SAX$1($Class* clazz) {
	return $of($alloc(StAXEvent2SAX$1));
}

void StAXEvent2SAX$1::init$($StAXEvent2SAX* this$0, $XMLEvent* val$event) {
	$set(this, this$0, this$0);
	$set(this, val$event, val$event);
}

int32_t StAXEvent2SAX$1::getColumnNumber() {
	return $nc($($nc(this->val$event)->getLocation()))->getColumnNumber();
}

int32_t StAXEvent2SAX$1::getLineNumber() {
	return $nc($($nc(this->val$event)->getLocation()))->getLineNumber();
}

$String* StAXEvent2SAX$1::getPublicId() {
	return $nc($($nc(this->val$event)->getLocation()))->getPublicId();
}

$String* StAXEvent2SAX$1::getSystemId() {
	return $nc($($nc(this->val$event)->getLocation()))->getSystemId();
}

$String* StAXEvent2SAX$1::getXMLVersion() {
	return this->this$0->version;
}

$String* StAXEvent2SAX$1::getEncoding() {
	return this->this$0->encoding;
}

StAXEvent2SAX$1::StAXEvent2SAX$1() {
}

$Class* StAXEvent2SAX$1::load$($String* name, bool initialize) {
	$loadClass(StAXEvent2SAX$1, name, initialize, &_StAXEvent2SAX$1_ClassInfo_, allocate$StAXEvent2SAX$1);
	return class$;
}

$Class* StAXEvent2SAX$1::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com