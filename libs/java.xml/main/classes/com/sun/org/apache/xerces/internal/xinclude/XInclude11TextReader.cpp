#include <com/sun/org/apache/xerces/internal/xinclude/XInclude11TextReader.h>

#include <com/sun/org/apache/xerces/internal/util/XML11Char.h>
#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeHandler.h>
#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeTextReader.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <jcpp.h>

using $XML11Char = ::com::sun::org::apache::xerces::internal::util::XML11Char;
using $XIncludeHandler = ::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler;
using $XIncludeTextReader = ::com::sun::org::apache::xerces::internal::xinclude::XIncludeTextReader;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xinclude {

$MethodInfo _XInclude11TextReader_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;Lcom/sun/org/apache/xerces/internal/xinclude/XIncludeHandler;I)V", nullptr, $PUBLIC, $method(XInclude11TextReader, init$, void, $XMLInputSource*, $XIncludeHandler*, int32_t), "java.io.IOException"},
	{"isValid", "(I)Z", nullptr, $PROTECTED, $virtualMethod(XInclude11TextReader, isValid, bool, int32_t)},
	{}
};

$ClassInfo _XInclude11TextReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xinclude.XInclude11TextReader",
	"com.sun.org.apache.xerces.internal.xinclude.XIncludeTextReader",
	nullptr,
	nullptr,
	_XInclude11TextReader_MethodInfo_
};

$Object* allocate$XInclude11TextReader($Class* clazz) {
	return $of($alloc(XInclude11TextReader));
}

void XInclude11TextReader::init$($XMLInputSource* source, $XIncludeHandler* handler, int32_t bufferSize) {
	$XIncludeTextReader::init$(source, handler, bufferSize);
}

bool XInclude11TextReader::isValid(int32_t ch) {
	return $XML11Char::isXML11Valid(ch);
}

XInclude11TextReader::XInclude11TextReader() {
}

$Class* XInclude11TextReader::load$($String* name, bool initialize) {
	$loadClass(XInclude11TextReader, name, initialize, &_XInclude11TextReader_ClassInfo_, allocate$XInclude11TextReader);
	return class$;
}

$Class* XInclude11TextReader::class$ = nullptr;

						} // xinclude
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com