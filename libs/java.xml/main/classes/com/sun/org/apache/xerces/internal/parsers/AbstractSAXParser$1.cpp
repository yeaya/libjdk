#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser$1.h>

#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser.h>
#include <org/xml/sax/helpers/LocatorImpl.h>
#include <jcpp.h>

using $AbstractSAXParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocatorImpl = ::org::xml::sax::helpers::LocatorImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _AbstractSAXParser$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/parsers/AbstractSAXParser;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractSAXParser$1, this$0)},
	{}
};

$MethodInfo _AbstractSAXParser$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/parsers/AbstractSAXParser;)V", nullptr, 0, $method(AbstractSAXParser$1, init$, void, $AbstractSAXParser*)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$1, getEncoding, $String*)},
	{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$1, getXMLVersion, $String*)},
	{}
};

$EnclosingMethodInfo _AbstractSAXParser$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser",
	"parse",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _AbstractSAXParser$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractSAXParser$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$1",
	"org.xml.sax.helpers.LocatorImpl",
	nullptr,
	_AbstractSAXParser$1_FieldInfo_,
	_AbstractSAXParser$1_MethodInfo_,
	nullptr,
	&_AbstractSAXParser$1_EnclosingMethodInfo_,
	_AbstractSAXParser$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser"
};

$Object* allocate$AbstractSAXParser$1($Class* clazz) {
	return $of($alloc(AbstractSAXParser$1));
}

void AbstractSAXParser$1::init$($AbstractSAXParser* this$0) {
	$set(this, this$0, this$0);
	$LocatorImpl::init$();
}

$String* AbstractSAXParser$1::getXMLVersion() {
	return this->this$0->fVersion;
}

$String* AbstractSAXParser$1::getEncoding() {
	return nullptr;
}

AbstractSAXParser$1::AbstractSAXParser$1() {
}

$Class* AbstractSAXParser$1::load$($String* name, bool initialize) {
	$loadClass(AbstractSAXParser$1, name, initialize, &_AbstractSAXParser$1_ClassInfo_, allocate$AbstractSAXParser$1);
	return class$;
}

$Class* AbstractSAXParser$1::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com