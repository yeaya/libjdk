#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner.h>

#include <com/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <jcpp.h>

using $XMLLimitAnalyzer = ::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer;
using $XMLDTDSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

$MethodInfo _XMLDTDScanner_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"scanDTDExternalSubset", "(Z)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDScanner, scanDTDExternalSubset, bool, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanDTDInternalSubset", "(ZZZ)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDScanner, scanDTDInternalSubset, bool, bool, bool, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setInputSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDScanner, setInputSource, void, $XMLInputSource*), "java.io.IOException"},
	{"setLimitAnalyzer", "(Lcom/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDScanner, setLimitAnalyzer, void, $XMLLimitAnalyzer*)},
	{"skipDTD", "(Z)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDScanner, skipDTD, bool, bool), "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLDTDScanner_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLDTDScanner",
	nullptr,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLDTDSource,com.sun.org.apache.xerces.internal.xni.parser.XMLDTDContentModelSource",
	nullptr,
	_XMLDTDScanner_MethodInfo_
};

$Object* allocate$XMLDTDScanner($Class* clazz) {
	return $of($alloc(XMLDTDScanner));
}

int32_t XMLDTDScanner::hashCode() {
	 return this->$XMLDTDSource::hashCode();
}

bool XMLDTDScanner::equals(Object$* arg0) {
	 return this->$XMLDTDSource::equals(arg0);
}

$Object* XMLDTDScanner::clone() {
	 return this->$XMLDTDSource::clone();
}

$String* XMLDTDScanner::toString() {
	 return this->$XMLDTDSource::toString();
}

void XMLDTDScanner::finalize() {
	this->$XMLDTDSource::finalize();
}

$Class* XMLDTDScanner::load$($String* name, bool initialize) {
	$loadClass(XMLDTDScanner, name, initialize, &_XMLDTDScanner_ClassInfo_, allocate$XMLDTDScanner);
	return class$;
}

$Class* XMLDTDScanner::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com