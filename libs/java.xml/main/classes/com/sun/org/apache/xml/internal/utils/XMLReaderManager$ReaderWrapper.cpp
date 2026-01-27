#include <com/sun/org/apache/xml/internal/utils/XMLReaderManager$ReaderWrapper.h>

#include <com/sun/org/apache/xml/internal/utils/XMLReaderManager.h>
#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

using $XMLReaderManager = ::com::sun::org::apache::xml::internal::utils::XMLReaderManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLReader = ::org::xml::sax::XMLReader;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _XMLReaderManager$ReaderWrapper_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/utils/XMLReaderManager;", nullptr, $FINAL | $SYNTHETIC, $field(XMLReaderManager$ReaderWrapper, this$0)},
	{"reader", "Lorg/xml/sax/XMLReader;", nullptr, 0, $field(XMLReaderManager$ReaderWrapper, reader)},
	{"overrideDefaultParser", "Z", nullptr, 0, $field(XMLReaderManager$ReaderWrapper, overrideDefaultParser)},
	{}
};

$MethodInfo _XMLReaderManager$ReaderWrapper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/XMLReaderManager;Lorg/xml/sax/XMLReader;Z)V", nullptr, $PUBLIC, $method(XMLReaderManager$ReaderWrapper, init$, void, $XMLReaderManager*, $XMLReader*, bool)},
	{}
};

$InnerClassInfo _XMLReaderManager$ReaderWrapper_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.utils.XMLReaderManager$ReaderWrapper", "com.sun.org.apache.xml.internal.utils.XMLReaderManager", "ReaderWrapper", 0},
	{}
};

$ClassInfo _XMLReaderManager$ReaderWrapper_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.XMLReaderManager$ReaderWrapper",
	"java.lang.Object",
	nullptr,
	_XMLReaderManager$ReaderWrapper_FieldInfo_,
	_XMLReaderManager$ReaderWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_XMLReaderManager$ReaderWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.utils.XMLReaderManager"
};

$Object* allocate$XMLReaderManager$ReaderWrapper($Class* clazz) {
	return $of($alloc(XMLReaderManager$ReaderWrapper));
}

void XMLReaderManager$ReaderWrapper::init$($XMLReaderManager* this$0, $XMLReader* reader, bool overrideDefaultParser) {
	$set(this, this$0, this$0);
	$set(this, reader, reader);
	this->overrideDefaultParser = overrideDefaultParser;
}

XMLReaderManager$ReaderWrapper::XMLReaderManager$ReaderWrapper() {
}

$Class* XMLReaderManager$ReaderWrapper::load$($String* name, bool initialize) {
	$loadClass(XMLReaderManager$ReaderWrapper, name, initialize, &_XMLReaderManager$ReaderWrapper_ClassInfo_, allocate$XMLReaderManager$ReaderWrapper);
	return class$;
}

$Class* XMLReaderManager$ReaderWrapper::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com