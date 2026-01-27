#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerWrapper$1.h>

#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerWrapper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _ErrorHandlerWrapper$1_FieldInfo_[] = {
	{"val$fLineNumber", "I", nullptr, $FINAL | $SYNTHETIC, $field(ErrorHandlerWrapper$1, val$fLineNumber)},
	{"val$fColumnNumber", "I", nullptr, $FINAL | $SYNTHETIC, $field(ErrorHandlerWrapper$1, val$fColumnNumber)},
	{"val$fExpandedSystemId", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ErrorHandlerWrapper$1, val$fExpandedSystemId)},
	{"val$fPublicId", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ErrorHandlerWrapper$1, val$fPublicId)},
	{}
};

$MethodInfo _ErrorHandlerWrapper$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;II)V", "()V", 0, $method(ErrorHandlerWrapper$1, init$, void, $String*, $String*, int32_t, int32_t)},
	{"getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerWrapper$1, getBaseSystemId, $String*)},
	{"getCharacterOffset", "()I", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerWrapper$1, getCharacterOffset, int32_t)},
	{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerWrapper$1, getColumnNumber, int32_t)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerWrapper$1, getEncoding, $String*)},
	{"getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerWrapper$1, getExpandedSystemId, $String*)},
	{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerWrapper$1, getLineNumber, int32_t)},
	{"getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerWrapper$1, getLiteralSystemId, $String*)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerWrapper$1, getPublicId, $String*)},
	{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerWrapper$1, getXMLVersion, $String*)},
	{}
};

$EnclosingMethodInfo _ErrorHandlerWrapper$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xerces.internal.util.ErrorHandlerWrapper",
	"createXMLParseException",
	"(Lorg/xml/sax/SAXParseException;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;"
};

$InnerClassInfo _ErrorHandlerWrapper$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.ErrorHandlerWrapper$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ErrorHandlerWrapper$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.ErrorHandlerWrapper$1",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.XMLLocator",
	_ErrorHandlerWrapper$1_FieldInfo_,
	_ErrorHandlerWrapper$1_MethodInfo_,
	nullptr,
	&_ErrorHandlerWrapper$1_EnclosingMethodInfo_,
	_ErrorHandlerWrapper$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.ErrorHandlerWrapper"
};

$Object* allocate$ErrorHandlerWrapper$1($Class* clazz) {
	return $of($alloc(ErrorHandlerWrapper$1));
}

void ErrorHandlerWrapper$1::init$($String* val$fPublicId, $String* val$fExpandedSystemId, int32_t val$fColumnNumber, int32_t val$fLineNumber) {
	$set(this, val$fPublicId, val$fPublicId);
	$set(this, val$fExpandedSystemId, val$fExpandedSystemId);
	this->val$fColumnNumber = val$fColumnNumber;
	this->val$fLineNumber = val$fLineNumber;
}

$String* ErrorHandlerWrapper$1::getPublicId() {
	return this->val$fPublicId;
}

$String* ErrorHandlerWrapper$1::getExpandedSystemId() {
	return this->val$fExpandedSystemId;
}

$String* ErrorHandlerWrapper$1::getBaseSystemId() {
	return nullptr;
}

$String* ErrorHandlerWrapper$1::getLiteralSystemId() {
	return nullptr;
}

int32_t ErrorHandlerWrapper$1::getColumnNumber() {
	return this->val$fColumnNumber;
}

int32_t ErrorHandlerWrapper$1::getLineNumber() {
	return this->val$fLineNumber;
}

int32_t ErrorHandlerWrapper$1::getCharacterOffset() {
	return -1;
}

$String* ErrorHandlerWrapper$1::getEncoding() {
	return nullptr;
}

$String* ErrorHandlerWrapper$1::getXMLVersion() {
	return nullptr;
}

ErrorHandlerWrapper$1::ErrorHandlerWrapper$1() {
}

$Class* ErrorHandlerWrapper$1::load$($String* name, bool initialize) {
	$loadClass(ErrorHandlerWrapper$1, name, initialize, &_ErrorHandlerWrapper$1_ClassInfo_, allocate$ErrorHandlerWrapper$1);
	return class$;
}

$Class* ErrorHandlerWrapper$1::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com