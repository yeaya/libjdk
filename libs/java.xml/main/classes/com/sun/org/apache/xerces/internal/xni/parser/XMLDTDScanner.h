#ifndef _com_sun_org_apache_xerces_internal_xni_parser_XMLDTDScanner_h_
#define _com_sun_org_apache_xerces_internal_xni_parser_XMLDTDScanner_h_
//$ interface com.sun.org.apache.xerces.internal.xni.parser.XMLDTDScanner
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLDTDSource,com.sun.org.apache.xerces.internal.xni.parser.XMLDTDContentModelSource

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace utils {
							class XMLLimitAnalyzer;
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {
								class XMLInputSource;
							}
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

class XMLDTDScanner : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource {
	$interface(XMLDTDScanner, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual bool scanDTDExternalSubset(bool complete) {return false;}
	virtual bool scanDTDInternalSubset(bool complete, bool standalone, bool hasExternalSubset) {return false;}
	virtual void setInputSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* inputSource) {}
	virtual void setLimitAnalyzer(::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer* limitAnalyzer) {}
	virtual bool skipDTD(bool supportDTD) {return false;}
	virtual $String* toString() override;
};

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_parser_XMLDTDScanner_h_